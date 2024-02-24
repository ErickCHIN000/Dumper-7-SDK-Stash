#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_DefaultMeleeImpact.CS_DefaultMeleeImpact_C
// (None)

class UClass* UCS_DefaultMeleeImpact_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_DefaultMeleeImpact_C");

	return Clss;
}


// CS_DefaultMeleeImpact_C CS_DefaultMeleeImpact.Default__CS_DefaultMeleeImpact_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_DefaultMeleeImpact_C* UCS_DefaultMeleeImpact_C::GetDefaultObj()
{
	static class UCS_DefaultMeleeImpact_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_DefaultMeleeImpact_C*>(UCS_DefaultMeleeImpact_C::StaticClass()->DefaultObject);

	return Default;
}

}


