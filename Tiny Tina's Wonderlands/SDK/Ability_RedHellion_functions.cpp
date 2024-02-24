#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_RedHellion.Ability_RedHellion_C
// (None)

class UClass* UAbility_RedHellion_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_RedHellion_C");

	return Clss;
}


// Ability_RedHellion_C Ability_RedHellion.Default__Ability_RedHellion_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbility_RedHellion_C* UAbility_RedHellion_C::GetDefaultObj()
{
	static class UAbility_RedHellion_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbility_RedHellion_C*>(UAbility_RedHellion_C::StaticClass()->DefaultObject);

	return Default;
}

}


