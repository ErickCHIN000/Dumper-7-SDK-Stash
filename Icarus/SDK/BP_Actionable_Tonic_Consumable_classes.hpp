#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x370 - 0x368)
// BlueprintGeneratedClass BP_Actionable_Tonic_Consumable.BP_Actionable_Tonic_Consumable_C
class UBP_Actionable_Tonic_Consumable_C : public UBP_ActionableBehaviour_Hold_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x368(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_Actionable_Tonic_Consumable_C* GetDefaultObj();

	bool CanHold();
	void CompleteHold(bool Success);
	void ExecuteUbergraph_BP_Actionable_Tonic_Consumable(int32 EntryPoint, class AIcarusPlayerCharacter* CallFunc_GetPlayer_OwningPlayer, bool K2Node_Event_Success, class AIcarusPlayerCharacterSurvival* K2Node_DynamicCast_AsIcarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, class UInventory* CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemInventory, int32 CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemSlot, enum class EDataValidity CallFunc_GetFocusedItemInventoryAndSlot_Validity, bool CallFunc_LocalOrServer_Local, bool CallFunc_LocalOrServer_Server, bool K2Node_SwitchEnum_CmpSuccess);
};

}


