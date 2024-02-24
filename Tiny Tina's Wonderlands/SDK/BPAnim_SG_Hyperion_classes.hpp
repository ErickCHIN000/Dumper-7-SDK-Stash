#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xFE1 (0x1471 - 0x490)
// AnimBlueprintGeneratedClass BPAnim_SG_Hyperion.BPAnim_SG_Hyperion_C
class UBPAnim_SG_Hyperion_C : public UOakWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x490(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_90D5B67D4418B63AFC860088E591AFCB; // 0x498(0x48)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_C3FA170542D2EEE64B1F9BA4588204CF; // 0x4E0(0xB0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_0EE4EF444C75EB0FD7EA01B2CE2F07D2; // 0x590(0xB0)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_316FC28E4460F0913BFD709A4C078281; // 0x640(0x120)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_0ACB729D404CD32B28467E922D77CF19; // 0x760(0x50)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_875C517B4B5B593E9AEBAEBF27F655B7; // 0x7B0(0x50)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_FAD2F6F44A82C3F13D9AD998D38974F3; // 0x800(0x50)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_BBD2148944450E8382C2C3B313254B45; // 0x850(0x50)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_C1D1F82340D20B2557853C9EE27C3E16; // 0x8A0(0x50)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_C4373DB943B58302F17D9483687E5275; // 0x8F0(0xF0)(None)
	struct FAnimNode_Root                        AnimGraphNode_StateResult_C4E1B0AC4DA6C84AAB9B178164C468D1; // 0x9E0(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_98D3301C448A213761039184589DD727; // 0xA28(0xF0)(None)
	struct FAnimNode_Root                        AnimGraphNode_StateResult_D1B0C5904AB897502725168A4A05519F; // 0xB18(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_EC2354B042D771E12566C7B6606EF905; // 0xB60(0xF0)(None)
	struct FAnimNode_Root                        AnimGraphNode_StateResult_530E88DD4C8AED40F6901EB645BAC44A; // 0xC50(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_84D9C4AD4A1C705B207A47881FAD91AC; // 0xC98(0xF0)(None)
	struct FAnimNode_Root                        AnimGraphNode_StateResult_7CFF05A4452053F7D16B16A4E3A91C9E; // 0xD88(0x48)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_741F75D5453E1070E19D1EB92E1A731A; // 0xDD0(0x188)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_4D5AE16746C5D8E615FEB38159B1C674; // 0xF58(0x120)(None)
	uint8                                        Pad_1540[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_Slot                        AnimGraphNode_Slot_7A27CFE548AD5EB826FE3BAC4EF660D7; // 0x1080(0xB0)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_F1ED16894046120BCF2AB1B649C90FD2; // 0x1130(0x80)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_2D6BD9134F45BE212B88899834D6F370; // 0x11B0(0x80)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_904BDB2445A788C1F28C31BB23A81CAE; // 0x1230(0x80)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_41DC16A74011BEE2937F8A92B10535C5; // 0x12B0(0xD0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_BD5B08BC4CC306046555BCB7E2DD490C; // 0x1380(0xF0)(None)
	bool                                         Daf_AltBarrel;                                     // 0x1470(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UBPAnim_SG_Hyperion_C* GetDefaultObj();

	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_Hyperion_AnimGraphNode_SequencePlayer_98D3301C448A213761039184589DD727();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_Hyperion_AnimGraphNode_SequencePlayer_C4373DB943B58302F17D9483687E5275();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_Hyperion_AnimGraphNode_TransitionResult_C1D1F82340D20B2557853C9EE27C3E16();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_Hyperion_AnimGraphNode_SequenceEvaluator_2D6BD9134F45BE212B88899834D6F370();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_Hyperion_AnimGraphNode_SequenceEvaluator_904BDB2445A788C1F28C31BB23A81CAE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_Hyperion_AnimGraphNode_BlendListByBool_41DC16A74011BEE2937F8A92B10535C5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_Hyperion_AnimGraphNode_TransitionResult_BBD2148944450E8382C2C3B313254B45();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_Hyperion_AnimGraphNode_TransitionResult_875C517B4B5B593E9AEBAEBF27F655B7();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_BPAnim_SG_Hyperion(int32 EntryPoint, bool CallFunc_NotEqual_ByteByte_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1);
};

}


