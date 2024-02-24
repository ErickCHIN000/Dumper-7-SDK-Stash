#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LocalBattleReadyGlockRedDot.BP_LocalBattleReadyGlockRedDot_C
// (Actor)

class UClass* ABP_LocalBattleReadyGlockRedDot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LocalBattleReadyGlockRedDot_C");

	return Clss;
}


// BP_LocalBattleReadyGlockRedDot_C BP_LocalBattleReadyGlockRedDot.Default__BP_LocalBattleReadyGlockRedDot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LocalBattleReadyGlockRedDot_C* ABP_LocalBattleReadyGlockRedDot_C::GetDefaultObj()
{
	static class ABP_LocalBattleReadyGlockRedDot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LocalBattleReadyGlockRedDot_C*>(ABP_LocalBattleReadyGlockRedDot_C::StaticClass()->DefaultObject);

	return Default;
}

}


