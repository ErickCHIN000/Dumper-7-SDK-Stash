#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buildable_WoodenWallWindow2.Buildable_WoodenWallWindow2_C
// (Actor)

class UClass* ABuildable_WoodenWallWindow2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buildable_WoodenWallWindow2_C");

	return Clss;
}


// Buildable_WoodenWallWindow2_C Buildable_WoodenWallWindow2.Default__Buildable_WoodenWallWindow2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuildable_WoodenWallWindow2_C* ABuildable_WoodenWallWindow2_C::GetDefaultObj()
{
	static class ABuildable_WoodenWallWindow2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuildable_WoodenWallWindow2_C*>(ABuildable_WoodenWallWindow2_C::StaticClass()->DefaultObject);

	return Default;
}

}


