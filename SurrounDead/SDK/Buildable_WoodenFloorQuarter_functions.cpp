#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buildable_WoodenFloorQuarter.Buildable_WoodenFloorQuarter_C
// (Actor)

class UClass* ABuildable_WoodenFloorQuarter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buildable_WoodenFloorQuarter_C");

	return Clss;
}


// Buildable_WoodenFloorQuarter_C Buildable_WoodenFloorQuarter.Default__Buildable_WoodenFloorQuarter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuildable_WoodenFloorQuarter_C* ABuildable_WoodenFloorQuarter_C::GetDefaultObj()
{
	static class ABuildable_WoodenFloorQuarter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuildable_WoodenFloorQuarter_C*>(ABuildable_WoodenFloorQuarter_C::StaticClass()->DefaultObject);

	return Default;
}

}


