#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ice_AxeImpact.Ice_AxeImpact_C
// (Actor)

class UClass* AIce_AxeImpact_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ice_AxeImpact_C");

	return Clss;
}


// Ice_AxeImpact_C Ice_AxeImpact.Default__Ice_AxeImpact_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AIce_AxeImpact_C* AIce_AxeImpact_C::GetDefaultObj()
{
	static class AIce_AxeImpact_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AIce_AxeImpact_C*>(AIce_AxeImpact_C::StaticClass()->DefaultObject);

	return Default;
}

}


