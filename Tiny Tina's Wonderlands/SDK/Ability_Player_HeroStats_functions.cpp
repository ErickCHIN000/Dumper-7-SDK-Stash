#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_Player_HeroStats.Ability_Player_HeroStats_C
// (None)

class UClass* UAbility_Player_HeroStats_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_Player_HeroStats_C");

	return Clss;
}


// Ability_Player_HeroStats_C Ability_Player_HeroStats.Default__Ability_Player_HeroStats_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbility_Player_HeroStats_C* UAbility_Player_HeroStats_C::GetDefaultObj()
{
	static class UAbility_Player_HeroStats_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbility_Player_HeroStats_C*>(UAbility_Player_HeroStats_C::StaticClass()->DefaultObject);

	return Default;
}

}


