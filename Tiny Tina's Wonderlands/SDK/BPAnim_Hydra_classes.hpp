#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x82A (0x131A - 0xAF0)
// AnimBlueprintGeneratedClass BPAnim_Hydra.BPAnim_Hydra_C
class UBPAnim_Hydra_C : public UOakCharacterAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xAF0(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_4544926344754FD0E8B954B519B6F794; // 0xAF8(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1D6307314614BF508E37088DEF60EA22; // 0xB40(0xF0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_91ED2BB84CF3F8F722A4D5A273FCBD22; // 0xC30(0xB0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_85FA68D7444DE7C0F8F9C89F4FB1D316; // 0xCE0(0xB0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_AAB7A5BF4DA1F7F852169EABD6A32E51; // 0xD90(0xB0)(None)
	struct FAnimNode_RotationOffsetBlendSpace    AnimGraphNode_RotationOffsetBlendSpace_C5AD4A2E435CB0416DF76C8AD28B850B; // 0xE40(0x238)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_4D88033B41C2A5078FF5059DB2E1A856; // 0x1078(0x120)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_0F3D8903411BD45057010984EFF85605; // 0x1198(0xE0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_11E23C604F2EAA5EBD89DD90682D524B; // 0x1278(0x50)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_5684FA3140731203B171F8B94C6A64DF; // 0x12C8(0x50)(None)
	bool                                         bMultiheaded;                                      // 0x1318(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EHydraVariations                  HydraVariations;                                   // 0x1319(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBPAnim_Hydra_C* GetDefaultObj();

	void BlueprintInitializeAnimation();
	void OnAnimStyleChanged();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Hydra_AnimGraphNode_RotationOffsetBlendSpace_C5AD4A2E435CB0416DF76C8AD28B850B();
	void ExecuteUbergraph_BPAnim_Hydra(int32 EntryPoint);
};

}


