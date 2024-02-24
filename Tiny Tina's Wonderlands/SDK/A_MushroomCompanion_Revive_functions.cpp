#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass A_MushroomCompanion_Revive.A_MushroomCompanion_Revive_C
// (None)

class UClass* UA_MushroomCompanion_Revive_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("A_MushroomCompanion_Revive_C");

	return Clss;
}


// A_MushroomCompanion_Revive_C A_MushroomCompanion_Revive.Default__A_MushroomCompanion_Revive_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UA_MushroomCompanion_Revive_C* UA_MushroomCompanion_Revive_C::GetDefaultObj()
{
	static class UA_MushroomCompanion_Revive_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UA_MushroomCompanion_Revive_C*>(UA_MushroomCompanion_Revive_C::StaticClass()->DefaultObject);

	return Default;
}

}


