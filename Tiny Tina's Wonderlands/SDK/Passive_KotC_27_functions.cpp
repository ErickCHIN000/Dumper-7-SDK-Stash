#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Passive_KotC_27.Passive_KotC_27_C
// (None)

class UClass* UPassive_KotC_27_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Passive_KotC_27_C");

	return Clss;
}


// Passive_KotC_27_C Passive_KotC_27.Default__Passive_KotC_27_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPassive_KotC_27_C* UPassive_KotC_27_C::GetDefaultObj()
{
	static class UPassive_KotC_27_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPassive_KotC_27_C*>(UPassive_KotC_27_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Passive_KotC_27.Passive_KotC_27_C.GetManualHUDIconValues
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// int32                              OutStackCount                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              OutDuration                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              OutTimeRemaining                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable2                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable3                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAbilityTimerActive_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAbilityTimerActive_ReturnValue1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetAbilityTimerValue_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAbilityTimerActive_ReturnValue2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetDataTableValueFromHandle_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAbilityTimerValue_ReturnValue1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAbilityTimerActive_ReturnValue3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPassive_KotC_27_C::GetManualHUDIconValues(int32* OutStackCount, float* OutDuration, float* OutTimeRemaining, int32 Temp_int_Variable, int32 Temp_int_Variable1, bool Temp_bool_Variable, int32 Temp_int_Variable2, int32 Temp_int_Variable3, bool Temp_bool_Variable1, float Temp_float_Variable, bool Temp_bool_Variable2, float Temp_float_Variable1, bool CallFunc_IsAbilityTimerActive_ReturnValue, bool CallFunc_IsAbilityTimerActive_ReturnValue1, float CallFunc_GetAbilityTimerValue_ReturnValue, bool CallFunc_IsAbilityTimerActive_ReturnValue2, int32 K2Node_Select_Default, bool Temp_bool_Variable3, float CallFunc_GetDataTableValueFromHandle_ReturnValue, int32 K2Node_Select1_Default, float CallFunc_GetAbilityTimerValue_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_FMax_ReturnValue, bool CallFunc_IsAbilityTimerActive_ReturnValue3, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, float K2Node_Select2_Default, float K2Node_Select3_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Passive_KotC_27_C", "GetManualHUDIconValues");

	Params::UPassive_KotC_27_C_GetManualHUDIconValues_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable1 = Temp_int_Variable1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable2 = Temp_int_Variable2;
	Parms.Temp_int_Variable3 = Temp_int_Variable3;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_float_Variable1 = Temp_float_Variable1;
	Parms.CallFunc_IsAbilityTimerActive_ReturnValue = CallFunc_IsAbilityTimerActive_ReturnValue;
	Parms.CallFunc_IsAbilityTimerActive_ReturnValue1 = CallFunc_IsAbilityTimerActive_ReturnValue1;
	Parms.CallFunc_GetAbilityTimerValue_ReturnValue = CallFunc_GetAbilityTimerValue_ReturnValue;
	Parms.CallFunc_IsAbilityTimerActive_ReturnValue2 = CallFunc_IsAbilityTimerActive_ReturnValue2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.CallFunc_GetDataTableValueFromHandle_ReturnValue = CallFunc_GetDataTableValueFromHandle_ReturnValue;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.CallFunc_GetAbilityTimerValue_ReturnValue1 = CallFunc_GetAbilityTimerValue_ReturnValue1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_IsAbilityTimerActive_ReturnValue3 = CallFunc_IsAbilityTimerActive_ReturnValue3;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (OutStackCount != nullptr)
		*OutStackCount = Parms.OutStackCount;

	if (OutDuration != nullptr)
		*OutDuration = Parms.OutDuration;

	if (OutTimeRemaining != nullptr)
		*OutTimeRemaining = Parms.OutTimeRemaining;

}


// Function Passive_KotC_27.Passive_KotC_27_C.OakPassiveOnCausedAnyDamage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DamageInstigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxDamageType*              DamageType                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageSource*               DamageSource                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamagedActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCausedDamageDetails        Details                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void UPassive_KotC_27_C::OakPassiveOnCausedAnyDamage(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Passive_KotC_27_C", "OakPassiveOnCausedAnyDamage");

	Params::UPassive_KotC_27_C_OakPassiveOnCausedAnyDamage_Params Parms{};

	Parms.DamageInstigator = DamageInstigator;
	Parms.Damage = Damage;
	Parms.DamageType = DamageType;
	Parms.DamageSource = DamageSource;
	Parms.DamagedActor = DamagedActor;
	Parms.Details = Details;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Passive_KotC_27.Passive_KotC_27_C.OakPassiveOnCausedBonusDamage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DamageInstigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxDamageType*              DamageType                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageSource*               DamageSource                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamagedActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCausedDamageDetails        Details                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void UPassive_KotC_27_C::OakPassiveOnCausedBonusDamage(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Passive_KotC_27_C", "OakPassiveOnCausedBonusDamage");

	Params::UPassive_KotC_27_C_OakPassiveOnCausedBonusDamage_Params Parms{};

	Parms.DamageInstigator = DamageInstigator;
	Parms.Damage = Damage;
	Parms.DamageType = DamageType;
	Parms.DamageSource = DamageSource;
	Parms.DamagedActor = DamagedActor;
	Parms.Details = Details;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Passive_KotC_27.Passive_KotC_27_C.ExecuteUbergraph_Passive_KotC_27
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_DamageInstigator1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Damage1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxDamageType*              K2Node_Event_DamageType1                                         (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageSource*               K2Node_Event_DamageSource1                                       (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_DamagedActor1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCausedDamageDetails        K2Node_Event_Details1                                            (ContainsInstancedReference)
// float                              CallFunc_GetDataTableValueFromHandle_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOakAbilityTimerSpec        K2Node_MakeStruct_OakAbilityTimerSpec                            (NoDestructor)
// float                              CallFunc_GetDataTableValueFromHandle_ReturnValue1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOakAbilityTimerSpec        K2Node_MakeStruct_OakAbilityTimerSpec1                           (NoDestructor)
// struct FStatusEffectSpec           K2Node_MakeStruct_StatusEffectSpec                               (NoDestructor)
// struct FStatusEffectInstanceReferenceCallFunc_AddStatusEffect_ReturnValue                             (NoDestructor, ContainsInstancedReference)
// struct FStatusEffectSpec           K2Node_MakeStruct_StatusEffectSpec1                              (NoDestructor)
// class AActor*                      K2Node_Event_DamageInstigator                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Damage                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxDamageType*              K2Node_Event_DamageType                                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageSource*               K2Node_Event_DamageSource                                        (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_DamagedActor                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCausedDamageDetails        K2Node_Event_Details                                             (ContainsInstancedReference)
// struct FStatusEffectInstanceReferenceCallFunc_AddStatusEffect_ReturnValue1                            (NoDestructor, ContainsInstancedReference)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ClassIsChildOf_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ClassIsChildOf_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPassive_KotC_27_C::ExecuteUbergraph_Passive_KotC_27(int32 EntryPoint, class AActor* K2Node_Event_DamageInstigator1, float K2Node_Event_Damage1, class UGbxDamageType* K2Node_Event_DamageType1, class UDamageSource* K2Node_Event_DamageSource1, class AActor* K2Node_Event_DamagedActor1, const struct FCausedDamageDetails& K2Node_Event_Details1, float CallFunc_GetDataTableValueFromHandle_ReturnValue, const struct FOakAbilityTimerSpec& K2Node_MakeStruct_OakAbilityTimerSpec, float CallFunc_GetDataTableValueFromHandle_ReturnValue1, const struct FOakAbilityTimerSpec& K2Node_MakeStruct_OakAbilityTimerSpec1, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec1, class AActor* K2Node_Event_DamageInstigator, float K2Node_Event_Damage, class UGbxDamageType* K2Node_Event_DamageType, class UDamageSource* K2Node_Event_DamageSource, class AActor* K2Node_Event_DamagedActor, const struct FCausedDamageDetails& K2Node_Event_Details, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue1, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Passive_KotC_27_C", "ExecuteUbergraph_Passive_KotC_27");

	Params::UPassive_KotC_27_C_ExecuteUbergraph_Passive_KotC_27_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DamageInstigator1 = K2Node_Event_DamageInstigator1;
	Parms.K2Node_Event_Damage1 = K2Node_Event_Damage1;
	Parms.K2Node_Event_DamageType1 = K2Node_Event_DamageType1;
	Parms.K2Node_Event_DamageSource1 = K2Node_Event_DamageSource1;
	Parms.K2Node_Event_DamagedActor1 = K2Node_Event_DamagedActor1;
	Parms.K2Node_Event_Details1 = K2Node_Event_Details1;
	Parms.CallFunc_GetDataTableValueFromHandle_ReturnValue = CallFunc_GetDataTableValueFromHandle_ReturnValue;
	Parms.K2Node_MakeStruct_OakAbilityTimerSpec = K2Node_MakeStruct_OakAbilityTimerSpec;
	Parms.CallFunc_GetDataTableValueFromHandle_ReturnValue1 = CallFunc_GetDataTableValueFromHandle_ReturnValue1;
	Parms.K2Node_MakeStruct_OakAbilityTimerSpec1 = K2Node_MakeStruct_OakAbilityTimerSpec1;
	Parms.K2Node_MakeStruct_StatusEffectSpec = K2Node_MakeStruct_StatusEffectSpec;
	Parms.CallFunc_AddStatusEffect_ReturnValue = CallFunc_AddStatusEffect_ReturnValue;
	Parms.K2Node_MakeStruct_StatusEffectSpec1 = K2Node_MakeStruct_StatusEffectSpec1;
	Parms.K2Node_Event_DamageInstigator = K2Node_Event_DamageInstigator;
	Parms.K2Node_Event_Damage = K2Node_Event_Damage;
	Parms.K2Node_Event_DamageType = K2Node_Event_DamageType;
	Parms.K2Node_Event_DamageSource = K2Node_Event_DamageSource;
	Parms.K2Node_Event_DamagedActor = K2Node_Event_DamagedActor;
	Parms.K2Node_Event_Details = K2Node_Event_Details;
	Parms.CallFunc_AddStatusEffect_ReturnValue1 = CallFunc_AddStatusEffect_ReturnValue1;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_ClassIsChildOf_ReturnValue = CallFunc_ClassIsChildOf_ReturnValue;
	Parms.CallFunc_ClassIsChildOf_ReturnValue1 = CallFunc_ClassIsChildOf_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}

}


