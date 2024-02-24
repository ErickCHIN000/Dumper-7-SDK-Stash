#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x424 (0x68C - 0x268)
// AnimBlueprintGeneratedClass Bell_keeper_Skeleton_AnimBlueprint.Bell_keeper_Skeleton_AnimBlueprint_C
class UBell_keeper_Skeleton_AnimBlueprint_C : public UAnimInstance
{
public:
	uint8                                        Pad_1969[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x278(0x30)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x2A8(0x48)(None)
	struct FAnimNode_LookAt                      AnimGraphNode_LookAt;                              // 0x2F0(0x1B0)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x4A0(0x20)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x4C0(0xA0)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x560(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x580(0x78)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x5F8(0x78)(None)
	bool                                         bShouldLookAtPlayer;                               // 0x670(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1981[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               DesiredLookAtLocation;                             // 0x674(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CurrentLookAtLocation;                             // 0x680(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBell_keeper_Skeleton_AnimBlueprint_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void CalcPlayerLookAtStuff(float DeltaTime, class AActor* CallFunc_GetOwningActor_ReturnValue, const struct FVector& CallFunc_VInterpTo_ReturnValue, class AFogCultistNPC_C* K2Node_DynamicCast_AsFog_Cultist_NPC, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_Bell_keeper_Skeleton_AnimBlueprint(int32 EntryPoint, float K2Node_Event_DeltaTimeX);
};

}


