#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1668 (0x1938 - 0x2D0)
// AnimBlueprintGeneratedClass Amber_Animation.Amber_Animation_C
class UAmber_Animation_C : public USexyManualCharacterAnimation
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2D8(0x30)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_4;                   // 0x308(0xA0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_3;                     // 0x3A8(0x28)(None)
	struct FAnimNode_LookAt                      AnimGraphNode_LookAt;                              // 0x3D0(0x1B0)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;             // 0x580(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0x5A0(0x20)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3;                  // 0x5C0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2;                  // 0x5E8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x610(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x638(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_7;                    // 0x660(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0x6E0(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_6;                    // 0x710(0x80)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_3;                   // 0x790(0xA0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_5;                    // 0x830(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x8B0(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4;                    // 0x8E0(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x960(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x990(0xB0)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_5;                        // 0xA40(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_4;                        // 0xB48(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_3;                        // 0xC50(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_2;                        // 0xD58(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0xE60(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0xF68(0x108)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x1070(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x1090(0x20)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_1;                    // 0x10B0(0x158)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_2;                     // 0x1208(0x28)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_1;                  // 0x1230(0xC0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0x12F0(0x80)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_2;                   // 0x1370(0xA0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x1410(0x80)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x1490(0x158)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x15E8(0x80)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0x1668(0xC0)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1;                   // 0x1728(0xA0)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x17C8(0xA0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x1868(0x80)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x18E8(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x1910(0x28)(None)

	static class UClass* StaticClass();
	static class UAmber_Animation_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Amber_Animation_AnimGraphNode_BlendListByBool_3E09368D4E9A1EF7682E77826899BB06();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Amber_Animation_AnimGraphNode_BlendListByBool_542CB5054358B8F410002A99F597A77F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Amber_Animation_AnimGraphNode_SequencePlayer_68320E0047E9D0A75E3CBDBC1A3773BC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Amber_Animation_AnimGraphNode_BlendListByBool_2639E0584FEED41145DB1AA623CE676E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Amber_Animation_AnimGraphNode_SequencePlayer_EDB9EBA344DF1B8C6D174291BC5F2482();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Amber_Animation_AnimGraphNode_ModifyBone_50C7EFC64C683DEA2B46D7A2D40965FF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Amber_Animation_AnimGraphNode_ModifyBone_FE70F373408120C1A38F4598095900CF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Amber_Animation_AnimGraphNode_ModifyBone_4A9FB3A1430FCB38BF22A08157DA8DCD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Amber_Animation_AnimGraphNode_ModifyBone_A8F5CBA34828909816F295A19B2998D1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Amber_Animation_AnimGraphNode_ModifyBone_BF583AF84B58AD3EC3BB109E493F4ED0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Amber_Animation_AnimGraphNode_ModifyBone_BCA5C0844031C584C8C5AB838C4DEECF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Amber_Animation_AnimGraphNode_LookAt_7163C5F34E6188E5E3DA9CBDEACE5CA3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Amber_Animation_AnimGraphNode_BlendListByBool_B1FA80B147CE7B9503F2FFB4E8A1F889();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Amber_Animation_AnimGraphNode_SequencePlayer_6E1F917B4BA39DE1F4576A9B65BF11C4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Amber_Animation_AnimGraphNode_BlendListByBool_695702C54633FB49234B6AA9B41AE137();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Amber_Animation_AnimGraphNode_SequencePlayer_E35B760B4EE50C1458D8C68C248695A6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Amber_Animation_AnimGraphNode_TransitionResult_1AD353304688A57834A282B841F26714();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Amber_Animation_AnimGraphNode_TransitionResult_ED42E7074809269E2AA6FF8449EA5F8F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Amber_Animation_AnimGraphNode_TransitionResult_DD2DE3A449055779F5374CA78F8A1E10();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Amber_Animation_AnimGraphNode_TransitionResult_A105162245C033B31BC9D2BDED92318F();
	void AnimNotify_MilkBurstR();
	void ExecuteUbergraph_Amber_Animation(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
};

}


