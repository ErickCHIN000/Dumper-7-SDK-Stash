#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WeaponAnimationInterface.WeaponAnimationInterface_C
// (None)

class UClass* IWeaponAnimationInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeaponAnimationInterface_C");

	return Clss;
}


// WeaponAnimationInterface_C WeaponAnimationInterface.Default__WeaponAnimationInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IWeaponAnimationInterface_C* IWeaponAnimationInterface_C::GetDefaultObj()
{
	static class IWeaponAnimationInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IWeaponAnimationInterface_C*>(IWeaponAnimationInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WeaponAnimationInterface.WeaponAnimationInterface_C.WeaponFired
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Power                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IWeaponAnimationInterface_C::WeaponFired(float Power)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponAnimationInterface_C", "WeaponFired");

	Params::IWeaponAnimationInterface_C_WeaponFired_Params Parms{};

	Parms.Power = Power;

	UObject::ProcessEvent(Func, &Parms);

}

}


