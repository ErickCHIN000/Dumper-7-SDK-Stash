#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2F8 (0x668 - 0x370)
// AnimBlueprintGeneratedClass DemoOuter_HairAnimBP.DemoOuter_HairAnimBP_C
class UDemoOuter_HairAnimBP_C : public UTTLDemoHairAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x370(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_BFDCF7EF472D67CD76F12481EADA4829; // 0x378(0x48)(None)
	struct FAnimNode_PoseSnapshot                AnimGraphNode_PoseSnapshot_2AFB2072428F940AEAE8F1B510E96349; // 0x3C0(0xB0)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_664B13574790882F6CCC768645238CC8; // 0x470(0xD0)(None)
	struct FAnimNode_Root                        AnimGraphNode_StateResult_E70C2A5C4B0873AFAC1D58B8D6AF2871; // 0x540(0x48)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_B9E58A734A599F6294C4B7B93B221EC4; // 0x588(0xE0)(None)

	static class UClass* StaticClass();
	static class UDemoOuter_HairAnimBP_C* GetDefaultObj();

	void EvaluateGraphExposedInputs_ExecuteUbergraph_DemoOuter_HairAnimBP_AnimGraphNode_BlendListByBool_664B13574790882F6CCC768645238CC8();
	void ExecuteUbergraph_DemoOuter_HairAnimBP(int32 EntryPoint);
};

}


