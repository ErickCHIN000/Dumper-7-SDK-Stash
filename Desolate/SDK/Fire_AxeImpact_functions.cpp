#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Fire_AxeImpact.Fire_AxeImpact_C
// (Actor)

class UClass* AFire_AxeImpact_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Fire_AxeImpact_C");

	return Clss;
}


// Fire_AxeImpact_C Fire_AxeImpact.Default__Fire_AxeImpact_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFire_AxeImpact_C* AFire_AxeImpact_C::GetDefaultObj()
{
	static class AFire_AxeImpact_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFire_AxeImpact_C*>(AFire_AxeImpact_C::StaticClass()->DefaultObject);

	return Default;
}

}


