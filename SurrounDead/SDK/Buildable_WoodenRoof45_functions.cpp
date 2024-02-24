#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buildable_WoodenRoof45.Buildable_WoodenRoof45_C
// (Actor)

class UClass* ABuildable_WoodenRoof45_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buildable_WoodenRoof45_C");

	return Clss;
}


// Buildable_WoodenRoof45_C Buildable_WoodenRoof45.Default__Buildable_WoodenRoof45_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuildable_WoodenRoof45_C* ABuildable_WoodenRoof45_C::GetDefaultObj()
{
	static class ABuildable_WoodenRoof45_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuildable_WoodenRoof45_C*>(ABuildable_WoodenRoof45_C::StaticClass()->DefaultObject);

	return Default;
}

}


