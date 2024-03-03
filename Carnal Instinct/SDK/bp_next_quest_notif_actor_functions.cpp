#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass bp_next_quest_notif_actor.bp_next_quest_notif_actor_C
// (Actor)

class UClass* Abp_next_quest_notif_actor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("bp_next_quest_notif_actor_C");

	return Clss;
}


// bp_next_quest_notif_actor_C bp_next_quest_notif_actor.Default__bp_next_quest_notif_actor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Abp_next_quest_notif_actor_C* Abp_next_quest_notif_actor_C::GetDefaultObj()
{
	static class Abp_next_quest_notif_actor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Abp_next_quest_notif_actor_C*>(Abp_next_quest_notif_actor_C::StaticClass()->DefaultObject);

	return Default;
}

}


