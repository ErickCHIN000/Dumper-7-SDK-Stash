#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1D8 (0x4B8 - 0x2E0)
// AnimBlueprintGeneratedClass AB_NPC_CustomPreview.AB_NPC_CustomPreview_C
class UAB_NPC_CustomPreview_C : public UGGNPCPreviewAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2E8(0x30)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x318(0xA0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x3B8(0x80)(None)
	struct FGGAnimNode_RandomPlayerWithPin       AnimGraphNode_GGRandomPlayer;                      // 0x438(0x80)(None)

	static class UClass* StaticClass();
	static class UAB_NPC_CustomPreview_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_NPC_CustomPreview_GGAnimGraphNode_RandomPlayerWithPin_1B410A454A12532B11DB6999778454FC();
	void ExecuteUbergraph_AB_NPC_CustomPreview(int32 EntryPoint, const struct FSequenceEntryPinArray& K2Node_MakeStruct_SequenceEntryPinArray);
};

}


