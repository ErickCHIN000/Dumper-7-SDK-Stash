#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buildable_WoodenFloorHalf.Buildable_WoodenFloorHalf_C
// (Actor)

class UClass* ABuildable_WoodenFloorHalf_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buildable_WoodenFloorHalf_C");

	return Clss;
}


// Buildable_WoodenFloorHalf_C Buildable_WoodenFloorHalf.Default__Buildable_WoodenFloorHalf_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuildable_WoodenFloorHalf_C* ABuildable_WoodenFloorHalf_C::GetDefaultObj()
{
	static class ABuildable_WoodenFloorHalf_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuildable_WoodenFloorHalf_C*>(ABuildable_WoodenFloorHalf_C::StaticClass()->DefaultObject);

	return Default;
}

}


