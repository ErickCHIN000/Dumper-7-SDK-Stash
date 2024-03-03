#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ExtendedStatComponent.ExtendedStatComponent_C
// (None)

class UClass* UExtendedStatComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ExtendedStatComponent_C");

	return Clss;
}


// ExtendedStatComponent_C ExtendedStatComponent.Default__ExtendedStatComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UExtendedStatComponent_C* UExtendedStatComponent_C::GetDefaultObj()
{
	static class UExtendedStatComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UExtendedStatComponent_C*>(UExtendedStatComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ExtendedStatComponent.ExtendedStatComponent_C.SetCurrentValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               InterruptRegeneration                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetMaxValue_Value                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMaxValue_Value_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UExtendedStatComponent_C::SetCurrentValue(float Value, bool InterruptRegeneration, float CallFunc_GetMaxValue_Value, float CallFunc_GetMaxValue_Value_1, float CallFunc_FClamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExtendedStatComponent_C", "SetCurrentValue");

	Params::UExtendedStatComponent_C_SetCurrentValue_Params Parms{};

	Parms.Value = Value;
	Parms.InterruptRegeneration = InterruptRegeneration;
	Parms.CallFunc_GetMaxValue_Value = CallFunc_GetMaxValue_Value;
	Parms.CallFunc_GetMaxValue_Value_1 = CallFunc_GetMaxValue_Value_1;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ExtendedStatComponent.ExtendedStatComponent_C.RemoveModifier
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMaxValue_Value                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UExtendedStatComponent_C::RemoveModifier(float Value, float CallFunc_GetMaxValue_Value, float CallFunc_FClamp_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExtendedStatComponent_C", "RemoveModifier");

	Params::UExtendedStatComponent_C_RemoveModifier_Params Parms{};

	Parms.Value = Value;
	Parms.CallFunc_GetMaxValue_Value = CallFunc_GetMaxValue_Value;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ExtendedStatComponent.ExtendedStatComponent_C.AddModifier
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMaxValue_Value                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UExtendedStatComponent_C::AddModifier(float Value, float CallFunc_GetMaxValue_Value, float CallFunc_FClamp_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExtendedStatComponent_C", "AddModifier");

	Params::UExtendedStatComponent_C_AddModifier_Params Parms{};

	Parms.Value = Value;
	Parms.CallFunc_GetMaxValue_Value = CallFunc_GetMaxValue_Value;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ExtendedStatComponent.ExtendedStatComponent_C.GetMaxValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UExtendedStatComponent_C::GetMaxValue(float* Value, float CallFunc_Add_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExtendedStatComponent_C", "GetMaxValue");

	Params::UExtendedStatComponent_C_GetMaxValue_Params Parms{};

	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function ExtendedStatComponent.ExtendedStatComponent_C.ChangeRegenPercent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Percent                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UExtendedStatComponent_C::ChangeRegenPercent(int32 Percent, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExtendedStatComponent_C", "ChangeRegenPercent");

	Params::UExtendedStatComponent_C_ChangeRegenPercent_Params Parms{};

	Parms.Percent = Percent;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ExtendedStatComponent.ExtendedStatComponent_C.GetCurrentValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              CurrentValue                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UExtendedStatComponent_C::GetCurrentValue(float* CurrentValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExtendedStatComponent_C", "GetCurrentValue");

	Params::UExtendedStatComponent_C_GetCurrentValue_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CurrentValue != nullptr)
		*CurrentValue = Parms.CurrentValue;

}


// Function ExtendedStatComponent.ExtendedStatComponent_C.ClearRegenTimer
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UExtendedStatComponent_C::ClearRegenTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExtendedStatComponent_C", "ClearRegenTimer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ExtendedStatComponent.ExtendedStatComponent_C.RegenTick
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetMaxValue_Value                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UExtendedStatComponent_C::RegenTick(float CallFunc_GetMaxValue_Value, bool CallFunc_Less_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExtendedStatComponent_C", "RegenTick");

	Params::UExtendedStatComponent_C_RegenTick_Params Parms{};

	Parms.CallFunc_GetMaxValue_Value = CallFunc_GetMaxValue_Value;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ExtendedStatComponent.ExtendedStatComponent_C.ModifyStat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               InterruptRegeneration                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              LocalValue                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UExtendedStatComponent_C::ModifyStat(float Value, bool InterruptRegeneration, float LocalValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExtendedStatComponent_C", "ModifyStat");

	Params::UExtendedStatComponent_C_ModifyStat_Params Parms{};

	Parms.Value = Value;
	Parms.InterruptRegeneration = InterruptRegeneration;
	Parms.LocalValue = LocalValue;
	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue = CallFunc_NotEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ExtendedStatComponent.ExtendedStatComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UExtendedStatComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExtendedStatComponent_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ExtendedStatComponent.ExtendedStatComponent_C.RefreshRegenTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UExtendedStatComponent_C::RefreshRegenTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExtendedStatComponent_C", "RefreshRegenTimer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ExtendedStatComponent.ExtendedStatComponent_C.StartRegenerating
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UExtendedStatComponent_C::StartRegenerating()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExtendedStatComponent_C", "StartRegenerating");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ExtendedStatComponent.ExtendedStatComponent_C.OnModifierAdded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_StatType              Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UExtendedStatComponent_C::OnModifierAdded(enum class E_StatType Type, float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExtendedStatComponent_C", "OnModifierAdded");

	Params::UExtendedStatComponent_C_OnModifierAdded_Params Parms{};

	Parms.Type = Type;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ExtendedStatComponent.ExtendedStatComponent_C.OnModifierRemoved
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_StatType              Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UExtendedStatComponent_C::OnModifierRemoved(enum class E_StatType Type, float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExtendedStatComponent_C", "OnModifierRemoved");

	Params::UExtendedStatComponent_C_OnModifierRemoved_Params Parms{};

	Parms.Type = Type;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ExtendedStatComponent.ExtendedStatComponent_C.InitStatManager
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UExtendedStatComponent_C::InitStatManager()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExtendedStatComponent_C", "InitStatManager");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ExtendedStatComponent.ExtendedStatComponent_C.OnBaseValueChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_StatType              Stat                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UExtendedStatComponent_C::OnBaseValueChanged(enum class E_StatType Stat, float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExtendedStatComponent_C", "OnBaseValueChanged");

	Params::UExtendedStatComponent_C_OnBaseValueChanged_Params Parms{};

	Parms.Stat = Stat;
	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ExtendedStatComponent.ExtendedStatComponent_C.ExecuteUbergraph_ExtendedStatComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMaxValue_Value                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_StatType              K2Node_CustomEvent_Type_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Value_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStatsManagerComponent_C*    CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_StatType              K2Node_CustomEvent_Type                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Value                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_K2_IsTimerActiveHandle_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetStatValue_Value                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// enum class E_StatType              K2Node_CustomEvent_Stat                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_NewValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UExtendedStatComponent_C::ExecuteUbergraph_ExtendedStatComponent(int32 EntryPoint, float CallFunc_GetMaxValue_Value, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, enum class E_StatType K2Node_CustomEvent_Type_1, float K2Node_CustomEvent_Value_1, class UStatsManagerComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class E_StatType K2Node_CustomEvent_Type, float K2Node_CustomEvent_Value, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_GetStatValue_Value, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, enum class E_StatType K2Node_CustomEvent_Stat, float K2Node_CustomEvent_NewValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExtendedStatComponent_C", "ExecuteUbergraph_ExtendedStatComponent");

	Params::UExtendedStatComponent_C_ExecuteUbergraph_ExtendedStatComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetMaxValue_Value = CallFunc_GetMaxValue_Value;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_CustomEvent_Type_1 = K2Node_CustomEvent_Type_1;
	Parms.K2Node_CustomEvent_Value_1 = K2Node_CustomEvent_Value_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_Type = K2Node_CustomEvent_Type;
	Parms.K2Node_CustomEvent_Value = K2Node_CustomEvent_Value;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_K2_IsTimerActiveHandle_ReturnValue = CallFunc_K2_IsTimerActiveHandle_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetStatValue_Value = CallFunc_GetStatValue_Value;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CustomEvent_Stat = K2Node_CustomEvent_Stat;
	Parms.K2Node_CustomEvent_NewValue = K2Node_CustomEvent_NewValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ExtendedStatComponent.ExtendedStatComponent_C.OnValueChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              MaxValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UExtendedStatComponent_C::OnValueChanged__DelegateSignature(float NewValue, float MaxValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExtendedStatComponent_C", "OnValueChanged__DelegateSignature");

	Params::UExtendedStatComponent_C_OnValueChanged__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.MaxValue = MaxValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


