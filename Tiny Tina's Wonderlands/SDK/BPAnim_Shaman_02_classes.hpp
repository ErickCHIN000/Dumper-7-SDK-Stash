#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x550 (0xA88 - 0x538)
// AnimBlueprintGeneratedClass BPAnim_Shaman_02.BPAnim_Shaman_02_C
class UBPAnim_Shaman_02_C : public UGbxAnimInstance
{
public:
	uint8                                        Pad_180D[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x540(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_5C794CDC422177E0F5BF39B69DF1D166; // 0x548(0x48)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_2D480BA74E6F0AC2E9D4659371781701; // 0x590(0xB0)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_425102CB4357FD40E3F0D489FDA5CE2D; // 0x640(0x50)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_6C6BF7EE461EFC81A1C95B9C068B27E5; // 0x690(0xF0)(None)
	struct FAnimNode_Root                        AnimGraphNode_StateResult_78D455C04924EB024351508604A876CD; // 0x780(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_CAF2FF834A67CD978D40D98B73CB1821; // 0x7C8(0xF0)(None)
	struct FAnimNode_Root                        AnimGraphNode_StateResult_7E1871894553D01A3970F785AE21D421; // 0x8B8(0x48)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_1AA342214D9D7E637CCCA3AFF384DCA6; // 0x900(0x188)(None)

	static class UClass* StaticClass();
	static class UBPAnim_Shaman_02_C* GetDefaultObj();

	void ExecuteUbergraph_BPAnim_Shaman_02(int32 EntryPoint);
};

}


