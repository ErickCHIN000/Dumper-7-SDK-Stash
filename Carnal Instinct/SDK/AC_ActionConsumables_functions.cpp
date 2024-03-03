#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AC_ActionConsumables.AC_ActionConsumables_C
// (None)

class UClass* UAC_ActionConsumables_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AC_ActionConsumables_C");

	return Clss;
}


// AC_ActionConsumables_C AC_ActionConsumables.Default__AC_ActionConsumables_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAC_ActionConsumables_C* UAC_ActionConsumables_C::GetDefaultObj()
{
	static class UAC_ActionConsumables_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAC_ActionConsumables_C*>(UAC_ActionConsumables_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AC_ActionConsumables.AC_ActionConsumables_C.Add For Duration from Save
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_SaveBuffs                Consumable                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAC_ActionConsumables_C::Add_For_Duration_from_Save(const struct FS_SaveBuffs& Consumable, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_ActionConsumables_C", "Add For Duration from Save");

	Params::UAC_ActionConsumables_C_Add_For_Duration_from_Save_Params Parms{};

	Parms.Consumable = Consumable;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AC_ActionConsumables.AC_ActionConsumables_C.Add Over Duration from Save
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_SaveBuffs                Consumable                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// struct FS_SaveBuffs                K2Node_MakeStruct_S_SaveBuffs                                    (NoDestructor, HasGetValueTypeHash)
// struct FS_SaveBuffs                K2Node_MakeStruct_S_SaveBuffs_1                                  (NoDestructor, HasGetValueTypeHash)

void UAC_ActionConsumables_C::Add_Over_Duration_from_Save(const struct FS_SaveBuffs& Consumable, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, const struct FS_SaveBuffs& K2Node_MakeStruct_S_SaveBuffs, const struct FS_SaveBuffs& K2Node_MakeStruct_S_SaveBuffs_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_ActionConsumables_C", "Add Over Duration from Save");

	Params::UAC_ActionConsumables_C_Add_Over_Duration_from_Save_Params Parms{};

	Parms.Consumable = Consumable;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.K2Node_MakeStruct_S_SaveBuffs = K2Node_MakeStruct_S_SaveBuffs;
	Parms.K2Node_MakeStruct_S_SaveBuffs_1 = K2Node_MakeStruct_S_SaveBuffs_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AC_ActionConsumables.AC_ActionConsumables_C.Add For Duration
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_ConsumableAction         Consumable                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_SaveBuffs                K2Node_MakeStruct_S_SaveBuffs                                    (NoDestructor, HasGetValueTypeHash)
// struct FS_SaveBuffs                K2Node_MakeStruct_S_SaveBuffs_1                                  (NoDestructor, HasGetValueTypeHash)
// struct FS_SaveBuffs                K2Node_MakeStruct_S_SaveBuffs_2                                  (NoDestructor, HasGetValueTypeHash)
// struct FS_SaveBuffs                K2Node_MakeStruct_S_SaveBuffs_3                                  (NoDestructor, HasGetValueTypeHash)
// struct FS_SaveBuffs                K2Node_MakeStruct_S_SaveBuffs_4                                  (NoDestructor, HasGetValueTypeHash)

void UAC_ActionConsumables_C::Add_For_Duration(const struct FS_ConsumableAction& Consumable, bool K2Node_SwitchEnum_CmpSuccess, const struct FS_SaveBuffs& K2Node_MakeStruct_S_SaveBuffs, const struct FS_SaveBuffs& K2Node_MakeStruct_S_SaveBuffs_1, const struct FS_SaveBuffs& K2Node_MakeStruct_S_SaveBuffs_2, const struct FS_SaveBuffs& K2Node_MakeStruct_S_SaveBuffs_3, const struct FS_SaveBuffs& K2Node_MakeStruct_S_SaveBuffs_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_ActionConsumables_C", "Add For Duration");

	Params::UAC_ActionConsumables_C_Add_For_Duration_Params Parms{};

	Parms.Consumable = Consumable;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_MakeStruct_S_SaveBuffs = K2Node_MakeStruct_S_SaveBuffs;
	Parms.K2Node_MakeStruct_S_SaveBuffs_1 = K2Node_MakeStruct_S_SaveBuffs_1;
	Parms.K2Node_MakeStruct_S_SaveBuffs_2 = K2Node_MakeStruct_S_SaveBuffs_2;
	Parms.K2Node_MakeStruct_S_SaveBuffs_3 = K2Node_MakeStruct_S_SaveBuffs_3;
	Parms.K2Node_MakeStruct_S_SaveBuffs_4 = K2Node_MakeStruct_S_SaveBuffs_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AC_ActionConsumables.AC_ActionConsumables_C.Clear Value
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               MaxValue_                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_SaveBuffs                Consumable                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// enum class E_StatCategory          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_StatType              Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_StatType              Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_StatType              Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_StatType              Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_StatType              Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_StatType              Temp_byte_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_StatType              Temp_byte_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_StatType              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAC_ActionConsumables_C::Clear_Value(bool MaxValue_, const struct FS_SaveBuffs& Consumable, enum class E_StatCategory Temp_byte_Variable, enum class E_StatType Temp_byte_Variable_1, enum class E_StatType Temp_byte_Variable_2, enum class E_StatType Temp_byte_Variable_3, enum class E_StatType Temp_byte_Variable_4, enum class E_StatType Temp_byte_Variable_5, enum class E_StatType Temp_byte_Variable_6, enum class E_StatType Temp_byte_Variable_7, enum class E_StatType K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_ActionConsumables_C", "Clear Value");

	Params::UAC_ActionConsumables_C_Clear_Value_Params Parms{};

	Parms.MaxValue_ = MaxValue_;
	Parms.Consumable = Consumable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.Temp_byte_Variable_6 = Temp_byte_Variable_6;
	Parms.Temp_byte_Variable_7 = Temp_byte_Variable_7;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AC_ActionConsumables.AC_ActionConsumables_C.Add Value and Increment
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_SaveBuffs                S_ConsumableEffect                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Get_Max_Stat_Value_Value                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Get_Current_Stat_Value_Value                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Get_Max_Stat_Value_Value_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAC_ActionConsumables_C::Add_Value_and_Increment(struct FS_SaveBuffs& S_ConsumableEffect, int32 Temp_int_Variable, float CallFunc_Get_Max_Stat_Value_Value, float CallFunc_Get_Current_Stat_Value_Value, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Get_Max_Stat_Value_Value_1, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_ActionConsumables_C", "Add Value and Increment");

	Params::UAC_ActionConsumables_C_Add_Value_and_Increment_Params Parms{};

	Parms.S_ConsumableEffect = S_ConsumableEffect;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Get_Max_Stat_Value_Value = CallFunc_Get_Max_Stat_Value_Value;
	Parms.CallFunc_Get_Current_Stat_Value_Value = CallFunc_Get_Current_Stat_Value_Value;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Get_Max_Stat_Value_Value_1 = CallFunc_Get_Max_Stat_Value_Value_1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AC_ActionConsumables.AC_ActionConsumables_C.Initialize Circle Animation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_ConsumableAction         Consumable                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAC_ActionConsumables_C::Initialize_Circle_Animation(const struct FS_ConsumableAction& Consumable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_ActionConsumables_C", "Initialize Circle Animation");

	Params::UAC_ActionConsumables_C_Initialize_Circle_Animation_Params Parms{};

	Parms.Consumable = Consumable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AC_ActionConsumables.AC_ActionConsumables_C.Add Over Duration
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_ConsumableAction         Consumable                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// struct FS_SaveBuffs                K2Node_MakeStruct_S_SaveBuffs                                    (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// struct FS_SaveBuffs                K2Node_MakeStruct_S_SaveBuffs_1                                  (NoDestructor, HasGetValueTypeHash)

void UAC_ActionConsumables_C::Add_Over_Duration(const struct FS_ConsumableAction& Consumable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_Conv_IntToFloat_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FS_SaveBuffs& K2Node_MakeStruct_S_SaveBuffs, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, const struct FS_SaveBuffs& K2Node_MakeStruct_S_SaveBuffs_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_ActionConsumables_C", "Add Over Duration");

	Params::UAC_ActionConsumables_C_Add_Over_Duration_Params Parms{};

	Parms.Consumable = Consumable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_MakeStruct_S_SaveBuffs = K2Node_MakeStruct_S_SaveBuffs;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.K2Node_MakeStruct_S_SaveBuffs_1 = K2Node_MakeStruct_S_SaveBuffs_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AC_ActionConsumables.AC_ActionConsumables_C.Set Max Stat Value
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_StatCategory          Stat                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAC_ActionConsumables_C::Set_Max_Stat_Value(enum class E_StatCategory Stat, float Value, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_ActionConsumables_C", "Set Max Stat Value");

	Params::UAC_ActionConsumables_C_Set_Max_Stat_Value_Params Parms{};

	Parms.Stat = Stat;
	Parms.Value = Value;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AC_ActionConsumables.AC_ActionConsumables_C.Create Widget Notify
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWB_InventoryNotify_C*       CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAC_ActionConsumables_C::Create_Widget_Notify(class UWB_InventoryNotify_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_ActionConsumables_C", "Create Widget Notify");

	Params::UAC_ActionConsumables_C_Create_Widget_Notify_Params Parms{};

	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AC_ActionConsumables.AC_ActionConsumables_C.Set Stat Value
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_StatCategory          Stat                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAC_ActionConsumables_C::Set_Stat_Value(enum class E_StatCategory Stat, float Value, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_ActionConsumables_C", "Set Stat Value");

	Params::UAC_ActionConsumables_C_Set_Stat_Value_Params Parms{};

	Parms.Stat = Stat;
	Parms.Value = Value;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AC_ActionConsumables.AC_ActionConsumables_C.Get Current Stat Value
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class E_StatCategory          Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_StatCategory          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetStatValue_Value                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetStatValue_Value_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetStatValue_Value_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurrentValue_CurrentValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurrentValue_CurrentValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAC_ActionConsumables_C::Get_Current_Stat_Value(enum class E_StatCategory Index, float* Value, enum class E_StatCategory Temp_byte_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float CallFunc_GetStatValue_Value, float CallFunc_GetStatValue_Value_1, float CallFunc_GetStatValue_Value_2, float CallFunc_GetCurrentValue_CurrentValue, float CallFunc_GetCurrentValue_CurrentValue_1, float K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_ActionConsumables_C", "Get Current Stat Value");

	Params::UAC_ActionConsumables_C_Get_Current_Stat_Value_Params Parms{};

	Parms.Index = Index;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.CallFunc_GetStatValue_Value = CallFunc_GetStatValue_Value;
	Parms.CallFunc_GetStatValue_Value_1 = CallFunc_GetStatValue_Value_1;
	Parms.CallFunc_GetStatValue_Value_2 = CallFunc_GetStatValue_Value_2;
	Parms.CallFunc_GetCurrentValue_CurrentValue = CallFunc_GetCurrentValue_CurrentValue;
	Parms.CallFunc_GetCurrentValue_CurrentValue_1 = CallFunc_GetCurrentValue_CurrentValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function AC_ActionConsumables.AC_ActionConsumables_C.Get Max Stat Value
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class E_StatCategory          Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_StatCategory          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMaxValue_Value                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMaxValue_Value_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAC_ActionConsumables_C::Get_Max_Stat_Value(enum class E_StatCategory Index, float* Value, enum class E_StatCategory Temp_byte_Variable, float CallFunc_GetMaxValue_Value, float CallFunc_GetMaxValue_Value_1, float K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_ActionConsumables_C", "Get Max Stat Value");

	Params::UAC_ActionConsumables_C_Get_Max_Stat_Value_Params Parms{};

	Parms.Index = Index;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetMaxValue_Value = CallFunc_GetMaxValue_Value;
	Parms.CallFunc_GetMaxValue_Value_1 = CallFunc_GetMaxValue_Value_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function AC_ActionConsumables.AC_ActionConsumables_C.Play Sound on Use
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAC_ActionConsumables_C::Play_Sound_on_Use(bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_ActionConsumables_C", "Play Sound on Use");

	Params::UAC_ActionConsumables_C_Play_Sound_on_Use_Params Parms{};

	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AC_ActionConsumables.AC_ActionConsumables_C.Decrease Item Quantity
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWB_EquipmentSlot_C*         Pot                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemData                 Pot_ItemData                                                     (Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_ItemStacks               K2Node_MakeStruct_S_ItemStacks                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAC_ActionConsumables_C::Decrease_Item_Quantity(class UWB_EquipmentSlot_C* Pot, const struct FS_ItemData& Pot_ItemData, const struct FS_ItemStacks& K2Node_MakeStruct_S_ItemStacks, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_ActionConsumables_C", "Decrease Item Quantity");

	Params::UAC_ActionConsumables_C_Decrease_Item_Quantity_Params Parms{};

	Parms.Pot = Pot;
	Parms.Pot_ItemData = Pot_ItemData;
	Parms.K2Node_MakeStruct_S_ItemStacks = K2Node_MakeStruct_S_ItemStacks;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AC_ActionConsumables.AC_ActionConsumables_C.OnNotifyEnd_01A0C9354F27AEBFCFD540AEE0596E8C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAC_ActionConsumables_C::OnNotifyEnd_01A0C9354F27AEBFCFD540AEE0596E8C(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_ActionConsumables_C", "OnNotifyEnd_01A0C9354F27AEBFCFD540AEE0596E8C");

	Params::UAC_ActionConsumables_C_OnNotifyEnd_01A0C9354F27AEBFCFD540AEE0596E8C_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AC_ActionConsumables.AC_ActionConsumables_C.OnNotifyBegin_01A0C9354F27AEBFCFD540AEE0596E8C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAC_ActionConsumables_C::OnNotifyBegin_01A0C9354F27AEBFCFD540AEE0596E8C(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_ActionConsumables_C", "OnNotifyBegin_01A0C9354F27AEBFCFD540AEE0596E8C");

	Params::UAC_ActionConsumables_C_OnNotifyBegin_01A0C9354F27AEBFCFD540AEE0596E8C_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AC_ActionConsumables.AC_ActionConsumables_C.OnInterrupted_01A0C9354F27AEBFCFD540AEE0596E8C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAC_ActionConsumables_C::OnInterrupted_01A0C9354F27AEBFCFD540AEE0596E8C(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_ActionConsumables_C", "OnInterrupted_01A0C9354F27AEBFCFD540AEE0596E8C");

	Params::UAC_ActionConsumables_C_OnInterrupted_01A0C9354F27AEBFCFD540AEE0596E8C_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AC_ActionConsumables.AC_ActionConsumables_C.OnBlendOut_01A0C9354F27AEBFCFD540AEE0596E8C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAC_ActionConsumables_C::OnBlendOut_01A0C9354F27AEBFCFD540AEE0596E8C(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_ActionConsumables_C", "OnBlendOut_01A0C9354F27AEBFCFD540AEE0596E8C");

	Params::UAC_ActionConsumables_C_OnBlendOut_01A0C9354F27AEBFCFD540AEE0596E8C_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AC_ActionConsumables.AC_ActionConsumables_C.OnCompleted_01A0C9354F27AEBFCFD540AEE0596E8C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAC_ActionConsumables_C::OnCompleted_01A0C9354F27AEBFCFD540AEE0596E8C(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_ActionConsumables_C", "OnCompleted_01A0C9354F27AEBFCFD540AEE0596E8C");

	Params::UAC_ActionConsumables_C_OnCompleted_01A0C9354F27AEBFCFD540AEE0596E8C_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AC_ActionConsumables.AC_ActionConsumables_C.On Z Key Pressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAC_ActionConsumables_C::On_Z_Key_Pressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_ActionConsumables_C", "On Z Key Pressed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AC_ActionConsumables.AC_ActionConsumables_C.On X Key Pressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAC_ActionConsumables_C::On_X_Key_Pressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_ActionConsumables_C", "On X Key Pressed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AC_ActionConsumables.AC_ActionConsumables_C.On C Key Pressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAC_ActionConsumables_C::On_C_Key_Pressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_ActionConsumables_C", "On C Key Pressed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AC_ActionConsumables.AC_ActionConsumables_C.On V Key Pressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAC_ActionConsumables_C::On_V_Key_Pressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_ActionConsumables_C", "On V Key Pressed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AC_ActionConsumables.AC_ActionConsumables_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UAC_ActionConsumables_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_ActionConsumables_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AC_ActionConsumables.AC_ActionConsumables_C.Add Health OD
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAC_ActionConsumables_C::Add_Health_OD()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_ActionConsumables_C", "Add Health OD");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AC_ActionConsumables.AC_ActionConsumables_C.Add Stamina OD
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAC_ActionConsumables_C::Add_Stamina_OD()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_ActionConsumables_C", "Add Stamina OD");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AC_ActionConsumables.AC_ActionConsumables_C.Add Armor FD
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAC_ActionConsumables_C::Add_Armor_FD()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_ActionConsumables_C", "Add Armor FD");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AC_ActionConsumables.AC_ActionConsumables_C.Add Damage FD
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAC_ActionConsumables_C::Add_Damage_FD()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_ActionConsumables_C", "Add Damage FD");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AC_ActionConsumables.AC_ActionConsumables_C.Add AttackSpeed FD
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAC_ActionConsumables_C::Add_AttackSpeed_FD()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_ActionConsumables_C", "Add AttackSpeed FD");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AC_ActionConsumables.AC_ActionConsumables_C.Add MaxHealth FD
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAC_ActionConsumables_C::Add_MaxHealth_FD()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_ActionConsumables_C", "Add MaxHealth FD");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AC_ActionConsumables.AC_ActionConsumables_C.Add MaxStamina FD
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAC_ActionConsumables_C::Add_MaxStamina_FD()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_ActionConsumables_C", "Add MaxStamina FD");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AC_ActionConsumables.AC_ActionConsumables_C.Clear Armor FD
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAC_ActionConsumables_C::Clear_Armor_FD()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_ActionConsumables_C", "Clear Armor FD");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AC_ActionConsumables.AC_ActionConsumables_C.Clear Damage FD
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAC_ActionConsumables_C::Clear_Damage_FD()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_ActionConsumables_C", "Clear Damage FD");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AC_ActionConsumables.AC_ActionConsumables_C.Clear AttackSpeed FD
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAC_ActionConsumables_C::Clear_AttackSpeed_FD()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_ActionConsumables_C", "Clear AttackSpeed FD");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AC_ActionConsumables.AC_ActionConsumables_C.Clear MaxHealth FD
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAC_ActionConsumables_C::Clear_MaxHealth_FD()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_ActionConsumables_C", "Clear MaxHealth FD");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AC_ActionConsumables.AC_ActionConsumables_C.Clear MaxStamina FD
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAC_ActionConsumables_C::Clear_MaxStamina_FD()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_ActionConsumables_C", "Clear MaxStamina FD");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AC_ActionConsumables.AC_ActionConsumables_C.On Z Input
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAC_ActionConsumables_C::On_Z_Input()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_ActionConsumables_C", "On Z Input");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AC_ActionConsumables.AC_ActionConsumables_C.On X Input
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAC_ActionConsumables_C::On_X_Input()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_ActionConsumables_C", "On X Input");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AC_ActionConsumables.AC_ActionConsumables_C.On C Input
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAC_ActionConsumables_C::On_C_Input()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_ActionConsumables_C", "On C Input");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AC_ActionConsumables.AC_ActionConsumables_C.On V Input
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAC_ActionConsumables_C::On_V_Input()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_ActionConsumables_C", "On V Input");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AC_ActionConsumables.AC_ActionConsumables_C.ExecuteUbergraph_AC_ActionConsumables
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_2 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_3 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAC_Inventory_C*             CallFunc_Get_AC_Inventory_AC_Inventory                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Get_Current_Stat_Value_Value                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Get_Max_Stat_Value_Value                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Get_Max_Stat_Value_Value_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Get_Current_Stat_Value_Value_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Get_Max_Stat_Value_Value_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Get_Max_Stat_Value_Value_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_2                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// struct FS_SaveBuffs                K2Node_MakeStruct_S_SaveBuffs                                    (NoDestructor, HasGetValueTypeHash)
// struct FS_SaveBuffs                K2Node_MakeStruct_S_SaveBuffs_1                                  (NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Is_Game_Paused__Paused                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Is_Game_Paused__Paused_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Is_Game_Paused__Paused_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Is_Game_Paused__Paused_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_CombatCharacter_C*       CallFunc_Get_Player_Reference_Player                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_2                       (NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimation*            K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_3                       (NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_SaveBuffs                K2Node_MakeStruct_S_SaveBuffs_2                                  (NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_3                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ClassClass_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ClassClass_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_ItemData                 K2Node_Select_Default_1                                          (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Get_Max_Stat_Value_Value_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidClass_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Get_Current_Stat_Value_Value_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Get_Max_Stat_Value_Value_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ClassClass_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ClassClass_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_CombatCharacter_C*       CallFunc_Get_Player_Reference_Player_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_EquipmentSlot_C*         K2Node_Select_Default_2                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetStaticMesh_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_CombatCharacter_C*       CallFunc_Get_Player_Reference_Player_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class II_AbilityComponent_C>CallFunc_CanCastAbility_self_CastInput                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanCastAbility_Result                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_4                       (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_5                       (NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_6                       (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (ZeroConstructor, NoDestructor)
// struct FS_SaveBuffs                K2Node_MakeStruct_S_SaveBuffs_3                                  (NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_7                       (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_13                          (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_8                       (NoDestructor, HasGetValueTypeHash)
// struct FS_SaveBuffs                K2Node_MakeStruct_S_SaveBuffs_4                                  (NoDestructor, HasGetValueTypeHash)

void UAC_ActionConsumables_C::ExecuteUbergraph_AC_ActionConsumables(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName Temp_name_Variable, bool Temp_bool_IsClosed_Variable, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool Temp_bool_Has_Been_Initd_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName K2Node_CustomEvent_NotifyName_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool Temp_bool_Has_Been_Initd_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool Temp_bool_IsClosed_Variable_1, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_2, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_3, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, float CallFunc_Get_Current_Stat_Value_Value, float CallFunc_Get_Max_Stat_Value_Value, float CallFunc_Get_Max_Stat_Value_Value_1, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Get_Current_Stat_Value_Value_1, float CallFunc_Get_Max_Stat_Value_Value_2, float CallFunc_Get_Max_Stat_Value_Value_3, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable_2, int32 Temp_int_Variable, int32 Temp_int_Variable_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, const struct FS_SaveBuffs& K2Node_MakeStruct_S_SaveBuffs, const struct FS_SaveBuffs& K2Node_MakeStruct_S_SaveBuffs_1, int32 Temp_int_Variable_2, bool CallFunc_Is_Game_Paused__Paused, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Is_Game_Paused__Paused_1, bool CallFunc_Is_Game_Paused__Paused_2, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_Is_Game_Paused__Paused_3, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player, bool CallFunc_Not_PreBool_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_2, class UWidgetAnimation* K2Node_Select_Default, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_3, bool Temp_bool_IsClosed_Variable_2, const struct FS_SaveBuffs& K2Node_MakeStruct_S_SaveBuffs_2, bool Temp_bool_Has_Been_Initd_Variable_3, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ClassClass_ReturnValue, bool CallFunc_NotEqual_ClassClass_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, const struct FS_ItemData& K2Node_Select_Default_1, bool CallFunc_NotEqual_ByteByte_ReturnValue_2, float CallFunc_Get_Max_Stat_Value_Value_4, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_IsValidClass_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_Get_Current_Stat_Value_Value_2, float CallFunc_Get_Max_Stat_Value_Value_5, float CallFunc_Add_FloatFloat_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_Greater_FloatFloat_ReturnValue_2, bool CallFunc_NotEqual_ClassClass_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_NotEqual_ClassClass_ReturnValue_3, bool CallFunc_NotEqual_ByteByte_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_3, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player_1, class UWB_EquipmentSlot_C* K2Node_Select_Default_2, bool CallFunc_SetStaticMesh_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue_1, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player_2, bool K2Node_SwitchInteger_CmpSuccess, TScriptInterface<class II_AbilityComponent_C> CallFunc_CanCastAbility_self_CastInput, bool CallFunc_CanCastAbility_Result, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, bool Temp_bool_IsClosed_Variable_3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_5, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, const struct FS_SaveBuffs& K2Node_MakeStruct_S_SaveBuffs_3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_8, const struct FS_SaveBuffs& K2Node_MakeStruct_S_SaveBuffs_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AC_ActionConsumables_C", "ExecuteUbergraph_AC_ActionConsumables");

	Params::UAC_ActionConsumables_C_ExecuteUbergraph_AC_ActionConsumables_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_NotifyName_1 = K2Node_CustomEvent_NotifyName_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_NotifyName = K2Node_CustomEvent_NotifyName;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_CustomEvent_NotifyName_2 = K2Node_CustomEvent_NotifyName_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CustomEvent_NotifyName_3 = K2Node_CustomEvent_NotifyName_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CustomEvent_NotifyName_4 = K2Node_CustomEvent_NotifyName_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1 = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_2 = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_2;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_3 = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_3;
	Parms.CallFunc_Get_AC_Inventory_AC_Inventory = CallFunc_Get_AC_Inventory_AC_Inventory;
	Parms.CallFunc_Get_Current_Stat_Value_Value = CallFunc_Get_Current_Stat_Value_Value;
	Parms.CallFunc_Get_Max_Stat_Value_Value = CallFunc_Get_Max_Stat_Value_Value;
	Parms.CallFunc_Get_Max_Stat_Value_Value_1 = CallFunc_Get_Max_Stat_Value_Value_1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Get_Current_Stat_Value_Value_1 = CallFunc_Get_Current_Stat_Value_Value_1;
	Parms.CallFunc_Get_Max_Stat_Value_Value_2 = CallFunc_Get_Max_Stat_Value_Value_2;
	Parms.CallFunc_Get_Max_Stat_Value_Value_3 = CallFunc_Get_Max_Stat_Value_Value_3;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_1 = CallFunc_Greater_FloatFloat_ReturnValue_1;
	Parms.Temp_bool_Has_Been_Initd_Variable_2 = Temp_bool_Has_Been_Initd_Variable_2;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.K2Node_MakeStruct_S_SaveBuffs = K2Node_MakeStruct_S_SaveBuffs;
	Parms.K2Node_MakeStruct_S_SaveBuffs_1 = K2Node_MakeStruct_S_SaveBuffs_1;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.CallFunc_Is_Game_Paused__Paused = CallFunc_Is_Game_Paused__Paused;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Is_Game_Paused__Paused_1 = CallFunc_Is_Game_Paused__Paused_1;
	Parms.CallFunc_Is_Game_Paused__Paused_2 = CallFunc_Is_Game_Paused__Paused_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_Is_Game_Paused__Paused_3 = CallFunc_Is_Game_Paused__Paused_3;
	Parms.CallFunc_Get_Player_Reference_Player = CallFunc_Get_Player_Reference_Player;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_2 = CallFunc_K2_SetTimerDelegate_ReturnValue_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_3 = CallFunc_K2_SetTimerDelegate_ReturnValue_3;
	Parms.Temp_bool_IsClosed_Variable_2 = Temp_bool_IsClosed_Variable_2;
	Parms.K2Node_MakeStruct_S_SaveBuffs_2 = K2Node_MakeStruct_S_SaveBuffs_2;
	Parms.Temp_bool_Has_Been_Initd_Variable_3 = Temp_bool_Has_Been_Initd_Variable_3;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_NotEqual_ClassClass_ReturnValue = CallFunc_NotEqual_ClassClass_ReturnValue;
	Parms.CallFunc_NotEqual_ClassClass_ReturnValue_1 = CallFunc_NotEqual_ClassClass_ReturnValue_1;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_1 = CallFunc_NotEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_2 = CallFunc_NotEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_Get_Max_Stat_Value_Value_4 = CallFunc_Get_Max_Stat_Value_Value_4;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue_1 = CallFunc_IsValidClass_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Get_Current_Stat_Value_Value_2 = CallFunc_Get_Current_Stat_Value_Value_2;
	Parms.CallFunc_Get_Max_Stat_Value_Value_5 = CallFunc_Get_Max_Stat_Value_Value_5;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_2 = CallFunc_Greater_FloatFloat_ReturnValue_2;
	Parms.CallFunc_NotEqual_ClassClass_ReturnValue_2 = CallFunc_NotEqual_ClassClass_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_NotEqual_ClassClass_ReturnValue_3 = CallFunc_NotEqual_ClassClass_ReturnValue_3;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_3 = CallFunc_NotEqual_ByteByte_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_Get_Player_Reference_Player_1 = CallFunc_Get_Player_Reference_Player_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;
	Parms.CallFunc_SetStaticMesh_ReturnValue_1 = CallFunc_SetStaticMesh_ReturnValue_1;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Get_Player_Reference_Player_2 = CallFunc_Get_Player_Reference_Player_2;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_CanCastAbility_self_CastInput = CallFunc_CanCastAbility_self_CastInput;
	Parms.CallFunc_CanCastAbility_Result = CallFunc_CanCastAbility_Result;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.Temp_bool_IsClosed_Variable_3 = Temp_bool_IsClosed_Variable_3;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_4 = CallFunc_K2_SetTimerDelegate_ReturnValue_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_5 = CallFunc_K2_SetTimerDelegate_ReturnValue_5;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_6 = CallFunc_K2_SetTimerDelegate_ReturnValue_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_12 = K2Node_CreateDelegate_OutputDelegate_12;
	Parms.K2Node_MakeStruct_S_SaveBuffs_3 = K2Node_MakeStruct_S_SaveBuffs_3;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_7 = CallFunc_K2_SetTimerDelegate_ReturnValue_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_13 = K2Node_CreateDelegate_OutputDelegate_13;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_8 = CallFunc_K2_SetTimerDelegate_ReturnValue_8;
	Parms.K2Node_MakeStruct_S_SaveBuffs_4 = K2Node_MakeStruct_S_SaveBuffs_4;

	UObject::ProcessEvent(Func, &Parms);

}

}


