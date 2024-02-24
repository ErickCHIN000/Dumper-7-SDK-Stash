#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buildable_WoodenRoofTop.Buildable_WoodenRoofTop_C
// (Actor)

class UClass* ABuildable_WoodenRoofTop_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buildable_WoodenRoofTop_C");

	return Clss;
}


// Buildable_WoodenRoofTop_C Buildable_WoodenRoofTop.Default__Buildable_WoodenRoofTop_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuildable_WoodenRoofTop_C* ABuildable_WoodenRoofTop_C::GetDefaultObj()
{
	static class ABuildable_WoodenRoofTop_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuildable_WoodenRoofTop_C*>(ABuildable_WoodenRoofTop_C::StaticClass()->DefaultObject);

	return Default;
}

}


