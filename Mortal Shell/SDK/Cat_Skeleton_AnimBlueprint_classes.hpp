#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3DD (0x645 - 0x268)
// AnimBlueprintGeneratedClass Cat_Skeleton_AnimBlueprint.Cat_Skeleton_AnimBlueprint_C
class UCat_Skeleton_AnimBlueprint_C : public UAnimInstance
{
public:
	uint8                                        Pad_18B4[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x278(0x78)(None)
	struct FAnimNode_LookAt                      AnimGraphNode_LookAt;                              // 0x2F0(0x1B0)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x4A0(0x30)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x4D0(0x20)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x4F0(0x20)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x510(0xA0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x5B0(0x78)(None)
	struct FVector                               CurrentLookAtLocation;                             // 0x628(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bShouldLookAtPlayer;                               // 0x634(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_18DD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               DesiredLookAtLocation;                             // 0x638(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CatVibing;                                         // 0x644(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UCat_Skeleton_AnimBlueprint_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_Cat_Skeleton_AnimBlueprint(int32 EntryPoint, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float K2Node_Event_DeltaTimeX, class AActor* CallFunc_GetOwningActor_ReturnValue, class ABP_Cat_C* K2Node_DynamicCast_AsBP_Cat, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_VInterpTo_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue);
};

}


