#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LocalBattleReadyGlockDrumMag.BP_LocalBattleReadyGlockDrumMag_C
// (Actor)

class UClass* ABP_LocalBattleReadyGlockDrumMag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LocalBattleReadyGlockDrumMag_C");

	return Clss;
}


// BP_LocalBattleReadyGlockDrumMag_C BP_LocalBattleReadyGlockDrumMag.Default__BP_LocalBattleReadyGlockDrumMag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LocalBattleReadyGlockDrumMag_C* ABP_LocalBattleReadyGlockDrumMag_C::GetDefaultObj()
{
	static class ABP_LocalBattleReadyGlockDrumMag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LocalBattleReadyGlockDrumMag_C*>(ABP_LocalBattleReadyGlockDrumMag_C::StaticClass()->DefaultObject);

	return Default;
}

}


