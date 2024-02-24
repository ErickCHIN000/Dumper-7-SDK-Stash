#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_TriggerOnEnemyAggro.BP_TriggerOnEnemyAggro_C
// (Actor)

class UClass* ABP_TriggerOnEnemyAggro_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_TriggerOnEnemyAggro_C");

	return Clss;
}


// BP_TriggerOnEnemyAggro_C BP_TriggerOnEnemyAggro.Default__BP_TriggerOnEnemyAggro_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_TriggerOnEnemyAggro_C* ABP_TriggerOnEnemyAggro_C::GetDefaultObj()
{
	static class ABP_TriggerOnEnemyAggro_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_TriggerOnEnemyAggro_C*>(ABP_TriggerOnEnemyAggro_C::StaticClass()->DefaultObject);

	return Default;
}

}


