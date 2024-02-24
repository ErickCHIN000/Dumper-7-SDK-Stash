#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NWX_InputData.NWX_InputData_C
// (None)

class UClass* UNWX_InputData_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NWX_InputData_C");

	return Clss;
}


// NWX_InputData_C NWX_InputData.Default__NWX_InputData_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNWX_InputData_C* UNWX_InputData_C::GetDefaultObj()
{
	static class UNWX_InputData_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNWX_InputData_C*>(UNWX_InputData_C::StaticClass()->DefaultObject);

	return Default;
}

}


