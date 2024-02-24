#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Interactable_Vacuum_Oxite_Processor.BP_Interactable_Vacuum_Oxite_Processor_C
// (None)

class UClass* UBP_Interactable_Vacuum_Oxite_Processor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Interactable_Vacuum_Oxite_Processor_C");

	return Clss;
}


// BP_Interactable_Vacuum_Oxite_Processor_C BP_Interactable_Vacuum_Oxite_Processor.Default__BP_Interactable_Vacuum_Oxite_Processor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Interactable_Vacuum_Oxite_Processor_C* UBP_Interactable_Vacuum_Oxite_Processor_C::GetDefaultObj()
{
	static class UBP_Interactable_Vacuum_Oxite_Processor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Interactable_Vacuum_Oxite_Processor_C*>(UBP_Interactable_Vacuum_Oxite_Processor_C::StaticClass()->DefaultObject);

	return Default;
}

}


