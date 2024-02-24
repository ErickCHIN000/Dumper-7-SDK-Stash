#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4C (0x17C - 0x130)
// BlueprintGeneratedClass GetRandomItem.GetRandomItem_C
class UGetRandomItem_C : public USHQuestRandomTask
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x130(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                LootList;                                          // 0x138(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Count;                                             // 0x140(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1499[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UClass*>                        SpawnInContainersType;                             // 0x148(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<TSoftObjectPtr<class ASHItemContainer>> SpawnInContainerObjects;                           // 0x158(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class UClass*                                TargetItemClass;                                   // 0x168(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DontRemoveItemOnLoot;                              // 0x170(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_149D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MinimalAmount;                                     // 0x174(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaximumAmount;                                     // 0x178(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGetRandomItem_C* GetDefaultObj();

	void RequiredItems(int32* Count, int32 CallFunc_GetProgress_ReturnValue, int32 CallFunc_GetProgressMax_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Max_ReturnValue);
	void CountAlreadyHaveItems(class ASHInventory* Inventory, int32 Temp, int32 CallFunc_GetItemCountOfParentType_ReturnValue, int32 CallFunc_RequiredItems_Count, int32 CallFunc_RemoveItemOfParentType_ReturnValue, int32 CallFunc_RequiredItems_Count_1, bool CallFunc_Greater_IntInt_ReturnValue);
	int32 GetProgressMax();
	void Initialize(class UClass* TempClass, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, class UObject* CallFunc_GetDefaultObject_ReturnValue, class AGenericLootList_C* K2Node_DynamicCast_AsGeneric_Loot_List, bool K2Node_DynamicCast_bSuccess, class USHQuestTask* CallFunc_Array_Get_Item, class UClass* CallFunc_Roll_ReturnValue, class UGetRandomItem_C* K2Node_DynamicCast_AsGet_Random_Item, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void OnGivePlayer(class ASHPlayerCharacter* Player);
	void OnRemoveFromPlayer(class ASHPlayerCharacter* Player);
	void OnItemEnterInventory_Event_0(class AActor* Receiver, class AActor* Sender, class USHInventoryPlaceholder* InventoryPlaceholder, uint8 Count);
	void ExecuteUbergraph_GetRandomItem(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_NotEqual_ClassClass_ReturnValue, class ASHPlayerCharacter* K2Node_Event_Player, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class AActor* K2Node_CustomEvent_Receiver, class AActor* K2Node_CustomEvent_Sender, class USHInventoryPlaceholder* K2Node_CustomEvent_InventoryPlaceholder, uint8 K2Node_CustomEvent_Count, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ASHInventory* K2Node_DynamicCast_AsSHInventory, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ClassClass_ReturnValue, class ASHPlayerCharacter* K2Node_Event_Player_1, bool CallFunc_ClassIsChildOf_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_TextToLower_ReturnValue, int32 CallFunc_RequiredItems_Count, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, int32 CallFunc_Min_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, int32 CallFunc_RemoveItem_ReturnValue, class FText CallFunc_Format_ReturnValue, bool CallFunc_Conv_IntToBool_ReturnValue);
};

}


