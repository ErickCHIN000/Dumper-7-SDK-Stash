#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass A_MushroomCompanion_Fidget4.A_MushroomCompanion_Fidget4_C
// (None)

class UClass* UA_MushroomCompanion_Fidget4_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("A_MushroomCompanion_Fidget4_C");

	return Clss;
}


// A_MushroomCompanion_Fidget4_C A_MushroomCompanion_Fidget4.Default__A_MushroomCompanion_Fidget4_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UA_MushroomCompanion_Fidget4_C* UA_MushroomCompanion_Fidget4_C::GetDefaultObj()
{
	static class UA_MushroomCompanion_Fidget4_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UA_MushroomCompanion_Fidget4_C*>(UA_MushroomCompanion_Fidget4_C::StaticClass()->DefaultObject);

	return Default;
}

}


