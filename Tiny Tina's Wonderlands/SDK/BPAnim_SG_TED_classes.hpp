#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x6C1 (0xB51 - 0x490)
// AnimBlueprintGeneratedClass BPAnim_SG_TED.BPAnim_SG_TED_C
class UBPAnim_SG_TED_C : public UOakWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x490(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_5224B7584F57C22EC8B3F3822A16B7A6; // 0x498(0x48)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1C13C20D449B7508F6E515905B723E17; // 0x4E0(0xB0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_362D123B4D70B29CDA5C6FAC76E7BED7; // 0x590(0xB0)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_4B7A1E844EE9CC09773401A0A6E9ADB4; // 0x640(0x120)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_763EFFAA4F67E81A57FA96A72C95E00C; // 0x760(0xB0)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_C637A17F48B7EE131749FC99604C46F6; // 0x810(0x80)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_EAFD87774643D121820050A044725547; // 0x890(0x80)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_E919D046443AFD62142747A04AB95FE0; // 0x910(0x80)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_75A16F2F4325207E8AEFE6A2C3064253; // 0x990(0xD0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_C0A2B38D4D14F4BC6313579E7DCFD99F; // 0xA60(0xF0)(None)
	bool                                         Daf_AltBarrel;                                     // 0xB50(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UBPAnim_SG_TED_C* GetDefaultObj();

	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_TED_AnimGraphNode_BlendListByBool_75A16F2F4325207E8AEFE6A2C3064253();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_TED_AnimGraphNode_SequenceEvaluator_E919D046443AFD62142747A04AB95FE0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_TED_AnimGraphNode_SequenceEvaluator_EAFD87774643D121820050A044725547();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_BPAnim_SG_TED(int32 EntryPoint, bool CallFunc_NotEqual_ByteByte_ReturnValue);
};

}


