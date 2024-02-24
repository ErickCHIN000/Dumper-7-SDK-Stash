#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LocalBattleReadyGlockSuppressor.BP_LocalBattleReadyGlockSuppressor_C
// (Actor)

class UClass* ABP_LocalBattleReadyGlockSuppressor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LocalBattleReadyGlockSuppressor_C");

	return Clss;
}


// BP_LocalBattleReadyGlockSuppressor_C BP_LocalBattleReadyGlockSuppressor.Default__BP_LocalBattleReadyGlockSuppressor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LocalBattleReadyGlockSuppressor_C* ABP_LocalBattleReadyGlockSuppressor_C::GetDefaultObj()
{
	static class ABP_LocalBattleReadyGlockSuppressor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LocalBattleReadyGlockSuppressor_C*>(ABP_LocalBattleReadyGlockSuppressor_C::StaticClass()->DefaultObject);

	return Default;
}

}


