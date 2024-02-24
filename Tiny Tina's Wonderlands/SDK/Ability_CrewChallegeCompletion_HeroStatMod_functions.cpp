#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_CrewChallegeCompletion_HeroStatMod.Ability_CrewChallegeCompletion_HeroStatMod_C
// (None)

class UClass* UAbility_CrewChallegeCompletion_HeroStatMod_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_CrewChallegeCompletion_HeroStatMod_C");

	return Clss;
}


// Ability_CrewChallegeCompletion_HeroStatMod_C Ability_CrewChallegeCompletion_HeroStatMod.Default__Ability_CrewChallegeCompletion_HeroStatMod_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbility_CrewChallegeCompletion_HeroStatMod_C* UAbility_CrewChallegeCompletion_HeroStatMod_C::GetDefaultObj()
{
	static class UAbility_CrewChallegeCompletion_HeroStatMod_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbility_CrewChallegeCompletion_HeroStatMod_C*>(UAbility_CrewChallegeCompletion_HeroStatMod_C::StaticClass()->DefaultObject);

	return Default;
}

}


