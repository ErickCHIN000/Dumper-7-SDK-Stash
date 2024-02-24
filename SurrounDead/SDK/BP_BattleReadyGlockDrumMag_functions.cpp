#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BattleReadyGlockDrumMag.BP_BattleReadyGlockDrumMag_C
// (Actor)

class UClass* ABP_BattleReadyGlockDrumMag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BattleReadyGlockDrumMag_C");

	return Clss;
}


// BP_BattleReadyGlockDrumMag_C BP_BattleReadyGlockDrumMag.Default__BP_BattleReadyGlockDrumMag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BattleReadyGlockDrumMag_C* ABP_BattleReadyGlockDrumMag_C::GetDefaultObj()
{
	static class ABP_BattleReadyGlockDrumMag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BattleReadyGlockDrumMag_C*>(ABP_BattleReadyGlockDrumMag_C::StaticClass()->DefaultObject);

	return Default;
}

}


