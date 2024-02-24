#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x139C (0x172C - 0x390)
// AnimBlueprintGeneratedClass SK_CRE_Needler_AnimBP.SK_CRE_Needler_AnimBP_C
class USK_CRE_Needler_AnimBP_C : public UIcarusCreatureAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x390(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x398(0x30)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_1;                    // 0x3C8(0x158)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x520(0x48)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x568(0x158)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_3;                  // 0x6C0(0xE8)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_2;                  // 0x7A8(0xE8)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_1;                  // 0x890(0xE8)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer;                    // 0x978(0xE8)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0xA60(0x80)(None)
	struct FAnimNode_ApplyMeshSpaceAdditive      AnimGraphNode_ApplyMeshSpaceAdditive_1;            // 0xAE0(0xD0)(None)
	struct FAnimNode_ApplyMeshSpaceAdditive      AnimGraphNode_ApplyMeshSpaceAdditive;              // 0xBB0(0xD0)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1;                   // 0xC80(0xA0)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0xD20(0xA0)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0xDC0(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0xDE0(0x108)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0xEE8(0x20)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0xF08(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0xF38(0xB0)(None)
	struct FAnimNode_ControlRig                  AnimGraphNode_ControlRig_1;                        // 0xFE8(0x368)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x1350(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x1378(0x28)(None)
	struct FAnimNode_ControlRig                  AnimGraphNode_ControlRig;                          // 0x13A0(0x368)(None)
	bool                                         __CustomProperty_DoLookAt_BEEC1EC349E86EB9F7AC58A80D98A22A; // 0x1708(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_308C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               __CustomProperty_LookAtTargetLocation_BEEC1EC349E86EB9F7AC58A80D98A22A; // 0x170C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        __CustomProperty_Trace_Offset_Tail_29B5B1BB4351B438507913AF20ADBC96; // 0x1718(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        __CustomProperty_Trace_Offset_29B5B1BB4351B438507913AF20ADBC96; // 0x171C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               __CustomProperty_Trace_Length_29B5B1BB4351B438507913AF20ADBC96; // 0x1720(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class USK_CRE_Needler_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Needler_AnimBP_AnimGraphNode_ControlRig_BEEC1EC349E86EB9F7AC58A80D98A22A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Needler_AnimBP_AnimGraphNode_BlendSpacePlayer_3847537C4F400D2497D39C81CDFD767D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Needler_AnimBP_AnimGraphNode_BlendSpacePlayer_B895153B44CFB891CE16919FE3884B06();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Needler_AnimBP_AnimGraphNode_BlendListByBool_FE64EEA948DB4AB4DF8FE6B2EF291CBB();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_SK_CRE_Needler_AnimBP(int32 EntryPoint, float K2Node_Event_DeltaTimeX, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, float CallFunc_GetLeanAmount_ReturnValue, float CallFunc_GetLeanAmount_ReturnValue_1, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
};

}


