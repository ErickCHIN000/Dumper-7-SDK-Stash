#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2E (0x382 - 0x354)
// BlueprintGeneratedClass SK_Loot_Chest.SK_Loot_Chest_C
class ASK_Loot_Chest_C : public ALoot_Actor_C
{
public:
	uint8                                        Pad_63[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x358(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                SkeletalMesh;                                      // 0x360(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              ParticleSystem;                                    // 0x368(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         WasUsedOnce_;                                      // 0x370(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_66[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameplayPC_C*                         ControllerRefForSkillCheck;                        // 0x378(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasPerformedSkillCheck_;                           // 0x380(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         SkillCheckSuccessful_;                             // 0x381(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ASK_Loot_Chest_C* GetDefaultObj();

	void UnbindAllSkillCheckEvents();
	void EndOutlineFocus(bool* Success);
	void BeginOutlineFocus(bool* Success);
	void OnActorUsed(class APlayerController* Controller, bool* Success, class APawn* CallFunc_K2_GetPawn_ReturnValue, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_OnActorUsed_Success);
	void OnWasUsed(bool* Success, bool CallFunc_OnWasUsed_Success);
	void GetLootList(TArray<struct FLootList>* LootList, const TArray<struct FLootList>& LocalLootList, TArray<struct FLootList>& K2Node_MakeArray_Array, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FLootList& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, const struct FInventoryItem& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void ReceiveBeginPlay();
	void SkillCheckSuccess();
	void SkillCheckFail();
	void ExecuteUbergraph_SK_Loot_Chest(int32 EntryPoint, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_OnActorUsed_Success, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess);
};

}


