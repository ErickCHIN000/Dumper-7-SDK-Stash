#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3A (0x3A8 - 0x36E)
// BlueprintGeneratedClass GenericDeathContainer.GenericDeathContainer_C
class AGenericDeathContainer_C : public AGenericContainer_C
{
public:
	uint8                                        Pad_1AB7[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x370(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*              PS_Ow_LootBeam;                                    // 0x378(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         bUseGenericContainer;                              // 0x380(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1ABC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        InventoryLifeSpan;                                 // 0x384(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bCanBeEmpty;                                       // 0x388(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         FirstOpen;                                         // 0x389(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1AC0[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                TrophyLootList;                                    // 0x390(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         RollTrophy;                                        // 0x398(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1AC3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                HumanMeatLootList;                                 // 0x3A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AGenericDeathContainer_C* GetDefaultObj();

	void GetTrophyRollAdditionalChance(class ASHPlayerCharacter* PlayerCharacter, float* Chance);
	void RollTrophyList(class ASHPlayerCharacter* PlayerCharacter, class UObject* CallFunc_GetDefaultObject_ReturnValue, bool CallFunc_IsKannibale_ReturnValue, class AGenericLootList_C* K2Node_DynamicCast_AsGeneric_Loot_List, bool K2Node_DynamicCast_bSuccess, class UClass* CallFunc_Roll_ReturnValue, float CallFunc_GetTrophyRollAdditionalChance_Chance, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ClassClass_ReturnValue, class UObject* CallFunc_GetDefaultObject_ReturnValue_1, class AGenericLootList_C* K2Node_DynamicCast_AsGeneric_Loot_List_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_NotEqual_ClassClass_ReturnValue_1, class UClass* CallFunc_RollWithAdditionalChance_ReturnValue, bool CallFunc_IsValidClass_ReturnValue_1);
	void RollSkillBasedLootList(class ASHPlayerCharacter* PlayerCharacter, bool* Result);
	void CheckEmptyInventory(const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsEmpty_ReturnValue);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReplaceInventory(class ASHInventory* Inventory);
	void OnUseActor(class ASHPlayerCharacter* Character);
	void ExecuteUbergraph_GenericDeathContainer(int32 EntryPoint, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_2, class USHInventorySlot* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, class USHInventoryPlaceholder* CallFunc_GetPlaceholder_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class ASHInventory* K2Node_Event_Inventory, bool CallFunc_IsValid_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, TArray<class AActor*>& K2Node_MakeArray_Array, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_IsValid_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_IsEmpty_ReturnValue, class ASHPlayerCharacter* K2Node_Event_Character, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_RollSkillBasedLootList_Result, TArray<struct FQuestItemSpawnInfo>& CallFunc_GetLootForObject_ReturnValue, const struct FQuestItemSpawnInfo& CallFunc_Array_Get_Item_1, class USHInventorySlot* CallFunc_Array_Get_Item_2, class USHInventoryPlaceholder* CallFunc_GetPlaceholder_ReturnValue_1, int32 CallFunc_GetItemCountOfType_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, int32 CallFunc_AddPlaceholderFromClass_ReturnValue, bool CallFunc_IsNotEmpty_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_IsEmpty_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_8);
};

}


