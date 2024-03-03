#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPFX_SandShift.BPFX_SandShift_C
// (Actor)

class UClass* ABPFX_SandShift_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPFX_SandShift_C");

	return Clss;
}


// BPFX_SandShift_C BPFX_SandShift.Default__BPFX_SandShift_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPFX_SandShift_C* ABPFX_SandShift_C::GetDefaultObj()
{
	static class ABPFX_SandShift_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPFX_SandShift_C*>(ABPFX_SandShift_C::StaticClass()->DefaultObject);

	return Default;
}

}


