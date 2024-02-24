#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x77D (0x9E5 - 0x268)
// AnimBlueprintGeneratedClass frog_king_v2_Skeleton_AnimBlueprint.frog_king_v2_Skeleton_AnimBlueprint_C
class UFrog_king_v2_Skeleton_AnimBlueprint_C : public UAnimInstance
{
public:
	uint8                                        Pad_18AD[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x278(0x30)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x2A8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x2D0(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x2F8(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x370(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x3A0(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x418(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x448(0xB0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x4F8(0x48)(None)
	struct FAnimNode_LookAt                      AnimGraphNode_LookAt;                              // 0x540(0x1B0)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x6F0(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x710(0x20)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x730(0xA0)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_1;                    // 0x7D0(0xB8)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_2;                     // 0x888(0x28)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x8B0(0xB8)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x968(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x990(0x28)(None)
	struct FVector                               CurrentLookAtLocation;                             // 0x9B8(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bShouldLookAtPlayer;                               // 0x9C4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1902[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               DesiredLookAtLocation;                             // 0x9C8(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bUseCustomLookAtLocation;                          // 0x9D4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1912[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CustomLookAtLocation;                              // 0x9D8(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bDance;                                            // 0x9E4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UFrog_king_v2_Skeleton_AnimBlueprint_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_frog_king_v2_Skeleton_AnimBlueprint_AnimGraphNode_LookAt_E75518844285A2B68D3D9D82E57B041E();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_frog_king_v2_Skeleton_AnimBlueprint(int32 EntryPoint, bool Temp_bool_Variable, float K2Node_Event_DeltaTimeX, const struct FVector& K2Node_Select_Default, float CallFunc_GetWorldDeltaSeconds_ReturnValue, class AActor* CallFunc_GetOwningActor_ReturnValue, const struct FVector& CallFunc_VInterpTo_ReturnValue, class AFrog_NPC_C* K2Node_DynamicCast_AsFrog_NPC, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue);
};

}


