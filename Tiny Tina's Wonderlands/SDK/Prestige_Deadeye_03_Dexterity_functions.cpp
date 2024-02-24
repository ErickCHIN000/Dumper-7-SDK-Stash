#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Prestige_Deadeye_03_Dexterity.Prestige_Deadeye_03_Dexterity_C
// (None)

class UClass* UPrestige_Deadeye_03_Dexterity_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Prestige_Deadeye_03_Dexterity_C");

	return Clss;
}


// Prestige_Deadeye_03_Dexterity_C Prestige_Deadeye_03_Dexterity.Default__Prestige_Deadeye_03_Dexterity_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrestige_Deadeye_03_Dexterity_C* UPrestige_Deadeye_03_Dexterity_C::GetDefaultObj()
{
	static class UPrestige_Deadeye_03_Dexterity_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrestige_Deadeye_03_Dexterity_C*>(UPrestige_Deadeye_03_Dexterity_C::StaticClass()->DefaultObject);

	return Default;
}

}


