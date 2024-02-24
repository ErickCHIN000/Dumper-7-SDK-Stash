#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_MantleThorn_ActionCooldown.Ability_MantleThorn_ActionCooldown_C
// (None)

class UClass* UAbility_MantleThorn_ActionCooldown_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_MantleThorn_ActionCooldown_C");

	return Clss;
}


// Ability_MantleThorn_ActionCooldown_C Ability_MantleThorn_ActionCooldown.Default__Ability_MantleThorn_ActionCooldown_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbility_MantleThorn_ActionCooldown_C* UAbility_MantleThorn_ActionCooldown_C::GetDefaultObj()
{
	static class UAbility_MantleThorn_ActionCooldown_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbility_MantleThorn_ActionCooldown_C*>(UAbility_MantleThorn_ActionCooldown_C::StaticClass()->DefaultObject);

	return Default;
}

}


