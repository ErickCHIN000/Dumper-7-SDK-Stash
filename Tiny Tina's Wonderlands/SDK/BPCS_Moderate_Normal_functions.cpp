#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPCS_Moderate_Normal.BPCS_Moderate_Normal_C
// (None)

class UClass* UBPCS_Moderate_Normal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPCS_Moderate_Normal_C");

	return Clss;
}


// BPCS_Moderate_Normal_C BPCS_Moderate_Normal.Default__BPCS_Moderate_Normal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPCS_Moderate_Normal_C* UBPCS_Moderate_Normal_C::GetDefaultObj()
{
	static class UBPCS_Moderate_Normal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPCS_Moderate_Normal_C*>(UBPCS_Moderate_Normal_C::StaticClass()->DefaultObject);

	return Default;
}

}


