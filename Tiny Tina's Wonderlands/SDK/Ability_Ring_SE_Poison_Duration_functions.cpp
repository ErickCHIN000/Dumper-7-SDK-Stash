#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_Ring_SE_Poison_Duration.Ability_Ring_SE_Poison_Duration_C
// (None)

class UClass* UAbility_Ring_SE_Poison_Duration_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_Ring_SE_Poison_Duration_C");

	return Clss;
}


// Ability_Ring_SE_Poison_Duration_C Ability_Ring_SE_Poison_Duration.Default__Ability_Ring_SE_Poison_Duration_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbility_Ring_SE_Poison_Duration_C* UAbility_Ring_SE_Poison_Duration_C::GetDefaultObj()
{
	static class UAbility_Ring_SE_Poison_Duration_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbility_Ring_SE_Poison_Duration_C*>(UAbility_Ring_SE_Poison_Duration_C::StaticClass()->DefaultObject);

	return Default;
}

}


