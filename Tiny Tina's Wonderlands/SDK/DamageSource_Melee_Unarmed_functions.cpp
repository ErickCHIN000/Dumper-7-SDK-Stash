#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageSource_Melee_Unarmed.DamageSource_Melee_Unarmed_C
// (None)

class UClass* UDamageSource_Melee_Unarmed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageSource_Melee_Unarmed_C");

	return Clss;
}


// DamageSource_Melee_Unarmed_C DamageSource_Melee_Unarmed.Default__DamageSource_Melee_Unarmed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageSource_Melee_Unarmed_C* UDamageSource_Melee_Unarmed_C::GetDefaultObj()
{
	static class UDamageSource_Melee_Unarmed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageSource_Melee_Unarmed_C*>(UDamageSource_Melee_Unarmed_C::StaticClass()->DefaultObject);

	return Default;
}

}


