#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x861 (0xCF1 - 0x490)
// AnimBlueprintGeneratedClass BPAnim_SG_JAK.BPAnim_SG_JAK_C
class UBPAnim_SG_JAK_C : public UOakWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x490(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_CA9AE9354FFBD4618BD7ADB8A68E0EFF; // 0x498(0x48)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_C8B82D824648E73EA673DBA56C2361EA; // 0x4E0(0xB0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_CD4B7EBE4B42443B203363B3A4049A70; // 0x590(0xB0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_424045D44A765F7DEBA07D9C5D5DC6B6; // 0x640(0xB0)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_0B1CA6B84634F0537F6CA89B0236FF98; // 0x6F0(0x80)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_DA0DBC9B48C18E256AE7908C3D5C7368; // 0x770(0x80)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_9ED0199F4E5925C497A67B93487579C9; // 0x7F0(0x80)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_7BF79C534750679ACD282CBF2825073A; // 0x870(0x120)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_5A42184A41C414E0DDE2D082F2C3C313; // 0x990(0xD0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_16E151B044ABC13D90AC9BB4EB4766FF; // 0xA60(0xF0)(None)
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend_77083F024CD159EB7EBA3F885D180D87; // 0xB50(0x120)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_198DA2E94AD92AFECC982CA44DABAAB8; // 0xC70(0x80)(None)
	bool                                         Daf_AltBarrel;                                     // 0xCF0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UBPAnim_SG_JAK_C* GetDefaultObj();

	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_JAK_AnimGraphNode_TwoWayBlend_77083F024CD159EB7EBA3F885D180D87();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_JAK_AnimGraphNode_BlendListByBool_5A42184A41C414E0DDE2D082F2C3C313();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_JAK_AnimGraphNode_SequenceEvaluator_9ED0199F4E5925C497A67B93487579C9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_SG_JAK_AnimGraphNode_SequenceEvaluator_DA0DBC9B48C18E256AE7908C3D5C7368();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_BPAnim_SG_JAK(int32 EntryPoint, bool CallFunc_NotEqual_ByteByte_ReturnValue);
};

}


