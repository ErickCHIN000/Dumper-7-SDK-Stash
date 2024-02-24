#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Crafting_Step_Refinement_Station_Activate.GA_Crafting_Step_Refinement_Station_Activate_C
// (None)

class UClass* UGA_Crafting_Step_Refinement_Station_Activate_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Crafting_Step_Refinement_Station_Activate_C");

	return Clss;
}


// GA_Crafting_Step_Refinement_Station_Activate_C GA_Crafting_Step_Refinement_Station_Activate.Default__GA_Crafting_Step_Refinement_Station_Activate_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Crafting_Step_Refinement_Station_Activate_C* UGA_Crafting_Step_Refinement_Station_Activate_C::GetDefaultObj()
{
	static class UGA_Crafting_Step_Refinement_Station_Activate_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Crafting_Step_Refinement_Station_Activate_C*>(UGA_Crafting_Step_Refinement_Station_Activate_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_Crafting_Step_Refinement_Station_Activate.GA_Crafting_Step_Refinement_Station_Activate_C.OnFireStateChanged
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bFireEnabled                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Crafting_Step_Refinement_Station_Activate_C::OnFireStateChanged(bool bFireEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Crafting_Step_Refinement_Station_Activate_C", "OnFireStateChanged");

	Params::UGA_Crafting_Step_Refinement_Station_Activate_C_OnFireStateChanged_Params Parms{};

	Parms.bFireEnabled = bFireEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Crafting_Step_Refinement_Station_Activate.GA_Crafting_Step_Refinement_Station_Activate_C.OnFireIgnited
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCraftForID_Success                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Crafting_CraftInProgress CallFunc_GetCraftForID_CraftInProgressData                       (HasGetValueTypeHash)
// bool                               CallFunc_OnActivation_Success                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Crafting_Step_Refinement_Station_Activate_C::OnFireIgnited(bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetCraftForID_Success, const struct FS_Crafting_CraftInProgress& CallFunc_GetCraftForID_CraftInProgressData, bool CallFunc_OnActivation_Success, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Crafting_Step_Refinement_Station_Activate_C", "OnFireIgnited");

	Params::UGA_Crafting_Step_Refinement_Station_Activate_C_OnFireIgnited_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetCraftForID_Success = CallFunc_GetCraftForID_Success;
	Parms.CallFunc_GetCraftForID_CraftInProgressData = CallFunc_GetCraftForID_CraftInProgressData;
	Parms.CallFunc_OnActivation_Success = CallFunc_OnActivation_Success;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Crafting_Step_Refinement_Station_Activate.GA_Crafting_Step_Refinement_Station_Activate_C.OnFireExtinguish
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Crafting_Step_Refinement_Station_Activate_C::OnFireExtinguish(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Crafting_Step_Refinement_Station_Activate_C", "OnFireExtinguish");

	Params::UGA_Crafting_Step_Refinement_Station_Activate_C_OnFireExtinguish_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Crafting_Step_Refinement_Station_Activate.GA_Crafting_Step_Refinement_Station_Activate_C.StartTimer
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             TimerLength                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_InvalidateTimerHandle_ReturnValue                    (NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_Time_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Crafting_Step_Refinement_Station_Activate_C::StartTimer(double TimerLength, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_InvalidateTimerHandle_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Crafting_Step_Refinement_Station_Activate_C", "StartTimer");

	Params::UGA_Crafting_Step_Refinement_Station_Activate_C_StartTimer_Params Parms{};

	Parms.TimerLength = TimerLength;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_InvalidateTimerHandle_ReturnValue = CallFunc_K2_InvalidateTimerHandle_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_Time_ImplicitCast = CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Crafting_Step_Refinement_Station_Activate.GA_Crafting_Step_Refinement_Station_Activate_C.Advance
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleCallFunc_AbilityTargetDataFromCraftingStep_ReturnValue           (None)
// struct FGameplayEventData          K2Node_MakeStruct_GameplayEventData                              (None)
// int32                              CallFunc_SendGameplayEventToActor_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Crafting_Step_Refinement_Station_Activate_C::Advance(const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromCraftingStep_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, int32 CallFunc_SendGameplayEventToActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Crafting_Step_Refinement_Station_Activate_C", "Advance");

	Params::UGA_Crafting_Step_Refinement_Station_Activate_C_Advance_Params Parms{};

	Parms.CallFunc_AbilityTargetDataFromCraftingStep_ReturnValue = CallFunc_AbilityTargetDataFromCraftingStep_ReturnValue;
	Parms.K2Node_MakeStruct_GameplayEventData = K2Node_MakeStruct_GameplayEventData;
	Parms.CallFunc_SendGameplayEventToActor_ReturnValue = CallFunc_SendGameplayEventToActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Crafting_Step_Refinement_Station_Activate.GA_Crafting_Step_Refinement_Station_Activate_C.UpdateTimer
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             TimeRemaining                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetRealTimeElapsedSeconds_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMin_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCraftForID_Success                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Crafting_CraftInProgress CallFunc_GetCraftForID_CraftInProgressData                       (HasGetValueTypeHash)
// struct FS_Crafting_Step_RefinementTimerCallFunc_GetStructByType_OutStruct                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetStructByType_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_B_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Crafting_Step_Refinement_Station_Activate_C::UpdateTimer(double TimeRemaining, bool CallFunc_IsValid_ReturnValue, double CallFunc_GetRealTimeElapsedSeconds_ReturnValue, double CallFunc_FMin_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_GetCraftForID_Success, const struct FS_Crafting_CraftInProgress& CallFunc_GetCraftForID_CraftInProgressData, const struct FS_Crafting_Step_RefinementTimer& CallFunc_GetStructByType_OutStruct, bool CallFunc_GetStructByType_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_FMax_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Crafting_Step_Refinement_Station_Activate_C", "UpdateTimer");

	Params::UGA_Crafting_Step_Refinement_Station_Activate_C_UpdateTimer_Params Parms{};

	Parms.TimeRemaining = TimeRemaining;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetRealTimeElapsedSeconds_ReturnValue = CallFunc_GetRealTimeElapsedSeconds_ReturnValue;
	Parms.CallFunc_FMin_ReturnValue = CallFunc_FMin_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetCraftForID_Success = CallFunc_GetCraftForID_Success;
	Parms.CallFunc_GetCraftForID_CraftInProgressData = CallFunc_GetCraftForID_CraftInProgressData;
	Parms.CallFunc_GetStructByType_OutStruct = CallFunc_GetStructByType_OutStruct;
	Parms.CallFunc_GetStructByType_ReturnValue = CallFunc_GetStructByType_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_1 = CallFunc_Subtract_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Subtract_DoubleDouble_B_ImplicitCast = CallFunc_Subtract_DoubleDouble_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Crafting_Step_Refinement_Station_Activate.GA_Crafting_Step_Refinement_Station_Activate_C.SetupRealmTimer
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URealmTimerComponent*        CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Crafting_Step_Refinement_Station_Activate_C::SetupRealmTimer(class AGameStateBase* CallFunc_GetGameState_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class URealmTimerComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Crafting_Step_Refinement_Station_Activate_C", "SetupRealmTimer");

	Params::UGA_Crafting_Step_Refinement_Station_Activate_C_SetupRealmTimer_Params Parms{};

	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Crafting_Step_Refinement_Station_Activate.GA_Crafting_Step_Refinement_Station_Activate_C.GetStationEfficiencyTier
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NewEfficiencyTier                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CurrentOwnedTag                                                  (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGameplayTag>        OwnedStationTags                                                 (Edit, BlueprintVisible)
// struct FActiveGameplayEffectHandle CurrentEffectHandle                                              (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// int32                              StationEfficiencyTier                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     StationASC                                                       (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_MakeGameplayTagContainerFromTag_ReturnValue             (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesContainerMatchTagQuery_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameplayTagAssetInterface>CallFunc_GetOwnedGameplayTags_self_CastInput                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetOwnedGameplayTags_TagContainer                       (None)
// TArray<struct FGameplayTag>        CallFunc_BreakGameplayTagContainer_GameplayTags                  (ReferenceParm)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

int32 UGA_Crafting_Step_Refinement_Station_Activate_C::GetStationEfficiencyTier(int32 NewEfficiencyTier, const struct FGameplayTag& CurrentOwnedTag, const TArray<struct FGameplayTag>& OwnedStationTags, const struct FActiveGameplayEffectHandle& CurrentEffectHandle, int32 StationEfficiencyTier, class UAbilitySystemComponent* StationASC, int32 Temp_int_Variable, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromTag_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_DoesContainerMatchTagQuery_ReturnValue, const struct FGameplayTag& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_GetOwnedGameplayTags_self_CastInput, const struct FGameplayTagContainer& CallFunc_GetOwnedGameplayTags_TagContainer, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Crafting_Step_Refinement_Station_Activate_C", "GetStationEfficiencyTier");

	Params::UGA_Crafting_Step_Refinement_Station_Activate_C_GetStationEfficiencyTier_Params Parms{};

	Parms.NewEfficiencyTier = NewEfficiencyTier;
	Parms.CurrentOwnedTag = CurrentOwnedTag;
	Parms.OwnedStationTags = OwnedStationTags;
	Parms.CurrentEffectHandle = CurrentEffectHandle;
	Parms.StationEfficiencyTier = StationEfficiencyTier;
	Parms.StationASC = StationASC;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_MakeGameplayTagContainerFromTag_ReturnValue = CallFunc_MakeGameplayTagContainerFromTag_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_DoesContainerMatchTagQuery_ReturnValue = CallFunc_DoesContainerMatchTagQuery_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetOwnedGameplayTags_self_CastInput = CallFunc_GetOwnedGameplayTags_self_CastInput;
	Parms.CallFunc_GetOwnedGameplayTags_TagContainer = CallFunc_GetOwnedGameplayTags_TagContainer;
	Parms.CallFunc_BreakGameplayTagContainer_GameplayTags = CallFunc_BreakGameplayTagContainer_GameplayTags;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GA_Crafting_Step_Refinement_Station_Activate.GA_Crafting_Step_Refinement_Station_Activate_C.GetTimerLength
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              StationEfficiencyTier                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CurrentEffectHandle                                              (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     StationASC                                                       (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             CalculatedTimerLength                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetCurrentRefinementMod_Time                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Crafting_Step_RefinementTimerCallFunc_GetStructByType_OutStruct                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetStructByType_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_CalculatedTimerLength_ImplicitCast            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double UGA_Crafting_Step_Refinement_Station_Activate_C::GetTimerLength(bool* bSuccess, int32 StationEfficiencyTier, const struct FActiveGameplayEffectHandle& CurrentEffectHandle, class UAbilitySystemComponent* StationASC, double CalculatedTimerLength, double CallFunc_GetCurrentRefinementMod_Time, const struct FS_Crafting_Step_RefinementTimer& CallFunc_GetStructByType_OutStruct, bool CallFunc_GetStructByType_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double K2Node_VariableSet_CalculatedTimerLength_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Crafting_Step_Refinement_Station_Activate_C", "GetTimerLength");

	Params::UGA_Crafting_Step_Refinement_Station_Activate_C_GetTimerLength_Params Parms{};

	Parms.StationEfficiencyTier = StationEfficiencyTier;
	Parms.CurrentEffectHandle = CurrentEffectHandle;
	Parms.StationASC = StationASC;
	Parms.CalculatedTimerLength = CalculatedTimerLength;
	Parms.CallFunc_GetCurrentRefinementMod_Time = CallFunc_GetCurrentRefinementMod_Time;
	Parms.CallFunc_GetStructByType_OutStruct = CallFunc_GetStructByType_OutStruct;
	Parms.CallFunc_GetStructByType_ReturnValue = CallFunc_GetStructByType_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.K2Node_VariableSet_CalculatedTimerLength_ImplicitCast = K2Node_VariableSet_CalculatedTimerLength_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

	return Parms.ReturnValue;

}


// Function GA_Crafting_Step_Refinement_Station_Activate.GA_Crafting_Step_Refinement_Station_Activate_C.HandleDebug
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               FireTimer                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 LocalController                                                  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsStateActive_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Crafting_Step_Refinement_Station_Activate_C::HandleDebug(bool* FireTimer, class AController* LocalController, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue, const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_IsStateActive_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Crafting_Step_Refinement_Station_Activate_C", "HandleDebug");

	Params::UGA_Crafting_Step_Refinement_Station_Activate_C_HandleDebug_Params Parms{};

	Parms.LocalController = LocalController;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_IsStateActive_ReturnValue = CallFunc_IsStateActive_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (FireTimer != nullptr)
		*FireTimer = Parms.FireTimer;

}


// Function GA_Crafting_Step_Refinement_Station_Activate.GA_Crafting_Step_Refinement_Station_Activate_C.OnAbilityEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_MathExpression_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_IsValidTimerHandle_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Crafting_Step_Refinement_Station_Activate_C::OnAbilityEnd(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_MathExpression_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_K2_IsValidTimerHandle_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Crafting_Step_Refinement_Station_Activate_C", "OnAbilityEnd");

	Params::UGA_Crafting_Step_Refinement_Station_Activate_C_OnAbilityEnd_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_MathExpression_ReturnValue = K2Node_MathExpression_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_K2_IsValidTimerHandle_ReturnValue = CallFunc_K2_IsValidTimerHandle_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Crafting_Step_Refinement_Station_Activate.GA_Crafting_Step_Refinement_Station_Activate_C.OnActivation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActorFromActorInfo_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HandleDebug_FireTimer                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OnActivation_Success                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Crafting_Step_Refinement_Station_Activate_C::OnActivation(bool* Success, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_HandleDebug_FireTimer, bool CallFunc_IsServer_ReturnValue, bool CallFunc_OnActivation_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Crafting_Step_Refinement_Station_Activate_C", "OnActivation");

	Params::UGA_Crafting_Step_Refinement_Station_Activate_C_OnActivation_Params Parms{};

	Parms.CallFunc_GetOwningActorFromActorInfo_ReturnValue = CallFunc_GetOwningActorFromActorInfo_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_HandleDebug_FireTimer = CallFunc_HandleDebug_FireTimer;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_OnActivation_Success = CallFunc_OnActivation_Success;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function GA_Crafting_Step_Refinement_Station_Activate.GA_Crafting_Step_Refinement_Station_Activate_C.GenerateStepData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDynamicTypedStructs        CurrentData                                                      (Edit, BlueprintVisible)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Crafting_Step_RefinementTimerCallFunc_GetStructByType_OutStruct                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetStructByType_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDynamicTypedStructs        CallFunc_UpdateDynamicStructsUStruct_DynamicStructOut            (None)
// float                              K2Node_SetFieldsInStruct_Time_2_616A1CC7419B8642FC3CE291565BE9CE_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_StartTime_5_4B3A4D174F08FE1B74B6C0BEE2BEFA1E_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Crafting_Step_Refinement_Station_Activate_C::GenerateStepData(bool* Success, const struct FDynamicTypedStructs& CurrentData, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FS_Crafting_Step_RefinementTimer& CallFunc_GetStructByType_OutStruct, bool CallFunc_GetStructByType_ReturnValue, const struct FDynamicTypedStructs& CallFunc_UpdateDynamicStructsUStruct_DynamicStructOut, float K2Node_SetFieldsInStruct_Time_2_616A1CC7419B8642FC3CE291565BE9CE_ImplicitCast, float K2Node_SetFieldsInStruct_StartTime_5_4B3A4D174F08FE1B74B6C0BEE2BEFA1E_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Crafting_Step_Refinement_Station_Activate_C", "GenerateStepData");

	Params::UGA_Crafting_Step_Refinement_Station_Activate_C_GenerateStepData_Params Parms{};

	Parms.CurrentData = CurrentData;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetStructByType_OutStruct = CallFunc_GetStructByType_OutStruct;
	Parms.CallFunc_GetStructByType_ReturnValue = CallFunc_GetStructByType_ReturnValue;
	Parms.CallFunc_UpdateDynamicStructsUStruct_DynamicStructOut = CallFunc_UpdateDynamicStructsUStruct_DynamicStructOut;
	Parms.K2Node_SetFieldsInStruct_Time_2_616A1CC7419B8642FC3CE291565BE9CE_ImplicitCast = K2Node_SetFieldsInStruct_Time_2_616A1CC7419B8642FC3CE291565BE9CE_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_StartTime_5_4B3A4D174F08FE1B74B6C0BEE2BEFA1E_ImplicitCast = K2Node_SetFieldsInStruct_StartTime_5_4B3A4D174F08FE1B74B6C0BEE2BEFA1E_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function GA_Crafting_Step_Refinement_Station_Activate.GA_Crafting_Step_Refinement_Station_Activate_C.InitializeAbilityFromEvent
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Crafting_Step_Definition StepData                                                         (Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_Crafting_CraftInProgress CraftInProgressData                                              (Edit, BlueprintVisible, HasGetValueTypeHash)
// bool                               InitializeSuccess                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_MathExpression_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetStepRefinementTimerLength_Return_Value               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetStepRefinementTimerLength_Delta                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStructureFireComponent*     CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_InitializeAbilityFromEvent_Success                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCraftForID_Success                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Crafting_CraftInProgress CallFunc_GetCraftForID_CraftInProgressData                       (HasGetValueTypeHash)
// struct FS_Crafting_Step_Definition CallFunc_GetDataTableRowFromName_OutRow                          (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)

void UGA_Crafting_Step_Refinement_Station_Activate_C::InitializeAbilityFromEvent(const struct FGameplayEventData& EventData, bool* Success, const struct FS_Crafting_Step_Definition& StepData, const struct FS_Crafting_CraftInProgress& CraftInProgressData, bool InitializeSuccess, bool K2Node_MathExpression_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, double CallFunc_GetStepRefinementTimerLength_Return_Value, double CallFunc_GetStepRefinementTimerLength_Delta, class UStructureFireComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_InitializeAbilityFromEvent_Success, bool CallFunc_GetCraftForID_Success, const struct FS_Crafting_CraftInProgress& CallFunc_GetCraftForID_CraftInProgressData, const struct FS_Crafting_Step_Definition& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class FText CallFunc_Conv_NameToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Crafting_Step_Refinement_Station_Activate_C", "InitializeAbilityFromEvent");

	Params::UGA_Crafting_Step_Refinement_Station_Activate_C_InitializeAbilityFromEvent_Params Parms{};

	Parms.EventData = EventData;
	Parms.StepData = StepData;
	Parms.CraftInProgressData = CraftInProgressData;
	Parms.InitializeSuccess = InitializeSuccess;
	Parms.K2Node_MathExpression_ReturnValue = K2Node_MathExpression_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetStepRefinementTimerLength_Return_Value = CallFunc_GetStepRefinementTimerLength_Return_Value;
	Parms.CallFunc_GetStepRefinementTimerLength_Delta = CallFunc_GetStepRefinementTimerLength_Delta;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_InitializeAbilityFromEvent_Success = CallFunc_InitializeAbilityFromEvent_Success;
	Parms.CallFunc_GetCraftForID_Success = CallFunc_GetCraftForID_Success;
	Parms.CallFunc_GetCraftForID_CraftInProgressData = CallFunc_GetCraftForID_CraftInProgressData;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function GA_Crafting_Step_Refinement_Station_Activate.GA_Crafting_Step_Refinement_Station_Activate_C.TimerComplete
// (Net, NetReliable, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Crafting_Step_Refinement_Station_Activate_C::TimerComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Crafting_Step_Refinement_Station_Activate_C", "TimerComplete");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Crafting_Step_Refinement_Station_Activate.GA_Crafting_Step_Refinement_Station_Activate_C.ExecuteUbergraph_GA_Crafting_Step_Refinement_Station_Activate
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_InvalidateTimerHandle_ReturnValue                    (NoDestructor, HasGetValueTypeHash)

void UGA_Crafting_Step_Refinement_Station_Activate_C::ExecuteUbergraph_GA_Crafting_Step_Refinement_Station_Activate(int32 EntryPoint, const struct FTimerHandle& CallFunc_K2_InvalidateTimerHandle_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Crafting_Step_Refinement_Station_Activate_C", "ExecuteUbergraph_GA_Crafting_Step_Refinement_Station_Activate");

	Params::UGA_Crafting_Step_Refinement_Station_Activate_C_ExecuteUbergraph_GA_Crafting_Step_Refinement_Station_Activate_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_InvalidateTimerHandle_ReturnValue = CallFunc_K2_InvalidateTimerHandle_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


