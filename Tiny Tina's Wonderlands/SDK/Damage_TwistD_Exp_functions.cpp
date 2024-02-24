#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Damage_TwistD_Exp.Damage_TwistD_Exp_C
// (None)

class UClass* UDamage_TwistD_Exp_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Damage_TwistD_Exp_C");

	return Clss;
}


// Damage_TwistD_Exp_C Damage_TwistD_Exp.Default__Damage_TwistD_Exp_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamage_TwistD_Exp_C* UDamage_TwistD_Exp_C::GetDefaultObj()
{
	static class UDamage_TwistD_Exp_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamage_TwistD_Exp_C*>(UDamage_TwistD_Exp_C::StaticClass()->DefaultObject);

	return Default;
}

}


