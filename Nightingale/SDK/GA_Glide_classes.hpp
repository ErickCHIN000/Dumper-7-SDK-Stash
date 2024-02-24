#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x698 - 0x678)
// BlueprintGeneratedClass GA_Glide.GA_Glide_C
class UGA_Glide_C : public UGA_TechniqueBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x678(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       GlideSpeed;                                        // 0x680(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       FallingSpeed;                                      // 0x688(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     GlifeNVFX;                                         // 0x690(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_Glide_C* GetDefaultObj();

	void OnGlidingStopped(TScriptInterface<class IGlidingInterface> CallFunc_StopGliding_self_CastInput, bool CallFunc_IsValid_ReturnValue);
	void OnGliderDestroyed(class AActor* DestroyedActor);
	void GetFallingSpeed(const struct FGameplayTagContainer& ItemTraits, double* FallingSpeed, double LFallingSpeed, double Tier4FallingSpeed, double Tier3FallingSpeed, double Tier2FallingSpeed, double Tier1FallingSpeed, bool CallFunc_HasTag_ReturnValue, bool CallFunc_HasTag_ReturnValue_1, bool CallFunc_HasTag_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_HasTag_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_HasTag_ReturnValue_4, bool CallFunc_HasTag_ReturnValue_5);
	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayAbilitySpecHandle& Handle, struct FGameplayTagContainer* RelevantTags, class UCharacterMovementComponent* CharMovement, bool Temp_bool_Variable, const struct FGameplayTagContainer& CallFunc_K2_CanActivateAbility_RelevantTags, bool CallFunc_K2_CanActivateAbility_ReturnValue, bool CallFunc_IsFalling_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, TScriptInterface<class IGlidingInterface> K2Node_DynamicCast_AsGliding_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsGliding_ReturnValue, class UCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_Glide(int32 EntryPoint, TScriptInterface<class IGlidingInterface> CallFunc_SetGlidingForwardSpeedMultiplier_self_CastInput, const struct FGameplayEventData& K2Node_Event_EventData, TScriptInterface<class IGlidingInterface> CallFunc_IsGliding_self_CastInput, bool CallFunc_IsGliding_ReturnValue, TScriptInterface<class IGlidingInterface> CallFunc_StopGliding_self_CastInput, TScriptInterface<class IGlidingInterface> CallFunc_StartGliding_self_CastInput, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, bool K2Node_Event_bWasCancelled, const struct FGameplayAttribute& Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IGlidingInterface> K2Node_DynamicCast_AsGliding_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, TScriptInterface<class IGlidingInterface> CallFunc_SetGlidingForwardSpeedMultiplier_self_CastInput_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_K2_CommitAbility_ReturnValue, TScriptInterface<class IGlidingInterface> CallFunc_SetGlidingForwardSpeedMultiplier_self_CastInput_2, TScriptInterface<class IGlidingInterface> K2Node_DynamicCast_AsGliding_Interface_1, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IGlidingInterface> K2Node_DynamicCast_AsGliding_Interface_2, bool K2Node_DynamicCast_bSuccess_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute_1, float CallFunc_GetFloatAttribute_ReturnValue_1, bool CallFunc_NVFX_Spawn_System_Attached_SpawnSuccessful, class UNiagaraComponent* CallFunc_NVFX_Spawn_System_Attached_NiagaraSystemSpawned, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FInstanceData_Traits& CallFunc_TryGetItemTraits_Traits, enum class EGetResult CallFunc_TryGetItemTraits_Branches, TScriptInterface<class IGlidingInterface> CallFunc_StopGliding_self_CastInput_1, bool K2Node_SwitchEnum_CmpSuccess, double CallFunc_GetFallingSpeed_FallingSpeed, bool CallFunc_HasTag_ReturnValue, float CallFunc_CalculateItemAttributeValue_ReturnValue, TArray<double>& K2Node_MakeArray_Array, TArray<double>& K2Node_MakeArray_Array_1, double CallFunc_StandardBonusFormula_Total, double CallFunc_StandardBonusFormula_Total_1, double K2Node_MakeArray__0__ImplicitCast, float CallFunc_SetGlidingForwardSpeedMultiplier_Multiplier_ImplicitCast, float CallFunc_SetGlidingForwardSpeedMultiplier_Multiplier_ImplicitCast_1, float CallFunc_SetGlidingGravityMultiplier_Multiplier_ImplicitCast, float CallFunc_SetGlidingGravityMultiplier_Multiplier_ImplicitCast_1, double K2Node_MakeArray__0__ImplicitCast_1, double K2Node_MakeArray__1__ImplicitCast, double K2Node_MakeArray__1__ImplicitCast_1);
};

}


