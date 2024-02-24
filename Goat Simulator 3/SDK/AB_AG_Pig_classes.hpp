#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3680 (0x4560 - 0xEE0)
// AnimBlueprintGeneratedClass AB_AG_Pig.AB_AG_Pig_C
class UAB_AG_Pig_C : public UGGGoatAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xEE0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0xEE8(0x30)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_4;                              // 0xF18(0x48)(None)
	struct FAnimNode_Inertialization             AnimGraphNode_Inertialization;                     // 0xF60(0x70)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_2;                   // 0xFD0(0xA0)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_7;                  // 0x1070(0xC0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_22;                    // 0x1130(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_21;                    // 0x1158(0x28)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1;                   // 0x1180(0xA0)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_6;                  // 0x1220(0xC0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_20;                    // 0x12E0(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_19;                    // 0x1308(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x1330(0x80)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_9;                    // 0x13B0(0x158)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x1508(0xA0)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_5;                  // 0x15A8(0xC0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_18;                    // 0x1668(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_17;                    // 0x1690(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_16;                    // 0x16B8(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_15;                    // 0x16E0(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_14;                    // 0x1708(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_13;                    // 0x1730(0x28)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_8;                    // 0x1758(0x158)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum;                     // 0x18B0(0xB0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_3;                              // 0x1960(0x48)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_7;                    // 0x19A8(0x158)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_2;                              // 0x1B00(0x48)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_6;                    // 0x1B48(0x158)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1;                              // 0x1CA0(0x48)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_5;                    // 0x1CE8(0x158)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_12;                    // 0x1E40(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_11;                    // 0x1E68(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_10;                    // 0x1E90(0x28)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_4;                    // 0x1EB8(0x158)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_5;                  // 0x2010(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_4;                  // 0x2038(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3;                  // 0x2060(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2;                  // 0x2088(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x20B0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x20D8(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x2100(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_3;                       // 0x2180(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x21B0(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0x2230(0x30)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_6;                  // 0x2260(0xE8)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x2348(0x30)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_5;                  // 0x2378(0xE8)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_4;                  // 0x2460(0xE8)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_3;                  // 0x2548(0xE8)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_2;                  // 0x2630(0xE8)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_1;                  // 0x2718(0xE8)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer;                    // 0x2800(0xE8)(None)
	struct FAnimNode_LinkedAnimGraph             AnimGraphNode_LinkedAnimGraph_2;                   // 0x28E8(0xA0)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x2988(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x29B8(0xB0)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_4;                  // 0x2A68(0xC0)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0x2B28(0x108)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;             // 0x2C30(0x20)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_3;                    // 0x2C50(0x158)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0x2DA8(0x20)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_9;                     // 0x2DC8(0x28)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_3;                  // 0x2DF0(0xC0)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x2EB0(0x20)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_8;                     // 0x2ED0(0x28)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x2EF8(0x108)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_2;                    // 0x3000(0x158)(None)
	struct FAnimNode_LinkedAnimGraph             AnimGraphNode_LinkedAnimGraph_1;                   // 0x3158(0xA0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_7;                     // 0x31F8(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_6;                     // 0x3220(0x28)(None)
	struct FAnimNode_LinkedAnimGraph             AnimGraphNode_LinkedAnimGraph;                     // 0x3248(0xA0)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_1;                    // 0x32E8(0x158)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_2;                  // 0x3440(0xC0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_5;                     // 0x3500(0x28)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x3528(0x48)(None)
	struct FCSNAnimNode_FootIKQuadruped2         CSNAnimGraphNode_FootIKQuadruped2;                 // 0x3570(0x4A0)(None)
	struct FAnimNode_TwoBoneIK                   AnimGraphNode_TwoBoneIK_3;                         // 0x3A10(0x1E0)(None)
	struct FAnimNode_TwoBoneIK                   AnimGraphNode_TwoBoneIK_2;                         // 0x3BF0(0x1E0)(None)
	struct FAnimNode_TwoBoneIK                   AnimGraphNode_TwoBoneIK_1;                         // 0x3DD0(0x1E0)(None)
	struct FAnimNode_TwoBoneIK                   AnimGraphNode_TwoBoneIK;                           // 0x3FB0(0x1E0)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x4190(0x20)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_4;                     // 0x41B0(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_3;                     // 0x41D8(0x28)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x4200(0x158)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_2;                     // 0x4358(0x28)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_1;                  // 0x4380(0xC0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x4440(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x4468(0x28)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0x4490(0xC0)(None)
	class ULSAnimationCollection*                __CustomProperty_Animations_9725C464431284AD888B758F70D53416; // 0x4550(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULSAnimationCollection*                __CustomProperty_MovementStatesAnimation_C3C4459443EEDC5B4ED2C4A99C3E7A08; // 0x4558(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAB_AG_Pig_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_AG_Pig_AnimGraphNode_BlendListByBool_0826DC3C4AEAEF1760C7EE81273B065C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_AG_Pig_AnimGraphNode_BlendListByBool_145616904D242FD67DFC68B8DFB9D6AA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_AG_Pig_AnimGraphNode_BlendListByBool_59B077CA45537A212F9B91946C50B9C8();
	void AnimNotify_Footstep_B_L();
	void AnimNotify_Footstep_B_R();
	void AnimNotify_Footstep_F_L();
	void AnimNotify_Footstep_F_R();
	void ExecuteUbergraph_AB_AG_Pig(int32 EntryPoint, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue_1);
};

}


