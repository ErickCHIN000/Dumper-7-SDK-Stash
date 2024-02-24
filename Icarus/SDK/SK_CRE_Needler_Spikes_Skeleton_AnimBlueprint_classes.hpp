#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x5C9 (0x881 - 0x2B8)
// AnimBlueprintGeneratedClass SK_CRE_Needler_Spikes_Skeleton_AnimBlueprint.SK_CRE_Needler_Spikes_Skeleton_AnimBlueprint_C
class USK_CRE_Needler_Spikes_Skeleton_AnimBlueprint_C : public UAnimInstance
{
public:
	uint8                                        Pad_4BB5[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2C8(0x30)(None)
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh;                    // 0x2F8(0x1D8)(ContainsInstancedReference)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x4D0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x4F8(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x520(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x5A0(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x5D0(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x650(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x680(0xB0)(None)
	struct FAnimNode_MakeDynamicAdditive         AnimGraphNode_MakeDynamicAdditive;                 // 0x730(0x38)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator;                   // 0x768(0x50)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive;                       // 0x7B8(0xC8)(None)
	bool                                         OnCooldown;                                        // 0x880(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class USK_CRE_Needler_Spikes_Skeleton_AnimBlueprint_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_SK_CRE_Needler_Spikes_Skeleton_AnimBlueprint(int32 EntryPoint, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class ABP_NPC_Needler_Character_C* K2Node_DynamicCast_AsBP_NPC_Needler_Character, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_DeltaTimeX, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue);
};

}


