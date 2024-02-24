#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x5C8 (0xB48 - 0x580)
// AnimBlueprintGeneratedClass BPAnim_DemiLitch.BPAnim_DemiLitch_C
class UBPAnim_DemiLitch_C : public UOakDroneProjectileAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x580(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_2A26E67542D9A4BD394D23BB13E4B74F; // 0x588(0x48)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_D8A973D4414D288AEC96FBBCDBAD140F; // 0x5D0(0xB0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_525B8A334A071AD69A47A688177395A8; // 0x680(0xB0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_6969F27D46111D529AD9EEAE4D8E8BAA; // 0x730(0xB0)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_F9D0513A4B3EC82371A2908DCD21FD1B; // 0x7E0(0x160)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_79B0020C4EAECA9170F379B56A434EEB; // 0x940(0x118)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_D313B6B540F8FAA147242DB0F26F13B9; // 0xA58(0xF0)(None)

	static class UClass* StaticClass();
	static class UBPAnim_DemiLitch_C* GetDefaultObj();

	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_DemiLitch_AnimGraphNode_BlendSpacePlayer_F9D0513A4B3EC82371A2908DCD21FD1B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_DemiLitch_AnimGraphNode_ApplyAdditive_79B0020C4EAECA9170F379B56A434EEB();
	void ExecuteUbergraph_BPAnim_DemiLitch(int32 EntryPoint);
};

}


