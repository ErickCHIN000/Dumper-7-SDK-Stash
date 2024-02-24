#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0xF8 - 0xA0)
// BlueprintGeneratedClass BP_ProgressiveSurvivalPenalties.BP_ProgressiveSurvivalPenalties_C
class UBP_ProgressiveSurvivalPenalties_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FTimerHandle                          StarvingLevelTimer;                                // 0xA8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          TiredLevelTimer;                                   // 0xB0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UNWXAbilitySystemComponent*            AbilitySystem;                                     // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnStarvingLevelChanged;                            // 0xC0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnTiredLevelChanged;                               // 0xD0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UNWXAttributeSet*                      AttributeSubobject;                                // 0xE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           StarvingEffectHandle;                              // 0xE8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           TiredEffectHandle;                                 // 0xF0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_ProgressiveSurvivalPenalties_C* GetDefaultObj();

	void CREATEDELEGATE_PROXYFUNCTION_1(float Delta, double CallFunc_FedChanged_Change_ImplicitCast);
	void CREATEDELEGATE_PROXYFUNCTION_0(float Delta, double CallFunc_RestedChanged_Change_ImplicitCast);
	void UpdateTiredGE(double RestedPercentage, double CallFunc_GetMaxStaminaForTiredPercentage_ReturnValue, float CallFunc_UpdateActiveGameplayEffectSetByCallerMagnitude_NewValue_ImplicitCast);
	double GetMaxStaminaForTiredPercentage(double RestedPercentage, double CallFunc_Get_Tired_Threshold_Percentage_TiredThreshold, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_MapRangeClamped_OutRangeB_ImplicitCast);
	void KillTired(TArray<struct FGameplayEffectCue>& Temp_struct_Variable, const struct FTagValueContainer& Temp_struct_Variable_1, const struct FHitResult& Temp_struct_Variable_2, const struct FGameplayTagContainer& Temp_struct_Variable_3, const struct FGameplayTag& Temp_struct_Variable_4, class AActor* CallFunc_GetOwner_ReturnValue, TScriptInterface<class IDamageEventInterface> K2Node_DynamicCast_AsDamage_Event_Interface, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue_1, const struct FTagValueContainer& CallFunc_DamageActor_AggregatedDamageTags);
	void ApplyTiredGE(double RestedPercentage, double CallFunc_GetMaxStaminaForTiredPercentage_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingSpec_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue, float CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast);
	void UpdateStarvingGE(double FedPercentage, double CallFunc_GetMaxHealthForFedPercentage_ReturnValue, float CallFunc_UpdateActiveGameplayEffectSetByCallerMagnitude_NewValue_ImplicitCast);
	void ApplyStarvingGE(double FedPercentage, double CallFunc_GetMaxHealthForFedPercentage_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingSpec_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue, float CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast);
	double GetMaxHealthForFedPercentage(double FedPercentage, double CallFunc_Get_Starving_Threshold_Percentage_StarvingThreshold, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_MapRangeClamped_OutRangeB_ImplicitCast);
	void KillStarving(TArray<struct FGameplayEffectCue>& Temp_struct_Variable, const struct FTagValueContainer& Temp_struct_Variable_1, const struct FHitResult& Temp_struct_Variable_2, const struct FGameplayTagContainer& Temp_struct_Variable_3, const struct FGameplayTag& Temp_struct_Variable_4, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, TScriptInterface<class IDamageEventInterface> K2Node_DynamicCast_AsDamage_Event_Interface, bool K2Node_DynamicCast_bSuccess, const struct FTagValueContainer& CallFunc_DamageActor_AggregatedDamageTags);
	void Tired_Level_Update(double LRestedPercentage, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute_1, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue_1, double CallFunc_SafeDivide_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_SafeDivide_B_ImplicitCast, double CallFunc_SafeDivide_A_ImplicitCast);
	void RestedChanged(double Change, double CallFunc_Get_Tired_Threshold_Percentage_TiredThreshold, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute_1, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue_1, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_AreAutomatedTestsRunning_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_GetActiveEffectsWithAllTags_ReturnValue, bool CallFunc_RemoveActiveGameplayEffect_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast);
	void Starving_Level_Update(float LCurrentFedPercentage, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute_1, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue_1, double CallFunc_SafeDivide_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_ApplyStarvingGE_FedPercentage_ImplicitCast, double CallFunc_UpdateStarvingGE_FedPercentage_ImplicitCast, double CallFunc_SafeDivide_B_ImplicitCast, double CallFunc_SafeDivide_A_ImplicitCast, float K2Node_VariableSet_LCurrentFedPercentage_ImplicitCast);
	void FedChanged(double Change, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue, double CallFunc_Get_Starving_Threshold_Percentage_StarvingThreshold, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute_1, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue_1, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_GetActiveEffectsWithAllTags_ReturnValue, bool CallFunc_RemoveActiveGameplayEffect_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_AreAutomatedTestsRunning_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast);
	void Initialize(bool CallFunc_IsValid_ReturnValue, class UNWXAttributeSet* CallFunc_GetAttributeSubobject_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UNWXAbilitySystemComponent* CallFunc_GetComponentByClass_ReturnValue);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_ProgressiveSurvivalPenalties(int32 EntryPoint);
	void OnTiredLevelChanged__DelegateSignature();
	void OnStarvingLevelChanged__DelegateSignature();
};

}


