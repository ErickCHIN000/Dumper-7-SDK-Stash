#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x370 - 0x368)
// BlueprintGeneratedClass BP_ActionableBehaviour_DropGItem.BP_ActionableBehaviour_DropGItem_C
class UBP_ActionableBehaviour_DropGItem_C : public UBP_ActionableBehaviour_Hold_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x368(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_ActionableBehaviour_DropGItem_C* GetDefaultObj();

	void PerformAction(class AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger);
	void DropItem(enum class EActionableEventType ActionType);
	void CancelDrop();
	void ExecuteUbergraph_BP_ActionableBehaviour_DropGItem(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* K2Node_Event_InvokingActor, enum class EActionableEventType K2Node_Event_OnActionType, enum class EActionableTrigger K2Node_Event_ActionTrigger, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class EActionableEventType K2Node_CustomEvent_ActionType, enum class EValid CallFunc_GetTrait_Paths, class UInventoryComponent* CallFunc_GetTrait_ReturnValue, const struct FActionData& CallFunc_GetActionData_OutData, bool CallFunc_GetActionData_ReturnValue, class UInventory* CallFunc_GetInventory_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_CanHold_ReturnValue);
};

}


