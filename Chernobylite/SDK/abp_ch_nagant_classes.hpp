#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x265 (0x51D - 0x2B8)
// AnimBlueprintGeneratedClass abp_ch_nagant.abp_ch_nagant_C
class UAbp_ch_nagant_C : public UAnimInstance
{
public:
	uint8                                        Pad_1CDF[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x2C8(0x20)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x2E8(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x308(0x108)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x410(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x458(0x80)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x4D8(0x30)(None)
	FMulticastInlineDelegateProperty_            StartOnShotBarrelRoll;                             // 0x508(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                        BarrelRollValue;                                   // 0x518(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsOpened;                                         // 0x51C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UAbp_ch_nagant_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_abp_ch_nagant_AnimGraphNode_ModifyBone_02AA1C224290625D151ACEACEF924F74();
	void AnimNotify_BarrelRollOnShoot();
	void ExecuteUbergraph_abp_ch_nagant(int32 EntryPoint, const struct FRotator& CallFunc_MakeRotator_ReturnValue);
	void StartOnShotBarrelRoll__DelegateSignature();
};

}


