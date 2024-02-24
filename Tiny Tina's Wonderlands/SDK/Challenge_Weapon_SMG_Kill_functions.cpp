#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_Weapon_SMG_Kill.Challenge_Weapon_SMG_Kill_C
// (None)

class UClass* UChallenge_Weapon_SMG_Kill_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_Weapon_SMG_Kill_C");

	return Clss;
}


// Challenge_Weapon_SMG_Kill_C Challenge_Weapon_SMG_Kill.Default__Challenge_Weapon_SMG_Kill_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_Weapon_SMG_Kill_C* UChallenge_Weapon_SMG_Kill_C::GetDefaultObj()
{
	static class UChallenge_Weapon_SMG_Kill_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_Weapon_SMG_Kill_C*>(UChallenge_Weapon_SMG_Kill_C::StaticClass()->DefaultObject);

	return Default;
}

}


