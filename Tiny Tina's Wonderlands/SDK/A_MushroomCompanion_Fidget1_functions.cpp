#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass A_MushroomCompanion_Fidget1.A_MushroomCompanion_Fidget1_C
// (None)

class UClass* UA_MushroomCompanion_Fidget1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("A_MushroomCompanion_Fidget1_C");

	return Clss;
}


// A_MushroomCompanion_Fidget1_C A_MushroomCompanion_Fidget1.Default__A_MushroomCompanion_Fidget1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UA_MushroomCompanion_Fidget1_C* UA_MushroomCompanion_Fidget1_C::GetDefaultObj()
{
	static class UA_MushroomCompanion_Fidget1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UA_MushroomCompanion_Fidget1_C*>(UA_MushroomCompanion_Fidget1_C::StaticClass()->DefaultObject);

	return Default;
}

}


