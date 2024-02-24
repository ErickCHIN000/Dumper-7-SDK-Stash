#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buildable_WoodenWall.Buildable_WoodenWall_C
// (Actor)

class UClass* ABuildable_WoodenWall_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buildable_WoodenWall_C");

	return Clss;
}


// Buildable_WoodenWall_C Buildable_WoodenWall.Default__Buildable_WoodenWall_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuildable_WoodenWall_C* ABuildable_WoodenWall_C::GetDefaultObj()
{
	static class ABuildable_WoodenWall_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuildable_WoodenWall_C*>(ABuildable_WoodenWall_C::StaticClass()->DefaultObject);

	return Default;
}

}


