#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x1A0 - 0x130)
// BlueprintGeneratedClass GetItem.GetItem_C
class UGetItem_C : public USHQuestTask
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x130(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        Count;                                             // 0x138(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_14BB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                TargetItemClass;                                   // 0x140(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                        SpawnInContainersType;                             // 0x148(0x10)(Edit, BlueprintVisible, SaveGame, HasGetValueTypeHash)
	TArray<TSoftObjectPtr<class ASHItemContainer>> SpawnInContainerObjects;                           // 0x158(0x10)(Edit, BlueprintVisible, SaveGame, HasGetValueTypeHash)
	bool                                         DontRemoveItemOnLoot;                              // 0x168(0x1)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
	uint8                                        Pad_14BC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        LootSpawnedInObjects;                              // 0x170(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, SaveGame, HasGetValueTypeHash)
	TArray<class FString>                        LootSpawnedInDeathContainers;                      // 0x180(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class AGenericDeathContainer_C*>      SpawnedDeathContainers;                            // 0x190(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGetItem_C* GetDefaultObj();

	void RequiredItems(int32* Count, int32 CallFunc_GetProgress_ReturnValue, int32 CallFunc_GetProgressMax_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Max_ReturnValue);
	void ContainerUsed(class AActor* ExternalInventory, class AGenericDeathContainer_C* Temp_object_Variable, class ASHInventory* K2Node_DynamicCast_AsSHInventory, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, class AGenericContainer_C* K2Node_DynamicCast_AsGeneric_Container, bool K2Node_DynamicCast_bSuccess_1, const class FString& CallFunc_GetObjectName_ReturnValue, class AGenericDeathContainer_C* K2Node_DynamicCast_AsGeneric_Death_Container, bool K2Node_DynamicCast_bSuccess_2, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue_1, int32 CallFunc_Array_AddUnique_ReturnValue_2);
	void CountAlreadyHaveItems(class ASHInventory* TestInventory, int32 Temp, int32 CallFunc_RequiredItems_Count, int32 CallFunc_RequiredItems_Count_1, int32 CallFunc_RemoveItemOfParentType_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_GetItemCountOfParentType_ReturnValue);
	TArray<struct FQuestItemSpawnInfo> GetLootForObject(class ASHPlayerCharacter* Player, class AActor* Actor, const class FString& CallFunc_GetObjectName_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, class AGenericDeathContainer_C* K2Node_DynamicCast_AsGeneric_Death_Container, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetObjectName_ReturnValue_1, int32 Temp_int_Array_Index_Variable, int32 CallFunc_GetProgress_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Not_PreBool_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, TArray<struct FQuestItemSpawnInfo>& K2Node_MakeArray_Array, int32 CallFunc_Add_IntInt_ReturnValue_1, TSoftObjectPtr<class ASHItemContainer> CallFunc_Array_Get_Item, class UClass* CallFunc_Array_Get_Item_1, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, class ASHItemContainer* K2Node_DynamicCast_AsSHItem_Container, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetObjectName_ReturnValue_2, bool CallFunc_EqualEqual_StrStr_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, const struct FQuestItemSpawnInfo& K2Node_MakeStruct_QuestItemSpawnInfo, TArray<struct FQuestItemSpawnInfo>& K2Node_MakeArray_Array_1);
	int32 GetProgressMax();
	void OnRemoveFromPlayer(class ASHPlayerCharacter* Player);
	void OnGivePlayer(class ASHPlayerCharacter* Player);
	void OnItemEnterInventory_Event_0(class AActor* Receiver, class AActor* Sender, class USHInventoryPlaceholder* InventoryPlaceholder, uint8 Count);
	void ExecuteUbergraph_GetItem(int32 EntryPoint, int32 CallFunc_RequiredItems_Count, class AActor* K2Node_CustomEvent_Receiver, class AActor* K2Node_CustomEvent_Sender, class USHInventoryPlaceholder* K2Node_CustomEvent_InventoryPlaceholder, uint8 K2Node_CustomEvent_Count, class ASHPlayerCharacter* K2Node_Event_Player, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 CallFunc_Min_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, class ASHInventory* K2Node_DynamicCast_AsSHInventory, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_RemoveItem_ReturnValue, class ASHPlayerCharacter* K2Node_Event_Player_1, bool CallFunc_ClassIsChildOf_ReturnValue, int32 CallFunc_RequiredItems_Count_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Conv_IntToBool_ReturnValue);
};

}


