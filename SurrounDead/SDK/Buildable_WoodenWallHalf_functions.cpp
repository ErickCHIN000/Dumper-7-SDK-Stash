#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buildable_WoodenWallHalf.Buildable_WoodenWallHalf_C
// (Actor)

class UClass* ABuildable_WoodenWallHalf_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buildable_WoodenWallHalf_C");

	return Clss;
}


// Buildable_WoodenWallHalf_C Buildable_WoodenWallHalf.Default__Buildable_WoodenWallHalf_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuildable_WoodenWallHalf_C* ABuildable_WoodenWallHalf_C::GetDefaultObj()
{
	static class ABuildable_WoodenWallHalf_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuildable_WoodenWallHalf_C*>(ABuildable_WoodenWallHalf_C::StaticClass()->DefaultObject);

	return Default;
}

}


