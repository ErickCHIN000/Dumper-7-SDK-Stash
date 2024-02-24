#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Prestige_Deadeye_02_GunHandling.Prestige_Deadeye_02_GunHandling_C
// (None)

class UClass* UPrestige_Deadeye_02_GunHandling_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Prestige_Deadeye_02_GunHandling_C");

	return Clss;
}


// Prestige_Deadeye_02_GunHandling_C Prestige_Deadeye_02_GunHandling.Default__Prestige_Deadeye_02_GunHandling_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrestige_Deadeye_02_GunHandling_C* UPrestige_Deadeye_02_GunHandling_C::GetDefaultObj()
{
	static class UPrestige_Deadeye_02_GunHandling_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrestige_Deadeye_02_GunHandling_C*>(UPrestige_Deadeye_02_GunHandling_C::StaticClass()->DefaultObject);

	return Default;
}

}


