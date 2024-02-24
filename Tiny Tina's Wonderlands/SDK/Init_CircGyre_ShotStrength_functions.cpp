#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Init_CircGyre_ShotStrength.Init_CircGyre_ShotStrength_C
// (None)

class UClass* UInit_CircGyre_ShotStrength_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Init_CircGyre_ShotStrength_C");

	return Clss;
}


// Init_CircGyre_ShotStrength_C Init_CircGyre_ShotStrength.Default__Init_CircGyre_ShotStrength_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInit_CircGyre_ShotStrength_C* UInit_CircGyre_ShotStrength_C::GetDefaultObj()
{
	static class UInit_CircGyre_ShotStrength_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInit_CircGyre_ShotStrength_C*>(UInit_CircGyre_ShotStrength_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Init_CircGyre_ShotStrength.Init_CircGyre_ShotStrength_C.CalculateAttributeInitialValue
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              RarityMultiplier                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AWeapon*                     CallFunc_GetWeapon_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetLoadedAmmo_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetValueOfAttributeAsInteger_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UInit_CircGyre_ShotStrength_C::CalculateAttributeInitialValue(class UObject* Context, int32 RarityMultiplier, class AWeapon* CallFunc_GetWeapon_ReturnValue, int32 CallFunc_GetLoadedAmmo_ReturnValue, int32 CallFunc_GetValueOfAttributeAsInteger_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Init_CircGyre_ShotStrength_C", "CalculateAttributeInitialValue");

	Params::UInit_CircGyre_ShotStrength_C_CalculateAttributeInitialValue_Params Parms{};

	Parms.Context = Context;
	Parms.RarityMultiplier = RarityMultiplier;
	Parms.CallFunc_GetWeapon_ReturnValue = CallFunc_GetWeapon_ReturnValue;
	Parms.CallFunc_GetLoadedAmmo_ReturnValue = CallFunc_GetLoadedAmmo_ReturnValue;
	Parms.CallFunc_GetValueOfAttributeAsInteger_ReturnValue = CallFunc_GetValueOfAttributeAsInteger_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue1 = CallFunc_Conv_IntToFloat_ReturnValue1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


