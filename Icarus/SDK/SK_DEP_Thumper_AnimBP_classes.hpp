#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x269 (0x521 - 0x2B8)
// AnimBlueprintGeneratedClass SK_DEP_Thumper_AnimBP.SK_DEP_Thumper_AnimBP_C
class USK_DEP_Thumper_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_6171[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2C8(0x30)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x2F8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x320(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x348(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x3C8(0x30)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x3F8(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x428(0xB0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x4D8(0x48)(None)
	bool                                         IsThumping;                                        // 0x520(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class USK_DEP_Thumper_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_SK_DEP_Thumper_AnimBP(int32 EntryPoint, class AActor* CallFunc_GetOwningActor_ReturnValue, class ABP_Thumper_C* K2Node_DynamicCast_AsBP_Thumper, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_DeltaTimeX);
};

}


