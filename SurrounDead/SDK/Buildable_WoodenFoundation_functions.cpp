#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buildable_WoodenFoundation.Buildable_WoodenFoundation_C
// (Actor)

class UClass* ABuildable_WoodenFoundation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buildable_WoodenFoundation_C");

	return Clss;
}


// Buildable_WoodenFoundation_C Buildable_WoodenFoundation.Default__Buildable_WoodenFoundation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuildable_WoodenFoundation_C* ABuildable_WoodenFoundation_C::GetDefaultObj()
{
	static class ABuildable_WoodenFoundation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuildable_WoodenFoundation_C*>(ABuildable_WoodenFoundation_C::StaticClass()->DefaultObject);

	return Default;
}

}


