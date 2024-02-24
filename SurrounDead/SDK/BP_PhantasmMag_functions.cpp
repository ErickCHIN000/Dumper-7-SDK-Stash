#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PhantasmMag.BP_PhantasmMag_C
// (Actor)

class UClass* ABP_PhantasmMag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PhantasmMag_C");

	return Clss;
}


// BP_PhantasmMag_C BP_PhantasmMag.Default__BP_PhantasmMag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PhantasmMag_C* ABP_PhantasmMag_C::GetDefaultObj()
{
	static class ABP_PhantasmMag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PhantasmMag_C*>(ABP_PhantasmMag_C::StaticClass()->DefaultObject);

	return Default;
}

}


