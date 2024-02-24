#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Init_EnchantmentTierScalar_Base.Init_EnchantmentTierScalar_Base_C
// (None)

class UClass* UInit_EnchantmentTierScalar_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Init_EnchantmentTierScalar_Base_C");

	return Clss;
}


// Init_EnchantmentTierScalar_Base_C Init_EnchantmentTierScalar_Base.Default__Init_EnchantmentTierScalar_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInit_EnchantmentTierScalar_Base_C* UInit_EnchantmentTierScalar_Base_C::GetDefaultObj()
{
	static class UInit_EnchantmentTierScalar_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInit_EnchantmentTierScalar_Base_C*>(UInit_EnchantmentTierScalar_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Init_EnchantmentTierScalar_Base.Init_EnchantmentTierScalar_Base_C.CalculateAttributeInitialValue
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              TierMultiplier                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NewGearLevel                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAttributeInitializationDataCallFunc_GetDataTableValue_OutValue                              (NoDestructor)
// bool                               CallFunc_GetDataTableValue_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetValueOfAttribute_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAttributeInitializationDataCallFunc_GetDataTableValue_OutValue1                             (NoDestructor)
// bool                               CallFunc_GetDataTableValue_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FAttributeInitializationDataCallFunc_GetDataTableValue_OutValue2                             (NoDestructor)
// bool                               CallFunc_GetDataTableValue_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FAttributeInitializationDataCallFunc_GetDataTableValue_OutValue3                             (NoDestructor)
// bool                               CallFunc_GetDataTableValue_ReturnValue3                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FAttributeInitializationDataCallFunc_GetDataTableValue_OutValue4                             (NoDestructor)
// bool                               CallFunc_GetDataTableValue_ReturnValue4                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FAttributeInitializationDataCallFunc_GetDataTableValue_OutValue5                             (NoDestructor)
// bool                               CallFunc_GetDataTableValue_ReturnValue5                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FAttributeInitializationDataCallFunc_GetDataTableValue_OutValue6                             (NoDestructor)
// bool                               CallFunc_GetDataTableValue_ReturnValue6                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue3                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue3                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FAttributeInitializationDataCallFunc_GetDataTableValue_OutValue7                             (NoDestructor)
// bool                               CallFunc_GetDataTableValue_ReturnValue7                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_EvaluateAttributeInitializationData_ReturnValue         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue4                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue4                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue5                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue5                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue5                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue6                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue6                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

float UInit_EnchantmentTierScalar_Base_C::CalculateAttributeInitialValue(class UObject* Context, float TierMultiplier, int32 NewGearLevel, const struct FAttributeInitializationData& CallFunc_GetDataTableValue_OutValue, bool CallFunc_GetDataTableValue_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, const struct FAttributeInitializationData& CallFunc_GetDataTableValue_OutValue1, bool CallFunc_GetDataTableValue_ReturnValue1, const struct FAttributeInitializationData& CallFunc_GetDataTableValue_OutValue2, bool CallFunc_GetDataTableValue_ReturnValue2, const struct FAttributeInitializationData& CallFunc_GetDataTableValue_OutValue3, bool CallFunc_GetDataTableValue_ReturnValue3, const struct FAttributeInitializationData& CallFunc_GetDataTableValue_OutValue4, bool CallFunc_GetDataTableValue_ReturnValue4, const struct FAttributeInitializationData& CallFunc_GetDataTableValue_OutValue5, bool CallFunc_GetDataTableValue_ReturnValue5, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue1, bool CallFunc_Greater_IntInt_ReturnValue2, bool CallFunc_LessEqual_IntInt_ReturnValue1, bool CallFunc_LessEqual_IntInt_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue2, const struct FAttributeInitializationData& CallFunc_GetDataTableValue_OutValue6, bool CallFunc_GetDataTableValue_ReturnValue6, bool CallFunc_Greater_IntInt_ReturnValue3, bool CallFunc_LessEqual_IntInt_ReturnValue3, bool CallFunc_BooleanAND_ReturnValue3, const struct FAttributeInitializationData& CallFunc_GetDataTableValue_OutValue7, bool CallFunc_GetDataTableValue_ReturnValue7, float CallFunc_EvaluateAttributeInitializationData_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue4, bool CallFunc_Greater_IntInt_ReturnValue4, bool CallFunc_Greater_IntInt_ReturnValue5, bool CallFunc_LessEqual_IntInt_ReturnValue5, bool CallFunc_BooleanAND_ReturnValue4, bool CallFunc_BooleanAND_ReturnValue5, bool CallFunc_LessEqual_IntInt_ReturnValue6, bool CallFunc_BooleanAND_ReturnValue6)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Init_EnchantmentTierScalar_Base_C", "CalculateAttributeInitialValue");

	Params::UInit_EnchantmentTierScalar_Base_C_CalculateAttributeInitialValue_Params Parms{};

	Parms.Context = Context;
	Parms.TierMultiplier = TierMultiplier;
	Parms.NewGearLevel = NewGearLevel;
	Parms.CallFunc_GetDataTableValue_OutValue = CallFunc_GetDataTableValue_OutValue;
	Parms.CallFunc_GetDataTableValue_ReturnValue = CallFunc_GetDataTableValue_ReturnValue;
	Parms.CallFunc_GetValueOfAttribute_ReturnValue = CallFunc_GetValueOfAttribute_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_GetDataTableValue_OutValue1 = CallFunc_GetDataTableValue_OutValue1;
	Parms.CallFunc_GetDataTableValue_ReturnValue1 = CallFunc_GetDataTableValue_ReturnValue1;
	Parms.CallFunc_GetDataTableValue_OutValue2 = CallFunc_GetDataTableValue_OutValue2;
	Parms.CallFunc_GetDataTableValue_ReturnValue2 = CallFunc_GetDataTableValue_ReturnValue2;
	Parms.CallFunc_GetDataTableValue_OutValue3 = CallFunc_GetDataTableValue_OutValue3;
	Parms.CallFunc_GetDataTableValue_ReturnValue3 = CallFunc_GetDataTableValue_ReturnValue3;
	Parms.CallFunc_GetDataTableValue_OutValue4 = CallFunc_GetDataTableValue_OutValue4;
	Parms.CallFunc_GetDataTableValue_ReturnValue4 = CallFunc_GetDataTableValue_ReturnValue4;
	Parms.CallFunc_GetDataTableValue_OutValue5 = CallFunc_GetDataTableValue_OutValue5;
	Parms.CallFunc_GetDataTableValue_ReturnValue5 = CallFunc_GetDataTableValue_ReturnValue5;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue1 = CallFunc_Greater_IntInt_ReturnValue1;
	Parms.CallFunc_Greater_IntInt_ReturnValue2 = CallFunc_Greater_IntInt_ReturnValue2;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue1 = CallFunc_LessEqual_IntInt_ReturnValue1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue2 = CallFunc_LessEqual_IntInt_ReturnValue2;
	Parms.CallFunc_BooleanAND_ReturnValue1 = CallFunc_BooleanAND_ReturnValue1;
	Parms.CallFunc_BooleanAND_ReturnValue2 = CallFunc_BooleanAND_ReturnValue2;
	Parms.CallFunc_GetDataTableValue_OutValue6 = CallFunc_GetDataTableValue_OutValue6;
	Parms.CallFunc_GetDataTableValue_ReturnValue6 = CallFunc_GetDataTableValue_ReturnValue6;
	Parms.CallFunc_Greater_IntInt_ReturnValue3 = CallFunc_Greater_IntInt_ReturnValue3;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue3 = CallFunc_LessEqual_IntInt_ReturnValue3;
	Parms.CallFunc_BooleanAND_ReturnValue3 = CallFunc_BooleanAND_ReturnValue3;
	Parms.CallFunc_GetDataTableValue_OutValue7 = CallFunc_GetDataTableValue_OutValue7;
	Parms.CallFunc_GetDataTableValue_ReturnValue7 = CallFunc_GetDataTableValue_ReturnValue7;
	Parms.CallFunc_EvaluateAttributeInitializationData_ReturnValue = CallFunc_EvaluateAttributeInitializationData_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue4 = CallFunc_LessEqual_IntInt_ReturnValue4;
	Parms.CallFunc_Greater_IntInt_ReturnValue4 = CallFunc_Greater_IntInt_ReturnValue4;
	Parms.CallFunc_Greater_IntInt_ReturnValue5 = CallFunc_Greater_IntInt_ReturnValue5;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue5 = CallFunc_LessEqual_IntInt_ReturnValue5;
	Parms.CallFunc_BooleanAND_ReturnValue4 = CallFunc_BooleanAND_ReturnValue4;
	Parms.CallFunc_BooleanAND_ReturnValue5 = CallFunc_BooleanAND_ReturnValue5;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue6 = CallFunc_LessEqual_IntInt_ReturnValue6;
	Parms.CallFunc_BooleanAND_ReturnValue6 = CallFunc_BooleanAND_ReturnValue6;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


