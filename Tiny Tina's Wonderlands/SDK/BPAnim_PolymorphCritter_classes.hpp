#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x618 (0xB98 - 0x580)
// AnimBlueprintGeneratedClass BPAnim_PolymorphCritter.BPAnim_PolymorphCritter_C
class UBPAnim_PolymorphCritter_C : public UOakDroneProjectileAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x580(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_69A4E9BF451622125B94C8A06C3B7A1F; // 0x588(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_18592BDD492B8BE89CF03B8B32FEA226; // 0x5D0(0xF0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_2212A29A43A7BABC6CCC9B942C108FBD; // 0x6C0(0xB0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_8B1716D7407185C42C7839B25633D2B0; // 0x770(0xB0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_BEFD61A9428CDD27511A6AA11202FAF4; // 0x820(0xB0)(None)
	struct FGbxAnimNode_BlendListByFloatInRange  GbxAnimGraphNode_BlendListByFloatInRange_16FA8F8E4E183DDB74777D96D632ACD7; // 0x8D0(0xE8)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1E5DCB6F4FC7A0931133B49B2714CD53; // 0x9B8(0xF0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_A7B6B9B1459EF198D9E2D7A6CDE89C2E; // 0xAA8(0xF0)(None)

	static class UClass* StaticClass();
	static class UBPAnim_PolymorphCritter_C* GetDefaultObj();

	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_PolymorphCritter_GbxAnimGraphNode_BlendListByFloatInRange_16FA8F8E4E183DDB74777D96D632ACD7();
	void ExecuteUbergraph_BPAnim_PolymorphCritter(int32 EntryPoint);
};

}


