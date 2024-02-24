#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BattleReadyGlockRedDot.BP_BattleReadyGlockRedDot_C
// (Actor)

class UClass* ABP_BattleReadyGlockRedDot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BattleReadyGlockRedDot_C");

	return Clss;
}


// BP_BattleReadyGlockRedDot_C BP_BattleReadyGlockRedDot.Default__BP_BattleReadyGlockRedDot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BattleReadyGlockRedDot_C* ABP_BattleReadyGlockRedDot_C::GetDefaultObj()
{
	static class ABP_BattleReadyGlockRedDot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BattleReadyGlockRedDot_C*>(ABP_BattleReadyGlockRedDot_C::StaticClass()->DefaultObject);

	return Default;
}

}


