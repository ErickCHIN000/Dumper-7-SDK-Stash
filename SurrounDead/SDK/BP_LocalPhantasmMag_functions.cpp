#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LocalPhantasmMag.BP_LocalPhantasmMag_C
// (Actor)

class UClass* ABP_LocalPhantasmMag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LocalPhantasmMag_C");

	return Clss;
}


// BP_LocalPhantasmMag_C BP_LocalPhantasmMag.Default__BP_LocalPhantasmMag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LocalPhantasmMag_C* ABP_LocalPhantasmMag_C::GetDefaultObj()
{
	static class ABP_LocalPhantasmMag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LocalPhantasmMag_C*>(ABP_LocalPhantasmMag_C::StaticClass()->DefaultObject);

	return Default;
}

}


