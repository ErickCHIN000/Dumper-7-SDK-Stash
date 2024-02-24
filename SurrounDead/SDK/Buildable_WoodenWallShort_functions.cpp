#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buildable_WoodenWallShort.Buildable_WoodenWallShort_C
// (Actor)

class UClass* ABuildable_WoodenWallShort_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buildable_WoodenWallShort_C");

	return Clss;
}


// Buildable_WoodenWallShort_C Buildable_WoodenWallShort.Default__Buildable_WoodenWallShort_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuildable_WoodenWallShort_C* ABuildable_WoodenWallShort_C::GetDefaultObj()
{
	static class ABuildable_WoodenWallShort_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuildable_WoodenWallShort_C*>(ABuildable_WoodenWallShort_C::StaticClass()->DefaultObject);

	return Default;
}

}


