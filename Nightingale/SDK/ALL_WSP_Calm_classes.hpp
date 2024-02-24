#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4E0 (0x828 - 0x348)
// AnimBlueprintGeneratedClass ALL_WSP_Calm.ALL_WSP_Calm_C
class UALL_WSP_Calm_C : public UAnimInstance
{
public:
	uint8                                        Pad_51C7[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimBlueprintGeneratedMutableData    __AnimBlueprintMutables;                           // 0x358(0x19)(HasGetValueTypeHash)
	uint8                                        Pad_51CC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x378(0x8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x380(0x8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_3;                              // 0x388(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_2;                   // 0x3A8(0xB8)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x460(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_2;                   // 0x4A8(0x48)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_2;                              // 0x4F0(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_1;                   // 0x510(0xB8)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x5C8(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1;                   // 0x610(0x48)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_1;                              // 0x658(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0x678(0xB8)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x730(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x778(0x48)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x7C0(0x20)(None)
	struct FAnimSequenceCache                    IdleAnimSequence;                                  // 0x7E0(0x10)(BlueprintReadOnly, NoDestructor)
	double                                       IdleInPlayRate;                                    // 0x7F0(0x8)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       InWalkPlayRate;                                    // 0x7F8(0x8)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnimSequenceCache                    WalkAnimSequence;                                  // 0x800(0x10)(BlueprintReadOnly, NoDestructor)
	struct FAnimSequenceCache                    TrotAnimSequence;                                  // 0x810(0x10)(BlueprintReadOnly, NoDestructor)
	double                                       InTrotPlayRate;                                    // 0x820(0x8)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UALL_WSP_Calm_C* GetDefaultObj();

	void IdleLayer(const struct FPoseLink& IdleIn, double IdleInPlayRate, const struct FAnimSequenceCache& IdleAnimSequence, struct FPoseLink* IdleLayer);
	void WalkLayer(const struct FPoseLink& InWalkPose, const struct FAnimSequenceCache& WalkAnimSequence, double InWalkPlayRate, struct FPoseLink* WalkLayer);
	void TrotLayer(const struct FPoseLink& InTrotPose, double InTrotPlayRate, const struct FAnimSequenceCache& TrotAnimSequence, struct FPoseLink* TrotLayer);
	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_ALL_WSP_Calm(int32 EntryPoint);
};

}


