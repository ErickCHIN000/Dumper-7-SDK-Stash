#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LocalBattleReadyGlockCompensator.BP_LocalBattleReadyGlockCompensator_C
// (Actor)

class UClass* ABP_LocalBattleReadyGlockCompensator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LocalBattleReadyGlockCompensator_C");

	return Clss;
}


// BP_LocalBattleReadyGlockCompensator_C BP_LocalBattleReadyGlockCompensator.Default__BP_LocalBattleReadyGlockCompensator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LocalBattleReadyGlockCompensator_C* ABP_LocalBattleReadyGlockCompensator_C::GetDefaultObj()
{
	static class ABP_LocalBattleReadyGlockCompensator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LocalBattleReadyGlockCompensator_C*>(ABP_LocalBattleReadyGlockCompensator_C::StaticClass()->DefaultObject);

	return Default;
}

}


