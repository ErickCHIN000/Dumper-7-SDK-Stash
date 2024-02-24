#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BattleReadyGlockCompensator.BP_BattleReadyGlockCompensator_C
// (Actor)

class UClass* ABP_BattleReadyGlockCompensator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BattleReadyGlockCompensator_C");

	return Clss;
}


// BP_BattleReadyGlockCompensator_C BP_BattleReadyGlockCompensator.Default__BP_BattleReadyGlockCompensator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BattleReadyGlockCompensator_C* ABP_BattleReadyGlockCompensator_C::GetDefaultObj()
{
	static class ABP_BattleReadyGlockCompensator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BattleReadyGlockCompensator_C*>(ABP_BattleReadyGlockCompensator_C::StaticClass()->DefaultObject);

	return Default;
}

}


