#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x288 - 0x220)
// BlueprintGeneratedClass AE_FireballProjectile.AE_FireballProjectile_C
class AAE_FireballProjectile_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  CollisionSphere;                                   // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UParticleSystemComponent*              ParticleSystem;                                    // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UCollisionHandlerComponent_C*          CollisionHandler;                                  // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UProjectileMovementComponent*          ProjectileMovement;                                // 0x240(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                        Damage;                                            // 0x248(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        InitialSpeed;                                      // 0x24C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        LifeTime;                                          // 0x250(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_4D[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                HomingTarget;                                      // 0x258(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         ApplyStun;                                         // 0x260(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_4E[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        HeadShotDamageMultiplier;                          // 0x264(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HomingInterpSpeed;                                 // 0x268(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StopHomingDistance;                                // 0x26C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ImpulsePower;                                      // 0x270(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4F[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystem*                       HitParticle;                                       // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            HitSound;                                          // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AAE_FireballProjectile_C* GetDefaultObj();

	void UpdateHomingProjectile(float L_Distance, float CallFunc_GetWorldDeltaSeconds_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_VSize_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, const struct FRotator& CallFunc_RInterpTo_Constant_ReturnValue, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1);
	void NewFunction_0(struct FVector* Output_Get, const struct FVector& L_PredictedLocation, float L_TravelTime, float L_Distance, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue);
	void IsEnemy(class AActor* Target, bool* Result, class AActor* CallFunc_GetOwner_ReturnValue, class UBehaviorComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsEnemy_Return, bool CallFunc_IsValid_ReturnValue);
	void OnHit(struct FHitResult& Hit, bool* Dummy, const struct FVector& L_HitNormal, const struct FVector& L_HitLocation, class FName L_HitBoneName, class UPrimitiveComponent* L_HitComponent, class AActor* L_HitActor, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool CallFunc_IsEnemy_Result, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, bool CallFunc_DoesImplementInterface_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_GetDirectionUnitVector_ReturnValue, class UEffectsComponent_C* CallFunc_GetComponentByClass_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_ApplyEffect_Applied, TScriptInterface<class II_CanBeAttacked_C> K2Node_DynamicCast_AsI_Can_be_Attacked, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue_3, const struct FF_HitData& K2Node_MakeStruct_F_HitData, bool CallFunc_TakeDamage_Result, enum class E_AttackResult CallFunc_TakeDamage_ResultType, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void ApplyHitImpulse(class UPrimitiveComponent* Component, const struct FVector& HitNormal, class FName BoneName, bool CallFunc_IsAnySimulatingPhysics_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1);
	void BndEvt__BPC_CollisionHandler_K2Node_ComponentBoundEvent_10_OnHit__DelegateSignature(const struct FHitResult& HitResult);
	void ReceiveBeginPlay();
	void EnableHomingProjectile();
	void DisableHomingProjectile();
	void ExecuteUbergraph_AE_FireballProjectile(int32 EntryPoint, const struct FHitResult& K2Node_ComponentBoundEvent_HitResult, TArray<class FName>& CallFunc_GetAllSocketNames_ReturnValue, bool CallFunc_OnHit_Dummy, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


