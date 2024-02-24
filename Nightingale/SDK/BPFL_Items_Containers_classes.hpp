#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPFL_Items_Containers.BPFL_Items_Containers_C
class UBPFL_Items_Containers_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBPFL_Items_Containers_C* GetDefaultObj();

	void ClaimItem(class AActor* ClaimingActor, class UObject* ItemSource, const struct FInventoryEntry& ItemToClaim, bool bIgnoreCapacity, class UObject* __WorldContext, bool* bSuccess, TArray<struct FGuid>* ClaimedInstances, TArray<struct FInventoryEntry>* UnclaimedItems, TArray<struct FInventoryEntry>& K2Node_MakeArray_Array, bool CallFunc_ClaimItems_bSuccess, TArray<struct FGuid>& CallFunc_ClaimItems_ClaimedInstances, TArray<struct FInventoryEntry>& CallFunc_ClaimItems_UnclaimedItems);
	void ClaimItems(class AActor* ClaimingActor, class UObject* ItemSource, TArray<struct FInventoryEntry>& ItemsToClaim, bool bIgnoreCapacity, class UObject* __WorldContext, bool* bSuccess, TArray<struct FGuid>* ClaimedInstances, TArray<struct FInventoryEntry>* UnclaimedItems, TArray<struct FGuid>& K2Node_MakeArray_Array, bool CallFunc_OwnerHasAuthority_ReturnValue, class UBP_ItemClaim_C* CallFunc_GetDefaultObject_ReturnValue, bool CallFunc_ClaimItem_bSuccess, TArray<struct FGuid>& CallFunc_ClaimItem_ClaimedInstances, TArray<struct FInventoryEntry>& CallFunc_ClaimItem_UnclaimedItems);
	void GetAllPlayerContainerItemIds(class UObject* __WorldContext, TArray<struct FItemDataReference>* ContainerIReferences, const TArray<struct FItemDataReference>& ContainerItemReferences, TArray<struct FItemDataReference>& K2Node_MakeArray_Array);
	void GetInventoryItemFromBackpack(class APawn* TargetPawn, const struct FGuid& InstanceID, class UObject* __WorldContext, bool* bSuccess, struct FInventoryEntry* InventoryEntry, bool CallFunc_IsValid_ReturnValue, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UInventoryComponentBase* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, TScriptInterface<class IItemContainer> CallFunc_GetBackpack_Container, bool CallFunc_GetBackpack_ReturnValue, const class FString& CallFunc_GetFunctionName_ReturnValue, const class FString& CallFunc_GetFunctionName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const struct FInventoryEntry& CallFunc_GetItem_Entry, bool CallFunc_GetItem_ReturnValue);
	bool ContainerHasEquivalentItem(TScriptInterface<class IItemContainer> Container, const struct FInventoryEntry& ItemEntry, class UObject* __WorldContext, struct FGuid* MatchingGuid, const struct FInventoryEntry& CurrentEntry, TArray<struct FInventoryEntry>& CallFunc_GetAllItems_Entries, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, const struct FInventoryEntry& CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_AreItemsEquivalent_ReturnValue);
};

}


