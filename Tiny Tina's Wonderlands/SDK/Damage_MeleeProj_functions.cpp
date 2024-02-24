#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Damage_MeleeProj.Damage_MeleeProj_C
// (None)

class UClass* UDamage_MeleeProj_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Damage_MeleeProj_C");

	return Clss;
}


// Damage_MeleeProj_C Damage_MeleeProj.Default__Damage_MeleeProj_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamage_MeleeProj_C* UDamage_MeleeProj_C::GetDefaultObj()
{
	static class UDamage_MeleeProj_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamage_MeleeProj_C*>(UDamage_MeleeProj_C::StaticClass()->DefaultObject);

	return Default;
}

}


