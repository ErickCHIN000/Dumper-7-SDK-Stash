#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Electro_AxeImpact.Electro_AxeImpact_C
// (Actor)

class UClass* AElectro_AxeImpact_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Electro_AxeImpact_C");

	return Clss;
}


// Electro_AxeImpact_C Electro_AxeImpact.Default__Electro_AxeImpact_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AElectro_AxeImpact_C* AElectro_AxeImpact_C::GetDefaultObj()
{
	static class AElectro_AxeImpact_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AElectro_AxeImpact_C*>(AElectro_AxeImpact_C::StaticClass()->DefaultObject);

	return Default;
}

}


