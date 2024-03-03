#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPFX_LeavesWisp.BPFX_LeavesWisp_C
// (Actor)

class UClass* ABPFX_LeavesWisp_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPFX_LeavesWisp_C");

	return Clss;
}


// BPFX_LeavesWisp_C BPFX_LeavesWisp.Default__BPFX_LeavesWisp_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPFX_LeavesWisp_C* ABPFX_LeavesWisp_C::GetDefaultObj()
{
	static class ABPFX_LeavesWisp_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPFX_LeavesWisp_C*>(ABPFX_LeavesWisp_C::StaticClass()->DefaultObject);

	return Default;
}

}


