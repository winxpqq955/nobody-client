#pragma once
#include "../../../util/math/geometry.h"
#include "../../../eventManager/events/EventUpdate.hpp"
#include "../../AbstractModule.h"


#include <string>
#include <vector>


class TriggerBot :public AbstractModule {
public:
	static TriggerBot* getInstance();
	void onEnable();
	void onDisable();
	void onUpdate(const EventUpdate e);
	void RenderMenu();
	FloatValue* leftMaxCpsValue = new FloatValue("Max CPS", 14, 0, 20);
	FloatValue* leftMinCpsValue = new FloatValue("Min CPS", 8, 0, 20);
private:
	TriggerBot();
};