#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_DragonCompanion_Spawn.Action_DragonCompanion_Spawn_C
// (None)

class UClass* UAction_DragonCompanion_Spawn_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_DragonCompanion_Spawn_C");

	return Clss;
}


// Action_DragonCompanion_Spawn_C Action_DragonCompanion_Spawn.Default__Action_DragonCompanion_Spawn_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_DragonCompanion_Spawn_C* UAction_DragonCompanion_Spawn_C::GetDefaultObj()
{
	static class UAction_DragonCompanion_Spawn_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_DragonCompanion_Spawn_C*>(UAction_DragonCompanion_Spawn_C::StaticClass()->DefaultObject);

	return Default;
}

}


