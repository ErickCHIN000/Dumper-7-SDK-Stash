#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Prestige_Archmage_01_Intelligence.Prestige_Archmage_01_Intelligence_C
// (None)

class UClass* UPrestige_Archmage_01_Intelligence_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Prestige_Archmage_01_Intelligence_C");

	return Clss;
}


// Prestige_Archmage_01_Intelligence_C Prestige_Archmage_01_Intelligence.Default__Prestige_Archmage_01_Intelligence_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrestige_Archmage_01_Intelligence_C* UPrestige_Archmage_01_Intelligence_C::GetDefaultObj()
{
	static class UPrestige_Archmage_01_Intelligence_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrestige_Archmage_01_Intelligence_C*>(UPrestige_Archmage_01_Intelligence_C::StaticClass()->DefaultObject);

	return Default;
}

}


