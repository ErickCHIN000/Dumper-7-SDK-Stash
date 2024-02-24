#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BattleReadyGlockClip.BP_BattleReadyGlockClip_C
// (Actor)

class UClass* ABP_BattleReadyGlockClip_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BattleReadyGlockClip_C");

	return Clss;
}


// BP_BattleReadyGlockClip_C BP_BattleReadyGlockClip.Default__BP_BattleReadyGlockClip_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BattleReadyGlockClip_C* ABP_BattleReadyGlockClip_C::GetDefaultObj()
{
	static class ABP_BattleReadyGlockClip_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BattleReadyGlockClip_C*>(ABP_BattleReadyGlockClip_C::StaticClass()->DefaultObject);

	return Default;
}

}


