#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPCS_Melee_Miss_Light.BPCS_Melee_Miss_Light_C
// (None)

class UClass* UBPCS_Melee_Miss_Light_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPCS_Melee_Miss_Light_C");

	return Clss;
}


// BPCS_Melee_Miss_Light_C BPCS_Melee_Miss_Light.Default__BPCS_Melee_Miss_Light_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPCS_Melee_Miss_Light_C* UBPCS_Melee_Miss_Light_C::GetDefaultObj()
{
	static class UBPCS_Melee_Miss_Light_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPCS_Melee_Miss_Light_C*>(UBPCS_Melee_Miss_Light_C::StaticClass()->DefaultObject);

	return Default;
}

}


