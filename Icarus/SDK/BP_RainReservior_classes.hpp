#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1C (0x790 - 0x774)
// BlueprintGeneratedClass BP_RainReservior.BP_RainReservior_C
class ABP_RainReservior_C : public ABP_DeployableBase_C
{
public:
	uint8                                        Pad_6897[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x778(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_WeatherAudioComponent_Deployable_C* BP_WeatherAudioComponent_Deployable;               // 0x780(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        UnitsFilledPerUpdate;                              // 0x788(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Array_Index;                                       // 0x78C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_RainReservior_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void InventoryItemAdded(class UInventory* Inventory, int32 Location);
	void FillContainers();
	void AddIce();
	void Snow(float Intensity);
	void Rain(int32 Millilitres);
	void ExecuteUbergraph_BP_RainReservior(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsServer_ReturnValue, enum class EValid CallFunc_GetTrait_Paths, class UInventoryComponent* CallFunc_GetTrait_ReturnValue, class UInventory* CallFunc_GetInventory_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, enum class EValid CallFunc_GetTrait_Paths_1, class UGeneratorComponent* CallFunc_GetTrait_ReturnValue_1, const struct FInventorySlot& CallFunc_Array_Get_Item, bool K2Node_SwitchEnum_CmpSuccess_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_GetItemPropertyValue_IntValue, enum class EDataValid CallFunc_GetItemPropertyValue_Paths, const struct FFillableData& CallFunc_GetFillableData_FillableData, enum class EDataValid CallFunc_GetFillableData_Paths, bool K2Node_SwitchEnum_CmpSuccess_2, bool K2Node_SwitchEnum_CmpSuccess_3, int32 CallFunc_GetItemPropertyValue_IntValue_1, enum class EDataValid CallFunc_GetItemPropertyValue_Paths_1, bool CallFunc_Greater_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_4, uint8 CallFunc_Conv_IntToByte_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, uint8 CallFunc_GetValidValue_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class EValid CallFunc_GetTrait_Paths_2, class UGeneratorComponent* CallFunc_GetTrait_ReturnValue_2, bool CallFunc_ActivateGenerator_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_SwitchEnum_CmpSuccess_5, class UInventory* K2Node_CustomEvent_Inventory, int32 K2Node_CustomEvent_Location, enum class EValid CallFunc_GetTrait_Paths_3, class UInventoryComponent* CallFunc_GetTrait_ReturnValue_3, bool CallFunc_IsServer_ReturnValue_2, class UInventory* CallFunc_GetInventory_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, TArray<class UInventory*>& K2Node_MakeArray_Array, class UInventory* CallFunc_GetInventory_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess_6, bool CallFunc_IsValid_ReturnValue_2, enum class EValid CallFunc_GetTrait_Paths_4, class UInventoryComponent* CallFunc_GetTrait_ReturnValue_4, class UInventory* CallFunc_GetInventory_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class UInventory* CallFunc_GetInventory_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_4, bool K2Node_SwitchEnum_CmpSuccess_7, bool CallFunc_SetItemDynamicProperty_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class EValid CallFunc_GetTrait_Paths_5, class UBP_FillableComponent_C* CallFunc_GetTrait_ReturnValue_5, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 CallFunc_GetStoredUnits_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_8, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, const struct FItemData& K2Node_MakeStruct_ItemData, bool CallFunc_IsServer_ReturnValue_3, const struct FItemData& CallFunc_CreateItem_ReturnValue, int32 CallFunc_AutomaticallyPlaceItem_PlacedLocation, bool CallFunc_AutomaticallyPlaceItem_ReturnValue, int32 CallFunc_AutomaticallyPlaceItem_PlacedLocation_1, bool CallFunc_AutomaticallyPlaceItem_ReturnValue_1, float K2Node_Event_Intensity, int32 K2Node_Event_Millilitres, int32 CallFunc_AddContainerActorCapacity_ReturnValue, bool CallFunc_IsSheltered_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_ContainerCurrentlyAcceptsType_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1);
};

}


