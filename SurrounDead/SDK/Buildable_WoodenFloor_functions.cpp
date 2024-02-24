#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buildable_WoodenFloor.Buildable_WoodenFloor_C
// (Actor)

class UClass* ABuildable_WoodenFloor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buildable_WoodenFloor_C");

	return Clss;
}


// Buildable_WoodenFloor_C Buildable_WoodenFloor.Default__Buildable_WoodenFloor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuildable_WoodenFloor_C* ABuildable_WoodenFloor_C::GetDefaultObj()
{
	static class ABuildable_WoodenFloor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuildable_WoodenFloor_C*>(ABuildable_WoodenFloor_C::StaticClass()->DefaultObject);

	return Default;
}

}


