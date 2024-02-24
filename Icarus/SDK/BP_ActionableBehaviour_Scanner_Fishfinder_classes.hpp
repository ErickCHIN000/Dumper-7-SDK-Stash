#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x3B8 - 0x3AC)
// BlueprintGeneratedClass BP_ActionableBehaviour_Scanner_Fishfinder.BP_ActionableBehaviour_Scanner_Fishfinder_C
class UBP_ActionableBehaviour_Scanner_Fishfinder_C : public UBP_ActionableBehaviour_Scanner_DeepOre_C
{
public:
	uint8                                        Pad_5D6E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_ActionableBehaviour_Scanner_Fishfinder_C* GetDefaultObj();

	void PerformAction(class AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_ActionableBehaviour_Scanner_Fishfinder(int32 EntryPoint, class AActor* K2Node_Event_InvokingActor, enum class EActionableEventType K2Node_Event_OnActionType, enum class EActionableTrigger K2Node_Event_ActionTrigger, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2, bool CallFunc_IsServer_ReturnValue);
};

}


