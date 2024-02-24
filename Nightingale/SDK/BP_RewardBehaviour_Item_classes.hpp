#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB0 (0xE0 - 0x30)
// BlueprintGeneratedClass BP_RewardBehaviour_Item.BP_RewardBehaviour_Item_C
class UBP_RewardBehaviour_Item_C : public UBP_RewardBehaviour_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x30(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	uint8                                        Pad_4D7[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemDefinition                       ItemDefinition;                                    // 0x40(0xA0)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UBP_RewardBehaviour_Item_C* GetDefaultObj();

	class UItemDataAsset* GetRewardItem(TSoftObjectPtr<class UObject> CallFunc_Conv_SoftObjPathToSoftObjRef_ReturnValue, const struct FPrimaryAssetId& CallFunc_GetPrimaryAssetIdFromSoftObjectReference_ReturnValue, class UObject* CallFunc_GetObjectFromPrimaryAssetId_ReturnValue, class UItemDataAsset* K2Node_DynamicCast_AsItem_Data_Asset, bool K2Node_DynamicCast_bSuccess);
	void GenerateItemToReward(struct FInventoryEntry* InventoryEntry, const TArray<class UItemInstanceData*>& LInstanceData, const struct FItemDataReference& LItemReference, int32 LQuantity, const struct FInventoryEntry& CallFunc_CreateNewItemEntry_NewEntry, enum class EGetResult CallFunc_CreateNewItemEntry_OutBranch, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void IsRewardValid(class APlayerState* PlayerState, bool* bIsValid, class FText* OutInvalidReason, const struct FInventoryEntry& ItemToReward, class UInventoryComponentBase* InventoryComponent, class APlayerController* PlayerController, bool CallFunc_IsRewardValid_bIsValid, class FText CallFunc_IsRewardValid_OutInvalidReason, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IItemContainer> CallFunc_GetCorrectContainerForItem_ReturnValue, class UInventoryComponentBase* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_CanAddItem_ReturnValue, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, const struct FInventoryEntry& CallFunc_GenerateItemToReward_InventoryEntry, class APlayerController* CallFunc_GetPlayerController_ReturnValue);
	void GrantItemReward(class APlayerState* PlayerState, class UObject* ItemSource, const TArray<class UItemInstanceData*>& InstanceData, int32 LQuantity, const struct FItemDataReference& LItemReference, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UNWXItemProxySpawnerSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, const struct FVector& Temp_struct_Variable, class APawn* CallFunc_GetPawn_ReturnValue, class APawn* CallFunc_GetPawn_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FInventoryEntry& CallFunc_GenerateItemToReward_InventoryEntry, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_BreakSoftObjectPath_PathString, const class FString& CallFunc_GetBaseFilename_ReturnValue, bool CallFunc_ClaimItem_bSuccess, TArray<struct FGuid>& CallFunc_ClaimItem_ClaimedInstances, TArray<struct FInventoryEntry>& CallFunc_ClaimItem_UnclaimedItems, const struct FInventoryEntry& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void GetDebugText(class FText* DebugText, int32 LQuantity, const struct FItemDataReference& LItemReference, class FText InstancedDataText, int64 CallFunc_Conv_IntToInt64_ReturnValue, const class FString& CallFunc_GetItemIdDebugString_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void ApplyReward(class APlayerState* PlayerState, class UObject* SenderContextObject);
	void ExecuteUbergraph_BP_RewardBehaviour_Item(int32 EntryPoint, class APlayerState* K2Node_Event_PlayerState, class UObject* K2Node_Event_SenderContextObject);
};

}


