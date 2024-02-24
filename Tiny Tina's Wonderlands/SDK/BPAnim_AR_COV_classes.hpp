#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x731 (0xBC1 - 0x490)
// AnimBlueprintGeneratedClass BPAnim_AR_COV.BPAnim_AR_COV_C
class UBPAnim_AR_COV_C : public UOakWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x490(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_00394B09495B9C48FF94AEA0FAB5452F; // 0x498(0x48)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_B866D7984649E934D270BCB6DC97F43F; // 0x4E0(0x120)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_50EACE9D46963D05B328FAA26DFE2F12; // 0x600(0xB0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_734E483B48D50F406204F398654602F1; // 0x6B0(0xB0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_7A6E3B134B891D3BD1F7B6BB2B1CF622; // 0x760(0xF0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_618C86274BC6D63C7B1B93AE529B85BA; // 0x850(0xB0)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_D65EB1D54CE0E865F038DE91CE2923E6; // 0x900(0x80)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_D63CAFC74B6F96C61CDA459B1D582786; // 0x980(0x80)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_874A026C41AAEB331B5DD5B689F17C23; // 0xA00(0xD0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_D805AB9043CDBDC59DD239AAE2667A3F; // 0xAD0(0xF0)(None)
	bool                                         Daf_AltBarrel;                                     // 0xBC0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UBPAnim_AR_COV_C* GetDefaultObj();

	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_COV_AnimGraphNode_BlendListByBool_874A026C41AAEB331B5DD5B689F17C23();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_COV_AnimGraphNode_SequenceEvaluator_D63CAFC74B6F96C61CDA459B1D582786();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_AR_COV_AnimGraphNode_SequenceEvaluator_D65EB1D54CE0E865F038DE91CE2923E6();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_BPAnim_AR_COV(int32 EntryPoint, bool CallFunc_NotEqual_ByteByte_ReturnValue);
};

}


