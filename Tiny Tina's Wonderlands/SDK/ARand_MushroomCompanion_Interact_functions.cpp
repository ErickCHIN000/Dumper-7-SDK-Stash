#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ARand_MushroomCompanion_Interact.ARand_MushroomCompanion_Interact_C
// (None)

class UClass* UARand_MushroomCompanion_Interact_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARand_MushroomCompanion_Interact_C");

	return Clss;
}


// ARand_MushroomCompanion_Interact_C ARand_MushroomCompanion_Interact.Default__ARand_MushroomCompanion_Interact_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UARand_MushroomCompanion_Interact_C* UARand_MushroomCompanion_Interact_C::GetDefaultObj()
{
	static class UARand_MushroomCompanion_Interact_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UARand_MushroomCompanion_Interact_C*>(UARand_MushroomCompanion_Interact_C::StaticClass()->DefaultObject);

	return Default;
}

}


