#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NWX_DefaultFilter.NWX_DefaultFilter_C
// (None)

class UClass* UNWX_DefaultFilter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NWX_DefaultFilter_C");

	return Clss;
}


// NWX_DefaultFilter_C NWX_DefaultFilter.Default__NWX_DefaultFilter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNWX_DefaultFilter_C* UNWX_DefaultFilter_C::GetDefaultObj()
{
	static class UNWX_DefaultFilter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNWX_DefaultFilter_C*>(UNWX_DefaultFilter_C::StaticClass()->DefaultObject);

	return Default;
}

}


