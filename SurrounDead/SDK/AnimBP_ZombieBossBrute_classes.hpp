#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x510 (0x858 - 0x348)
// AnimBlueprintGeneratedClass AnimBP_ZombieBossBrute.AnimBP_ZombieBossBrute_C
class UAnimBP_ZombieBossBrute_C : public UAnimInstance
{
public:
	uint8                                        Pad_41D[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimBlueprintGeneratedMutableData    __AnimBlueprintMutables;                           // 0x358(0x8)(HasGetValueTypeHash)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x360(0x8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x368(0x8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x370(0x20)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x390(0x28)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0x3B8(0xF0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1;                              // 0x4A8(0x48)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x4F0(0x28)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x518(0x48)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x560(0x80)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x5E0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x608(0x28)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer;                    // 0x630(0x70)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x6A0(0x20)(None)
	struct FAnimNode_RandomPlayer                AnimGraphNode_RandomPlayer;                        // 0x6C0(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x738(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x758(0xC8)(None)
	struct FVector                               K2Node_PropertyAccess_1;                           // 0x820(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_PropertyAccess;                             // 0x838(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Falling_;                                          // 0x839(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_439[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Speed;                                             // 0x840(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Dead;                                              // 0x848(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_43A[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_ZombieBoss_C*                      ZombieRef;                                         // 0x850(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAnimBP_ZombieBossBrute_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void GetSpeed(double CallFunc_VSize_ReturnValue);
	void BlueprintThreadSafeUpdateAnimation(float DeltaTime);
	void IsFalling_();
	void CombatState(int32 BlendSpace);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_ZombieBossBrute_AnimGraphNode_TransitionResult_EE0CA26A403AF5B00B7FE5B3B8667FC1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_ZombieBossBrute_AnimGraphNode_TransitionResult_50C18B9C4F35D1CB933239B1CC7A3A8C();
	void AnimNotify_Footstep();
	void DeathState(bool Dead);
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_AnimBP_ZombieBossBrute(int32 EntryPoint, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class USoundBase* Temp_object_Variable, bool CallFunc_IsValid_ReturnValue, class ABP_ZombieBoss_C* K2Node_DynamicCast_AsBP_Zombie_Boss, bool K2Node_DynamicCast_bSuccess, class USoundBase* Temp_object_Variable_1, class USoundBase* Temp_object_Variable_2, class USoundBase* Temp_object_Variable_3, class USoundBase* Temp_object_Variable_4, class USoundBase* Temp_object_Variable_5, class USoundBase* Temp_object_Variable_6, class USoundBase* Temp_object_Variable_7, class USoundBase* Temp_object_Variable_8, class USoundBase* Temp_object_Variable_9, class USoundBase* Temp_object_Variable_10, class USoundBase* Temp_object_Variable_11, class USoundBase* Temp_object_Variable_12, class USoundBase* Temp_object_Variable_13, class USoundBase* Temp_object_Variable_14, int32 K2Node_Event_BlendSpace, class USoundBase* Temp_object_Variable_15, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, class USoundBase* Temp_object_Variable_16, bool CallFunc_Greater_DoubleDouble_ReturnValue, enum class EPhysicalSurface Temp_byte_Variable, TArray<class AActor*>& Temp_object_Variable_17, class USoundBase* Temp_object_Variable_18, class AActor* CallFunc_GetOwningActor_ReturnValue, bool K2Node_Event_Dead, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, enum class EPhysicalSurface CallFunc_GetSurfaceType_ReturnValue, class USoundBase* Temp_object_Variable_19, class USoundBase* K2Node_Select_Default);
};

}


