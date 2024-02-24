#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Init_EnchantmentWeight.Init_EnchantmentWeight_C
// (None)

class UClass* UInit_EnchantmentWeight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Init_EnchantmentWeight_C");

	return Clss;
}


// Init_EnchantmentWeight_C Init_EnchantmentWeight.Default__Init_EnchantmentWeight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInit_EnchantmentWeight_C* UInit_EnchantmentWeight_C::GetDefaultObj()
{
	static class UInit_EnchantmentWeight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInit_EnchantmentWeight_C*>(UInit_EnchantmentWeight_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Init_EnchantmentWeight.Init_EnchantmentWeight_C.IsReRollingEnchantment
// (Exec, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UInventoryBalanceStateComponent*InventoryBalanceState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsReRollingEnchantment                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsBeingReRolled_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UInit_EnchantmentWeight_C::IsReRollingEnchantment(class UInventoryBalanceStateComponent* InventoryBalanceState, bool* IsReRollingEnchantment, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsBeingReRolled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Init_EnchantmentWeight_C", "IsReRollingEnchantment");

	Params::UInit_EnchantmentWeight_C_IsReRollingEnchantment_Params Parms{};

	Parms.InventoryBalanceState = InventoryBalanceState;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsBeingReRolled_ReturnValue = CallFunc_IsBeingReRolled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsReRollingEnchantment != nullptr)
		*IsReRollingEnchantment = Parms.IsReRollingEnchantment;

}


// Function Init_EnchantmentWeight.Init_EnchantmentWeight_C.GetInventoryBalanceState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryBalanceStateComponent*InventoryBalanceState                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_DynamicCast_AsActor                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInventoryBalanceStateComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInit_EnchantmentWeight_C::GetInventoryBalanceState(class UObject* Context, class UInventoryBalanceStateComponent** InventoryBalanceState, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, class UInventoryBalanceStateComponent* CallFunc_GetComponentByClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Init_EnchantmentWeight_C", "GetInventoryBalanceState");

	Params::UInit_EnchantmentWeight_C_GetInventoryBalanceState_Params Parms{};

	Parms.Context = Context;
	Parms.K2Node_DynamicCast_AsActor = K2Node_DynamicCast_AsActor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InventoryBalanceState != nullptr)
		*InventoryBalanceState = Parms.InventoryBalanceState;

}


// Function Init_EnchantmentWeight.Init_EnchantmentWeight_C.GetRarityWeightScalar
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UInventoryBalanceStateComponent*InventoryBalanceState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              RarityWeightScale                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOakInventoryRarityData*     NewInventoryRarityData                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              WeightToUse                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryRarityData*        CallFunc_GetInventoryRarityData_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOakInventoryRarityData*     K2Node_DynamicCast_AsOak_Inventory_Rarity_Data                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FAttributeInitializationDataCallFunc_GetDataTableValue_OutValue                              (NoDestructor)
// bool                               CallFunc_GetDataTableValue_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FAttributeInitializationDataCallFunc_GetDataTableValue_OutValue1                             (NoDestructor)
// bool                               CallFunc_GetDataTableValue_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue2                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FAttributeInitializationDataCallFunc_GetDataTableValue_OutValue2                             (NoDestructor)
// bool                               CallFunc_GetDataTableValue_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UInit_EnchantmentWeight_C::GetRarityWeightScalar(class UInventoryBalanceStateComponent* InventoryBalanceState, float* RarityWeightScale, class UOakInventoryRarityData* NewInventoryRarityData, float WeightToUse, class UInventoryRarityData* CallFunc_GetInventoryRarityData_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UOakInventoryRarityData* K2Node_DynamicCast_AsOak_Inventory_Rarity_Data, bool K2Node_DynamicCast_bSuccess, const struct FAttributeInitializationData& CallFunc_GetDataTableValue_OutValue, bool CallFunc_GetDataTableValue_ReturnValue, const struct FAttributeInitializationData& CallFunc_GetDataTableValue_OutValue1, bool CallFunc_GetDataTableValue_ReturnValue1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue2, const struct FAttributeInitializationData& CallFunc_GetDataTableValue_OutValue2, bool CallFunc_GetDataTableValue_ReturnValue2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Init_EnchantmentWeight_C", "GetRarityWeightScalar");

	Params::UInit_EnchantmentWeight_C_GetRarityWeightScalar_Params Parms{};

	Parms.InventoryBalanceState = InventoryBalanceState;
	Parms.NewInventoryRarityData = NewInventoryRarityData;
	Parms.WeightToUse = WeightToUse;
	Parms.CallFunc_GetInventoryRarityData_ReturnValue = CallFunc_GetInventoryRarityData_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsOak_Inventory_Rarity_Data = K2Node_DynamicCast_AsOak_Inventory_Rarity_Data;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetDataTableValue_OutValue = CallFunc_GetDataTableValue_OutValue;
	Parms.CallFunc_GetDataTableValue_ReturnValue = CallFunc_GetDataTableValue_ReturnValue;
	Parms.CallFunc_GetDataTableValue_OutValue1 = CallFunc_GetDataTableValue_OutValue1;
	Parms.CallFunc_GetDataTableValue_ReturnValue1 = CallFunc_GetDataTableValue_ReturnValue1;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue1 = CallFunc_EqualEqual_ObjectObject_ReturnValue1;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue2 = CallFunc_EqualEqual_ObjectObject_ReturnValue2;
	Parms.CallFunc_GetDataTableValue_OutValue2 = CallFunc_GetDataTableValue_OutValue2;
	Parms.CallFunc_GetDataTableValue_ReturnValue2 = CallFunc_GetDataTableValue_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

	if (RarityWeightScale != nullptr)
		*RarityWeightScale = Parms.RarityWeightScale;

}


// Function Init_EnchantmentWeight.Init_EnchantmentWeight_C.CalculateAttributeInitialValue
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              BaseDropWeight                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryBalanceStateComponent*CallFunc_GetInventoryBalanceState_InventoryBalanceState          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAttributeInitializationDataCallFunc_GetDataTableValue_OutValue                              (NoDestructor)
// bool                               CallFunc_GetDataTableValue_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetRarityWeightScalar_RarityWeightScale                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsReRollingEnchantment_IsReRollingEnchantment           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetValueOfAttribute_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UInit_EnchantmentWeight_C::CalculateAttributeInitialValue(class UObject* Context, float BaseDropWeight, class UInventoryBalanceStateComponent* CallFunc_GetInventoryBalanceState_InventoryBalanceState, const struct FAttributeInitializationData& CallFunc_GetDataTableValue_OutValue, bool CallFunc_GetDataTableValue_ReturnValue, float CallFunc_GetRarityWeightScalar_RarityWeightScale, bool CallFunc_IsReRollingEnchantment_IsReRollingEnchantment, float CallFunc_GetValueOfAttribute_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Init_EnchantmentWeight_C", "CalculateAttributeInitialValue");

	Params::UInit_EnchantmentWeight_C_CalculateAttributeInitialValue_Params Parms{};

	Parms.Context = Context;
	Parms.BaseDropWeight = BaseDropWeight;
	Parms.CallFunc_GetInventoryBalanceState_InventoryBalanceState = CallFunc_GetInventoryBalanceState_InventoryBalanceState;
	Parms.CallFunc_GetDataTableValue_OutValue = CallFunc_GetDataTableValue_OutValue;
	Parms.CallFunc_GetDataTableValue_ReturnValue = CallFunc_GetDataTableValue_ReturnValue;
	Parms.CallFunc_GetRarityWeightScalar_RarityWeightScale = CallFunc_GetRarityWeightScalar_RarityWeightScale;
	Parms.CallFunc_IsReRollingEnchantment_IsReRollingEnchantment = CallFunc_IsReRollingEnchantment_IsReRollingEnchantment;
	Parms.CallFunc_GetValueOfAttribute_ReturnValue = CallFunc_GetValueOfAttribute_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue1 = CallFunc_Multiply_FloatFloat_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


