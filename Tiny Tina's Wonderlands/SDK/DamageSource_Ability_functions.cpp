#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageSource_Ability.DamageSource_Ability_C
// (None)

class UClass* UDamageSource_Ability_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageSource_Ability_C");

	return Clss;
}


// DamageSource_Ability_C DamageSource_Ability.Default__DamageSource_Ability_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageSource_Ability_C* UDamageSource_Ability_C::GetDefaultObj()
{
	static class UDamageSource_Ability_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageSource_Ability_C*>(UDamageSource_Ability_C::StaticClass()->DefaultObject);

	return Default;
}

}


