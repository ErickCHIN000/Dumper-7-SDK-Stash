#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Init_Barbarian_13_MeleeSpeed.Init_Barbarian_13_MeleeSpeed_C
// (None)

class UClass* UInit_Barbarian_13_MeleeSpeed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Init_Barbarian_13_MeleeSpeed_C");

	return Clss;
}


// Init_Barbarian_13_MeleeSpeed_C Init_Barbarian_13_MeleeSpeed.Default__Init_Barbarian_13_MeleeSpeed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInit_Barbarian_13_MeleeSpeed_C* UInit_Barbarian_13_MeleeSpeed_C::GetDefaultObj()
{
	static class UInit_Barbarian_13_MeleeSpeed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInit_Barbarian_13_MeleeSpeed_C*>(UInit_Barbarian_13_MeleeSpeed_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Init_Barbarian_13_MeleeSpeed.Init_Barbarian_13_MeleeSpeed_C.CalculateAttributeInitialValue
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIBPChar_Player_C>K2Node_DynamicCast_AsIBPChar_Player                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AOakCharacter_Player*        K2Node_DynamicCast_AsOak_Character_Player                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGbxAbility*                 CallFunc_GetClassFeat_Res                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIFeat_Barbarian_C>K2Node_DynamicCast_AsIFeat_Barbarian                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGbxAbility*                 CallFunc_FindAbility_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEnraged_Res                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOakPassiveAbility*          K2Node_DynamicCast_AsOak_Passive_Ability                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDataTableValueFromHandle_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UInit_Barbarian_13_MeleeSpeed_C::CalculateAttributeInitialValue(class UObject* Context, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess1, class UGbxAbility* CallFunc_GetClassFeat_Res, TScriptInterface<class IIFeat_Barbarian_C> K2Node_DynamicCast_AsIFeat_Barbarian, bool K2Node_DynamicCast_bSuccess2, class UGbxAbility* CallFunc_FindAbility_ReturnValue, bool CallFunc_IsEnraged_Res, class UOakPassiveAbility* K2Node_DynamicCast_AsOak_Passive_Ability, bool K2Node_DynamicCast_bSuccess3, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Init_Barbarian_13_MeleeSpeed_C", "CalculateAttributeInitialValue");

	Params::UInit_Barbarian_13_MeleeSpeed_C_CalculateAttributeInitialValue_Params Parms{};

	Parms.Context = Context;
	Parms.K2Node_DynamicCast_AsIBPChar_Player = K2Node_DynamicCast_AsIBPChar_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsOak_Character_Player = K2Node_DynamicCast_AsOak_Character_Player;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_GetClassFeat_Res = CallFunc_GetClassFeat_Res;
	Parms.K2Node_DynamicCast_AsIFeat_Barbarian = K2Node_DynamicCast_AsIFeat_Barbarian;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_FindAbility_ReturnValue = CallFunc_FindAbility_ReturnValue;
	Parms.CallFunc_IsEnraged_Res = CallFunc_IsEnraged_Res;
	Parms.K2Node_DynamicCast_AsOak_Passive_Ability = K2Node_DynamicCast_AsOak_Passive_Ability;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_GetDataTableValueFromHandle_ReturnValue = CallFunc_GetDataTableValueFromHandle_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


