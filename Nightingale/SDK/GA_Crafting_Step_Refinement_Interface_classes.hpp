#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x17C (0x5F0 - 0x474)
// BlueprintGeneratedClass GA_Crafting_Step_Refinement_Interface.GA_Crafting_Step_Refinement_Interface_C
class UGA_Crafting_Step_Refinement_Interface_C : public UGA_Crafting_Step_Base_C
{
public:
	uint8                                        Pad_6B74[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x478(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FCraftingRecipeReference              RecipeId;                                          // 0x480(0x70)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FS_Crafting_Step_RefinementTimer      CurrentStepData;                                   // 0x4F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDynamicTypedStructs                  DataForInterface;                                  // 0x4F8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	uint8                                        Pad_6B7A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_Crafting_CraftInProgress           CurrentCraftInProgress;                            // 0x510(0xD8)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	uint8                                        Pad_6B7C[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGA_Crafting_Step_Refinement_Interface_C* GetDefaultObj();

	void FinalizeInitialization(bool* Success, const struct FS_Crafting_CraftInProgress& CurrentCraftData_Old, const struct FJsonStruct& CallFunc_CreateJsonStruct_ReturnValue, const struct FDynamicTypedStructs& CallFunc_UpdateDynamicStructs_DynamicStructOut, const struct FJsonStruct& CallFunc_CreateJsonStruct_ReturnValue_1, const struct FS_Crafting_Step_RefinementTimer& CallFunc_GetStructByType_OutStruct, bool CallFunc_GetStructByType_ReturnValue, const struct FDynamicTypedStructs& CallFunc_UpdateDynamicStructs_DynamicStructOut_1, bool CallFunc_FindCraftForID_BP_Success, int32 CallFunc_FindCraftForID_BP_CraftInProgressIndex, const struct FS_Crafting_CraftInProgress& CallFunc_Array_Get_Item);
	void InitializeAbilityFromEvent(const struct FGameplayEventData& EventData, bool* Success, class UAbilitySystemComponent* Abs, bool bInitialization, const struct FS_Crafting_CraftInProgress& CurrentCraftData, bool IsSuccess, bool CallFunc_InitializeAbilityFromEvent_Success, bool CallFunc_IsValid_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, const struct FGameplayEffectQuery& K2Node_MakeStruct_GameplayEffectQuery, TArray<struct FActiveGameplayEffectHandle>& CallFunc_GetActiveEffects_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
	void Cancelled_148FFCCD49E86DC83A1E628A9CF33FF9(struct FGameplayAbilityTargetDataHandle& Data);
	void ValidData_148FFCCD49E86DC83A1E628A9CF33FF9(struct FGameplayAbilityTargetDataHandle& Data);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_Crafting_Step_Refinement_Interface(int32 EntryPoint, const struct FGameplayAbilityTargetingLocationInfo& CallFunc_MakeTargetLocationInfoFromOwnerActor_ReturnValue, class FName Temp_name_Variable, const struct FGameplayTag& Temp_struct_Variable, class UAbilityTask_NWXWaitTargetData* CallFunc_NWXWaitTargetData_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, class AGameplayAbilityTargetActor* CallFunc_BeginSpawningActor_SpawnedActor, bool CallFunc_BeginSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_Data_1, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_Data, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable_1, const struct FHitResult& CallFunc_GetHitResultFromTargetData_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FGameplayEventData& K2Node_Event_EventData, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_FinalizeInitialization_Success);
};

}


