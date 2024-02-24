#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA5 (0x2C5 - 0x220)
// BlueprintGeneratedClass BP_UnderdogThrownSword.BP_UnderdogThrownSword_C
class ABP_UnderdogThrownSword_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                   Billboard_Vibration;                               // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      Sphere_Vibration_FallOff;                          // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      Sphere_Vibration_InnerRadius;                      // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       Audio_Vibration;                                   // 0x240(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              Trail;                                             // 0x248(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       Audio;                                             // 0x250(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UProjectileMovementComponent*          ProjectileMovement;                                // 0x258(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URotatingMovementComponent*            RotatingMovement;                                  // 0x260(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Underdog_sword;                                    // 0x268(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        FadeSwordOpacityOnHit_Opacity_3E10327C4955B2A193B2338FC47B610F; // 0x270(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                FadeSwordOpacityOnHit__Direction_3E10327C4955B2A193B2338FC47B610F; // 0x274(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2705[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    FadeSwordOpacityOnHit;                             // 0x278(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Damage;                                            // 0x280(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         bHideVFX;                                          // 0x284(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_270E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            SoundOnHit;                                        // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               ImpactNormal;                                      // 0x290(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2716[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                OtherHitActor;                                     // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABaseCharacter_C*                      BaseCharacterActor;                                // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               HitLocation;                                       // 0x2B0(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  HitBone;                                           // 0x2BC(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ImpactVibrationSpawned;                            // 0x2C4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_UnderdogThrownSword_C* GetDefaultObj();

	void ProjectileHits(const struct FHitResult& CallFunc_MakeHitResult_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TArray<class FName>& K2Node_MakeArray_Array, const struct FVector& CallFunc_GetClosestHitLocationToPoint_OutLocation, class FName CallFunc_GetClosestHitLocationToPoint_OutBoneName, bool CallFunc_GetClosestHitLocationToPoint_ReturnValue);
	void StopVibrationAudio(bool CallFunc_IsValid_ReturnValue);
	void HideTrail(bool CallFunc_IsValid_ReturnValue);
	void ApplyDamage(class APawn* CallFunc_GetInstigator_ReturnValue, class AController* CallFunc_GetController_ReturnValue, float CallFunc_ApplyDamage_ReturnValue);
	void DualSense_Impact(struct FHitResult& Hit, uint8 CallFunc_MakeLiteralByte_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FTransform& CallFunc_MakeTransform_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_ControllerAudio_C* CallFunc_FinishSpawningActor_ReturnValue);
	void RemoveDebugData();
	void DebugVibrationData(const struct FSoundAttenuationSettings& CallFunc_BP_GetAttenuationSettingsToApply_OutAttenuationSettings, bool CallFunc_BP_GetAttenuationSettingsToApply_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Add_FloatFloat_ReturnValue);
	void PlayVibrationAudioForDualSense(bool Local_Debug, bool CallFunc_IsPlaying_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetDebugDualSenseAudio_ReturnValue, enum class EPlatform CallFunc_GetPlatform_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void PlayImpactAudio(const struct FVector& Location);
	void UserConstructionScript();
	void FadeSwordOpacityOnHit__FinishedFunc();
	void FadeSwordOpacityOnHit__UpdateFunc();
	void BndEvt__underdog_sword_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void FadeOutSword();
	void BndEvt__underdog_sword_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void ReceiveBeginPlay();
	void BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_2_OnProjectileStopDelegate__DelegateSignature(struct FHitResult& ImpactResult);
	void BndEvt__Audio_Vibration_K2Node_ComponentBoundEvent_3_OnAudioFinished__DelegateSignature();
	void BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_4_OnProjectileBounceDelegate__DelegateSignature(struct FHitResult& ImpactResult, struct FVector& ImpactVelocity);
	void Projectile_Bounce();
	void ExecuteUbergraph_BP_UnderdogThrownSword(int32 EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FHitResult& CallFunc_MakeHitResult_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class APawn* CallFunc_GetInstigator_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, const struct FVector& K2Node_ComponentBoundEvent_NormalImpulse, const struct FHitResult& K2Node_ComponentBoundEvent_Hit, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FHitResult& K2Node_ComponentBoundEvent_ImpactResult_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, const struct FHitResult& K2Node_ComponentBoundEvent_ImpactResult, const struct FVector& K2Node_ComponentBoundEvent_ImpactVelocity, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess_1, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue);
};

}


