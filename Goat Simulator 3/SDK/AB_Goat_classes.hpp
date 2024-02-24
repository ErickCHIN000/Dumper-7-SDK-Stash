#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3F08 (0x4DE8 - 0xEE0)
// AnimBlueprintGeneratedClass AB_Goat.AB_Goat_C
class UAB_Goat_C : public UGGGoatAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xEE0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0xEE8(0x30)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_9;                    // 0xF18(0x158)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_5;                              // 0x1070(0x48)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3;                  // 0x10B8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2;                  // 0x10E0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x1108(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x1130(0x28)(None)
	struct FAnimNode_RandomPlayer                AnimGraphNode_RandomPlayer;                        // 0x1158(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0x11D0(0x30)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_9;                  // 0x1200(0xE8)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_8;                  // 0x12E8(0xE8)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_7;                  // 0x13D0(0xE8)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_6;                  // 0x14B8(0xE8)(None)
	struct FAnimNode_BlendListByInt              AnimGraphNode_BlendListByInt;                      // 0x15A0(0xA0)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x1640(0x30)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_5;                  // 0x1670(0xE8)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_4;                  // 0x1758(0xE8)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_3;                  // 0x1840(0xE8)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_2;                  // 0x1928(0xE8)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_1;                  // 0x1A10(0xE8)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer;                    // 0x1AF8(0xE8)(None)
	struct FAnimNode_LinkedAnimGraph             AnimGraphNode_SubInstance;                         // 0x1BE0(0xA0)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x1C80(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x1CB0(0xB0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_4;                              // 0x1D60(0x48)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_8;                    // 0x1DA8(0x158)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_3;                   // 0x1F00(0xA0)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_7;                  // 0x1FA0(0xC0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_23;                    // 0x2060(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_22;                    // 0x2088(0x28)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_3;                              // 0x20B0(0x48)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_7;                    // 0x20F8(0x158)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_2;                   // 0x2250(0xA0)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_6;                  // 0x22F0(0xC0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_21;                    // 0x23B0(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_20;                    // 0x23D8(0x28)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_5;                  // 0x2400(0xC0)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1;                   // 0x24C0(0xA0)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_4;                  // 0x2560(0xC0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_19;                    // 0x2620(0x28)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_2;                              // 0x2648(0x48)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_6;                    // 0x2690(0x158)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_3;                  // 0x27E8(0xC0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_18;                    // 0x28A8(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_17;                    // 0x28D0(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_16;                    // 0x28F8(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_15;                    // 0x2920(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_14;                    // 0x2948(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_13;                    // 0x2970(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_12;                    // 0x2998(0x28)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_5;                    // 0x29C0(0x158)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_11;                    // 0x2B18(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_10;                    // 0x2B40(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_9;                     // 0x2B68(0x28)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum;                     // 0x2B90(0xB0)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_2;                  // 0x2C40(0xC0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_8;                     // 0x2D00(0x28)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1;                              // 0x2D28(0x48)(None)
	struct FAnimNode_LinkedAnimGraph             AnimGraphNode_LinkedAnimGraph_1;                   // 0x2D70(0xA0)(None)
	struct FAnimNode_LinkedAnimGraph             AnimGraphNode_LinkedAnimGraph;                     // 0x2E10(0xA0)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_4;                    // 0x2EB0(0x158)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_1;                  // 0x3008(0xC0)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_3;                    // 0x30C8(0x158)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x3220(0x48)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_3;             // 0x3268(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_3;             // 0x3288(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0x32A8(0x108)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2;             // 0x33B0(0x20)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_2;                    // 0x33D0(0x158)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2;             // 0x3528(0x20)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_7;                     // 0x3548(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_6;                     // 0x3570(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_5;                     // 0x3598(0x28)(None)
	struct FCSNAnimNode_FootIKQuadruped2         CSNAnimGraphNode_FootIKQuadruped2;                 // 0x35C0(0x4A0)(None)
	struct FAnimNode_TwoBoneIK                   AnimGraphNode_TwoBoneIK_3;                         // 0x3A60(0x1E0)(None)
	struct FAnimNode_TwoBoneIK                   AnimGraphNode_TwoBoneIK_2;                         // 0x3C40(0x1E0)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x3E20(0xA0)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0x3EC0(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x3EE0(0x108)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;             // 0x3FE8(0x20)(None)
	uint8                                        Pad_B92[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_TwoBoneIK                   AnimGraphNode_TwoBoneIK_1;                         // 0x4010(0x1E0)(None)
	struct FAnimNode_TwoBoneIK                   AnimGraphNode_TwoBoneIK;                           // 0x41F0(0x1E0)(None)
	struct FCSNAnimNode_FootIK2                  CSNAnimGraphNode_FootIK2;                          // 0x43D0(0x480)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x4850(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x4870(0x20)(None)
	struct FAnimNode_Inertialization             AnimGraphNode_Inertialization;                     // 0x4890(0x70)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_4;                     // 0x4900(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_3;                     // 0x4928(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_2;                     // 0x4950(0x28)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_1;                    // 0x4978(0x158)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x4AD0(0x28)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x4AF8(0x158)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x4C50(0x80)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0x4CD0(0xC0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x4D90(0x28)(None)
	class ULSAnimationCollection*                __CustomProperty_Animations_9CF368CA438E33057C1E96A04077FA19; // 0x4DB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULSAnimationCollection*                __CustomProperty_MovementStatesAnimation_C659B02C46A66D016CFDAF89D487409E; // 0x4DC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCSNIKBoneContainer                   IK_Bones_Container_Back_Feet;                      // 0x4DC8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UAB_Goat_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void AnimNotify_Footstep_B_L();
	void AnimNotify_Footstep_B_R();
	void AnimNotify_Footstep_F_L();
	void AnimNotify_Footstep_F_R();
	void ExecuteUbergraph_AB_Goat(int32 EntryPoint);
};

}


