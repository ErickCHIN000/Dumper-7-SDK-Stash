#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x3D8 - 0x3D8)
// BlueprintGeneratedClass BP_PickupUsableComponent.BP_PickupUsableComponent_C
class UBP_PickupUsableComponent_C : public UBP_UsableComponent_C
{
public:

	static class UClass* StaticClass();
	static class UBP_PickupUsableComponent_C* GetDefaultObj();

	class FText K2_GetOptionalErrorText(class AActor* CallFunc_GetOwner_ReturnValue, class AInventoryItemPickup* K2Node_DynamicCast_AsInventory_Item_Pickup, bool K2Node_DynamicCast_bSuccess);
	bool K2_CanBeUsed(struct FUsabilityQuery& Query, class AInventoryItemPickup* MyPickup, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_CanBePickedUp_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class UBP_UsableComponent_C* CallFunc_GetComponentByClass_ReturnValue, class AInventoryItemPickup* K2Node_DynamicCast_AsInventory_Item_Pickup, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
};

}


