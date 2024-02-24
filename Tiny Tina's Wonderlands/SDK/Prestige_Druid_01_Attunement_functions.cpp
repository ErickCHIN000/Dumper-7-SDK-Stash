#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Prestige_Druid_01_Attunement.Prestige_Druid_01_Attunement_C
// (None)

class UClass* UPrestige_Druid_01_Attunement_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Prestige_Druid_01_Attunement_C");

	return Clss;
}


// Prestige_Druid_01_Attunement_C Prestige_Druid_01_Attunement.Default__Prestige_Druid_01_Attunement_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrestige_Druid_01_Attunement_C* UPrestige_Druid_01_Attunement_C::GetDefaultObj()
{
	static class UPrestige_Druid_01_Attunement_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrestige_Druid_01_Attunement_C*>(UPrestige_Druid_01_Attunement_C::StaticClass()->DefaultObject);

	return Default;
}

}


