#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BattleReadyGlockSuppressor.BP_BattleReadyGlockSuppressor_C
// (Actor)

class UClass* ABP_BattleReadyGlockSuppressor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BattleReadyGlockSuppressor_C");

	return Clss;
}


// BP_BattleReadyGlockSuppressor_C BP_BattleReadyGlockSuppressor.Default__BP_BattleReadyGlockSuppressor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BattleReadyGlockSuppressor_C* ABP_BattleReadyGlockSuppressor_C::GetDefaultObj()
{
	static class ABP_BattleReadyGlockSuppressor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BattleReadyGlockSuppressor_C*>(ABP_BattleReadyGlockSuppressor_C::StaticClass()->DefaultObject);

	return Default;
}

}


