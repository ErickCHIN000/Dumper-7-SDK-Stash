#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Glide.GA_Glide_C
// (None)

class UClass* UGA_Glide_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Glide_C");

	return Clss;
}


// GA_Glide_C GA_Glide.Default__GA_Glide_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Glide_C* UGA_Glide_C::GetDefaultObj()
{
	static class UGA_Glide_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Glide_C*>(UGA_Glide_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_Glide.GA_Glide_C.OnGlidingStopped
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IGlidingInterface>CallFunc_StopGliding_self_CastInput                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Glide_C::OnGlidingStopped(TScriptInterface<class IGlidingInterface> CallFunc_StopGliding_self_CastInput, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Glide_C", "OnGlidingStopped");

	Params::UGA_Glide_C_OnGlidingStopped_Params Parms{};

	Parms.CallFunc_StopGliding_self_CastInput = CallFunc_StopGliding_self_CastInput;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Glide.GA_Glide_C.OnGliderDestroyed
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DestroyedActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGA_Glide_C::OnGliderDestroyed(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Glide_C", "OnGliderDestroyed");

	Params::UGA_Glide_C_OnGliderDestroyed_Params Parms{};

	Parms.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Glide.GA_Glide_C.GetFallingSpeed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGameplayTagContainer       ItemTraits                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// double                             FallingSpeed                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             LFallingSpeed                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Tier4FallingSpeed                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Tier3FallingSpeed                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Tier2FallingSpeed                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Tier1FallingSpeed                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTag_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTag_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTag_ReturnValue_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTag_ReturnValue_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTag_ReturnValue_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTag_ReturnValue_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Glide_C::GetFallingSpeed(const struct FGameplayTagContainer& ItemTraits, double* FallingSpeed, double LFallingSpeed, double Tier4FallingSpeed, double Tier3FallingSpeed, double Tier2FallingSpeed, double Tier1FallingSpeed, bool CallFunc_HasTag_ReturnValue, bool CallFunc_HasTag_ReturnValue_1, bool CallFunc_HasTag_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_HasTag_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_HasTag_ReturnValue_4, bool CallFunc_HasTag_ReturnValue_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Glide_C", "GetFallingSpeed");

	Params::UGA_Glide_C_GetFallingSpeed_Params Parms{};

	Parms.ItemTraits = ItemTraits;
	Parms.LFallingSpeed = LFallingSpeed;
	Parms.Tier4FallingSpeed = Tier4FallingSpeed;
	Parms.Tier3FallingSpeed = Tier3FallingSpeed;
	Parms.Tier2FallingSpeed = Tier2FallingSpeed;
	Parms.Tier1FallingSpeed = Tier1FallingSpeed;
	Parms.CallFunc_HasTag_ReturnValue = CallFunc_HasTag_ReturnValue;
	Parms.CallFunc_HasTag_ReturnValue_1 = CallFunc_HasTag_ReturnValue_1;
	Parms.CallFunc_HasTag_ReturnValue_2 = CallFunc_HasTag_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_HasTag_ReturnValue_3 = CallFunc_HasTag_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_HasTag_ReturnValue_4 = CallFunc_HasTag_ReturnValue_4;
	Parms.CallFunc_HasTag_ReturnValue_5 = CallFunc_HasTag_ReturnValue_5;

	UObject::ProcessEvent(Func, &Parms);

	if (FallingSpeed != nullptr)
		*FallingSpeed = Parms.FallingSpeed;

}


// Function GA_Glide.GA_Glide_C.K2_CanActivateAbility
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo   ActorInfo                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// struct FGameplayAbilitySpecHandle  Handle                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       RelevantTags                                                     (Parm, OutParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacterMovementComponent* CharMovement                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_K2_CanActivateAbility_RelevantTags                      (None)
// bool                               CallFunc_K2_CanActivateAbility_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFalling_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGlidingInterface>K2Node_DynamicCast_AsGliding_Interface                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGliding_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UGA_Glide_C::K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayAbilitySpecHandle& Handle, struct FGameplayTagContainer* RelevantTags, class UCharacterMovementComponent* CharMovement, bool Temp_bool_Variable, const struct FGameplayTagContainer& CallFunc_K2_CanActivateAbility_RelevantTags, bool CallFunc_K2_CanActivateAbility_ReturnValue, bool CallFunc_IsFalling_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, TScriptInterface<class IGlidingInterface> K2Node_DynamicCast_AsGliding_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsGliding_ReturnValue, class UCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Glide_C", "K2_CanActivateAbility");

	Params::UGA_Glide_C_K2_CanActivateAbility_Params Parms{};

	Parms.ActorInfo = ActorInfo;
	Parms.Handle = Handle;
	Parms.CharMovement = CharMovement;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_K2_CanActivateAbility_RelevantTags = CallFunc_K2_CanActivateAbility_RelevantTags;
	Parms.CallFunc_K2_CanActivateAbility_ReturnValue = CallFunc_K2_CanActivateAbility_ReturnValue;
	Parms.CallFunc_IsFalling_ReturnValue = CallFunc_IsFalling_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_DynamicCast_AsGliding_Interface = K2Node_DynamicCast_AsGliding_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsGliding_ReturnValue = CallFunc_IsGliding_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (RelevantTags != nullptr)
		*RelevantTags = std::move(Parms.RelevantTags);

	return Parms.ReturnValue;

}


// Function GA_Glide.GA_Glide_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Glide_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Glide_C", "K2_ActivateAbilityFromEvent");

	Params::UGA_Glide_C_K2_ActivateAbilityFromEvent_Params Parms{};

	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Glide.GA_Glide_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Glide_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Glide_C", "K2_OnEndAbility");

	Params::UGA_Glide_C_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Glide.GA_Glide_C.ExecuteUbergraph_GA_Glide
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGlidingInterface>CallFunc_SetGlidingForwardSpeedMultiplier_self_CastInput         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)
// TScriptInterface<class IGlidingInterface>CallFunc_IsGliding_self_CastInput                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGliding_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGlidingInterface>CallFunc_StopGliding_self_CastInput                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGlidingInterface>CallFunc_StartGliding_self_CastInput                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameplayTagAssetInterface>CallFunc_HasMatchingGameplayTag_self_CastInput                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAttribute          Temp_struct_Variable                                             (ConstParm, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGlidingInterface>K2Node_DynamicCast_AsGliding_Interface                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatAttribute_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGlidingInterface>CallFunc_SetGlidingForwardSpeedMultiplier_self_CastInput_1       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_CommitAbility_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGlidingInterface>CallFunc_SetGlidingForwardSpeedMultiplier_self_CastInput_2       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGlidingInterface>K2Node_DynamicCast_AsGliding_Interface_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGlidingInterface>K2Node_DynamicCast_AsGliding_Interface_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute_1         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatAttribute_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NVFX_Spawn_System_Attached_SpawnSuccessful              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_NVFX_Spawn_System_Attached_NiagaraSystemSpawned         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FInstanceData_Traits        CallFunc_TryGetItemTraits_Traits                                 (None)
// enum class EGetResult              CallFunc_TryGetItemTraits_Branches                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGlidingInterface>CallFunc_StopGliding_self_CastInput_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetFallingSpeed_FallingSpeed                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTag_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CalculateItemAttributeValue_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<double>                     K2Node_MakeArray_Array                                           (ReferenceParm)
// TArray<double>                     K2Node_MakeArray_Array_1                                         (ReferenceParm)
// double                             CallFunc_StandardBonusFormula_Total                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_StandardBonusFormula_Total_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_MakeArray__0__ImplicitCast                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetGlidingForwardSpeedMultiplier_Multiplier_ImplicitCast(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetGlidingForwardSpeedMultiplier_Multiplier_ImplicitCast_1(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetGlidingGravityMultiplier_Multiplier_ImplicitCast     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetGlidingGravityMultiplier_Multiplier_ImplicitCast_1   (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_MakeArray__0__ImplicitCast_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_MakeArray__1__ImplicitCast                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_MakeArray__1__ImplicitCast_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Glide_C::ExecuteUbergraph_GA_Glide(int32 EntryPoint, TScriptInterface<class IGlidingInterface> CallFunc_SetGlidingForwardSpeedMultiplier_self_CastInput, const struct FGameplayEventData& K2Node_Event_EventData, TScriptInterface<class IGlidingInterface> CallFunc_IsGliding_self_CastInput, bool CallFunc_IsGliding_ReturnValue, TScriptInterface<class IGlidingInterface> CallFunc_StopGliding_self_CastInput, TScriptInterface<class IGlidingInterface> CallFunc_StartGliding_self_CastInput, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, bool K2Node_Event_bWasCancelled, const struct FGameplayAttribute& Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IGlidingInterface> K2Node_DynamicCast_AsGliding_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, TScriptInterface<class IGlidingInterface> CallFunc_SetGlidingForwardSpeedMultiplier_self_CastInput_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_K2_CommitAbility_ReturnValue, TScriptInterface<class IGlidingInterface> CallFunc_SetGlidingForwardSpeedMultiplier_self_CastInput_2, TScriptInterface<class IGlidingInterface> K2Node_DynamicCast_AsGliding_Interface_1, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IGlidingInterface> K2Node_DynamicCast_AsGliding_Interface_2, bool K2Node_DynamicCast_bSuccess_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute_1, float CallFunc_GetFloatAttribute_ReturnValue_1, bool CallFunc_NVFX_Spawn_System_Attached_SpawnSuccessful, class UNiagaraComponent* CallFunc_NVFX_Spawn_System_Attached_NiagaraSystemSpawned, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FInstanceData_Traits& CallFunc_TryGetItemTraits_Traits, enum class EGetResult CallFunc_TryGetItemTraits_Branches, TScriptInterface<class IGlidingInterface> CallFunc_StopGliding_self_CastInput_1, bool K2Node_SwitchEnum_CmpSuccess, double CallFunc_GetFallingSpeed_FallingSpeed, bool CallFunc_HasTag_ReturnValue, float CallFunc_CalculateItemAttributeValue_ReturnValue, TArray<double>& K2Node_MakeArray_Array, TArray<double>& K2Node_MakeArray_Array_1, double CallFunc_StandardBonusFormula_Total, double CallFunc_StandardBonusFormula_Total_1, double K2Node_MakeArray__0__ImplicitCast, float CallFunc_SetGlidingForwardSpeedMultiplier_Multiplier_ImplicitCast, float CallFunc_SetGlidingForwardSpeedMultiplier_Multiplier_ImplicitCast_1, float CallFunc_SetGlidingGravityMultiplier_Multiplier_ImplicitCast, float CallFunc_SetGlidingGravityMultiplier_Multiplier_ImplicitCast_1, double K2Node_MakeArray__0__ImplicitCast_1, double K2Node_MakeArray__1__ImplicitCast, double K2Node_MakeArray__1__ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Glide_C", "ExecuteUbergraph_GA_Glide");

	Params::UGA_Glide_C_ExecuteUbergraph_GA_Glide_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_SetGlidingForwardSpeedMultiplier_self_CastInput = CallFunc_SetGlidingForwardSpeedMultiplier_self_CastInput;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;
	Parms.CallFunc_IsGliding_self_CastInput = CallFunc_IsGliding_self_CastInput;
	Parms.CallFunc_IsGliding_ReturnValue = CallFunc_IsGliding_ReturnValue;
	Parms.CallFunc_StopGliding_self_CastInput = CallFunc_StopGliding_self_CastInput;
	Parms.CallFunc_StartGliding_self_CastInput = CallFunc_StartGliding_self_CastInput;
	Parms.CallFunc_HasMatchingGameplayTag_self_CastInput = CallFunc_HasMatchingGameplayTag_self_CastInput;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue = CallFunc_HasMatchingGameplayTag_ReturnValue;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsGliding_Interface = K2Node_DynamicCast_AsGliding_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute = CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute;
	Parms.CallFunc_GetFloatAttribute_ReturnValue = CallFunc_GetFloatAttribute_ReturnValue;
	Parms.CallFunc_SetGlidingForwardSpeedMultiplier_self_CastInput_1 = CallFunc_SetGlidingForwardSpeedMultiplier_self_CastInput_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_K2_CommitAbility_ReturnValue = CallFunc_K2_CommitAbility_ReturnValue;
	Parms.CallFunc_SetGlidingForwardSpeedMultiplier_self_CastInput_2 = CallFunc_SetGlidingForwardSpeedMultiplier_self_CastInput_2;
	Parms.K2Node_DynamicCast_AsGliding_Interface_1 = K2Node_DynamicCast_AsGliding_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsGliding_Interface_2 = K2Node_DynamicCast_AsGliding_Interface_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute_1 = CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute_1;
	Parms.CallFunc_GetFloatAttribute_ReturnValue_1 = CallFunc_GetFloatAttribute_ReturnValue_1;
	Parms.CallFunc_NVFX_Spawn_System_Attached_SpawnSuccessful = CallFunc_NVFX_Spawn_System_Attached_SpawnSuccessful;
	Parms.CallFunc_NVFX_Spawn_System_Attached_NiagaraSystemSpawned = CallFunc_NVFX_Spawn_System_Attached_NiagaraSystemSpawned;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_TryGetItemTraits_Traits = CallFunc_TryGetItemTraits_Traits;
	Parms.CallFunc_TryGetItemTraits_Branches = CallFunc_TryGetItemTraits_Branches;
	Parms.CallFunc_StopGliding_self_CastInput_1 = CallFunc_StopGliding_self_CastInput_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetFallingSpeed_FallingSpeed = CallFunc_GetFallingSpeed_FallingSpeed;
	Parms.CallFunc_HasTag_ReturnValue = CallFunc_HasTag_ReturnValue;
	Parms.CallFunc_CalculateItemAttributeValue_ReturnValue = CallFunc_CalculateItemAttributeValue_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_StandardBonusFormula_Total = CallFunc_StandardBonusFormula_Total;
	Parms.CallFunc_StandardBonusFormula_Total_1 = CallFunc_StandardBonusFormula_Total_1;
	Parms.K2Node_MakeArray__0__ImplicitCast = K2Node_MakeArray__0__ImplicitCast;
	Parms.CallFunc_SetGlidingForwardSpeedMultiplier_Multiplier_ImplicitCast = CallFunc_SetGlidingForwardSpeedMultiplier_Multiplier_ImplicitCast;
	Parms.CallFunc_SetGlidingForwardSpeedMultiplier_Multiplier_ImplicitCast_1 = CallFunc_SetGlidingForwardSpeedMultiplier_Multiplier_ImplicitCast_1;
	Parms.CallFunc_SetGlidingGravityMultiplier_Multiplier_ImplicitCast = CallFunc_SetGlidingGravityMultiplier_Multiplier_ImplicitCast;
	Parms.CallFunc_SetGlidingGravityMultiplier_Multiplier_ImplicitCast_1 = CallFunc_SetGlidingGravityMultiplier_Multiplier_ImplicitCast_1;
	Parms.K2Node_MakeArray__0__ImplicitCast_1 = K2Node_MakeArray__0__ImplicitCast_1;
	Parms.K2Node_MakeArray__1__ImplicitCast = K2Node_MakeArray__1__ImplicitCast;
	Parms.K2Node_MakeArray__1__ImplicitCast_1 = K2Node_MakeArray__1__ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


