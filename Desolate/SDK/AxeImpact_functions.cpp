#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AxeImpact.AxeImpact_C
// (Actor)

class UClass* AAxeImpact_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AxeImpact_C");

	return Clss;
}


// AxeImpact_C AxeImpact.Default__AxeImpact_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAxeImpact_C* AAxeImpact_C::GetDefaultObj()
{
	static class AAxeImpact_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAxeImpact_C*>(AAxeImpact_C::StaticClass()->DefaultObject);

	return Default;
}

}


