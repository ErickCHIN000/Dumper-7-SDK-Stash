#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buildable_WoodenFloorTriangle.Buildable_WoodenFloorTriangle_C
// (Actor)

class UClass* ABuildable_WoodenFloorTriangle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buildable_WoodenFloorTriangle_C");

	return Clss;
}


// Buildable_WoodenFloorTriangle_C Buildable_WoodenFloorTriangle.Default__Buildable_WoodenFloorTriangle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuildable_WoodenFloorTriangle_C* ABuildable_WoodenFloorTriangle_C::GetDefaultObj()
{
	static class ABuildable_WoodenFloorTriangle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuildable_WoodenFloorTriangle_C*>(ABuildable_WoodenFloorTriangle_C::StaticClass()->DefaultObject);

	return Default;
}

}


