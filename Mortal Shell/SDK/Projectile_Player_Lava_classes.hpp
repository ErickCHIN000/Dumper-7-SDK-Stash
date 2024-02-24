#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x358 - 0x330)
// BlueprintGeneratedClass Projectile_Player_Lava.Projectile_Player_Lava_C
class AProjectile_Player_Lava_C : public AProjectile_Player_Dagger_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class URotatingMovementComponent*            RotatingMovement;                                  // 0x338(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Normal;                                            // 0x340(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Loc;                                               // 0x34C(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AProjectile_Player_Lava_C* GetDefaultObj();

	void SpawnDecal(const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, class UDecalComponent* CallFunc_SpawnDecalAtLocation_ReturnValue);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature(struct FHitResult& ImpactResult);
	void ExecuteUbergraph_Projectile_Player_Lava(int32 EntryPoint, float CallFunc_RandomFloatInRange_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, float K2Node_Event_DeltaSeconds, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FHitResult& K2Node_ComponentBoundEvent_ImpactResult, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue);
};

}


