#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB69 (0xEC9 - 0x360)
// AnimBlueprintGeneratedClass ABP_PostProcessing.ABP_PostProcessing_C
class UABP_PostProcessing_C : public ULSAnimInstance_PostProcess
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x360(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x368(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0x398(0x118)(None)
	struct FAnimNode_RotationOffsetBlendSpace    AnimGraphNode_RotationOffsetBlendSpace_1;          // 0x4B0(0x190)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_2;                    // 0x640(0x158)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_2;                     // 0x798(0x28)(None)
	struct FAnimNode_RotationOffsetBlendSpace    AnimGraphNode_RotationOffsetBlendSpace;            // 0x7C0(0x190)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_1;                    // 0x950(0x158)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0xAA8(0x28)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0xAD0(0x158)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0xC28(0x28)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0xC50(0xA0)(None)
	struct FAnimNode_PoseSnapshot                AnimGraphNode_PoseSnapshot;                        // 0xCF0(0x90)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0xD80(0x108)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0xE88(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0xEA8(0x20)(None)
	enum class EAlphaBlendOption                 Ragdoll_Blend_Type;                                // 0xEC8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UABP_PostProcessing_C* GetDefaultObj();

	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PostProcessing_AnimGraphNode_BlendListByBool_3ED225ED4C7B01F8429BA2AABCE9E8DB();
	void ExecuteUbergraph_ABP_PostProcessing(int32 EntryPoint, float CallFunc_GetUnRagdollBlendTime_ReturnValue);
};

}


