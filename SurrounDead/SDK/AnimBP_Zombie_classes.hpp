#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x500 (0x848 - 0x348)
// AnimBlueprintGeneratedClass AnimBP_Zombie.AnimBP_Zombie_C
class UAnimBP_Zombie_C : public UAnimInstance
{
public:
	uint8                                        Pad_2A67[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimBlueprintGeneratedMutableData    __AnimBlueprintMutables;                           // 0x358(0x8)(HasGetValueTypeHash)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x360(0x8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x368(0x8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x370(0x20)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x390(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x3B8(0x28)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer;                    // 0x3E0(0x70)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x450(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x470(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x4B8(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x4D8(0xC8)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x5A0(0x80)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x620(0x28)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0x648(0xF0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1;                              // 0x738(0x48)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x780(0x28)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x7A8(0x48)(None)
	class UBlendSpace1D*                         K2Node_PropertyAccess_3;                           // 0x7F0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         K2Node_PropertyAccess_2;                           // 0x7F8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               K2Node_PropertyAccess_1;                           // 0x800(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_PropertyAccess;                             // 0x818(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Dead;                                              // 0x819(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2AC4[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Speed;                                             // 0x820(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsZombie_;                                         // 0x828(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Falling_;                                          // 0x829(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2AD4[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimSequence*                         Idle_Animation;                                    // 0x830(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UBlendSpace1D*                         Movement_Blendspace;                               // 0x838(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_MasterZombie_C*                    ZombieRef;                                         // 0x840(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAnimBP_Zombie_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void SetAnimations();
	void GetSpeed(double CallFunc_VSize_ReturnValue);
	void IsFalling_();
	void BlueprintThreadSafeUpdateAnimation(float DeltaTime);
	void CombatState(int32 BlendSpace);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Zombie_AnimGraphNode_TransitionResult_80B0012B4E4F12A4E9871A9F60765B61();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Zombie_AnimGraphNode_TransitionResult_09779857452F7565845EDA88581F63AD();
	void DeathState(bool Dead);
	void AnimNotify_Footstep();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_AnimBP_Zombie(int32 EntryPoint, class USoundBase* Temp_object_Variable, class USoundBase* Temp_object_Variable_1, class USoundBase* Temp_object_Variable_2, class USoundBase* Temp_object_Variable_3, class USoundBase* Temp_object_Variable_4, class USoundBase* Temp_object_Variable_5, class USoundBase* Temp_object_Variable_6, class USoundBase* Temp_object_Variable_7, class USoundBase* Temp_object_Variable_8, class USoundBase* Temp_object_Variable_9, class USoundBase* Temp_object_Variable_10, class USoundBase* Temp_object_Variable_11, class USoundBase* Temp_object_Variable_12, class USoundBase* Temp_object_Variable_13, int32 K2Node_Event_BlendSpace, class USoundBase* Temp_object_Variable_14, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, class USoundBase* Temp_object_Variable_15, bool CallFunc_Greater_DoubleDouble_ReturnValue, class USoundBase* Temp_object_Variable_16, enum class EPhysicalSurface Temp_byte_Variable, TArray<class AActor*>& Temp_object_Variable_17, class USoundBase* Temp_object_Variable_18, bool K2Node_Event_Dead, class AActor* CallFunc_GetOwningActor_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, class USoundBase* Temp_object_Variable_19, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, enum class EPhysicalSurface CallFunc_GetSurfaceType_ReturnValue, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, class USoundBase* K2Node_Select_Default, class ABP_MasterZombie_C* K2Node_DynamicCast_AsBP_Master_Zombie, bool K2Node_DynamicCast_bSuccess);
};

}


