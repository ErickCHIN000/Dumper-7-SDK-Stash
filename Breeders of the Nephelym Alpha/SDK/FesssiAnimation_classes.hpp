#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1408 (0x16D8 - 0x2D0)
// AnimBlueprintGeneratedClass FesssiAnimation.FesssiAnimation_C
class UFesssiAnimation_C : public USexyManualCharacterAnimation
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2D8(0x30)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_3;                   // 0x308(0xA0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_3;                     // 0x3A8(0x28)(None)
	struct FAnimNode_LookAt                      AnimGraphNode_LookAt;                              // 0x3D0(0x1B0)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;             // 0x580(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0x5A0(0x20)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3;                  // 0x5C0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2;                  // 0x5E8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x610(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x638(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_5;                    // 0x660(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0x6E0(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4;                    // 0x710(0x80)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_2;                   // 0x790(0xA0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0x830(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x8B0(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x8E0(0x80)(None)
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
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x1230(0x158)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x1388(0x80)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0x1408(0xC0)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1;                   // 0x14C8(0xA0)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x1568(0xA0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x1608(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x1630(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x1658(0x80)(None)

	static class UClass* StaticClass();
	static class UFesssiAnimation_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FesssiAnimation_AnimGraphNode_BlendListByBool_7833307743CE382C63EB7A989C5BB263();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FesssiAnimation_AnimGraphNode_BlendListByBool_2639ABE14ECB256CD473C68CD43CFE39();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FesssiAnimation_AnimGraphNode_SequencePlayer_4B3C98F9487BA5C3DCCCB388D0B6615E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FesssiAnimation_AnimGraphNode_ModifyBone_E042EF07409062E84E748BBE93C22E2E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FesssiAnimation_AnimGraphNode_ModifyBone_10B4C73F4CE825B76F01549285292F07();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FesssiAnimation_AnimGraphNode_ModifyBone_E03D67DF48CD14E8A0F64782F3EC494F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FesssiAnimation_AnimGraphNode_ModifyBone_0F1F31DB40A69E31DBCD91B9A7E1ADF7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FesssiAnimation_AnimGraphNode_ModifyBone_195B05A04D0ABDE10D7CD99CD0669642();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FesssiAnimation_AnimGraphNode_ModifyBone_174FF5D044EE15204BC879A8E0525898();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FesssiAnimation_AnimGraphNode_LookAt_772A109B4D0466C9F53A6F94CDBDA60C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FesssiAnimation_AnimGraphNode_BlendListByBool_E80473F744709DF79D81FA840FBAEF60();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FesssiAnimation_AnimGraphNode_SequencePlayer_C98CE0FD473E7E06344DD79CAC1F081D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FesssiAnimation_AnimGraphNode_BlendListByBool_07775ADD413A7C7511E1B48348F75A15();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FesssiAnimation_AnimGraphNode_SequencePlayer_2BABA0A44ACCA35E209C9984D8FBAAFC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FesssiAnimation_AnimGraphNode_SequencePlayer_B8FB7E7A434183C38D47F3A6FFCD278F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FesssiAnimation_AnimGraphNode_TransitionResult_53DBCBF64AFF00558DF61B83F76BC74E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FesssiAnimation_AnimGraphNode_TransitionResult_FC46E0FE46FA904E9914A5B0668BBEEB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FesssiAnimation_AnimGraphNode_TransitionResult_919851D24CBD2BE9BB910DA2F91DE033();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FesssiAnimation_AnimGraphNode_TransitionResult_5E2F50D54877DE973185B1AF934CB68A();
	void ExecuteUbergraph_FesssiAnimation(int32 EntryPoint, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue);
};

}


