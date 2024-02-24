#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9DC (0xC94 - 0x2B8)
// AnimBlueprintGeneratedClass 3RD_MAL_RIG_BedAnimBP.3RD_MAL_RIG_BedAnimBP_C
class UThreeRD_MAL_RIG_BedAnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_4B3A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_2;                              // 0x2C8(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_1;                   // 0x2F8(0x118)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x410(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0x438(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_3;                       // 0x4B8(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x4E8(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0x568(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_1;                      // 0x598(0xB0)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0x648(0x108)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;             // 0x750(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0x770(0x20)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_1;                              // 0x790(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0x7C0(0x118)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x8D8(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x900(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x980(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x9B0(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0xA30(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0xA60(0xB0)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0xB10(0x108)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0xC18(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0xC38(0x20)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0xC58(0x30)(None)
	struct FVector                               Offset;                                            // 0xC88(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UThreeRD_MAL_RIG_BedAnimBP_C* GetDefaultObj();

	void VehicleLowerBody(const struct FPoseLink& LowerInPose, struct FPoseLink* VehicleLowerBody);
	void VehicleUpperBody(const struct FPoseLink& UpperInPose, struct FPoseLink* VehicleUpperBody);
	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_3RD_MAL_RIG_BedAnimBP(int32 EntryPoint);
};

}


