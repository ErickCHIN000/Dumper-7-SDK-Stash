#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass A_MushroomCompanion_Interact3.A_MushroomCompanion_Interact3_C
// (None)

class UClass* UA_MushroomCompanion_Interact3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("A_MushroomCompanion_Interact3_C");

	return Clss;
}


// A_MushroomCompanion_Interact3_C A_MushroomCompanion_Interact3.Default__A_MushroomCompanion_Interact3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UA_MushroomCompanion_Interact3_C* UA_MushroomCompanion_Interact3_C::GetDefaultObj()
{
	static class UA_MushroomCompanion_Interact3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UA_MushroomCompanion_Interact3_C*>(UA_MushroomCompanion_Interact3_C::StaticClass()->DefaultObject);

	return Default;
}

}


