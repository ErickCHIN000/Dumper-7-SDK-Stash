#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPCS_ExtremelyLight_VeryShort.BPCS_ExtremelyLight_VeryShort_C
// (None)

class UClass* UBPCS_ExtremelyLight_VeryShort_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPCS_ExtremelyLight_VeryShort_C");

	return Clss;
}


// BPCS_ExtremelyLight_VeryShort_C BPCS_ExtremelyLight_VeryShort.Default__BPCS_ExtremelyLight_VeryShort_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPCS_ExtremelyLight_VeryShort_C* UBPCS_ExtremelyLight_VeryShort_C::GetDefaultObj()
{
	static class UBPCS_ExtremelyLight_VeryShort_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPCS_ExtremelyLight_VeryShort_C*>(UBPCS_ExtremelyLight_VeryShort_C::StaticClass()->DefaultObject);

	return Default;
}

}

