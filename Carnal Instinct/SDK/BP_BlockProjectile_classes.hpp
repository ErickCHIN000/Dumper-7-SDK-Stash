#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3C (0x25C - 0x220)
// BlueprintGeneratedClass BP_BlockProjectile.BP_BlockProjectile_C
class ABP_BlockProjectile_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCollisionHandlerComponent_C*          CollisionHandler;                                  // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UParticleSystemComponent*              ParticleSystem;                                    // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UProjectileMovementComponent*          ProjectileMovement;                                // 0x240(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                        Damage;                                            // 0x248(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        HeadShotDamageMultiplier;                          // 0x24C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        InitialSpeed;                                      // 0x250(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        LifeTime;                                          // 0x254(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ImpulsePower;                                      // 0x258(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_BlockProjectile_C* GetDefaultObj();

	void SpawnImpaledArrow(class USceneComponent* Component, class FName SocketName, class AActor* Actor, const struct FVector& Location, const struct FVector& CallFunc_GetActorScale3D_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_ImpaledArrow_C* CallFunc_FinishSpawningActor_ReturnValue);
	void IsEnemy(class AActor* Target, bool* Result, class AActor* CallFunc_GetOwner_ReturnValue, class UBehaviorComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsEnemy_Return, bool CallFunc_IsValid_ReturnValue);
	void OnArrowHit(struct FHitResult& Hit, bool* Dummy, const struct FVector& L_HitNormal, const struct FVector& L_HitLocation, class FName L_HitBoneName, class UPrimitiveComponent* L_HitComponent, class AActor* L_HitActor, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_IsEnemy_Result, bool CallFunc_DoesImplementInterface_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_GetDirectionUnitVector_ReturnValue, TScriptInterface<class II_CanBeAttacked_C> K2Node_DynamicCast_AsI_Can_be_Attacked, bool K2Node_DynamicCast_bSuccess, class FName CallFunc_GetHeadSocket_SocketName, class UEffectsComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, class AActor* CallFunc_GetOwner_ReturnValue_2, bool CallFunc_ApplyEffect_Applied, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, TScriptInterface<class II_CanBeAttacked_C> K2Node_DynamicCast_AsI_Can_be_Attacked_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_EqualEqual_NameName_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_3, float K2Node_Select_Default, const struct FF_HitData& K2Node_MakeStruct_F_HitData, bool CallFunc_TakeDamage_Result, enum class E_AttackResult CallFunc_TakeDamage_ResultType, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void ApplyHitImpulse(class UPrimitiveComponent* Component, const struct FVector& HitNormal, class FName BoneName, bool CallFunc_IsAnySimulatingPhysics_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1);
	void BndEvt__BPC_CollisionHandler_K2Node_ComponentBoundEvent_10_OnHit__DelegateSignature(const struct FHitResult& HitResult);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_BlockProjectile(int32 EntryPoint, TArray<class FName>& CallFunc_GetAllSocketNames_ReturnValue, const struct FHitResult& K2Node_ComponentBoundEvent_HitResult, bool CallFunc_OnArrowHit_Dummy, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue);
};

}


