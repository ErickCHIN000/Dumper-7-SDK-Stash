#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buildable_WoodenWallWindow.Buildable_WoodenWallWindow_C
// (Actor)

class UClass* ABuildable_WoodenWallWindow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buildable_WoodenWallWindow_C");

	return Clss;
}


// Buildable_WoodenWallWindow_C Buildable_WoodenWallWindow.Default__Buildable_WoodenWallWindow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuildable_WoodenWallWindow_C* ABuildable_WoodenWallWindow_C::GetDefaultObj()
{
	static class ABuildable_WoodenWallWindow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuildable_WoodenWallWindow_C*>(ABuildable_WoodenWallWindow_C::StaticClass()->DefaultObject);

	return Default;
}

}


