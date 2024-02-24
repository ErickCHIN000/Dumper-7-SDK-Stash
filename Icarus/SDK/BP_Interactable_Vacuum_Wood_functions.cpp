#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Interactable_Vacuum_Wood.BP_Interactable_Vacuum_Wood_C
// (None)

class UClass* UBP_Interactable_Vacuum_Wood_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Interactable_Vacuum_Wood_C");

	return Clss;
}


// BP_Interactable_Vacuum_Wood_C BP_Interactable_Vacuum_Wood.Default__BP_Interactable_Vacuum_Wood_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Interactable_Vacuum_Wood_C* UBP_Interactable_Vacuum_Wood_C::GetDefaultObj()
{
	static class UBP_Interactable_Vacuum_Wood_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Interactable_Vacuum_Wood_C*>(UBP_Interactable_Vacuum_Wood_C::StaticClass()->DefaultObject);

	return Default;
}

}


