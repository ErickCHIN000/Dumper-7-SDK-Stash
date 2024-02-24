#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageSource_Ability_Spirits_Companion.DamageSource_Ability_Spirits_Companion_C
// (None)

class UClass* UDamageSource_Ability_Spirits_Companion_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageSource_Ability_Spirits_Companion_C");

	return Clss;
}


// DamageSource_Ability_Spirits_Companion_C DamageSource_Ability_Spirits_Companion.Default__DamageSource_Ability_Spirits_Companion_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageSource_Ability_Spirits_Companion_C* UDamageSource_Ability_Spirits_Companion_C::GetDefaultObj()
{
	static class UDamageSource_Ability_Spirits_Companion_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageSource_Ability_Spirits_Companion_C*>(UDamageSource_Ability_Spirits_Companion_C::StaticClass()->DefaultObject);

	return Default;
}

}


