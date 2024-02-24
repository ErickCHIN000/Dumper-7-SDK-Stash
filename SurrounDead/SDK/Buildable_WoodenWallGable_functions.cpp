#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buildable_WoodenWallGable.Buildable_WoodenWallGable_C
// (Actor)

class UClass* ABuildable_WoodenWallGable_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buildable_WoodenWallGable_C");

	return Clss;
}


// Buildable_WoodenWallGable_C Buildable_WoodenWallGable.Default__Buildable_WoodenWallGable_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuildable_WoodenWallGable_C* ABuildable_WoodenWallGable_C::GetDefaultObj()
{
	static class ABuildable_WoodenWallGable_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuildable_WoodenWallGable_C*>(ABuildable_WoodenWallGable_C::StaticClass()->DefaultObject);

	return Default;
}

}


