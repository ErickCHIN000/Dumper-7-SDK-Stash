#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1C9 (0x481 - 0x2B8)
// AnimBlueprintGeneratedClass abp_makarov.abp_makarov_C
class UAbp_makarov_C : public UAnimInstance
{
public:
	uint8                                        Pad_CBB[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2C8(0x30)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x2F8(0xA0)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_1;                 // 0x398(0x50)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator;                   // 0x3E8(0x50)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x438(0x48)(None)
	bool                                         bEmpty;                                            // 0x480(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UAbp_makarov_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_abp_makarov(int32 EntryPoint);
};

}


