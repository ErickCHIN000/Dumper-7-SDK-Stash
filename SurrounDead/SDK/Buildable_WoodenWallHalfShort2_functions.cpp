#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buildable_WoodenWallHalfShort2.Buildable_WoodenWallHalfShort2_C
// (Actor)

class UClass* ABuildable_WoodenWallHalfShort2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buildable_WoodenWallHalfShort2_C");

	return Clss;
}


// Buildable_WoodenWallHalfShort2_C Buildable_WoodenWallHalfShort2.Default__Buildable_WoodenWallHalfShort2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuildable_WoodenWallHalfShort2_C* ABuildable_WoodenWallHalfShort2_C::GetDefaultObj()
{
	static class ABuildable_WoodenWallHalfShort2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuildable_WoodenWallHalfShort2_C*>(ABuildable_WoodenWallHalfShort2_C::StaticClass()->DefaultObject);

	return Default;
}

}


