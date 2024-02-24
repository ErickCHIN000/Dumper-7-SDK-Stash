#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrideRealExperience_T.PrideRealExperience_T_C
// (None)

class UClass* UPrideRealExperience_T_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrideRealExperience_T_C");

	return Clss;
}


// PrideRealExperience_T_C PrideRealExperience_T.Default__PrideRealExperience_T_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrideRealExperience_T_C* UPrideRealExperience_T_C::GetDefaultObj()
{
	static class UPrideRealExperience_T_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrideRealExperience_T_C*>(UPrideRealExperience_T_C::StaticClass()->DefaultObject);

	return Default;
}

}


