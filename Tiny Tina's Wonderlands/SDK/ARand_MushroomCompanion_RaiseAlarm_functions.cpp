#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ARand_MushroomCompanion_RaiseAlarm.ARand_MushroomCompanion_RaiseAlarm_C
// (None)

class UClass* UARand_MushroomCompanion_RaiseAlarm_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARand_MushroomCompanion_RaiseAlarm_C");

	return Clss;
}


// ARand_MushroomCompanion_RaiseAlarm_C ARand_MushroomCompanion_RaiseAlarm.Default__ARand_MushroomCompanion_RaiseAlarm_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UARand_MushroomCompanion_RaiseAlarm_C* UARand_MushroomCompanion_RaiseAlarm_C::GetDefaultObj()
{
	static class UARand_MushroomCompanion_RaiseAlarm_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UARand_MushroomCompanion_RaiseAlarm_C*>(UARand_MushroomCompanion_RaiseAlarm_C::StaticClass()->DefaultObject);

	return Default;
}

}


