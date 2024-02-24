#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x74 (0x4E8 - 0x474)
// BlueprintGeneratedClass GA_Crafting_Step_ApplyEffect.GA_Crafting_Step_ApplyEffect_C
class UGA_Crafting_Step_ApplyEffect_C : public UGA_Crafting_Step_Base_C
{
public:
	uint8                                        Pad_7B03[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x478(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FS_Crafting_Step_Definition           StepDefinition;                                    // 0x480(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         FireActivation;                                    // 0x4D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         FireInterface;                                     // 0x4D1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bCrafterEffectLoaded;                              // 0x4D2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bStationEffectLoaded;                              // 0x4D3(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIgnoreCrafterEffect;                              // 0x4D4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bStepActivated;                                    // 0x4D5(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7B33[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CrafterEffect;                                     // 0x4D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                StationEffect;                                     // 0x4E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_Crafting_Step_ApplyEffect_C* GetDefaultObj();

	void HandleEffectsLoaded(class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, bool K2Node_MathExpression_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsServer_ReturnValue);
	void CallStepEffectAppliedDelegate(bool CallFunc_IsValid_ReturnValue, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UBP_CraftingComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_2);
	void FireActivationAbility(class AActor* Actor, bool CallFunc_IsServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, TScriptInterface<class IInteractionInterface> K2Node_DynamicCast_AsInteraction_Interface, bool K2Node_DynamicCast_bSuccess, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromCraftingStep_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, int32 CallFunc_SendGameplayEventToActor_ReturnValue);
	void FireInterfaceAbility(const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromCraftingStep_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, int32 CallFunc_SendGameplayEventToActor_ReturnValue);
	void HandleInterface();
	void FireActivationAbilities(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_FindCraftForID_BP_Success, int32 CallFunc_FindCraftForID_BP_CraftInProgressIndex, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void HandleActivation();
	void InitializeAbilityFromEvent(const struct FGameplayEventData& EventData, bool* Success, bool CallFunc_InitializeAbilityFromEvent_Success, bool CallFunc_GetStepDefinitionFromHandle_Success, const struct FS_Crafting_Step_Definition& CallFunc_GetStepDefinitionFromHandle_ReturnValue);
	void InitializeAbility_GetTargetData(const struct FGameplayAbilityTargetDataHandle& TargetData, bool* Success, const class FString& CallFunc_GetCraftingStepEffectDataFromTargetData_CrafterUniqueId, bool CallFunc_GetCraftingStepEffectDataFromTargetData_bFireActivation, bool CallFunc_GetCraftingStepEffectDataFromTargetData_bFireInterface, const struct FDataTableRowHandle& CallFunc_GetCraftingStepEffectDataFromTargetData_ReturnValue);
	void Cancelled_3FDAB5B94DAA5F2049D0F9ABE427A8FD(struct FGameplayAbilityTargetDataHandle& Data);
	void ValidData_3FDAB5B94DAA5F2049D0F9ABE427A8FD(struct FGameplayAbilityTargetDataHandle& Data);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void LoadAndApplyCrafterEffect();
	void LoadAndApplyStationEffect();
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_Crafting_Step_ApplyEffect(int32 EntryPoint, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_Data_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_Data, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable, const struct FHitResult& CallFunc_GetHitResultFromTargetData_ReturnValue, const struct FGameplayEventData& K2Node_Event_EventData, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, const struct FGameplayAbilityTargetingLocationInfo& CallFunc_MakeTargetLocationInfoFromOwnerActor_ReturnValue, bool CallFunc_K2_CommitAbility_ReturnValue, bool K2Node_Event_bWasCancelled, class FName Temp_name_Variable, bool CallFunc_Not_PreBool_ReturnValue, class UAbilityTask_NWXWaitTargetData* CallFunc_NWXWaitTargetData_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AGameplayAbilityTargetActor* CallFunc_BeginSpawningActor_SpawnedActor, bool CallFunc_BeginSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_K2_HasAuthority_ReturnValue, bool CallFunc_K2_HasAuthority_ReturnValue_1, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue);
};

}


