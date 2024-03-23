#pragma once

#include "net/minecraft/client/Minecraft.h"
#include <map>
#include <memory>


class SDK
{
public:
	static SDK* GetInstance() {
		static auto shared = std::make_unique<SDK>();
		return shared.get();
		  
	}
	CMinecraft* Minecraft;
	void Init();
	void Clean();
};
#define SDKInstance SDK::GetInstance()
