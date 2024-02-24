#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x310 - 0x2A0)
// BlueprintGeneratedClass BP_ProjectileProxyBase.BP_ProjectileProxyBase_C
class ABP_ProjectileProxyBase_C : public AActor
{
public:
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x2A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UProjectileMovementComponent*          ProjectileMovement;                                // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                           ProjectileMesh;                                    // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                       LifeSpan;                                          // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FRotator                              ProjectileRotation;                                // 0x2C8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	struct FVector                               ProjectileTransitionVelocity;                      // 0x2E0(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                ProjectileHitActor;                                // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          DisablePhysicsTimerHandle;                         // 0x300(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       ChanceToStick;                                     // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_ProjectileProxyBase_C* GetDefaultObj();

	void InitializeProxy(const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, bool CallFunc_SetStaticMesh_ReturnValue);
	void DetermineLifespan(double Ttl, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, float CallFunc_SetLifeSpan_InLifespan_ImplicitCast);
	void WakePhysics();
	void DisablePhysics();
	void AttachProxy(bool CallFunc_RandomBool_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_1, class UClass* CallFunc_GetObjectClass_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_NotEqual_ClassClass_ReturnValue, bool CallFunc_K2_AttachToActor_ReturnValue, float CallFunc_SetLinearDamping_InDamping_ImplicitCast, float CallFunc_K2_SetTimer_Time_ImplicitCast);
	void DetectedImpact(const struct FVector& TransitionVelocity, double Ttl, class AActor* HitActor, struct FTransform& TransitionTransform, bool* bSuccess, double NewLocalVar_0, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult, bool CallFunc_K2_SetActorTransform_ReturnValue, bool CallFunc_RandomBoolWithWeight_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, float CallFunc_RandomBoolWithWeight_Weight_ImplicitCast, float CallFunc_K2_SetTimer_Time_ImplicitCast);
	void UserConstructionScript();
};

}


