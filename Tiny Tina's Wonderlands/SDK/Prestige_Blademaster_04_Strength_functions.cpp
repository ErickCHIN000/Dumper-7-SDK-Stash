#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Prestige_Blademaster_04_Strength.Prestige_Blademaster_04_Strength_C
// (None)

class UClass* UPrestige_Blademaster_04_Strength_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Prestige_Blademaster_04_Strength_C");

	return Clss;
}


// Prestige_Blademaster_04_Strength_C Prestige_Blademaster_04_Strength.Default__Prestige_Blademaster_04_Strength_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrestige_Blademaster_04_Strength_C* UPrestige_Blademaster_04_Strength_C::GetDefaultObj()
{
	static class UPrestige_Blademaster_04_Strength_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrestige_Blademaster_04_Strength_C*>(UPrestige_Blademaster_04_Strength_C::StaticClass()->DefaultObject);

	return Default;
}

}


