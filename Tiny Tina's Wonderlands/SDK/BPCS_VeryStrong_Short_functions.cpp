#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPCS_VeryStrong_Short.BPCS_VeryStrong_Short_C
// (None)

class UClass* UBPCS_VeryStrong_Short_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPCS_VeryStrong_Short_C");

	return Clss;
}


// BPCS_VeryStrong_Short_C BPCS_VeryStrong_Short.Default__BPCS_VeryStrong_Short_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPCS_VeryStrong_Short_C* UBPCS_VeryStrong_Short_C::GetDefaultObj()
{
	static class UBPCS_VeryStrong_Short_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPCS_VeryStrong_Short_C*>(UBPCS_VeryStrong_Short_C::StaticClass()->DefaultObject);

	return Default;
}

}


