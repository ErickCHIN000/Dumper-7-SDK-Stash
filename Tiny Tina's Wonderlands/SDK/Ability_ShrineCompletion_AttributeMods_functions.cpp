#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_ShrineCompletion_AttributeMods.Ability_ShrineCompletion_AttributeMods_C
// (None)

class UClass* UAbility_ShrineCompletion_AttributeMods_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_ShrineCompletion_AttributeMods_C");

	return Clss;
}


// Ability_ShrineCompletion_AttributeMods_C Ability_ShrineCompletion_AttributeMods.Default__Ability_ShrineCompletion_AttributeMods_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbility_ShrineCompletion_AttributeMods_C* UAbility_ShrineCompletion_AttributeMods_C::GetDefaultObj()
{
	static class UAbility_ShrineCompletion_AttributeMods_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbility_ShrineCompletion_AttributeMods_C*>(UAbility_ShrineCompletion_AttributeMods_C::StaticClass()->DefaultObject);

	return Default;
}

}


