#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x188 (0x948 - 0x7C0)
// BlueprintGeneratedClass DroneProjectile_HammerAnvil.DroneProjectile_HammerAnvil_C
class ADroneProjectile_HammerAnvil_C : public AOakDroneProjectile
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7C0(0x8)(Transient, DuplicateTransient)
	class UWwiseAudioComponent*                  DefaultAudio;                                      // 0x7C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGameplayTasksComponent*               GameplayTasks;                                     // 0x7D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGbxActionComponent*                   GbxAction;                                         // 0x7D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              PS_HammerAnvil_Spin;                               // 0x7E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGbxSkeletalMeshComponent*             GbxSkeletalMesh;                                   // 0x7E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Scene;                                             // 0x7F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URotatingMovementComponent*            RotatingMovement;                                  // 0x7F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RotateSideways_Rotation_AF429C2F475F961E1DD78BACB0EF2909; // 0x800(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                RotateSideways__Direction_AF429C2F475F961E1DD78BACB0EF2909; // 0x804(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_484A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    RotateSideways;                                    // 0x808(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AShield*                               MyShield;                                          // 0x810(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<class AActor*>                        NearbyTargets;                                     // 0x818(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FEnvQueryParams                       EQS;                                               // 0x828(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class AActor*                                CurrentTarget;                                     // 0x8E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        TargetIndex;                                       // 0x8E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4853[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CoordinatedEffectOut;                              // 0x8F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                CoordinatedEffectIn;                               // 0x8F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          ExplodeTimer;                                      // 0x900(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FWwisePlaybackInstance                Audio_SpinInst;                                    // 0x908(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UWwiseEvent*                           Audio_HammerSwingStart;                            // 0x920(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           Audio_HammerSwingStop;                             // 0x928(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CurrentMeshRot;                                    // 0x930(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                              CurrentSceneRot;                                   // 0x93C(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ADroneProjectile_HammerAnvil_C* GetDefaultObj();

	void SearchForNearbyTargets(bool CallFunc_GetNextTarget_FoundEnemyTarget, class AActor* CallFunc_GetNextTarget_CurrentTarget, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, TArray<class AActor*>& CallFunc_RunEnvQueryForAllActors_ResultActors, bool CallFunc_RunEnvQueryForAllActors_ReturnValue);
	void SetDroneMovement(bool EnemyTarget);
	void GetNextTarget(bool* FoundEnemyTarget, class AActor** CurrentTarget, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, bool CallFunc_IsValid_ReturnValue, class UOakDamageComponent* CallFunc_GetComponentByClass_ReturnValue, class UOakDamageComponent* CallFunc_GetComponentByClass_ReturnValue1, bool CallFunc_GetNextTarget_FoundEnemyTarget, class AActor* CallFunc_GetNextTarget_CurrentTarget, bool CallFunc_isValidHammerTarget_Res, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void IsValidHammerTarget(bool* Res, bool CallFunc_IsAlive_ReturnValue, class UTargetableComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsTargetableByActor_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1);
	void UserConstructionScript();
	void RotateSideways__FinishedFunc();
	void RotateSideways__UpdateFunc();
	void OnAnimEnd_B759926B4C477DA7CA2306841F6C7EB1();
	void OnEnd_B759926B4C477DA7CA2306841F6C7EB1(enum class EGbxActionEndState EndState, class AActor* Actor);
	void OnAnimEnd_5151F88A424E1BC2CB92AEA036F01C5D();
	void OnEnd_5151F88A424E1BC2CB92AEA036F01C5D(enum class EGbxActionEndState EndState, class AActor* Actor);
	void Despawn(class AOakCharacter* EquipInstigator);
	void OnExplode();
	void ReturnToOwner();
	void Audio_StartSwinging();
	void Audio_Stop_Swinging();
	void ReceiveBeginPlay();
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_DroneProjectile_HammerAnvil(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void SetHammerRotation(bool StartSpin);
	void MoveToNextEnemy(class AActor* EnemyTarget);
	void TargetDied(class AActor* DamageReceiver, class AActor* DamageCauser);
	void ExecuteUbergraph_DroneProjectile_HammerAnvil(int32 EntryPoint, const struct FHitResult& Temp_struct_Variable, float CallFunc_GetDataTableValue_OutValue, bool CallFunc_GetDataTableValue_ReturnValue, float CallFunc_GetDataTableValue_OutValue1, bool CallFunc_GetDataTableValue_ReturnValue1, const struct FHitResult& Temp_struct_Variable1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EGbxActionEndState K2Node_CustomEvent_EndState1, class AActor* K2Node_CustomEvent_Actor1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class AActor* Temp_object_Variable, enum class EGbxActionEndState Temp_byte_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, enum class EGbxActionEndState K2Node_CustomEvent_EndState, class AActor* K2Node_CustomEvent_Actor, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class AActor* Temp_object_Variable1, enum class EGbxActionEndState Temp_byte_Variable1, const struct FRotator& CallFunc_RLerp_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, class AOakCharacter* K2Node_CustomEvent_EquipInstigator, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, class UClass* CallFunc_GetDamageType_ReturnValue, float CallFunc_GetBaseShieldDamage_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, bool CallFunc_GetNextTarget_FoundEnemyTarget, class AActor* CallFunc_GetNextTarget_CurrentTarget, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, class UClass* CallFunc_GetDamageType_ReturnValue1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_GetBaseShieldDamage_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue1, float CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_IsAudioPlaying_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, bool K2Node_CustomEvent_StartSpin, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, class AActor* K2Node_CustomEvent_EnemyTarget, class AActor* K2Node_CustomEvent_DamageReceiver, class AActor* K2Node_CustomEvent_DamageCauser, bool CallFunc_GetNextTarget_FoundEnemyTarget1, class AActor* CallFunc_GetNextTarget_CurrentTarget1, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue1, TArray<struct FGbxActionRegister>& Temp_struct_Variable2, class UGameplayTask_PlayGbxAction* CallFunc_PlayGbxAction_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, bool CallFunc_IsValid_ReturnValue, const struct FTransform& CallFunc_GetRelativeTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FTransform& CallFunc_GetRelativeTransform_ReturnValue1, const struct FVector& CallFunc_BreakTransform_Location1, const struct FRotator& CallFunc_BreakTransform_Rotation1, const struct FVector& CallFunc_BreakTransform_Scale1, const struct FRotator& CallFunc_RLerp_ReturnValue1, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult1, TArray<struct FGbxActionRegister>& Temp_struct_Variable3, class UGameplayTask_PlayGbxAction* CallFunc_PlayGbxAction_ReturnValue1, bool CallFunc_IsValid_ReturnValue1);
};

}


