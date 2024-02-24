#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4E4 (0x79C - 0x2B8)
// AnimBlueprintGeneratedClass abp_nagant_doubleDrum.abp_nagant_doubleDrum_C
class UAbp_nagant_doubleDrum_C : public UAnimInstance
{
public:
	uint8                                        Pad_1B37[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2C8(0x30)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x2F8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x320(0x28)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_1;                 // 0x348(0x50)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x398(0x30)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator;                   // 0x3C8(0x50)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x418(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x448(0xB0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x4F8(0x48)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0x540(0x108)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x648(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x668(0x108)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x770(0x20)(None)
	bool                                         bRightState;                                       // 0x790(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1B5E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BarrelRollValueFirstDrum;                          // 0x794(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BarrelRollValueSecondDrum;                         // 0x798(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAbp_nagant_doubleDrum_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_abp_nagant_doubleDrum_AnimGraphNode_ModifyBone_A45A229141A03EC21544108E530179E1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_abp_nagant_doubleDrum_AnimGraphNode_ModifyBone_200F7DC04B114F96C576689322A05F41();
	void ExecuteUbergraph_abp_nagant_doubleDrum(int32 EntryPoint, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1);
};

}


