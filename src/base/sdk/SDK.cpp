#include "sdk.h"
#include "../util/logger.h"
#include "../java/java.h"
#include "strayCache.h"
#include "Object.h"

void SDK::Init()
{
	StrayCache::Initialize();
	SDK::Minecraft = new CMinecraft(Java::Env->CallStaticObjectMethod(StrayCache::minecraft_class, StrayCache::minecraft_getMinecraft));
	SDK::Minecraft->activeRenderInfo = new CActiveRenderInfo();
	SDK::Minecraft->theWorld = new CWorldClient(Java::Env->GetObjectField(SDK::Minecraft->getInstance(), StrayCache::minecraft_theWorld));
	SDK::Minecraft->thePlayer = new CEntityPlayerSP(Java::Env->GetObjectField(SDK::Minecraft->getInstance(), StrayCache::minecraft_thePlayer));

	if (Base::version == FORGE_1_7_10)
	{
		SDK::Minecraft->renderManager = new CRenderManager(Java::Env->GetStaticObjectField(StrayCache::renderManager_class, StrayCache::renderManager_Instance));
	}
	else if (Base::version != FORGE_1_18_1)
	{
		SDK::Minecraft->renderManager = new CRenderManager(Java::Env->GetObjectField(SDK::Minecraft->getInstance(), StrayCache::minecraft_renderManager));
	}
	SDK::Minecraft->gameSettings = new CGameSettings(Java::Env->GetObjectField(Minecraft->getInstance(), StrayCache::minecraft_gameSettings));
	////SDK::Minecraft->ingameGUI = new CGuiIngame(Java::Env->GetObjectField(Minecraft->getInstance(), StrayCache::minecraft_ingameGUI));
	SDK::Minecraft->timer = new CTimer(Java::Env->GetObjectField(Minecraft->getInstance(), StrayCache::minecraft_timer));
}

void SDK::Clean()
{

	delete Minecraft->thePlayer;
	delete Minecraft->gameSettings;
	delete Minecraft->timer;
	if (Base::version != FORGE_1_18_1)
	{
		delete Minecraft->renderManager;
	}
	delete Minecraft->theWorld;
	delete Minecraft->activeRenderInfo;
	delete Minecraft;
}