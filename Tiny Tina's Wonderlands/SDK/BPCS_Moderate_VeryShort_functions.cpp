#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPCS_Moderate_VeryShort.BPCS_Moderate_VeryShort_C
// (None)

class UClass* UBPCS_Moderate_VeryShort_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPCS_Moderate_VeryShort_C");

	return Clss;
}


// BPCS_Moderate_VeryShort_C BPCS_Moderate_VeryShort.Default__BPCS_Moderate_VeryShort_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPCS_Moderate_VeryShort_C* UBPCS_Moderate_VeryShort_C::GetDefaultObj()
{
	static class UBPCS_Moderate_VeryShort_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPCS_Moderate_VeryShort_C*>(UBPCS_Moderate_VeryShort_C::StaticClass()->DefaultObject);

	return Default;
}

}


