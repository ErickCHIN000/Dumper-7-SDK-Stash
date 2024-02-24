#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPFL_Items_Carry.BPFL_Items_Carry_C
class UBPFL_Items_Carry_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBPFL_Items_Carry_C* GetDefaultObj();

	void GetCarriedResource(class AController*& Controller, class UObject* __WorldContext, bool* IsCarryingResource, class AEquippableItem** Resource, class APawn* Pawn, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IBPI_Carry_C> K2Node_DynamicCast_AsBPI_Carry, bool K2Node_DynamicCast_bSuccess, class AEquippableItem* CallFunc_GetCarriedResource_ResourceItem, bool CallFunc_GetCarriedResource_IsCarryingResource);
	void RemoveResourcesFromControllerHand(class AController*& Controller, int32 InstanceCountToRemove, class UObject* __WorldContext, const struct FInventoryEntry& Entry, class AEquippableItem* Temp_object_Variable, bool CallFunc_GetItemInControllerHand_IsCarryingResource, const struct FInventoryEntry& CallFunc_GetItemInControllerHand_Item, class APawn* CallFunc_K2_GetPawn_ReturnValue, TScriptInterface<class IEquippableItemUtilityInterface> K2Node_DynamicCast_AsEquippable_Item_Utility_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class ILoadoutReadInterface> K2Node_DynamicCast_AsLoadout_Read_Interface, bool K2Node_DynamicCast_bSuccess_1, class AEquippableItem* CallFunc_GetEquippedItem_ReturnValue);
	void GetItemInControllerHand(class AController*& Controller, class UObject* __WorldContext, bool* IsCarryingResource, struct FInventoryEntry* Item, class APawn* Pawn, class AEquippableItem* Temp_object_Variable, class APawn* CallFunc_K2_GetPawn_ReturnValue, TScriptInterface<class ILoadoutReadInterface> K2Node_DynamicCast_AsLoadout_Read_Interface, bool K2Node_DynamicCast_bSuccess, class ABP_EquippableItemBase_C* K2Node_DynamicCast_AsBP_Equippable_Item_Base, bool K2Node_DynamicCast_bSuccess_1, class AEquippableItem* CallFunc_GetEquippedItem_ReturnValue);
};

}


