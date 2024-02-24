#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AlertnessComponent.BP_AlertnessComponent_C
// (None)

class UClass* UBP_AlertnessComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AlertnessComponent_C");

	return Clss;
}


// BP_AlertnessComponent_C BP_AlertnessComponent.Default__BP_AlertnessComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AlertnessComponent_C* UBP_AlertnessComponent_C::GetDefaultObj()
{
	static class UBP_AlertnessComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AlertnessComponent_C*>(UBP_AlertnessComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AlertnessComponent.BP_AlertnessComponent_C.ChangeState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAlertnessLevelType     NewState                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Get_Is_Valid_State_Transition_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AlertnessComponent_C::ChangeState(enum class EAlertnessLevelType NewState, bool CallFunc_Get_Is_Valid_State_Transition_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AlertnessComponent_C", "ChangeState");

	Params::UBP_AlertnessComponent_C_ChangeState_Params Parms{};

	Parms.NewState = NewState;
	Parms.CallFunc_Get_Is_Valid_State_Transition_ReturnValue = CallFunc_Get_Is_Valid_State_Transition_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AlertnessComponent.BP_AlertnessComponent_C.Get Is Valid State Transition
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAlertnessLevelType     NewState                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAlertnessLevelType     CallFunc_GetAlertness_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAlertnessLevelType     Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EAlertnessLevelType>K2Node_Select_Default                                            (ReferenceParm)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_AlertnessComponent_C::Get_Is_Valid_State_Transition(enum class EAlertnessLevelType NewState, enum class EAlertnessLevelType CallFunc_GetAlertness_ReturnValue, enum class EAlertnessLevelType Temp_byte_Variable, TArray<enum class EAlertnessLevelType>& K2Node_Select_Default, bool CallFunc_Array_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AlertnessComponent_C", "Get Is Valid State Transition");

	Params::UBP_AlertnessComponent_C_Get_Is_Valid_State_Transition_Params Parms{};

	Parms.NewState = NewState;
	Parms.CallFunc_GetAlertness_ReturnValue = CallFunc_GetAlertness_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_AlertnessComponent.BP_AlertnessComponent_C.EndAim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_AlertnessComponent_C::EndAim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AlertnessComponent_C", "EndAim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AlertnessComponent.BP_AlertnessComponent_C.BeginAim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_AlertnessComponent_C::BeginAim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AlertnessComponent_C", "BeginAim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AlertnessComponent.BP_AlertnessComponent_C.BeginBlock
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_AlertnessComponent_C::BeginBlock()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AlertnessComponent_C", "BeginBlock");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AlertnessComponent.BP_AlertnessComponent_C.Reloaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_AlertnessComponent_C::Reloaded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AlertnessComponent_C", "Reloaded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AlertnessComponent.BP_AlertnessComponent_C.EndBlock
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_AlertnessComponent_C::EndBlock()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AlertnessComponent_C", "EndBlock");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AlertnessComponent.BP_AlertnessComponent_C.ReadyTimedOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_AlertnessComponent_C::ReadyTimedOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AlertnessComponent_C", "ReadyTimedOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AlertnessComponent.BP_AlertnessComponent_C.BeginSpellCast
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_AlertnessComponent_C::BeginSpellCast()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AlertnessComponent_C", "BeginSpellCast");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AlertnessComponent.BP_AlertnessComponent_C.EndSpellCast
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_AlertnessComponent_C::EndSpellCast()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AlertnessComponent_C", "EndSpellCast");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AlertnessComponent.BP_AlertnessComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_AlertnessComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AlertnessComponent_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AlertnessComponent.BP_AlertnessComponent_C.OnPlayerStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAlertnessLevelType     Alertness                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AlertnessComponent_C::OnPlayerStateChanged(enum class EAlertnessLevelType Alertness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AlertnessComponent_C", "OnPlayerStateChanged");

	Params::UBP_AlertnessComponent_C_OnPlayerStateChanged_Params Parms{};

	Parms.Alertness = Alertness;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AlertnessComponent.BP_AlertnessComponent_C.ReadyStateTimedOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_AlertnessComponent_C::ReadyStateTimedOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AlertnessComponent_C", "ReadyStateTimedOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AlertnessComponent.BP_AlertnessComponent_C.Attacked
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_AlertnessComponent_C::Attacked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AlertnessComponent_C", "Attacked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AlertnessComponent.BP_AlertnessComponent_C.TookDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DamagedActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*                 DamageType                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 InstigatedBy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AlertnessComponent_C::TookDamage(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AlertnessComponent_C", "TookDamage");

	Params::UBP_AlertnessComponent_C_TookDamage_Params Parms{};

	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.DamageType = DamageType;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AlertnessComponent.BP_AlertnessComponent_C.ExecuteUbergraph_BP_AlertnessComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EAlertnessLevelType     CallFunc_GetAlertness_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAlertnessLevelType     CallFunc_GetAlertness_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAlertnessLevelType     CallFunc_GetAlertness_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EAlertnessLevelType     K2Node_CustomEvent_Alertness                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             K2Node_DynamicCast_AsBP_Character                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_DamagedActor                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Damage                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*                 K2Node_CustomEvent_DamageType                                    (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_CustomEvent_InstigatedBy                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_DamageCauser                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_Time_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AlertnessComponent_C::ExecuteUbergraph_BP_AlertnessComponent(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EAlertnessLevelType CallFunc_GetAlertness_ReturnValue, enum class EAlertnessLevelType CallFunc_GetAlertness_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class EAlertnessLevelType CallFunc_GetAlertness_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue, enum class EAlertnessLevelType K2Node_CustomEvent_Alertness, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class AActor* K2Node_CustomEvent_DamagedActor, float K2Node_CustomEvent_Damage, class UDamageType* K2Node_CustomEvent_DamageType, class AController* K2Node_CustomEvent_InstigatedBy, class AActor* K2Node_CustomEvent_DamageCauser, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AlertnessComponent_C", "ExecuteUbergraph_BP_AlertnessComponent");

	Params::UBP_AlertnessComponent_C_ExecuteUbergraph_BP_AlertnessComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetAlertness_ReturnValue = CallFunc_GetAlertness_ReturnValue;
	Parms.CallFunc_GetAlertness_ReturnValue_1 = CallFunc_GetAlertness_ReturnValue_1;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetAlertness_ReturnValue_2 = CallFunc_GetAlertness_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_CustomEvent_Alertness = K2Node_CustomEvent_Alertness;
	Parms.K2Node_DynamicCast_AsBP_Character = K2Node_DynamicCast_AsBP_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_CustomEvent_DamagedActor = K2Node_CustomEvent_DamagedActor;
	Parms.K2Node_CustomEvent_Damage = K2Node_CustomEvent_Damage;
	Parms.K2Node_CustomEvent_DamageType = K2Node_CustomEvent_DamageType;
	Parms.K2Node_CustomEvent_InstigatedBy = K2Node_CustomEvent_InstigatedBy;
	Parms.K2Node_CustomEvent_DamageCauser = K2Node_CustomEvent_DamageCauser;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.CallFunc_K2_SetTimerDelegate_Time_ImplicitCast = CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AlertnessComponent.BP_AlertnessComponent_C.OnReadyStateTimedOut__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_AlertnessComponent_C::OnReadyStateTimedOut__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AlertnessComponent_C", "OnReadyStateTimedOut__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


