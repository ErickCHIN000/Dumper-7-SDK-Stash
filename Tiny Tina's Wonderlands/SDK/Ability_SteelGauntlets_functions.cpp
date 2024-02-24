#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_SteelGauntlets.Ability_SteelGauntlets_C
// (None)

class UClass* UAbility_SteelGauntlets_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_SteelGauntlets_C");

	return Clss;
}


// Ability_SteelGauntlets_C Ability_SteelGauntlets.Default__Ability_SteelGauntlets_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbility_SteelGauntlets_C* UAbility_SteelGauntlets_C::GetDefaultObj()
{
	static class UAbility_SteelGauntlets_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbility_SteelGauntlets_C*>(UAbility_SteelGauntlets_C::StaticClass()->DefaultObject);

	return Default;
}

}


