#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Prestige_Deadeye_06_FireRate.Prestige_Deadeye_06_FireRate_C
// (None)

class UClass* UPrestige_Deadeye_06_FireRate_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Prestige_Deadeye_06_FireRate_C");

	return Clss;
}


// Prestige_Deadeye_06_FireRate_C Prestige_Deadeye_06_FireRate.Default__Prestige_Deadeye_06_FireRate_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrestige_Deadeye_06_FireRate_C* UPrestige_Deadeye_06_FireRate_C::GetDefaultObj()
{
	static class UPrestige_Deadeye_06_FireRate_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrestige_Deadeye_06_FireRate_C*>(UPrestige_Deadeye_06_FireRate_C::StaticClass()->DefaultObject);

	return Default;
}

}


