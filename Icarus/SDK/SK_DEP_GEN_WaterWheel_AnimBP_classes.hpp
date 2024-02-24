#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC5 (0x37D - 0x2B8)
// AnimBlueprintGeneratedClass SK_DEP_GEN_WaterWheel_AnimBP.SK_DEP_GEN_WaterWheel_AnimBP_C
class USK_DEP_GEN_WaterWheel_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_1DAA[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x2C8(0x80)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x348(0x30)(None)
	float                                        RotationRate;                                      // 0x378(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Is_Active;                                         // 0x37C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class USK_DEP_GEN_WaterWheel_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_SK_DEP_GEN_WaterWheel_AnimBP(int32 EntryPoint, class AActor* CallFunc_GetOwningActor_ReturnValue, float K2Node_Event_DeltaTimeX, class ABP_WaterWheel_Generator_C* K2Node_DynamicCast_AsBP_Water_Wheel_Generator, bool K2Node_DynamicCast_bSuccess);
};

}


