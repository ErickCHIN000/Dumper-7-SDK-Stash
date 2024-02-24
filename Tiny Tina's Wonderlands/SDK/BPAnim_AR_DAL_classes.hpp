#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10E2 (0x1572 - 0x490)
// AnimBlueprintGeneratedClass BPAnim_AR_DAL.BPAnim_AR_DAL_C
class UBPAnim_AR_DAL_C : public UOakWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x490(0x8)(Transient, DuplicateTransient)
	uint8                                        Pad_3633[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_Slot                        AnimGraphNode_Slot_9914CA044F45AFCCBF9B5B8C8CC6AFF1; // 0x4A0(0xB0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_61D33CFE4B0467283F9DB888E710DAD0; // 0x550(0xB0)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_0ACB729D404CD32B28467E922D77CF19; // 0x600(0x50)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_FAD2F6F44A82C3F13D9AD998D38974F3; // 0x650(0x50)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_BBD2148944450E8382C2C3B313254B45; // 0x6A0(0x50)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_C1D1F82340D20B2557853C9EE27C3E16; // 0x6F0(0x50)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_AC8A6AD2472A5B52B698D49E29A9F01F; // 0x740(0xF0)(None)
	struct FAnimNode_Root                        AnimGraphNode_StateResult_C4E1B0AC4DA6C84AAB9B178164C468D1; // 0x830(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_E2D4D9B04782D34B2B82038AF2655238; // 0x878(0xF0)(None)
	struct FAnimNode_Root                        AnimGraphNode_StateResult_D1B0C5904AB897502725168A4A05519F; // 0x968(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2EC907224541F5F77C796180E34F0DBA; // 0x9B0(0xF0)(None)
	struct FAnimNode_Root                        AnimGraphNode_StateResult_530E88DD4C8AED40F6901EB645BAC44A; // 0xAA0(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1563EBBE4FEFC9EEB4AAB2B812C9D844; // 0xAE8(0xF0)(None)
	struct FAnimNode_Root                        AnimGraphNode_StateResult_7CFF05A4452053F7D16B16A4E3A91C9E; // 0xBD8(0x48)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_F114E6AE41FDC771862BEB9668491929; // 0xC20(0x188)(None)
	uint8                                        Pad_3639[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_Slot                        AnimGraphNode_Slot_119863164273F897AEA07F94E8968161; // 0xDB0(0xB0)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_A2B946B44DBA3428CCD5AC99C397CD35; // 0xE60(0x80)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_458D294A4694F5F47439D9A5AC7F679B; // 0xEE0(0x80)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_EED8E2BD4F731B79B5A5A4BB3BB6D442; // 0xF60(0xD0)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_308E125F4CC2589932DDAEAA57D4564C; // 0x1030(0x80)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_881686B54A5BA46EE9C27686975FD20D; // 0x10B0(0x80)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_BFB955734E308AED2F72599ED92697C8; // 0x1130(0x80)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_3A3C880842D6AC29280BB3B5572E8EA2; // 0x11B0(0x120)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_946E665B44B7F4B6B0C689B51B92C1F2; // 0x12D0(0x120)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_1DF0905C43431E0C240FD3A55AE850D3; // 0x13F0(0xE0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_99B76F904FD9D4074F6BD19581E08F0A; // 0x14D0(0x50)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_1D1218EA4A02E2734F76C5B10C236E5C; // 0x1520(0x48)(None)
	class UAnimSequence*                         IdleAddAnim;                                       // 0x1568(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bAddIdleAnim;                                      // 0x1570(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Daf_AltBarrel;                                     // 0x1571(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UBPAnim_AR_DAL_C* GetDefaultObj();

	void UpdateIdleAnim(uint8 NewParam, int32 A, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_DAL_AnimGraphNode_SequenceEvaluator_A2B946B44DBA3428CCD5AC99C397CD35();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_DAL_AnimGraphNode_SequenceEvaluator_458D294A4694F5F47439D9A5AC7F679B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_DAL_AnimGraphNode_BlendListByBool_EED8E2BD4F731B79B5A5A4BB3BB6D442();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_DAL_AnimGraphNode_SequenceEvaluator_308E125F4CC2589932DDAEAA57D4564C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_DAL_AnimGraphNode_LayeredBoneBlend_3A3C880842D6AC29280BB3B5572E8EA2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_DAL_AnimGraphNode_SequencePlayer_AC8A6AD2472A5B52B698D49E29A9F01F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_DAL_AnimGraphNode_TransitionResult_C1D1F82340D20B2557853C9EE27C3E16();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_DAL_AnimGraphNode_TransitionResult_BBD2148944450E8382C2C3B313254B45();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_DAL_AnimGraphNode_SequencePlayer_E2D4D9B04782D34B2B82038AF2655238();
	void BlueprintInitializeAnimation();
	void BlueprintSwitchedMode(int32 NewMode);
	void ExecuteUbergraph_BPAnim_AR_DAL(int32 EntryPoint, class UAnimSequence* Temp_object_Variable, bool CallFunc_NotEqual_ByteByte_ReturnValue, class UAnimSequence* Temp_object_Variable1, class UAnimSequence* Temp_object_Variable2, bool CallFunc_Not_PreBool_ReturnValue, class UAnimSequence* Temp_object_Variable3, uint8 Temp_byte_Variable, int32 K2Node_Event_NewMode, bool CallFunc_IsValid_ReturnValue, class UAnimSequence* K2Node_Select_Default);
};

}


