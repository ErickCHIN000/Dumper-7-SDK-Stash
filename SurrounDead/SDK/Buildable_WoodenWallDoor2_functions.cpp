#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buildable_WoodenWallDoor2.Buildable_WoodenWallDoor2_C
// (Actor)

class UClass* ABuildable_WoodenWallDoor2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buildable_WoodenWallDoor2_C");

	return Clss;
}


// Buildable_WoodenWallDoor2_C Buildable_WoodenWallDoor2.Default__Buildable_WoodenWallDoor2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuildable_WoodenWallDoor2_C* ABuildable_WoodenWallDoor2_C::GetDefaultObj()
{
	static class ABuildable_WoodenWallDoor2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuildable_WoodenWallDoor2_C*>(ABuildable_WoodenWallDoor2_C::StaticClass()->DefaultObject);

	return Default;
}

}


