#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LootCar_Car2.LootCar_Car2_C
// (Actor)

class UClass* ALootCar_Car2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LootCar_Car2_C");

	return Clss;
}


// LootCar_Car2_C LootCar_Car2.Default__LootCar_Car2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALootCar_Car2_C* ALootCar_Car2_C::GetDefaultObj()
{
	static class ALootCar_Car2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALootCar_Car2_C*>(ALootCar_Car2_C::StaticClass()->DefaultObject);

	return Default;
}

}


