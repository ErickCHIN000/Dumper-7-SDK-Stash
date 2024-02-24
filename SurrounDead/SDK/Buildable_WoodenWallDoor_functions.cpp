#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buildable_WoodenWallDoor.Buildable_WoodenWallDoor_C
// (Actor)

class UClass* ABuildable_WoodenWallDoor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buildable_WoodenWallDoor_C");

	return Clss;
}


// Buildable_WoodenWallDoor_C Buildable_WoodenWallDoor.Default__Buildable_WoodenWallDoor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuildable_WoodenWallDoor_C* ABuildable_WoodenWallDoor_C::GetDefaultObj()
{
	static class ABuildable_WoodenWallDoor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuildable_WoodenWallDoor_C*>(ABuildable_WoodenWallDoor_C::StaticClass()->DefaultObject);

	return Default;
}

}


