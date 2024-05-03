#include "TriggerBot.h"
#include "../../commonData.h"
#include "../../../menu/menu.h"
#include "../../../util/math/math.h"
#include <chrono>
#include <random>
long lastClickTime = 0;
int nextCps = 10;
int count = 0;

TriggerBot::TriggerBot() : AbstractModule("TriggerBot", Category::COMBAT, "TriggerBot.") {
	this->addValue(FloatType, leftMinCpsValue);
	this->addValue(FloatType, leftMaxCpsValue);
	EventManager::getInstance().reg<EventUpdate>([this](auto&& PH1) { onUpdate(std::forward<decltype(PH1)>(PH1)); });
}

TriggerBot* TriggerBot::getInstance() {
	static auto* inst = new TriggerBot();
	return inst;
}

void TriggerBot::onUpdate(const EventUpdate e)
{
	if (!this->getToggle()) return;
	if (Menu::Open) return;
	if (!CommonData::getInstance()->SanityCheck()) return;
	if (SDK::Minecraft->IsInGuiState()) return;
	CMovingObjectPosition hitResult = SDK::Minecraft->GetMouseOver();
	if (hitResult.isValid() && hitResult.IsTypeOfEntity()) {
		long milli = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count();
		if (lastClickTime == 0) lastClickTime = milli;
		if ((milli - lastClickTime) < (1000 / nextCps)) return;
		POINT pos_cursor;
		GetCursorPos(&pos_cursor);
		PostMessageA(Menu::HandleWindow, WM_LBUTTONDOWN, MK_LBUTTON, MAKELPARAM(pos_cursor.x, pos_cursor.y));
		PostMessageA(Menu::HandleWindow, WM_LBUTTONUP, MK_LBUTTON, MAKELPARAM(pos_cursor.x, pos_cursor.y));

		lastClickTime = milli;

		std::random_device rd;
		std::mt19937 gen(rd());
		std::uniform_int_distribution<> distrib((*leftMinCpsValue->getValuePtr()), (*leftMaxCpsValue->getValuePtr()));
		nextCps = distrib(gen);
	}

}
void TriggerBot::onDisable() {
}

void TriggerBot::onEnable() {
}

void TriggerBot::RenderMenu()
{


	ImGui::BeginChild("TriggerBot", ImVec2(320, 426), true);
	{
		ImGui::SetCursorPosY(ImGui::GetCursorPosY() + 3);
		Menu::DoToggleButtonStuff(233233, "Toggle TriggerBot", this);
		Menu::DoSliderStuff(3280, "Min CPS", this->leftMinCpsValue->getValuePtr(), 1, 20);
		Menu::DoSliderStuff(675, "Max CPS", this->leftMaxCpsValue->getValuePtr(), 1, 20);

	}
	ImGui::EndChild();

	ImGui::SameLine(0, 20);

	ImGui::BeginChild("TriggerBot2", ImVec2(320, 426), true);
	{
		int mode{};
		ImGui::Keybind("Click To Bind", image::keybind, &this->getKey(), &mode);
	}
	ImGui::EndChild();


}
