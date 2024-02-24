#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Init_TOR_ProjPerMagBarrel.Init_TOR_ProjPerMagBarrel_C
// (None)

class UClass* UInit_TOR_ProjPerMagBarrel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Init_TOR_ProjPerMagBarrel_C");

	return Clss;
}


// Init_TOR_ProjPerMagBarrel_C Init_TOR_ProjPerMagBarrel.Default__Init_TOR_ProjPerMagBarrel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInit_TOR_ProjPerMagBarrel_C* UInit_TOR_ProjPerMagBarrel_C::GetDefaultObj()
{
	static class UInit_TOR_ProjPerMagBarrel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInit_TOR_ProjPerMagBarrel_C*>(UInit_TOR_ProjPerMagBarrel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Init_TOR_ProjPerMagBarrel.Init_TOR_ProjPerMagBarrel_C.CalculateAttributeInitialValue
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABPWeap_Torgue_BaseWeapon_C* K2Node_DynamicCast_AsBPWeap_Torgue_Base_Weapon                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetValueOfAttribute_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

float UInit_TOR_ProjPerMagBarrel_C::CalculateAttributeInitialValue(class UObject* Context, class ABPWeap_Torgue_BaseWeapon_C* K2Node_DynamicCast_AsBPWeap_Torgue_Base_Weapon, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetValueOfAttribute_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Init_TOR_ProjPerMagBarrel_C", "CalculateAttributeInitialValue");

	Params::UInit_TOR_ProjPerMagBarrel_C_CalculateAttributeInitialValue_Params Parms{};

	Parms.Context = Context;
	Parms.K2Node_DynamicCast_AsBPWeap_Torgue_Base_Weapon = K2Node_DynamicCast_AsBPWeap_Torgue_Base_Weapon;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetValueOfAttribute_ReturnValue = CallFunc_GetValueOfAttribute_ReturnValue;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


