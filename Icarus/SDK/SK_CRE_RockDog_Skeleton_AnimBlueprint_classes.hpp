#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xCE8 (0x1078 - 0x390)
// AnimBlueprintGeneratedClass SK_CRE_RockDog_Skeleton_AnimBlueprint.SK_CRE_RockDog_Skeleton_AnimBlueprint_C
class USK_CRE_RockDog_Skeleton_AnimBlueprint_C : public UIcarusCreatureAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x390(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_1;                    // 0x398(0x158)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x4F0(0x48)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x538(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x560(0x28)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_2;                   // 0x588(0xA0)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x628(0x158)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x780(0x80)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1;                   // 0x800(0xA0)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x8A0(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x8C0(0x108)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x9C8(0x20)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x9E8(0xA0)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum;                     // 0xA88(0xB0)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_1;                  // 0xB38(0xE8)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer;                    // 0xC20(0xE8)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0xD08(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0xD88(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0xDB8(0xB0)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0xE68(0x30)(None)
	uint8                                        Pad_27EB[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_AimOffsetLookAt             AnimGraphNode_AimOffsetLookAt;                     // 0xEA0(0x1C0)(None)
	struct FVector                               __CustomProperty_Trace_Length_00F6EB50403AC7569B22089433167795; // 0x1060(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        __CustomProperty_Trace_Offset_00F6EB50403AC7569B22089433167795; // 0x106C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        __CustomProperty_Pelvis_Speed_Inc_00F6EB50403AC7569B22089433167795; // 0x1070(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        __CustomProperty_Pelvis_Speed_Dec_00F6EB50403AC7569B22089433167795; // 0x1074(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class USK_CRE_RockDog_Skeleton_AnimBlueprint_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_RockDog_Skeleton_AnimBlueprint_AnimGraphNode_BlendListByBool_8672E4424FBB4ADA0D79C3B61BF9C8FE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_RockDog_Skeleton_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_AF069F7C46E67A0ED47F3D94F4AE26EA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_RockDog_Skeleton_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_7FEA9F3F435AAF1CFEC9B4AB29389423();
	void ExecuteUbergraph_SK_CRE_RockDog_Skeleton_AnimBlueprint(int32 EntryPoint, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue);
};

}


