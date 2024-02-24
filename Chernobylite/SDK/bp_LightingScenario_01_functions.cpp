#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass bp_LightingScenario_01.bp_LightingScenario_01_C
// (None)

class UClass* Ubp_LightingScenario_01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("bp_LightingScenario_01_C");

	return Clss;
}


// bp_LightingScenario_01_C bp_LightingScenario_01.Default__bp_LightingScenario_01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Ubp_LightingScenario_01_C* Ubp_LightingScenario_01_C::GetDefaultObj()
{
	static class Ubp_LightingScenario_01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Ubp_LightingScenario_01_C*>(Ubp_LightingScenario_01_C::StaticClass()->DefaultObject);

	return Default;
}

}


