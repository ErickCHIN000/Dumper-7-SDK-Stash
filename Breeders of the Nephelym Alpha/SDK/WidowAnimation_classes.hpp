#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x12E8 (0x15B8 - 0x2D0)
// AnimBlueprintGeneratedClass WidowAnimation.WidowAnimation_C
class UWidowAnimation_C : public USexyManualCharacterAnimation
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2D8(0x30)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_2;                   // 0x308(0xA0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_3;                     // 0x3A8(0x28)(None)
	struct FAnimNode_LookAt                      AnimGraphNode_LookAt;                              // 0x3D0(0x1B0)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;             // 0x580(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0x5A0(0x20)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3;                  // 0x5C0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2;                  // 0x5E8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x610(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x638(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4;                    // 0x660(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0x6E0(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0x710(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x790(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x7C0(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x840(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x870(0xB0)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_5;                        // 0x920(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_4;                        // 0xA28(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_3;                        // 0xB30(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_2;                        // 0xC38(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0xD40(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0xE48(0x108)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0xF50(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0xF70(0x20)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_1;                    // 0xF90(0x158)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_2;                     // 0x10E8(0x28)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x1110(0x158)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x1268(0x80)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0x12E8(0xC0)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1;                   // 0x13A8(0xA0)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x1448(0xA0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x14E8(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x1510(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x1538(0x80)(None)

	static class UClass* StaticClass();
	static class UWidowAnimation_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_WidowAnimation_AnimGraphNode_BlendListByBool_48408D0E4D17C4055C470794B2F70409();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_WidowAnimation_AnimGraphNode_BlendListByBool_79DCCBC24D01FD58A38D1AA63A1C607E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_WidowAnimation_AnimGraphNode_SequencePlayer_4FEC88154D05E54C2BADA283FBFD8240();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_WidowAnimation_AnimGraphNode_ModifyBone_2A550BE642CDD64922E358862A8E10FA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_WidowAnimation_AnimGraphNode_ModifyBone_5CBCE9CD4D945CE58B39F897A8A1644F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_WidowAnimation_AnimGraphNode_ModifyBone_7DC6103D47B72D891082E1A8DF24F746();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_WidowAnimation_AnimGraphNode_ModifyBone_7A6C124644B071C893046C9D77DCF322();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_WidowAnimation_AnimGraphNode_ModifyBone_B5A46EDC4D08AB2D020AE89B781CEECD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_WidowAnimation_AnimGraphNode_ModifyBone_DC52A0884B7C23258EBA4BBEC81EC626();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_WidowAnimation_AnimGraphNode_LookAt_55BEF28E47212CFE05A9C2B0056A8337();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_WidowAnimation_AnimGraphNode_BlendListByBool_C1CE5FB9458950E19173069CFB855E72();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_WidowAnimation_AnimGraphNode_SequencePlayer_D012361B4974AFFEB22858A55A91EA45();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_WidowAnimation_AnimGraphNode_SequencePlayer_EBCD22984008DDE66BF3278BA6623233();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_WidowAnimation_AnimGraphNode_SequencePlayer_EFEA2BF6437C8D0C18C58FA65F041921();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_WidowAnimation_AnimGraphNode_TransitionResult_6EDA390243C44F8B22B4DEBE00D46D15();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_WidowAnimation_AnimGraphNode_TransitionResult_E8B41D234707F03196C09CAB2078452D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_WidowAnimation_AnimGraphNode_TransitionResult_83EE6E744753540C949F85967CFAFEA8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_WidowAnimation_AnimGraphNode_TransitionResult_737045F34735686ADF6108BCB8B8252F();
	void ExecuteUbergraph_WidowAnimation(int32 EntryPoint, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue);
};

}


