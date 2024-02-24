#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA1 (0x199 - 0xF8)
// BlueprintGeneratedClass BP_ConsumptionComponent.BP_ConsumptionComponent_C
class UBP_ConsumptionComponent_C : public UConsumptionComponentBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xF8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FFoodSlot>                     FoodSlots;                                         // 0x100(0x10)(Edit, BlueprintVisible, Net, DisableEditOnInstance, SaveGame, RepNotify)
	int32                                        MaxFoodSlots;                                      // 0x110(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F3F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       HungerDivisor;                                     // 0x118(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          FoodSlotProcessTimerHandle;                        // 0x120(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TMap<int32, struct FActiveGameplayEffectHandle> ActiveGameplayEffectMap;                           // 0x128(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            OnFoodSlotsChanged;                                // 0x178(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UAbilitySystemComponent*               AbilitySystemComponent;                            // 0x188(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     Player_Controller;                                 // 0x190(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IsReadyForUI;                                      // 0x198(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_ConsumptionComponent_C* GetDefaultObj();

	void GetAssetTagForGameplayEffectHandle(struct FActiveGameplayEffectHandle& ActiveHandle, struct FGameplayTagContainer* CombinedTags, class UGameplayEffect* CallFunc_GetGameplayEffectFromActiveEffectHandle_ReturnValue);
	void InitializeGameplayEffectMap(const struct FActiveGameplayEffectHandle& LCurrentActiveGameplayEffect, const struct FGameplayTagContainer& LCombinedTags, int32 Temp_int_Variable, int32 Temp_int_Variable_1, const struct FGameplayTagContainer& CallFunc_GetAssetTagForGameplayEffectHandle_CombinedTags, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable_2, bool CallFunc_HasTag_ReturnValue, bool CallFunc_HasTag_ReturnValue_1, bool CallFunc_HasTag_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_GetActiveEffectsWithAllTags_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void OnRep_FoodSlots(bool CallFunc_IsDedicatedServer_ReturnValue);
	void OnPlayerDied(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void GetBestFoodSlotToOverrideIndex(int32* FoodSlotIndex, const struct FDateTime& LChosenStartTime, int32 LChosenIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FDateTime& CallFunc_DateTimeMaxValue_ReturnValue, const struct FFoodSlot& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_DateTimeDateTime_ReturnValue);
	void AddFoodToSlot(const struct FInventoryEntry& InventoryEntry, int32 LSelectedIndex, TSubclassOf<class UGameplayEffect> LFoodBuffGameplayEffectClass, int32 Temp_int_Variable, TSubclassOf<class UGameplayEffect> Temp_class_Variable, TSubclassOf<class UGameplayEffect> Temp_class_Variable_1, TSubclassOf<class UGameplayEffect> Temp_class_Variable_2, class ANWXPlayerState* CallFunc_GetPlayerState_PlayerState, TSubclassOf<class UGameplayEffect> K2Node_Select_Default, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingSpec_ReturnValue, int32 CallFunc_GetBestFoodSlotToOverrideIndex_FoodSlotIndex, const struct FGameplayEffectSpecHandle& CallFunc_ApplyAttributeValuesToSpec_OutHandle, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue, bool CallFunc_CompareSlot_FoundSameType, int32 CallFunc_CompareSlot_SameTypeSlotIndex, int32 CallFunc_SelectInt_ReturnValue);
	void ProcessFoodSlots(const struct FActiveGameplayEffectHandle& CurrentSlotEffect, int32 CurrentSlotIndex, const struct FFoodSlot& CurrentSlot, float TimeSinceTimer, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetActiveGameplayEffectRemainingDuration_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FFoodSlot& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_K2_GetTimerElapsedTimeHandle_ReturnValue, double CallFunc_Greater_DoubleDouble_A_ImplicitCast);
	void IsSameFoodItem(const struct FInventoryEntry& InventoryEntry1, const struct FInventoryEntry& InventoryEntry2, bool* IsSameFood, const struct FGameplayTagContainer& CallFunc_TryGetItemCharacteristicTags_CharacteristicTags, enum class EGetResult CallFunc_TryGetItemCharacteristicTags_Branches, const struct FGameplayTagContainer& CallFunc_TryGetItemCharacteristicTags_CharacteristicTags_1, enum class EGetResult CallFunc_TryGetItemCharacteristicTags_Branches_1, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_EqualEqual_GameplayTagContainer_ReturnValue, bool CallFunc_EqualEqual_FItemDataReference_ReturnValue);
	void Get_Total_Food_Effect_Duration(const struct FInventoryEntry& InventoryEntry, float* Duration, const struct FGameplayAttribute& Temp_struct_Variable, const struct FItemData& CallFunc_TryGetItemData_ItemData, enum class EGetResult CallFunc_TryGetItemData_Branches, bool K2Node_SwitchEnum_CmpSuccess, const struct FItemData_BaselineAttributeValues& CallFunc_TryGetItemDataBaselineAttributeValues_OutData, enum class EGetResult CallFunc_TryGetItemDataBaselineAttributeValues_Branches, bool K2Node_SwitchEnum_CmpSuccess_1, float CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void OverwriteSlot(const struct FInventoryEntry& InventoryEntry, int32 SlotToOverwrite, const struct FDateTime& CallFunc_UtcNow_ReturnValue, const struct FFoodSlot& K2Node_MakeStruct_FoodSlot);
	void ClearSlot(int32 FoodSlotIndex, const struct FFoodSlot& K2Node_MakeStruct_FoodSlot);
	void CompareSlot(const struct FInventoryEntry& InventoryEntry, bool* FoundSameType, int32* SameTypeSlotIndex, int32 CurrentSlotIndex, const struct FFoodSlot& CurrentSlot, bool LFoundSameType, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsSameFoodItem_isSameFood, const struct FFoodSlot& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void GetFoodSlots(TArray<struct FFoodSlot>* FoodSlots);
	void ReceiveBeginPlay();
	void OnGasDataPersisted_Event();
	void InitializeUI_Client();
	void ExecuteUbergraph_BP_ConsumptionComponent(int32 EntryPoint, class UPersistentGASDataComponent* CallFunc_GetComponentByClass_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AActor* CallFunc_GetOwner_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class APlayerController* K2Node_DynamicCast_AsPlayer_Controller, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void OnFoodSlotsChanged__DelegateSignature();
};

}


