#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPFX_DustDevil.BPFX_DustDevil_C
// (Actor)

class UClass* ABPFX_DustDevil_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPFX_DustDevil_C");

	return Clss;
}


// BPFX_DustDevil_C BPFX_DustDevil.Default__BPFX_DustDevil_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPFX_DustDevil_C* ABPFX_DustDevil_C::GetDefaultObj()
{
	static class ABPFX_DustDevil_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPFX_DustDevil_C*>(ABPFX_DustDevil_C::StaticClass()->DefaultObject);

	return Default;
}

}


