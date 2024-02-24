#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Kunai_Shock.Kunai_Shock_C
// (Actor)

class UClass* AKunai_Shock_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Kunai_Shock_C");

	return Clss;
}


// Kunai_Shock_C Kunai_Shock.Default__Kunai_Shock_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AKunai_Shock_C* AKunai_Shock_C::GetDefaultObj()
{
	static class AKunai_Shock_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AKunai_Shock_C*>(AKunai_Shock_C::StaticClass()->DefaultObject);

	return Default;
}

}


