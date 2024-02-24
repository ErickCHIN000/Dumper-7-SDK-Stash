#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2C (0x33E - 0x312)
// BlueprintGeneratedClass Container_Actor.Container_Actor_C
class AContainer_Actor_C : public AUsable_Actor_C
{
public:
	uint8                                        Pad_212B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x318(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UInventoryComponent_C*                 InventoryComponent;                                // 0x320(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class APlayerState*>                  PlayersViewing;                                    // 0x328(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                        InventorySize;                                     // 0x338(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        SlotsPerRow;                                       // 0x33C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CanStoreItems;                                     // 0x33D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class AContainer_Actor_C* GetDefaultObj();

	void ContainerLooted(bool* Success, const TArray<class APlayerState*>& LocalViewers, int32 Temp_int_Array_Index_Variable, bool CallFunc_HasAuthority_ReturnValue, class APlayerState* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void GetCanStoreItems(bool* CanStoreItems);
	void GetPlayersViewing(TArray<class APlayerState*>* PlayersViewing);
	void GetContainerProperties(class FText* Name, uint8* SlotsPerRow, bool* IsStorageContainer, int32* InventorySize);
	void GetContainerInventory(class UInventoryComponent_C** InventoryComponent);
	void OnActorUsed(class APlayerController* Controller, bool* Success, bool CallFunc_OnActorUsed_Success, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_ContainerLooted_Success, const struct FInventoryItem& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_TryToAddItemToInventory_Success, const struct FInventoryItem& CallFunc_TryToAddItemToInventory_OutItem, int32 CallFunc_TryToAddItemToInventory_AddedToSlot, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue);
	void LoadInventoryItems(int32 InventorySize, TArray<struct FInventoryItem>& InventoryItems, bool* Success, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_LoadInventoryItems_Success);
	void InitializeInventory(bool* Success);
	void UserConstructionScript(bool CallFunc_HasAuthority_ReturnValue);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Container_Actor(int32 EntryPoint, bool CallFunc_InitializeInventory_Success, bool CallFunc_HasAuthority_ReturnValue);
};

}


