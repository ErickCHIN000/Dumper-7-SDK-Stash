#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CreatureSpawner_Wildlife_Spider_Summon.BP_CreatureSpawner_Wildlife_Spider_Summon_C
// (Actor, Pawn)

class UClass* ABP_CreatureSpawner_Wildlife_Spider_Summon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CreatureSpawner_Wildlife_Spider_Summon_C");

	return Clss;
}


// BP_CreatureSpawner_Wildlife_Spider_Summon_C BP_CreatureSpawner_Wildlife_Spider_Summon.Default__BP_CreatureSpawner_Wildlife_Spider_Summon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CreatureSpawner_Wildlife_Spider_Summon_C* ABP_CreatureSpawner_Wildlife_Spider_Summon_C::GetDefaultObj()
{
	static class ABP_CreatureSpawner_Wildlife_Spider_Summon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CreatureSpawner_Wildlife_Spider_Summon_C*>(ABP_CreatureSpawner_Wildlife_Spider_Summon_C::StaticClass()->DefaultObject);

	return Default;
}

}


