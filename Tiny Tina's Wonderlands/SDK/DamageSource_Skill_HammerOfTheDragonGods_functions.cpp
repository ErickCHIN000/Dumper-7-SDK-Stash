#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageSource_Skill_HammerOfTheDragonGods.DamageSource_Skill_HammerOfTheDragonGods_C
// (None)

class UClass* UDamageSource_Skill_HammerOfTheDragonGods_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageSource_Skill_HammerOfTheDragonGods_C");

	return Clss;
}


// DamageSource_Skill_HammerOfTheDragonGods_C DamageSource_Skill_HammerOfTheDragonGods.Default__DamageSource_Skill_HammerOfTheDragonGods_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageSource_Skill_HammerOfTheDragonGods_C* UDamageSource_Skill_HammerOfTheDragonGods_C::GetDefaultObj()
{
	static class UDamageSource_Skill_HammerOfTheDragonGods_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageSource_Skill_HammerOfTheDragonGods_C*>(UDamageSource_Skill_HammerOfTheDragonGods_C::StaticClass()->DefaultObject);

	return Default;
}

}


