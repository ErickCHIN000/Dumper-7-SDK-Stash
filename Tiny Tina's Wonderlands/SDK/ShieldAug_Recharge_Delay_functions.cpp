#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ShieldAug_Recharge_Delay.ShieldAug_Recharge_Delay_C
// (None)

class UClass* UShieldAug_Recharge_Delay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ShieldAug_Recharge_Delay_C");

	return Clss;
}


// ShieldAug_Recharge_Delay_C ShieldAug_Recharge_Delay.Default__ShieldAug_Recharge_Delay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UShieldAug_Recharge_Delay_C* UShieldAug_Recharge_Delay_C::GetDefaultObj()
{
	static class UShieldAug_Recharge_Delay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UShieldAug_Recharge_Delay_C*>(UShieldAug_Recharge_Delay_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ShieldAug_Recharge_Delay.ShieldAug_Recharge_Delay_C.SetValueForAttribute
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGbxAttributeData*           Attribute                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UShieldAug_Recharge_Delay_C::SetValueForAttribute(class UGbxAttributeData* Attribute, class UObject* Context, float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShieldAug_Recharge_Delay_C", "SetValueForAttribute");

	Params::UShieldAug_Recharge_Delay_C_SetValueForAttribute_Params Parms{};

	Parms.Attribute = Attribute;
	Parms.Context = Context;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ShieldAug_Recharge_Delay.ShieldAug_Recharge_Delay_C.GetValueForAttribute
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGbxAttributeData*           Attribute                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              MyReturn                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MyContext                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueOfAttribute_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_ShieldAugData       CallFunc_GetDataTableRowFromHandle_OutRow                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromHandle_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UShieldAug_Recharge_Delay_C::GetValueForAttribute(class UGbxAttributeData* Attribute, class UObject* Context, float MyReturn, class UObject* MyContext, float CallFunc_GetValueOfAttribute_ReturnValue, const struct FStruct_ShieldAugData& CallFunc_GetDataTableRowFromHandle_OutRow, bool CallFunc_GetDataTableRowFromHandle_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShieldAug_Recharge_Delay_C", "GetValueForAttribute");

	Params::UShieldAug_Recharge_Delay_C_GetValueForAttribute_Params Parms{};

	Parms.Attribute = Attribute;
	Parms.Context = Context;
	Parms.MyReturn = MyReturn;
	Parms.MyContext = MyContext;
	Parms.CallFunc_GetValueOfAttribute_ReturnValue = CallFunc_GetValueOfAttribute_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromHandle_OutRow = CallFunc_GetDataTableRowFromHandle_OutRow;
	Parms.CallFunc_GetDataTableRowFromHandle_ReturnValue = CallFunc_GetDataTableRowFromHandle_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


