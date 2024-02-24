#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x108 (0x3C0 - 0x2B8)
// AnimBlueprintGeneratedClass abp_syringe_00.abp_syringe_00_C
class UAbp_syringe_00_C : public UAnimInstance
{
public:
	uint8                                        Pad_1201[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2C8(0x30)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x2F8(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x340(0x80)(None)

	static class UClass* StaticClass();
	static class UAbp_syringe_00_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_abp_syringe_00(int32 EntryPoint, float CallFunc_GetCurveValue_ReturnValue, float K2Node_Event_DeltaTimeX, class USkeletalMeshComponent* CallFunc_GetOwningComponent_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
};

}


