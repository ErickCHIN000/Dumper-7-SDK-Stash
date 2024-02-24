#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2ED (0x761 - 0x474)
// BlueprintGeneratedClass GA_Crafting_Step_Advancement.GA_Crafting_Step_Advancement_C
class UGA_Crafting_Step_Advancement_C : public UGA_Crafting_Step_Base_C
{
public:
	uint8                                        Pad_5F04[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x478(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FS_Crafting_Step_Definition           PreAdvanceStepDefinition;                          // 0x480(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_Crafting_CraftInProgress           CurrentCraftData;                                  // 0x4D0(0xD8)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	uint8                                        Pad_5F0B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCraftingRecipeReference              CurrentRecipeHandle;                               // 0x5B0(0x70)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                        PreAdvanceStepIndex;                               // 0x620(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5F11[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCraftingRecipe                       CurrentRecipe;                                     // 0x628(0x120)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                        CurrentCraftRequestedQuantity;                     // 0x748(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5F1D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FInventoryEntry>               CurrentCraftInputItems;                            // 0x750(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         CraftSuccess;                                      // 0x760(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_Crafting_Step_Advancement_C* GetDefaultObj();

	void FireStepCompletedDelegate(class UBP_CraftingComponent_C* CraftingComponent, class AController* CraftingController, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class UBP_CraftingComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool K2Node_MathExpression_ReturnValue);
	void HandleStationEffectRemoval(int32 InProgressStepCount, const struct FDataTableRowHandle& CurrentInProgressStepHandle, int32 CurrentInProgressStepIndex, const struct FCraftingRecipeReference& CurrentInProgressRecipeHandle, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Variable, bool CallFunc_IsValid_ReturnValue_1, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_GetStepDefinitionFromHandle_Success, const struct FS_Crafting_Step_Definition& CallFunc_GetStepDefinitionFromHandle_ReturnValue, bool CallFunc_GetStepDefinitionFromHandle_Success_1, const struct FS_Crafting_Step_Definition& CallFunc_GetStepDefinitionFromHandle_ReturnValue_1, bool CallFunc_GetCraftingStepsForRecipe_Success, TArray<struct FDataTableRowHandle>& CallFunc_GetCraftingStepsForRecipe_RecipeSteps, const struct FDataTableRowHandle& CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FS_Crafting_CraftInProgress& CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue);
	void EndCraft(bool CallFunc_IsValid_ReturnValue, bool CallFunc_SetCraftStatusByID_Success);
	void OnAdvance(bool* Success, bool CallFunc_IsValid_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue);
	void InitializeAbilityFromEvent(const struct FGameplayEventData& EventData, bool* Success, bool CallFunc_InitializeAbilityFromEvent_Success, const struct FCraftingRecipe& CallFunc_TryGetCraftingRecipe_CraftingRecipe, enum class EGetResult CallFunc_TryGetCraftingRecipe_Branches, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_GetCraftForID_Success, const struct FS_Crafting_CraftInProgress& CallFunc_GetCraftForID_CraftInProgressData, bool CallFunc_GetStepDefinitionFromHandle_Success, const struct FS_Crafting_Step_Definition& CallFunc_GetStepDefinitionFromHandle_ReturnValue);
	void OnPostAdvance();
	void StepTransition();
	void FireEndCraft(class AActor* EndCraftActor, bool bAttemptEndCraftOnCrafter, class AActor* InstigatingController, bool CallFunc_IsValid_ReturnValue, bool CallFunc_ActorPresentAtCraftingStation_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue, const struct FGameplayAbilityPayloadHandle& CallFunc_AbilityPayloadFromBool_ReturnValue, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromCraftingRecipeInstanced_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, int32 CallFunc_SendGameplayEventToActor_ReturnValue);
	bool CheckForEndCraft(const TArray<struct FDataTableRowHandle>& RecipeSteps, int32 K2Node_MathExpression_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	bool CheckForAdvance(bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_SetCraftStatusByID_Success);
	void OnAbilityEnd();
	void DoEndAbility(bool CancelAbility);
	void ProcessEndStep(const struct FDataTableRowHandle& NewStepHandle, int32 NewStepIndex, bool CallFunc_MakeLiteralBool_ReturnValue, bool CallFunc_MakeLiteralBool_ReturnValue_1, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromCraftingStepEffectData_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, int32 CallFunc_SendGameplayEventToActor_ReturnValue, const struct FDataTableRowHandle& CallFunc_Array_Get_Item, bool CallFunc_SetCurrentStepIndexForCraft_Success, int32 K2Node_MathExpression_ReturnValue);
	void CleanupData(bool CallFunc_IsValid_ReturnValue, const struct FDynamicTypedStructs& K2Node_MakeStruct_DynamicTypedStructs, bool CallFunc_SetStepData_Success);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void PreAdvance();
	void Advance();
	void PostAdvance();
	void ExecuteUbergraph_GA_Crafting_Step_Advancement(int32 EntryPoint, bool K2Node_Event_bWasCancelled, const struct FGameplayEventData& K2Node_Event_EventData, bool CallFunc_CheckForAdvance_ReturnValue, bool CallFunc_CheckForEndCraft_ReturnValue, bool CallFunc_OnAdvance_Success, bool CallFunc_K2_CommitAbility_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
};

}


