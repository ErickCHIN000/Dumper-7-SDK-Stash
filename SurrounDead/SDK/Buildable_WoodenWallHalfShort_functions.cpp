#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buildable_WoodenWallHalfShort.Buildable_WoodenWallHalfShort_C
// (Actor)

class UClass* ABuildable_WoodenWallHalfShort_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buildable_WoodenWallHalfShort_C");

	return Clss;
}


// Buildable_WoodenWallHalfShort_C Buildable_WoodenWallHalfShort.Default__Buildable_WoodenWallHalfShort_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuildable_WoodenWallHalfShort_C* ABuildable_WoodenWallHalfShort_C::GetDefaultObj()
{
	static class ABuildable_WoodenWallHalfShort_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuildable_WoodenWallHalfShort_C*>(ABuildable_WoodenWallHalfShort_C::StaticClass()->DefaultObject);

	return Default;
}

}


