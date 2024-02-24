#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buildable_WoodenWallHalf2.Buildable_WoodenWallHalf2_C
// (Actor)

class UClass* ABuildable_WoodenWallHalf2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buildable_WoodenWallHalf2_C");

	return Clss;
}


// Buildable_WoodenWallHalf2_C Buildable_WoodenWallHalf2.Default__Buildable_WoodenWallHalf2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuildable_WoodenWallHalf2_C* ABuildable_WoodenWallHalf2_C::GetDefaultObj()
{
	static class ABuildable_WoodenWallHalf2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuildable_WoodenWallHalf2_C*>(ABuildable_WoodenWallHalf2_C::StaticClass()->DefaultObject);

	return Default;
}

}


