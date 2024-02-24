#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Passive_Ranger_15.Passive_Ranger_15_C
// (None)

class UClass* UPassive_Ranger_15_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Passive_Ranger_15_C");

	return Clss;
}


// Passive_Ranger_15_C Passive_Ranger_15.Default__Passive_Ranger_15_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPassive_Ranger_15_C* UPassive_Ranger_15_C::GetDefaultObj()
{
	static class UPassive_Ranger_15_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPassive_Ranger_15_C*>(UPassive_Ranger_15_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Passive_Ranger_15.Passive_Ranger_15_C.LeaveAimingState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      CallFunc_GetAbilityOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatusEffectRemoveSpec     K2Node_MakeStruct_StatusEffectRemoveSpec                         (NoDestructor)
// bool                               CallFunc_RemoveStatusEffect_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPassive_Ranger_15_C::LeaveAimingState(class AActor* CallFunc_GetAbilityOwner_ReturnValue, const struct FStatusEffectRemoveSpec& K2Node_MakeStruct_StatusEffectRemoveSpec, bool CallFunc_RemoveStatusEffect_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Passive_Ranger_15_C", "LeaveAimingState");

	Params::UPassive_Ranger_15_C_LeaveAimingState_Params Parms{};

	Parms.CallFunc_GetAbilityOwner_ReturnValue = CallFunc_GetAbilityOwner_ReturnValue;
	Parms.K2Node_MakeStruct_StatusEffectRemoveSpec = K2Node_MakeStruct_StatusEffectRemoveSpec;
	Parms.CallFunc_RemoveStatusEffect_ReturnValue = CallFunc_RemoveStatusEffect_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Passive_Ranger_15.Passive_Ranger_15_C.EnterAimingState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      CallFunc_GetAbilityOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatusEffectSpec           K2Node_MakeStruct_StatusEffectSpec                               (NoDestructor)
// struct FStatusEffectInstanceReferenceCallFunc_AddStatusEffect_ReturnValue                             (NoDestructor, ContainsInstancedReference)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor)

void UPassive_Ranger_15_C::EnterAimingState(class AActor* CallFunc_GetAbilityOwner_ReturnValue, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Passive_Ranger_15_C", "EnterAimingState");

	Params::UPassive_Ranger_15_C_EnterAimingState_Params Parms{};

	Parms.CallFunc_GetAbilityOwner_ReturnValue = CallFunc_GetAbilityOwner_ReturnValue;
	Parms.K2Node_MakeStruct_StatusEffectSpec = K2Node_MakeStruct_StatusEffectSpec;
	Parms.CallFunc_AddStatusEffect_ReturnValue = CallFunc_AddStatusEffect_ReturnValue;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Passive_Ranger_15.Passive_Ranger_15_C.AimingUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeUnclamped_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIBPChar_Player_C>K2Node_DynamicCast_AsIBPChar_Player                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPassive_Ranger_15_C::AimingUpdate(float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue1, float CallFunc_MapRangeUnclamped_ReturnValue, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Passive_Ranger_15_C", "AimingUpdate");

	Params::UPassive_Ranger_15_C_AimingUpdate_Params Parms{};

	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue1 = CallFunc_Conv_IntToFloat_ReturnValue1;
	Parms.CallFunc_MapRangeUnclamped_ReturnValue = CallFunc_MapRangeUnclamped_ReturnValue;
	Parms.K2Node_DynamicCast_AsIBPChar_Player = K2Node_DynamicCast_AsIBPChar_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Passive_Ranger_15.Passive_Ranger_15_C.IncrementStacks
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              StackAmount                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPassive_Ranger_15_C::IncrementStacks(int32 StackAmount, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Passive_Ranger_15_C", "IncrementStacks");

	Params::UPassive_Ranger_15_C_IncrementStacks_Params Parms{};

	Parms.StackAmount = StackAmount;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue1 = CallFunc_Add_IntInt_ReturnValue1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Passive_Ranger_15.Passive_Ranger_15_C.CalculateAbilityState
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EGbxAbilityState        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EGbxAbilityState        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGbxAbilityState        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGbxAbilityState        CallFunc_CalculateAbilityState_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AWeapon*                     CallFunc_GetWeapon_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsZoomedIn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EGbxAbilityState        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class EGbxAbilityState UPassive_Ranger_15_C::CalculateAbilityState(bool Temp_bool_Variable, enum class EGbxAbilityState Temp_byte_Variable, enum class EGbxAbilityState Temp_byte_Variable1, enum class EGbxAbilityState CallFunc_CalculateAbilityState_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AWeapon* CallFunc_GetWeapon_ReturnValue, bool CallFunc_IsZoomedIn_ReturnValue, enum class EGbxAbilityState K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Passive_Ranger_15_C", "CalculateAbilityState");

	Params::UPassive_Ranger_15_C_CalculateAbilityState_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.CallFunc_CalculateAbilityState_ReturnValue = CallFunc_CalculateAbilityState_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetWeapon_ReturnValue = CallFunc_GetWeapon_ReturnValue;
	Parms.CallFunc_IsZoomedIn_ReturnValue = CallFunc_IsZoomedIn_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Passive_Ranger_15.Passive_Ranger_15_C.GetManualHUDIconValues
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// int32                              OutStackCount                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              OutDuration                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              OutTimeRemaining                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPassive_Ranger_15_C::GetManualHUDIconValues(int32* OutStackCount, float* OutDuration, float* OutTimeRemaining)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Passive_Ranger_15_C", "GetManualHUDIconValues");

	Params::UPassive_Ranger_15_C_GetManualHUDIconValues_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (OutStackCount != nullptr)
		*OutStackCount = Parms.OutStackCount;

	if (OutDuration != nullptr)
		*OutDuration = Parms.OutDuration;

	if (OutTimeRemaining != nullptr)
		*OutTimeRemaining = Parms.OutTimeRemaining;

}


// Function Passive_Ranger_15.Passive_Ranger_15_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPassive_Ranger_15_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Passive_Ranger_15_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Passive_Ranger_15.Passive_Ranger_15_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPassive_Ranger_15_C::OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Passive_Ranger_15_C", "OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Passive_Ranger_15.Passive_Ranger_15_C.OnResumed
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPassive_Ranger_15_C::OnResumed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Passive_Ranger_15_C", "OnResumed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Passive_Ranger_15.Passive_Ranger_15_C.OnPaused
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPassive_Ranger_15_C::OnPaused()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Passive_Ranger_15_C", "OnPaused");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Passive_Ranger_15.Passive_Ranger_15_C.ExecuteUbergraph_Passive_Ranger_15
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIBPChar_Player_C>K2Node_DynamicCast_AsIBPChar_Player                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetDataTableValueFromHandle_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIBPChar_Player_C>K2Node_DynamicCast_AsIBPChar_Player1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IIBPChar_Player_C>K2Node_DynamicCast_AsIBPChar_Player2                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPassive_Ranger_15_C::ExecuteUbergraph_Passive_Ranger_15(int32 EntryPoint, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetDataTableValueFromHandle_ReturnValue, int32 CallFunc_Round_ReturnValue, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player1, bool K2Node_DynamicCast_bSuccess1, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player2, bool K2Node_DynamicCast_bSuccess2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Passive_Ranger_15_C", "ExecuteUbergraph_Passive_Ranger_15");

	Params::UPassive_Ranger_15_C_ExecuteUbergraph_Passive_Ranger_15_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_DynamicCast_AsIBPChar_Player = K2Node_DynamicCast_AsIBPChar_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetDataTableValueFromHandle_ReturnValue = CallFunc_GetDataTableValueFromHandle_ReturnValue;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.K2Node_DynamicCast_AsIBPChar_Player1 = K2Node_DynamicCast_AsIBPChar_Player1;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.K2Node_DynamicCast_AsIBPChar_Player2 = K2Node_DynamicCast_AsIBPChar_Player2;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;

	UObject::ProcessEvent(Func, &Parms);

}

}


