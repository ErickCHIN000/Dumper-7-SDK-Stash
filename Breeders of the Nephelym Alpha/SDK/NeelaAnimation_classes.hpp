#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x12E8 (0x15B8 - 0x2D0)
// AnimBlueprintGeneratedClass NeelaAnimation.NeelaAnimation_C
class UNeelaAnimation_C : public USexyManualCharacterAnimation
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
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x14E8(0x80)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x1568(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x1590(0x28)(None)

	static class UClass* StaticClass();
	static class UNeelaAnimation_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NeelaAnimation_AnimGraphNode_BlendListByBool_8228908049CAC686CB200DA66EF58661();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NeelaAnimation_AnimGraphNode_BlendListByBool_CA5665C248145D51E60608BB57689C14();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NeelaAnimation_AnimGraphNode_SequencePlayer_2DB6BED940CAA019E23C0F9A4456CF7A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NeelaAnimation_AnimGraphNode_ModifyBone_5F4CA1034E5D2672789E398BE740EE6E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NeelaAnimation_AnimGraphNode_ModifyBone_00591C6C477CD38A58A4D78C31A21402();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NeelaAnimation_AnimGraphNode_ModifyBone_97AE0922418856D73914698C7A86D985();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NeelaAnimation_AnimGraphNode_ModifyBone_FA0AD50945D4811B1415FD9FFB7A7E9E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NeelaAnimation_AnimGraphNode_ModifyBone_92301340462E52716A0FC2AED0524A69();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NeelaAnimation_AnimGraphNode_ModifyBone_A5D80BC944ED25376FC9A998A317FF7D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NeelaAnimation_AnimGraphNode_LookAt_B217174A4F9923FFB91E96BD1009A9FA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NeelaAnimation_AnimGraphNode_BlendListByBool_74103F824948D350842355ACD0E0439B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NeelaAnimation_AnimGraphNode_SequencePlayer_A9BE8479457079A356F7B9902CBD51F1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NeelaAnimation_AnimGraphNode_SequencePlayer_6001B1D54BB01DB439508F854EDDD9E2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NeelaAnimation_AnimGraphNode_TransitionResult_BE42B70446D93689251D66B8FC677C2D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NeelaAnimation_AnimGraphNode_TransitionResult_30FCC6ED45D0509022BF3F9A24C430BB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NeelaAnimation_AnimGraphNode_TransitionResult_C40D6D094A84CAEF5E7CBAAA3B2A25E3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_NeelaAnimation_AnimGraphNode_TransitionResult_C87F0A4B46F84C5C382749BBC639F37C();
	void ExecuteUbergraph_NeelaAnimation(int32 EntryPoint, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue);
};

}


