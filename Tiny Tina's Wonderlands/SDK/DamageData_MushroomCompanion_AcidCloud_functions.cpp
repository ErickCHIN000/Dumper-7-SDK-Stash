#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageData_MushroomCompanion_AcidCloud.DamageData_MushroomCompanion_AcidCloud_C
// (None)

class UClass* UDamageData_MushroomCompanion_AcidCloud_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageData_MushroomCompanion_AcidCloud_C");

	return Clss;
}


// DamageData_MushroomCompanion_AcidCloud_C DamageData_MushroomCompanion_AcidCloud.Default__DamageData_MushroomCompanion_AcidCloud_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageData_MushroomCompanion_AcidCloud_C* UDamageData_MushroomCompanion_AcidCloud_C::GetDefaultObj()
{
	static class UDamageData_MushroomCompanion_AcidCloud_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageData_MushroomCompanion_AcidCloud_C*>(UDamageData_MushroomCompanion_AcidCloud_C::StaticClass()->DefaultObject);

	return Default;
}

}


