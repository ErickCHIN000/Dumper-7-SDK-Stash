#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Interactable_Vacuum_Sulfur_Fuel.BP_Interactable_Vacuum_Sulfur_Fuel_C
// (None)

class UClass* UBP_Interactable_Vacuum_Sulfur_Fuel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Interactable_Vacuum_Sulfur_Fuel_C");

	return Clss;
}


// BP_Interactable_Vacuum_Sulfur_Fuel_C BP_Interactable_Vacuum_Sulfur_Fuel.Default__BP_Interactable_Vacuum_Sulfur_Fuel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Interactable_Vacuum_Sulfur_Fuel_C* UBP_Interactable_Vacuum_Sulfur_Fuel_C::GetDefaultObj()
{
	static class UBP_Interactable_Vacuum_Sulfur_Fuel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Interactable_Vacuum_Sulfur_Fuel_C*>(UBP_Interactable_Vacuum_Sulfur_Fuel_C::StaticClass()->DefaultObject);

	return Default;
}

}


