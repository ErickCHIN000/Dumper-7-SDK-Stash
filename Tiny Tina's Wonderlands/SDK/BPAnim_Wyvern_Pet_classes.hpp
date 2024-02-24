#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x24B0 (0x2A30 - 0x580)
// AnimBlueprintGeneratedClass BPAnim_Wyvern_Pet.BPAnim_Wyvern_Pet_C
class UBPAnim_Wyvern_Pet_C : public UOakDroneProjectileAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x580(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_971B9A1340551F5AC65FD09C1AC57989; // 0x588(0x48)(None)
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend_5DA6832846E15A47D354A392F8EE182C; // 0x5D0(0x120)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_C12748D14E5909647D10D38A419C7B2E; // 0x6F0(0x160)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_B762A7F3422B1ECBDD8CA3A7D25482AE; // 0x850(0x118)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3584F5EF4A572654948229B37C38D725; // 0x968(0xF0)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_CDFAF0DD45177DBC24DB3499433F9DF3; // 0xA58(0x160)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_3ACF28514BD854B7C7F046870E29C754; // 0xBB8(0x160)(None)
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend_A7ADFFC6439FADF195620B9E03F4BC3A; // 0xD18(0x120)(None)
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend_45B907B74CD6DF9DC6159687B79D957E; // 0xE38(0x120)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_BC8BB09E4160E316D1E03982402EC905; // 0xF58(0xF0)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_BF1FDC694822D7F57A8293BBACE978DD; // 0x1048(0x160)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_94395AB9488B8FAA27C86F81FA097DB7; // 0x11A8(0x160)(None)
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend_4E6BFAD5448D3E75DDC3738D5DE8F7F7; // 0x1308(0x120)(None)
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend_91D2A4BD48118F0A59EC4F9EDF804CC2; // 0x1428(0x120)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2BACDD6447A3A879237201BA55447F83; // 0x1548(0xF0)(None)
	struct FGbxAnimNode_BlendListByFloatInRange  GbxAnimGraphNode_BlendListByFloatInRange_BCCC857F467DE9182D73F9895CE718DF; // 0x1638(0xE8)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_F941B6704C038BB7030A6196F0658123; // 0x1720(0x160)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_5ED9AE7E48743C549ECD838DB8F3992B; // 0x1880(0x118)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_856B4B3A4CBF32EE9ED7DF9E3E864C25; // 0x1998(0x160)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_8925881D4FB8DE7DDDAB7F89523677A0; // 0x1AF8(0x160)(None)
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend_B479EC60405CD8EA32A69AA09906AB04; // 0x1C58(0x120)(None)
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend_C1DA2015475282A9FC5774B38C725DF0; // 0x1D78(0x120)(None)
	struct FAnimNode_Root                        AnimGraphNode_StateResult_19F5168449F984098F842F8D736E892E; // 0x1E98(0x48)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_C27A6BD04C2CE7ECA701099751DED51F; // 0x1EE0(0x188)(None)
	uint8                                        Pad_1AC3[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_Slot                        AnimGraphNode_Slot_15A5B10C48903B2550250A9D6ABE3685; // 0x2070(0xB0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_09F18F1149922AEE2CD8CAA147338A13; // 0x2120(0xB0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1F13A30149EA801D3694A795695FDA94; // 0x21D0(0xB0)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_7702B4AC47BF3B44329E928D6421324E; // 0x2280(0x120)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_DAAA07E04FBB32D8BAB0F6AB00F19224; // 0x23A0(0xE0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_D7B86BE143AC6034D53CDCB5D093A70A; // 0x2480(0x50)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_EEE00EE34D30F6AA1E2ED189FBE33D66; // 0x24D0(0x50)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_4CEA726B4EE30FB5E2CF3EA85E4E94A2; // 0x2520(0xE0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_C7B2333044DFE9061952D7928A295244; // 0x2600(0x50)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_722B3CDB4F948327548531850EC64B28; // 0x2650(0xE0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_050FEBD24A94AD9981249DA05BAA0F35; // 0x2730(0x50)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_56D9C60C4DB50A49BDD58EB62F6B81E7; // 0x2780(0xE0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_D04A7625434A4604A2125A9FB5F920A3; // 0x2860(0x50)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_FF3529A54F08FA1FAAE577B9D092B722; // 0x28B0(0x50)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_6412AE9E4E22FCA2813A0181C9290935; // 0x2900(0x120)(None)
	bool                                         IsFlying;                                          // 0x2A20(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1AE4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FlyPlayRate_Desend;                                // 0x2A24(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FlyPlayRate_Flat;                                  // 0x2A28(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FlyPlayRate_Ascend;                                // 0x2A2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBPAnim_Wyvern_Pet_C* GetDefaultObj();

	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Wyvern_Pet_AnimGraphNode_TwoWayBlend_91D2A4BD48118F0A59EC4F9EDF804CC2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Wyvern_Pet_GbxAnimGraphNode_BlendListByFloatInRange_BCCC857F467DE9182D73F9895CE718DF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Wyvern_Pet_AnimGraphNode_TwoWayBlend_4E6BFAD5448D3E75DDC3738D5DE8F7F7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Wyvern_Pet_AnimGraphNode_BlendSpacePlayer_94395AB9488B8FAA27C86F81FA097DB7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Wyvern_Pet_AnimGraphNode_BlendSpacePlayer_F941B6704C038BB7030A6196F0658123();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Wyvern_Pet_AnimGraphNode_BlendSpacePlayer_BF1FDC694822D7F57A8293BBACE978DD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Wyvern_Pet_AnimGraphNode_TwoWayBlend_45B907B74CD6DF9DC6159687B79D957E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Wyvern_Pet_AnimGraphNode_ApplyAdditive_5ED9AE7E48743C549ECD838DB8F3992B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Wyvern_Pet_AnimGraphNode_TwoWayBlend_A7ADFFC6439FADF195620B9E03F4BC3A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Wyvern_Pet_AnimGraphNode_BlendSpacePlayer_3ACF28514BD854B7C7F046870E29C754();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Wyvern_Pet_AnimGraphNode_BlendSpacePlayer_856B4B3A4CBF32EE9ED7DF9E3E864C25();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Wyvern_Pet_AnimGraphNode_BlendSpacePlayer_CDFAF0DD45177DBC24DB3499433F9DF3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Wyvern_Pet_AnimGraphNode_ApplyAdditive_B762A7F3422B1ECBDD8CA3A7D25482AE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Wyvern_Pet_AnimGraphNode_TwoWayBlend_C1DA2015475282A9FC5774B38C725DF0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Wyvern_Pet_AnimGraphNode_BlendSpacePlayer_C12748D14E5909647D10D38A419C7B2E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Wyvern_Pet_AnimGraphNode_TwoWayBlend_5DA6832846E15A47D354A392F8EE182C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Wyvern_Pet_AnimGraphNode_TwoWayBlend_B479EC60405CD8EA32A69AA09906AB04();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Wyvern_Pet_AnimGraphNode_BlendSpacePlayer_8925881D4FB8DE7DDDAB7F89523677A0();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_BPAnim_Wyvern_Pet(int32 EntryPoint, float CallFunc_Abs_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_BreakRotator_Roll1, float CallFunc_BreakRotator_Pitch1, float CallFunc_BreakRotator_Yaw1, float CallFunc_Abs_ReturnValue1);
};

}


