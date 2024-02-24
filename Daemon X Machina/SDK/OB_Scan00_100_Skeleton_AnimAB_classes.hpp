#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x108 (0x460 - 0x358)
// AnimBlueprintGeneratedClass OB_Scan00_100_Skeleton_AnimAB.OB_Scan00_100_Skeleton_AnimAB_C
class UOB_Scan00_100_Skeleton_AnimAB_C : public UAnimInstance
{
public:
	uint8                                        Pad_449[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x360(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_2B800AA6419FE901F0FA35A12D3C8EA4; // 0x368(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_6E54CBFA42D2BB9CA4A1BBA58A5BAC33; // 0x3B0(0xB0)(None)

	static class UClass* StaticClass();
	static class UOB_Scan00_100_Skeleton_AnimAB_C* GetDefaultObj();

	void ExecuteUbergraph_OB_Scan00_100_Skeleton_AnimAB(int32 EntryPoint);
};

}


