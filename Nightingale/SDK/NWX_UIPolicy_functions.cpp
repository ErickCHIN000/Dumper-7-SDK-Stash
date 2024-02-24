#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NWX_UIPolicy.NWX_UIPolicy_C
// (None)

class UClass* UNWX_UIPolicy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NWX_UIPolicy_C");

	return Clss;
}


// NWX_UIPolicy_C NWX_UIPolicy.Default__NWX_UIPolicy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNWX_UIPolicy_C* UNWX_UIPolicy_C::GetDefaultObj()
{
	static class UNWX_UIPolicy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNWX_UIPolicy_C*>(UNWX_UIPolicy_C::StaticClass()->DefaultObject);

	return Default;
}

}


