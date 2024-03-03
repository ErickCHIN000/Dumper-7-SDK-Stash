#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPFX_Butterfly.BPFX_Butterfly_C
// (Actor)

class UClass* ABPFX_Butterfly_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPFX_Butterfly_C");

	return Clss;
}


// BPFX_Butterfly_C BPFX_Butterfly.Default__BPFX_Butterfly_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPFX_Butterfly_C* ABPFX_Butterfly_C::GetDefaultObj()
{
	static class ABPFX_Butterfly_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPFX_Butterfly_C*>(ABPFX_Butterfly_C::StaticClass()->DefaultObject);

	return Default;
}

}


