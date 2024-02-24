#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_Ring_SE_Cryo_Chance.Ability_Ring_SE_Cryo_Chance_C
// (None)

class UClass* UAbility_Ring_SE_Cryo_Chance_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_Ring_SE_Cryo_Chance_C");

	return Clss;
}


// Ability_Ring_SE_Cryo_Chance_C Ability_Ring_SE_Cryo_Chance.Default__Ability_Ring_SE_Cryo_Chance_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbility_Ring_SE_Cryo_Chance_C* UAbility_Ring_SE_Cryo_Chance_C::GetDefaultObj()
{
	static class UAbility_Ring_SE_Cryo_Chance_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbility_Ring_SE_Cryo_Chance_C*>(UAbility_Ring_SE_Cryo_Chance_C::StaticClass()->DefaultObject);

	return Default;
}

}


