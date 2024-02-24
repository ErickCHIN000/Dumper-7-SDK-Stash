#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xFC5 (0x127D - 0x2B8)
// AnimBlueprintGeneratedClass abp_genericNPC_rotateInPlace_00.abp_genericNPC_rotateInPlace_00_C
class UAbp_genericNPC_rotateInPlace_00_C : public UAnimInstance
{
public:
	uint8                                        Pad_E2[0x8];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2C8(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0x2F8(0x118)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x410(0x158)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x568(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x590(0x28)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_3;                   // 0x5B8(0xA0)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_2;                   // 0x658(0xA0)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1;                   // 0x6F8(0xA0)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_3;                  // 0x798(0xE8)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_2;                  // 0x880(0xE8)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_1;                  // 0x968(0xE8)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer;                    // 0xA50(0xE8)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0xB38(0x30)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0xB68(0x28)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0xB90(0xA0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0xC30(0x80)(None)
	struct FAnimNode_ApplyMeshSpaceAdditive      AnimGraphNode_ApplyMeshSpaceAdditive_1;            // 0xCB0(0xD0)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_1;                 // 0xD80(0x50)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0xDD0(0x80)(None)
	struct FAnimNode_ApplyMeshSpaceAdditive      AnimGraphNode_ApplyMeshSpaceAdditive;              // 0xE50(0xD0)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator;                   // 0xF20(0x50)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0xF70(0x48)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_1;                  // 0xFB8(0xC0)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x1078(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x10A8(0xB0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x1158(0x28)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0x1180(0xC0)(None)
	class Aba_ch_npc_00_C*                       Owner;                                             // 0x1240(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bShouldPotentiallyRotate;                          // 0x1248(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E9[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              RotInPlaceTarget;                                  // 0x124C(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                              DeltaTargetRot;                                    // 0x1258(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bRotateDeltaTrigger;                               // 0x1264(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_EA[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              DeltaTargetRotCached;                              // 0x1268(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bCurrentlyRotating;                                // 0x1274(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_EC[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        NewRotateResetAccum;                               // 0x1278(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bCloseToOriginal;                                  // 0x127C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UAbp_genericNPC_rotateInPlace_00_C* GetDefaultObj();

	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_abp_genericNPC_rotateInPlace_00_AnimGraphNode_TransitionResult_E207AAE24F524BFCA444208CF02372F6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_abp_genericNPC_rotateInPlace_00_AnimGraphNode_TransitionResult_7254F0CE4309F94B97C123A5CA128EAB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_abp_genericNPC_rotateInPlace_00_AnimGraphNode_BlendListByBool_B244ACA5438219D3D29F9E90711CBDDF();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_abp_genericNPC_rotateInPlace_00_AnimGraphNode_BlendListByBool_8050F4A64E4623FF3EA1C68ECEFC8535();
	void AnimNotify_OnTargetDeltaRead();
	void AnimNotify_OnIdleReached();
	void OnRotateInPlaceReset();
	void AnimNotify_OnReturnToIdle();
	void AnimNotify_OnRotatingLeft();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_abp_genericNPC_rotateInPlace_00_AnimGraphNode_BlendListByBool_7425E9B04062E1E28CC1BB85A0B26045();
	void AnimNotify_OnRotatingFull();
	void ExecuteUbergraph_abp_genericNPC_rotateInPlace_00(int32 EntryPoint, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, float CallFunc_Abs_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, float CallFunc_BreakRotator_Roll_2, float CallFunc_BreakRotator_Pitch_2, float CallFunc_BreakRotator_Yaw_2, bool CallFunc_Greater_FloatFloat_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_Event_DeltaTimeX, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class Aba_ch_npc_00_C* K2Node_DynamicCast_AsBa_Ch_Npc_00, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_4, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool CallFunc_Greater_FloatFloat_ReturnValue_4, const struct FRotator& CallFunc_NormalizedDeltaRotator_ReturnValue, float CallFunc_BreakRotator_Roll_3, float CallFunc_BreakRotator_Pitch_3, float CallFunc_BreakRotator_Yaw_3, float CallFunc_Abs_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_BreakRotator_Roll_4, float CallFunc_BreakRotator_Pitch_4, float CallFunc_BreakRotator_Yaw_4, float CallFunc_FClamp_ReturnValue, float CallFunc_Abs_ReturnValue_2, bool CallFunc_Greater_FloatFloat_ReturnValue_5, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_5, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue_1, const struct FRotator& CallFunc_NormalizedDeltaRotator_ReturnValue_1, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1);
};

}


