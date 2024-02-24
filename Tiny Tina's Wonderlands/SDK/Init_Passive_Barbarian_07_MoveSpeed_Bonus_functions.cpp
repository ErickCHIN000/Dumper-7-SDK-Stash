#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Init_Passive_Barbarian_07_MoveSpeed_Bonus.Init_Passive_Barbarian_07_MoveSpeed_Bonus_C
// (None)

class UClass* UInit_Passive_Barbarian_07_MoveSpeed_Bonus_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Init_Passive_Barbarian_07_MoveSpeed_Bonus_C");

	return Clss;
}


// Init_Passive_Barbarian_07_MoveSpeed_Bonus_C Init_Passive_Barbarian_07_MoveSpeed_Bonus.Default__Init_Passive_Barbarian_07_MoveSpeed_Bonus_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInit_Passive_Barbarian_07_MoveSpeed_Bonus_C* UInit_Passive_Barbarian_07_MoveSpeed_Bonus_C::GetDefaultObj()
{
	static class UInit_Passive_Barbarian_07_MoveSpeed_Bonus_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInit_Passive_Barbarian_07_MoveSpeed_Bonus_C*>(UInit_Passive_Barbarian_07_MoveSpeed_Bonus_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Init_Passive_Barbarian_07_MoveSpeed_Bonus.Init_Passive_Barbarian_07_MoveSpeed_Bonus_C.CalculateAttributeInitialValue
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIBPChar_Player_C>K2Node_DynamicCast_AsIBPChar_Player                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGbxAbility*                 CallFunc_GetClassFeat_Res                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDataTableValueFromHandle_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIFeat_Barbarian_C>K2Node_DynamicCast_AsIFeat_Barbarian                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsEnraged_Res                                           (ZeroConstructor, IsPlainOldData, NoDestructor)

float UInit_Passive_Barbarian_07_MoveSpeed_Bonus_C::CalculateAttributeInitialValue(class UObject* Context, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess, class UGbxAbility* CallFunc_GetClassFeat_Res, float CallFunc_GetDataTableValueFromHandle_ReturnValue, TScriptInterface<class IIFeat_Barbarian_C> K2Node_DynamicCast_AsIFeat_Barbarian, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_IsEnraged_Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Init_Passive_Barbarian_07_MoveSpeed_Bonus_C", "CalculateAttributeInitialValue");

	Params::UInit_Passive_Barbarian_07_MoveSpeed_Bonus_C_CalculateAttributeInitialValue_Params Parms{};

	Parms.Context = Context;
	Parms.K2Node_DynamicCast_AsIBPChar_Player = K2Node_DynamicCast_AsIBPChar_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetClassFeat_Res = CallFunc_GetClassFeat_Res;
	Parms.CallFunc_GetDataTableValueFromHandle_ReturnValue = CallFunc_GetDataTableValueFromHandle_ReturnValue;
	Parms.K2Node_DynamicCast_AsIFeat_Barbarian = K2Node_DynamicCast_AsIFeat_Barbarian;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_IsEnraged_Res = CallFunc_IsEnraged_Res;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


