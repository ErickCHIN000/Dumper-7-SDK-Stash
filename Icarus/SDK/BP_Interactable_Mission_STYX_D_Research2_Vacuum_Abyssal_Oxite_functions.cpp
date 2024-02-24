#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Interactable_Mission_STYX_D_Research2_Vacuum_Abyssal_Oxite.BP_Interactable_Mission_STYX_D_Research2_Vacuum_Abyssal_Oxite_C
// (None)

class UClass* UBP_Interactable_Mission_STYX_D_Research2_Vacuum_Abyssal_Oxite_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Interactable_Mission_STYX_D_Research2_Vacuum_Abyssal_Oxite_C");

	return Clss;
}


// BP_Interactable_Mission_STYX_D_Research2_Vacuum_Abyssal_Oxite_C BP_Interactable_Mission_STYX_D_Research2_Vacuum_Abyssal_Oxite.Default__BP_Interactable_Mission_STYX_D_Research2_Vacuum_Abyssal_Oxite_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Interactable_Mission_STYX_D_Research2_Vacuum_Abyssal_Oxite_C* UBP_Interactable_Mission_STYX_D_Research2_Vacuum_Abyssal_Oxite_C::GetDefaultObj()
{
	static class UBP_Interactable_Mission_STYX_D_Research2_Vacuum_Abyssal_Oxite_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Interactable_Mission_STYX_D_Research2_Vacuum_Abyssal_Oxite_C*>(UBP_Interactable_Mission_STYX_D_Research2_Vacuum_Abyssal_Oxite_C::StaticClass()->DefaultObject);

	return Default;
}

}


