#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrideRealExperience.PrideRealExperience_C
// (None)

class UClass* UPrideRealExperience_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrideRealExperience_C");

	return Clss;
}


// PrideRealExperience_C PrideRealExperience.Default__PrideRealExperience_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrideRealExperience_C* UPrideRealExperience_C::GetDefaultObj()
{
	static class UPrideRealExperience_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrideRealExperience_C*>(UPrideRealExperience_C::StaticClass()->DefaultObject);

	return Default;
}

}


