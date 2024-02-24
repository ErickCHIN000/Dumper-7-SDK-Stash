#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPCS_ShieldBreak.BPCS_ShieldBreak_C
// (None)

class UClass* UBPCS_ShieldBreak_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPCS_ShieldBreak_C");

	return Clss;
}


// BPCS_ShieldBreak_C BPCS_ShieldBreak.Default__BPCS_ShieldBreak_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPCS_ShieldBreak_C* UBPCS_ShieldBreak_C::GetDefaultObj()
{
	static class UBPCS_ShieldBreak_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPCS_ShieldBreak_C*>(UBPCS_ShieldBreak_C::StaticClass()->DefaultObject);

	return Default;
}

}


