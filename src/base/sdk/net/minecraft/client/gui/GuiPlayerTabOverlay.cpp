#include "GuiPlayerTabOverlay.h"

String CGuiPlayerTabOverlay::getPlayName(CNetworkPlayerInfo info, JNIEnv* env) {
	if (!(this->check() || info.check()))
	{
		return String();
	}
	return String(env->CallObjectMethod(this->getInstance(), StrayCache::guiPlayerTabOverlay_getPlayerName, info.getInstance()));
}