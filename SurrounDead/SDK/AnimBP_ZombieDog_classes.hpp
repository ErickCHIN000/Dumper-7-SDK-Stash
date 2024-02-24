#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4F0 (0x838 - 0x348)
// AnimBlueprintGeneratedClass AnimBP_ZombieDog.AnimBP_ZombieDog_C
class UAnimBP_ZombieDog_C : public UAnimInstance
{
public:
	uint8                                        Pad_32F0[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimBlueprintGeneratedMutableData    __AnimBlueprintMutables;                           // 0x358(0x8)(HasGetValueTypeHash)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x360(0x8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x368(0x8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x370(0x20)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x390(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x3B8(0x28)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer;                    // 0x3E0(0x70)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x450(0x20)(None)
	struct FAnimNode_RandomPlayer                AnimGraphNode_RandomPlayer;                        // 0x470(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x4E8(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x508(0xC8)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x5D0(0x80)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x650(0x28)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0x678(0xF0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1;                              // 0x768(0x48)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x7B0(0x28)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x7D8(0x48)(None)
	bool                                         Dead;                                              // 0x820(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsInAir_;                                          // 0x821(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_330F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Speed;                                             // 0x828(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_MasterZombie_C*                    Zombie;                                            // 0x830(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAnimBP_ZombieDog_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void CombatState(int32 BlendSpace);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_ZombieDog_AnimGraphNode_TransitionResult_D237F33B4C0953CB0ED68386E46852EF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_ZombieDog_AnimGraphNode_TransitionResult_84186B9344D1F9C93C3CB6B1E66660FB();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void AnimNotify_Footstep();
	void DeathState(bool Dead);
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_AnimBP_ZombieDog(int32 EntryPoint, class USoundBase* Temp_object_Variable, class USoundBase* Temp_object_Variable_1, class USoundBase* Temp_object_Variable_2, class USoundBase* Temp_object_Variable_3, class USoundBase* Temp_object_Variable_4, class USoundBase* Temp_object_Variable_5, class USoundBase* Temp_object_Variable_6, class USoundBase* Temp_object_Variable_7, class USoundBase* Temp_object_Variable_8, class USoundBase* Temp_object_Variable_9, class USoundBase* Temp_object_Variable_10, class USoundBase* Temp_object_Variable_11, class USoundBase* Temp_object_Variable_12, class USoundBase* Temp_object_Variable_13, int32 K2Node_Event_BlendSpace, class USoundBase* Temp_object_Variable_14, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, class USoundBase* Temp_object_Variable_15, bool CallFunc_Greater_DoubleDouble_ReturnValue, class USoundBase* Temp_object_Variable_16, enum class EPhysicalSurface Temp_byte_Variable, TArray<class AActor*>& Temp_object_Variable_17, class USoundBase* Temp_object_Variable_18, float K2Node_Event_DeltaTimeX, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, double CallFunc_VSize_ReturnValue, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, bool CallFunc_IsFalling_ReturnValue, class AActor* CallFunc_GetOwningActor_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool K2Node_Event_Dead, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, enum class EPhysicalSurface CallFunc_GetSurfaceType_ReturnValue, class USoundBase* Temp_object_Variable_19, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_1, class USoundBase* K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue_1, class ABP_MasterZombie_C* K2Node_DynamicCast_AsBP_Master_Zombie, bool K2Node_DynamicCast_bSuccess);
};

}


