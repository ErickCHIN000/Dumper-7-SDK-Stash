#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BattleReadyGlock.BP_BattleReadyGlock_C
// (Actor)

class UClass* ABP_BattleReadyGlock_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BattleReadyGlock_C");

	return Clss;
}


// BP_BattleReadyGlock_C BP_BattleReadyGlock.Default__BP_BattleReadyGlock_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BattleReadyGlock_C* ABP_BattleReadyGlock_C::GetDefaultObj()
{
	static class ABP_BattleReadyGlock_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BattleReadyGlock_C*>(ABP_BattleReadyGlock_C::StaticClass()->DefaultObject);

	return Default;
}

}


