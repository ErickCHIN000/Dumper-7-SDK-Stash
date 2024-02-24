#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x16 (0x354 - 0x33E)
// BlueprintGeneratedClass Loot_Actor.Loot_Actor_C
class ALoot_Actor_C : public AContainer_Actor_C
{
public:
	uint8                                        Pad_2B21[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        MinLootItems;                                      // 0x348(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        MaxLootItems;                                      // 0x34C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        LuckBoost;                                         // 0x350(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ALoot_Actor_C* GetDefaultObj();

	void PlayerHasShamrockBuff_(bool* HasShamrockBuff_, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess);
	void IsItemUnlocked_(class FName InventoryItemID, bool* IsItemUnlocked_, const struct FInventoryItem& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AGamePlayPlayerState_C* K2Node_DynamicCast_AsGame_Play_Player_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_Contains_ReturnValue);
	void FilterLockedItems(TArray<struct FLootList>& LootList, TArray<struct FLootList>* NewLootList, const TArray<struct FLootList>& FilteredLootList, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, const struct FLootList& CallFunc_Array_Get_Item, TArray<struct FLootList>& K2Node_MakeArray_Array, bool CallFunc_IsItemUnlocked__IsItemUnlocked_, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue);
	void WeightedRoll(TArray<struct FLootList>& LootList, struct FLootList* LootItem, float Roll, float WeightSum, bool Temp_bool_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, float Temp_float_Variable, bool CallFunc_LessEqual_FloatFloat_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FLootList& CallFunc_Array_Get_Item, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, float Temp_float_Variable_1, const struct FLootList& CallFunc_Array_Get_Item_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_PlayerHasShamrockBuff__HasShamrockBuff_, bool CallFunc_PlayerHasShamrockBuff__HasShamrockBuff__1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool Temp_bool_Variable_1, float K2Node_Select_Default, float K2Node_Select_Default_1, int32 Temp_int_Loop_Counter_Variable_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1);
	void SetItemAmount(const struct FInventoryItem& InventoryItem, int32 Amount, struct FInventoryItem* NewInventoryItem, const struct FInventoryItem& K2Node_SetFieldsInStruct_StructOut);
	void GetRandomLootItems(TArray<struct FInventoryItem>* InventoryItems, const struct FInventoryItem& LocalInventoryItem, int32 LocalItemAmount, const TArray<int32>& LocalItemIndexs, int32 LocalItemIndex, int32 LocalLootCount, const TArray<struct FInventoryItem>& LocalItems, const TArray<struct FLootList>& LocalLootList, int32 LocalLootAmount);
	void GetLootList(TArray<struct FLootList>* LootList, const TArray<struct FLootList>& LocalLootList, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FLootList& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void InitializeInventory(bool* Success, bool CallFunc_HasAuthority_ReturnValue, TArray<struct FInventoryItem>& CallFunc_GetRandomLootItems_InventoryItems, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_LoadInventoryItems_Success);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Loot_Actor(int32 EntryPoint);
};

}


