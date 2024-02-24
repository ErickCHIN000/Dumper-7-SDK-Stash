#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xBC9 (0x14A9 - 0x8E0)
// AnimBlueprintGeneratedClass DemoArsenal_AnimBP.DemoArsenal_AnimBP_C
class UDemoArsenal_AnimBP_C : public UTTLDemoArsenalAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x8E0(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_666EA5E741F13C50E4BCB99556C9DDF8; // 0x8E8(0x48)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_093241D447E7BE515CB32E8552ADE744; // 0x930(0x48)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_DDBD843347A08D113839CD8E539B241D; // 0x978(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_46F849DB4A3FEF78DE9024AF136D3EE2; // 0x9C0(0xB0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_9EA2F8174BD941011AE232A227B9F246; // 0xA70(0xB0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_DF0A2B3A4D84A56E51E338831EEFE30E; // 0xB20(0xB0)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_2F2CB80E4C79D3B1BF97148ECDB2CDED; // 0xBD0(0xE0)(None)
	struct FAnimNode_Root                        AnimGraphNode_StateResult_103777F04716D6F72B282EABA4C980EA; // 0xCB0(0x48)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_C78811514B67BBEDE5671F83D9D36D93; // 0xCF8(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_StateResult_F1D3510E43F900121A2175A2781F8564; // 0xD68(0x48)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_17239D814C3E49D3E47E32BB375CE139; // 0xDB0(0xE0)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_79C7329145090C3EFE3F768331A14B1F; // 0xE90(0x48)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_3827C6C94045E79A3CE8B9A1908DA1EB; // 0xED8(0x160)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_7661B47942247156E3B620AB9DB8F954; // 0x1038(0x160)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_07E631994BF5E8B8F7895DA2C97873C4; // 0x1198(0x160)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_4C3277994E41525A87FB81BD1EAE4083; // 0x12F8(0x160)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_949C1FC54ECCB55D63B7FCB16570761D; // 0x1458(0x48)(None)
	class ABaseCharacter_C*                      SelfArsenal;                                       // 0x14A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EDemoArsenalWaitAnim              WaitAnimationID;                                   // 0x14A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UDemoArsenal_AnimBP_C* GetDefaultObj();

	void SetWaitAnimationID(class FName Selection, bool K2Node_SwitchName_CmpSuccess);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DemoArsenal_AnimBP_AnimGraphNode_BlendListByEnum_2F2CB80E4C79D3B1BF97148ECDB2CDED();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DemoArsenal_AnimBP_AnimGraphNode_ModifyBone_3827C6C94045E79A3CE8B9A1908DA1EB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DemoArsenal_AnimBP_AnimGraphNode_ModifyBone_7661B47942247156E3B620AB9DB8F954();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DemoArsenal_AnimBP_AnimGraphNode_ModifyBone_07E631994BF5E8B8F7895DA2C97873C4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DemoArsenal_AnimBP_AnimGraphNode_ModifyBone_4C3277994E41525A87FB81BD1EAE4083();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DemoArsenal_AnimBP_AnimGraphNode_TransitionResult_DDBD843347A08D113839CD8E539B241D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DemoArsenal_AnimBP_AnimGraphNode_TransitionResult_093241D447E7BE515CB32E8552ADE744();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void StartMessageWaitBP(class FName AnimationName);
	void EndMessageWaitBP();
	void ExecuteUbergraph_DemoArsenal_AnimBP(int32 EntryPoint, bool CallFunc_UpdateParaameters_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector& CallFunc_NegateVector_ReturnValue, const struct FVector& CallFunc_NegateVector_ReturnValue1, float K2Node_Event_DeltaTimeX, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class FName K2Node_Event_AnimationName, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess);
};

}


