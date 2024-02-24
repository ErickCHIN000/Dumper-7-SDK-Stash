#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPCS_Strong_Normal.BPCS_Strong_Normal_C
// (None)

class UClass* UBPCS_Strong_Normal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPCS_Strong_Normal_C");

	return Clss;
}


// BPCS_Strong_Normal_C BPCS_Strong_Normal.Default__BPCS_Strong_Normal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPCS_Strong_Normal_C* UBPCS_Strong_Normal_C::GetDefaultObj()
{
	static class UBPCS_Strong_Normal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPCS_Strong_Normal_C*>(UBPCS_Strong_Normal_C::StaticClass()->DefaultObject);

	return Default;
}

}


