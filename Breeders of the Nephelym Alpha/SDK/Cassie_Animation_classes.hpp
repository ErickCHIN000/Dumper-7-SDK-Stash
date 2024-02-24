#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1668 (0x1938 - 0x2D0)
// AnimBlueprintGeneratedClass Cassie_Animation.Cassie_Animation_C
class UCassie_Animation_C : public USexyManualCharacterAnimation
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
	static class UCassie_Animation_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Cassie_Animation_AnimGraphNode_BlendListByBool_031DF4614B013895C34A11AC23E1D985();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Cassie_Animation_AnimGraphNode_BlendListByBool_843DF06647821DF5B32DF6B218C0C92C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Cassie_Animation_AnimGraphNode_SequencePlayer_79EFD12D46F1B41F8CDB7DB31973B9E4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Cassie_Animation_AnimGraphNode_BlendListByBool_39FCA85C4557E7CEF03E8493981431E7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Cassie_Animation_AnimGraphNode_SequencePlayer_A13F1D8647492C5D005A2D9A9E5AB668();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Cassie_Animation_AnimGraphNode_ModifyBone_1771C3FD48EBC55AC187F18EC66FF97B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Cassie_Animation_AnimGraphNode_ModifyBone_CA2433FA456E44C29BD2869127476E0C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Cassie_Animation_AnimGraphNode_ModifyBone_DC0F9E7F4E5D77ACF1DBAA94EB2B48AC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Cassie_Animation_AnimGraphNode_ModifyBone_31D298C44582E246178317820FFA1424();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Cassie_Animation_AnimGraphNode_ModifyBone_09C68CE04660A23E74E89986045596BA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Cassie_Animation_AnimGraphNode_ModifyBone_3D9193204DD3F2F5274C39B9D3A995A1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Cassie_Animation_AnimGraphNode_LookAt_34B930B34C695B33494A2C936E68955B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Cassie_Animation_AnimGraphNode_BlendListByBool_25D9AEDD464103E6A7B7DBBBBE1BAD86();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Cassie_Animation_AnimGraphNode_SequencePlayer_A67BF9FC4D76F6A0C1630EAD7EF3FFC5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Cassie_Animation_AnimGraphNode_BlendListByBool_396B147E4678CCDE267A7CA07D821641();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Cassie_Animation_AnimGraphNode_SequencePlayer_3CCBB23540E0CF14B63A7587F847CEA9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Cassie_Animation_AnimGraphNode_TransitionResult_B94E5C0D45AF5A825F4FEBA250FBAE42();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Cassie_Animation_AnimGraphNode_TransitionResult_0872C5814C61E81BFA84B9900BA7A83C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Cassie_Animation_AnimGraphNode_TransitionResult_BAAB09404B345285E736A39F5DE6160E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Cassie_Animation_AnimGraphNode_TransitionResult_C89FCD2F40B722E52C4606BFCDBD6421();
	void ExecuteUbergraph_Cassie_Animation(int32 EntryPoint, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
};

}


