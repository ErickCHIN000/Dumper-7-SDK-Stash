#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x178 (0x4D0 - 0x358)
// AnimBlueprintGeneratedClass owp_11_AnimBP.owp_11_AnimBP_C
class UOwp_11_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_4BA[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x360(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_AC53F04C48F912AD18D6A6881B0D82A2; // 0x368(0x48)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_069E39474305DA272A9026B17542E840; // 0x3B0(0x70)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_AE2C15F54CE3B456C7B51CA936EC990A; // 0x420(0xB0)(None)

	static class UClass* StaticClass();
	static class UOwp_11_AnimBP_C* GetDefaultObj();

	void ExecuteUbergraph_owp_11_AnimBP(int32 EntryPoint);
};

}


