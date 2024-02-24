#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x3B8 - 0x3AC)
// BlueprintGeneratedClass BP_ActionableBehaviour_Scanner_Cave.BP_ActionableBehaviour_Scanner_Cave_C
class UBP_ActionableBehaviour_Scanner_Cave_C : public UBP_ActionableBehaviour_Scanner_C
{
public:
	uint8                                        Pad_5C3E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_ActionableBehaviour_Scanner_Cave_C* GetDefaultObj();

	void PerformAction(class AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger);
	void ExecuteUbergraph_BP_ActionableBehaviour_Scanner_Cave(int32 EntryPoint, class AActor* K2Node_Event_InvokingActor, enum class EActionableEventType K2Node_Event_OnActionType, enum class EActionableTrigger K2Node_Event_ActionTrigger, bool CallFunc_IsServer_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, class ABP_SkeletalItem_Scanner_Cave_C* K2Node_DynamicCast_AsBP_Skeletal_Item_Scanner_Cave, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue);
};

}


