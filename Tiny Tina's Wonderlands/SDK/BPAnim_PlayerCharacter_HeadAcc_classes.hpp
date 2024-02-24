#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x98 (0x5D0 - 0x538)
// AnimBlueprintGeneratedClass BPAnim_PlayerCharacter_HeadAcc.BPAnim_PlayerCharacter_HeadAcc_C
class UBPAnim_PlayerCharacter_HeadAcc_C : public UGbxAnimInstance
{
public:
	uint8                                        Pad_29E9[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x540(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_3270D3A74C2C4F5CCB8976A481A547A2; // 0x548(0x48)(None)
	struct FGbxAnimNode_CopyParentTransforms     GbxAnimGraphNode_CopyParentTransforms_C1F7D3334C064305E95528ACE2C5DA64; // 0x590(0x40)(None)

	static class UClass* StaticClass();
	static class UBPAnim_PlayerCharacter_HeadAcc_C* GetDefaultObj();

	void ExecuteUbergraph_BPAnim_PlayerCharacter_HeadAcc(int32 EntryPoint);
};

}


