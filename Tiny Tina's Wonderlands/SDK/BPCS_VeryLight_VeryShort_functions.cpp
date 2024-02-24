#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPCS_VeryLight_VeryShort.BPCS_VeryLight_VeryShort_C
// (None)

class UClass* UBPCS_VeryLight_VeryShort_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPCS_VeryLight_VeryShort_C");

	return Clss;
}


// BPCS_VeryLight_VeryShort_C BPCS_VeryLight_VeryShort.Default__BPCS_VeryLight_VeryShort_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPCS_VeryLight_VeryShort_C* UBPCS_VeryLight_VeryShort_C::GetDefaultObj()
{
	static class UBPCS_VeryLight_VeryShort_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPCS_VeryLight_VeryShort_C*>(UBPCS_VeryLight_VeryShort_C::StaticClass()->DefaultObject);

	return Default;
}

}


