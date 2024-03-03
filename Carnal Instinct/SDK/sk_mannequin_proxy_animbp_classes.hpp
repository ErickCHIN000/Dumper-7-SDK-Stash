#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x6B8 (0x970 - 0x2B8)
// AnimBlueprintGeneratedClass sk_mannequin_proxy_animbp.sk_mannequin_proxy_AnimBP_C
class USk_mannequin_proxy_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_18AA[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2C8(0x30)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_3;                              // 0x2F8(0x48)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_1;                    // 0x340(0x158)(None)
	struct FAnimNode_PoseSnapshot                AnimGraphNode_PoseSnapshot;                        // 0x498(0x90)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_2;                     // 0x528(0x28)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x550(0xA0)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x5F0(0x158)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0x748(0xC0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_2;                              // 0x808(0x48)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1;                              // 0x850(0x48)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x898(0x48)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x8E0(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x908(0x28)(None)
	class AActor*                                Owning_actor;                                      // 0x930(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPoseSnapshot                         Proxy_snapshot;                                    // 0x938(0x38)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class USk_mannequin_proxy_AnimBP_C* GetDefaultObj();

	void Receive_snapshot(const struct FPoseSnapshot& Pose_snapshot, bool* ReturnNode);
	void AnimGraph(struct FPoseLink* AnimGraph);
	void Init_reference(class AActor* CallFunc_GetOwningActor_ReturnValue, class AActor* CallFunc_GetOwningActor_ReturnValue_1, bool CallFunc_IsValid_ReturnValue);
	void BlueprintInitializeAnimation();
	void BlueprintBeginPlay();
	void ExecuteUbergraph_sk_mannequin_proxy_AnimBP(int32 EntryPoint);
};

}


