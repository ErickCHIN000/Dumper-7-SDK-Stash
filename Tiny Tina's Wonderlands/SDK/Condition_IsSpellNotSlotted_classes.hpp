#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x90 - 0x88)
// BlueprintGeneratedClass Condition_IsSpellNotSlotted.Condition_IsSpellNotSlotted_C
class UCondition_IsSpellNotSlotted_C : public UGbxCondition_Blueprint
{
public:
	class UInventorySlotData*                    SpellInvSlot;                                      // 0x88(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCondition_IsSpellNotSlotted_C* GetDefaultObj();

	bool EvaluateCondition(class UObject* Context, class UObject* OptionalContext, class AOakPlayerController* K2Node_DynamicCast_AsOak_Player_Controller, bool K2Node_DynamicCast_bSuccess, class ABP_OakInventoryItemPickup_C* K2Node_DynamicCast_AsBP_Oak_Inventory_Item_Pickup, bool K2Node_DynamicCast_bSuccess1, class ACharacter* CallFunc_GetAssociatedCharacter_ReturnValue, class AOakCharacter* K2Node_DynamicCast_AsOak_Character, bool K2Node_DynamicCast_bSuccess2, class AActor* CallFunc_GetEquippedInventoryForSlot_ReturnValue, class UInventoryListComponent* CallFunc_GetInventoryComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_CanSwapItemForPickup_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
};

}


