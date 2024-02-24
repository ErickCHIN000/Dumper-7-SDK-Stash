#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x238 (0x690 - 0x458)
// Class GbxWeapon.Projectile
class AProjectile : public AActor
{
public:
	uint8                                        Pad_74B[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bIgnoreCollisionWithInstigator : 1;                // Mask: 0x1, PropSize: 0x10x468(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIgnoreCollisionWithInstigatorTeam : 1;            // Mask: 0x2, PropSize: 0x10x468(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bStopBlockingPawnsAfterCollidingWithOne : 1;       // Mask: 0x4, PropSize: 0x10x468(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bServerControlsProjectileLifetime : 1;             // Mask: 0x8, PropSize: 0x10x468(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_2D : 4;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_750[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDamageInfo                           DamageInfo;                                        // 0x470(0x58)(Edit, BlueprintVisible, Net, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UImpactData*                           DefaultImpact;                                     // 0x4C8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefaultImpactEffectDelay;                          // 0x4D0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWeaponShotModifierType           SpawnModifierType;                                 // 0x4D4(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_754[0x13];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SpawnModifierValue;                                // 0x4E8(0x4)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_756[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxProjectileMovementComponent*       MovementComponent;                                 // 0x4F0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UExplosionComponent*                   ExplosionComponent;                                // 0x4F8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_75A[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bClientExplodeAtLeastOnce;                         // 0x501(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_75C[0xA6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bExplodeOnHit;                                     // 0x5A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bExplodeOnHitWorld;                                // 0x5A9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bExplodeOnHitDamagable;                            // 0x5AA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bExplodeOnHitEnemy;                                // 0x5AB(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bExplodeAfterLifetime;                             // 0x5AC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bDestroyAfterExplode;                              // 0x5AD(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bDamageOnExplode;                                  // 0x5AE(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_762[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UDamageData>               DamageData;                                        // 0x5B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTeam*                                 ProjectileTeam;                                    // 0x5B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHighVelocityProjectile;                           // 0x5C0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAllowCauseDamageInBeginPlay;                      // 0x5C1(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_76B[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UDamageSource>             DamageSourceOverride;                              // 0x5C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UGbxDamageType>            DamageTypeOverride;                                // 0x5D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UExplosionData*                        ExplosionData;                                     // 0x5D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseQuickPopExplosion;                             // 0x5E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_771[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UExplosionData*                        QuickPopExplosion;                                 // 0x5E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UImpactData*                           ImpactData;                                        // 0x5F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAttributeInitializationData          DamageOverride;                                    // 0x5F8(0x38)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        DamageAreaRadius;                                  // 0x630(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               DamageAreaBoxExtent;                               // 0x634(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FForceSelection                       ImpactForceOverride;                               // 0x640(0x20)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FCriticalHitDamageOverrides           CriticalHitOverrides;                              // 0x660(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	TArray<class AActor*>                        OverrideIgnoreActors;                              // 0x668(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bRepIsProjectileAttached;                          // 0x678(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_77A[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AWeapon*                               WeaponFiredFrom;                                   // 0x680(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SpawnSpeedScale;                                   // 0x688(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_77D[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AProjectile* GetDefaultObj();

	void StopBlockingPawns();
	void SetProjectileDamageType(TSubclassOf<class UGbxDamageType> DamageType);
	void SetProjectileDamageSource(TSubclassOf<class UDamageSource> DamageSource);
	void SetProjectileDamageRadius(float DamageRadius);
	void SetProjectileDamage(float Damage);
	void ResetCollisionWith(class AActor* ActorToCollide);
	void OnRep_SpawnModifierType();
	void OnLastBounce(struct FHitResult& ImpactResult);
	void OnHitWorld(struct FHitResult& Hit);
	void OnHitNeutral(struct FHitResult& Hit);
	void OnHitFriendly(struct FHitResult& Hit);
	void OnHitEnemy(struct FHitResult& Hit);
	void OnHitDamagableObject(struct FHitResult& Hit);
	void OnExplode();
	void OnComponentDetachedFromParent(class USceneComponent* SceneComponent);
	void OnBounce(struct FHitResult& Hit, const struct FVector& ImpactVelocity);
	void OnBeginExplode();
	void IgnoreCollisionWith(class AActor* ActorToIgnore);
	void HandleDetachRequest();
	class UGbxProjectileMovementComponent* GetProjectileMovementComponent();
	TSubclassOf<class UGbxDamageType> GetProjectileDamageType();
	TSubclassOf<class UDamageSource> GetProjectileDamageSource();
	float GetProjectileDamageRadius();
	float GetProjectileDamage();
	class UExplosionComponent* GetExplosionComponent();
	void Explode();
	void CheckProjectileAttachment();
	void BounceDelegate(struct FHitResult& ImpactResult, struct FVector& ImpactVelocity);
};

// 0x70 (0x2C8 - 0x258)
// Class GbxWeapon.GbxProjectileMovementComponent
class UGbxProjectileMovementComponent : public UProjectileMovementComponent
{
public:
	UMulticastDelegateProperty_                  PostLastBounceDelegate;                            // 0x258(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	float                                        ProjectileAcceleration;                            // 0x268(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinSpeedWhenDecelerating;                          // 0x26C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7D8[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AProjectile*                           OwningProjectile;                                  // 0x278(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bSmoothedRotationFollowsVelocity;                  // 0x280(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7DA[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SmoothedRotationSpeed;                             // 0x284(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bDontStopSimulatingAfterHittingAnotherProjectile;  // 0x288(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7E2[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxNumBounces;                                     // 0x28C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBounceParallelToHitNormal;                        // 0x290(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7E7[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CurrentNumBounces;                                 // 0x294(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bFreezeMovementAfterLastBounce;                    // 0x298(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7E8[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBulletPerceptionProperties           BulletSensePerception;                             // 0x29C(0x8)(Edit, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FSoundPerceptionProperties            ImpactSoundPerception;                             // 0x2A4(0xC)(Edit, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                         bCanTriggerGrenadeDodges;                          // 0x2B0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bDisablePhysicsWhenAttached;                       // 0x2B1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7EF[0xE];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        InitialProjectileGravity;                          // 0x2C0(0x4)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7F0[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxProjectileMovementComponent* GetDefaultObj();

	void ScaleVelocity(float InScale);
	void OnRep_InitialProjectileGravity();
	void OnProjectilePostLastBounceDelegate__DelegateSignature(struct FHitResult& ImpactResult);
	void OnHit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void OnBounce(struct FHitResult& ImpactResult, struct FVector& ImpactVelocity);
};

// 0x168 (0x5C0 - 0x458)
// Class GbxWeapon.LightProjectileManager
class ALightProjectileManager : public AActor
{
public:
	TArray<class ULightProjectile*>              ActiveProjectiles;                                 // 0x458(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_818[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ULightProjectile*>              ProjectilesWaitingBatch;                           // 0x480(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<class ULightProjectile*>              ProjectilePool;                                    // 0x490(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<class UParticleSystemComponent*>      ActiveParticles;                                   // 0x4A0(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<struct FLightProjectileParticlePoolData> ParticlesPool;                                     // 0x4B0(0x10)(ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_81E[0xD4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxAsyncSpawnTime;                                 // 0x594(0x4)(ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_820[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ALightProjectileManager* GetDefaultObj();

	void ServerSendDebugProjectileImpact(int32 ProjSyncID, class AActor* HitActor, class FName BoneName, uint16 ProjFlags);
	void OnParticleSystemFinished(class UParticleSystemComponent* FinishedComponent);
};

// 0x458 (0x480 - 0x28)
// Class GbxWeapon.LightProjectile
class ULightProjectile : public UObject
{
public:
	uint8                                        Pad_90E[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SyncID;                                            // 0x30(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_90F[0x74];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ULightProjectileData*                  Data;                                              // 0xA8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Damage;                                            // 0xB0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DamageRadius;                                      // 0xB4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UGbxDamageType>            DamageType;                                        // 0xB8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UDamageSource>             DamageSource;                                      // 0xC0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ImpactForce;                                       // 0xC8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_913[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bActive : 1;                                       // Mask: 0x1, PropSize: 0x10xE4(0x1)(Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_43 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_914[0x23];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FReplicatedLightProjectileInitializationData InitialClientState;                                // 0x108(0xC0)(Net, Transient, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FLightProjectileAttachment            AttachmentData;                                    // 0x1C8(0x48)(BlueprintVisible, BlueprintReadOnly, Net, Transient, RepNotify, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FLightProjectileExplodeData           ExplodeData;                                       // 0x210(0x10)(Net, Transient, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FLightProjectileImpactData            ImpactInfo;                                        // 0x220(0x10)(Net, Transient, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        ShutdownID;                                        // 0x230(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_91C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StartTime;                                         // 0x234(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LifeTime;                                          // 0x238(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        HomingStartTime;                                   // 0x23C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ElapsedTime;                                       // 0x240(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_91E[0x2C];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TWeakObjectPtr<class AActor>                 LastHitActor;                                      // 0x270(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_91F[0x40];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Location;                                          // 0x2B8(0xC)(BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               ComponentLocation;                                 // 0x2C4(0xC)(BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FRotator                              ComponentRotation;                                 // 0x2D0(0xC)(BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_920[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               LocalStartLocation;                                // 0x2E8(0xC)(BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               LocalStartDirection;                               // 0x2F4(0xC)(BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               Velocity;                                          // 0x300(0xC)(BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        GravityScale;                                      // 0x30C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UStaticMeshComponent*                  BodyComponent;                                     // 0x310(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UParticleSystemComponent*              TracerComponent;                                   // 0x318(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UPrimitiveComponent*>           Components;                                        // 0x320(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_928[0x38];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NumBounces;                                        // 0x368(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_929[0x1C];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDamageModifierComponent*              DamageModifierComp;                                // 0x388(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_92A[0xF0];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULightProjectile* GetDefaultObj();

	void SetLifetime(float NewLifetime);
	void SetHomingTargetLocation(const struct FVector& HomingLocation);
	void SetHomingTarget(class AActor* HomingTarget, const struct FVector& TargetOffset);
	void PlayFeedbackSoundEvent(class UWwiseEvent* Event);
	void OnRep_Shutdown();
	void OnRep_InitialClientState();
	void OnRep_Impact();
	void OnRep_Exploded();
	void OnRep_Attached();
	void OnParticleSystemFinished(class UParticleSystemComponent* FinishedComponent);
	void OnAttachedComponentUnregistered(class UActorComponent* UnregisteredComponent);
	void OnAttachedComponentCollisionChanged(class UPrimitiveComponent* ChangedComponent);
	void OnAttachedActorFractured(struct FVector& HitPoint, struct FVector& HitDirection);
	void OnAttachedActorDestroyed(class AActor* DestroyedActor);
	void K2_ApplyImpactDamage(struct FHitResult& Hit, float ImpactDamage, bool bPenetrated, bool bCanReflect);
	bool IsHomingMovingDirectlyTowardsTarget();
	bool IsHoming();
	void InitChildData(struct FLightProjectileInitializationData* InitData);
	class AActor* GetTarget();
	class AActor* GetSource();
	float GetModifierValue();
	enum class EWeaponShotModifierType GetModifierType();
	class APawn* GetInstigator();
	class UImpactData* GetImpactDataOverride();
	class UImpactData* GetImpactData();
	float GetHomingStartTime();
	uint8 GetFiringPatternID();
	class UGbxDamageType* GetDamageType();
	class AActor* GetDamageCauser();
	enum class ETeamAttitude GetAttitudeTowards(class AActor* TargetActor);
	struct FVector GetAttachedImpactNormal();
	class AActor* GetAttachedDamageReceiverActor();
	class AActor* GetAttachedActor();
	class AActor* GetAssociatedActor(enum class ELightProjectileQueryActorType ActorType);
	void Explode(float Delay);
	void EnableHoming();
	void DisableHoming();
	void Destroy();
	void ApplyAreaDamage(struct FVector& Origin, class AActor* HitActor, struct FHitResult& Hit);
};

// 0x340 (0x368 - 0x28)
// Class GbxWeapon.LightProjectileData
class ULightProjectileData : public UObject
{
public:
	TSubclassOf<class ULightProjectile>          ProjectileClass;                                   // 0x28(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           BodyMesh;                                          // 0x30(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_994[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            BodyTransform;                                     // 0x40(0x30)(Edit, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FGbxSignificanceEvent                 TracerSignificanceEvent;                           // 0x70(0x8)(Edit, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	enum class ELightProjectileTracerThrottleLevel MaxTracerThrottleLevel;                            // 0x78(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_997[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystem*                       TracerFX;                                          // 0x80(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UEffectCollectionData>     TracerFXCollection;                                // 0x88(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TracerFXBodySocket;                                // 0x90(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_99A[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            TracerFXTransform;                                 // 0xA0(0x30)(Edit, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UImpactData*                           ImpactData;                                        // 0xD0(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bPlayImpactEffectOnExplode : 1;                    // Mask: 0x1, PropSize: 0x10xD8(0x1)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_4E : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_99E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UExplosionData*                        ExplosionData;                                     // 0xE0(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFeedbackData*                         DamageInstigatorFeedback;                          // 0xE8(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                       AttachedFX;                                        // 0xF0(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UEffectCollectionData>     AttachedFXCollection;                              // 0xF8(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  AttachedFXBodySocket;                              // 0x100(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9A2[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            AttachedFXTransform;                               // 0x110(0x30)(Edit, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        BounceEffectDelay;                                 // 0x140(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Speed;                                             // 0x144(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxSpeed;                                          // 0x148(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              InitialRelativeRotation;                           // 0x14C(0xC)(Edit, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Acceleration;                                      // 0x158(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GravityScale;                                      // 0x15C(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Friction;                                          // 0x160(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RicochetFriction;                                  // 0x164(0x4)(BlueprintReadOnly, ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BounceFriction;                                    // 0x168(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Bounciness;                                        // 0x16C(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class ULightProjectileMoveModifier*>  MoveModifiers;                                     // 0x170(0x10)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	float                                        LifeTime;                                          // 0x180(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAttachedLifetimeEnabled : 1;                      // Mask: 0x1, PropSize: 0x10x184(0x1)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_4F : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_9AA[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAttributeInitializationData          AttachedLifetime;                                  // 0x188(0x38)(Edit, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	enum class ELightProjectileAttachedLifetimeSourceContext AttachedLifetimeContext;                           // 0x1C0(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowInfiniteAttachedLifetime;                    // 0x1C1(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionChannel                 TraceChannel;                                      // 0x1C2(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9AD[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TraceInterval;                                     // 0x1C4(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CollisionRadius;                                   // 0x1C8(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxRicochet;                                       // 0x1CC(0x4)(BlueprintReadOnly, ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxBounces;                                        // 0x1D0(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxReflections;                                    // 0x1D4(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ProxyRadius;                                       // 0x1D8(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionChannel                 ProxyTraceChannel;                                 // 0x1DC(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIgnoreCollisionWithInstigator : 1;                // Mask: 0x1, PropSize: 0x10x1DD(0x1)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSetTeamCollision : 1;                             // Mask: 0x2, PropSize: 0x10x1DD(0x1)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIgnoreCollisionWithInstigatorTeam : 1;            // Mask: 0x4, PropSize: 0x10x1DD(0x1)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bPenetratesTargetables : 1;                        // Mask: 0x8, PropSize: 0x10x1DD(0x1)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bPenetratesWorld : 1;                              // Mask: 0x10, PropSize: 0x10x1DD(0x1)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bBounceOffTargetables : 1;                         // Mask: 0x20, PropSize: 0x10x1DD(0x1)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCollideWithSource : 1;                            // Mask: 0x40, PropSize: 0x10x1DD(0x1)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEnableProxyCollisionEvents : 1;                   // Mask: 0x80, PropSize: 0x10x1DD(0x1)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9B3[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CollideWithSourceDelay;                            // 0x1E0(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9B5[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FLightProjectileTimedEvent>    TimedEvents;                                       // 0x1E8(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FBulletPerceptionProperties           BulletSensePerception;                             // 0x1F8(0x8)(Edit, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FSoundPerceptionProperties            ImpactSoundPerception;                             // 0x200(0xC)(Edit, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        bCanTriggerBulletDodges : 1;                       // Mask: 0x1, PropSize: 0x10x20C(0x1)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bNoDamage : 1;                                     // Mask: 0x2, PropSize: 0x10x20C(0x1)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bTargetedImpactRadiusDamage : 1;                   // Mask: 0x4, PropSize: 0x10x20C(0x1)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseVelocityAsImpactDamageHitForce : 1;            // Mask: 0x8, PropSize: 0x10x20C(0x1)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_50 : 4;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_9BB[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAttributeInitializationData          DamageRadius;                                      // 0x210(0x38)(Edit, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	TSubclassOf<class UDamageSource>             DamageSource;                                      // 0x248(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UDamageData>               DamageAreaData;                                    // 0x250(0x8)(BlueprintReadOnly, ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UDamageData>               DamageData;                                        // 0x258(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DamageAreaHitOffset;                               // 0x260(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDamageFalloff : 1;                                // Mask: 0x1, PropSize: 0x10x264(0x1)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRequiresInstigatorToDoDamage : 1;                 // Mask: 0x2, PropSize: 0x10x264(0x1)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_51 : 6;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_9C4[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AttachDamageScale;                                 // 0x268(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9C5[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAttributeInitializationData          ImpactedActorDamageScale;                          // 0x270(0x38)(Edit, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	TArray<class UConditionalDamageModifier*>    ConditionalDamageModifiers;                        // 0x2A8(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FLightProjectileAudioProperties       AudioProperties;                                   // 0x2B8(0x40)(Edit, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	class UWwiseEvent*                           AttachedSound;                                     // 0x2F8(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCanAttachToTargetables : 1;                       // Mask: 0x1, PropSize: 0x10x300(0x1)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCanAttachToFriendlies : 1;                        // Mask: 0x2, PropSize: 0x10x300(0x1)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCanAttachToWorld : 1;                             // Mask: 0x4, PropSize: 0x10x300(0x1)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bHideBodyOnAttach : 1;                             // Mask: 0x8, PropSize: 0x10x300(0x1)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDeactivateTracerFXOnAttach : 1;                   // Mask: 0x10, PropSize: 0x10x300(0x1)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_52 : 3;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_9C9[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  DeactivateTracerFXEmitterOnAttach;                 // 0x308(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEnableHomingOnSpawn : 1;                          // Mask: 0x1, PropSize: 0x10x310(0x1)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideAimAssistSettings : 1;                    // Mask: 0x2, PropSize: 0x10x310(0x1)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_53 : 6;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_9CA[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             MagnetismRate;                                     // 0x314(0x8)(Edit, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxMagnetismDeflection;                            // 0x31C(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLightProjectileRingSettings          RingSettings;                                      // 0x320(0x30)(Edit, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        bMakeProjectileRing : 1;                           // Mask: 0x1, PropSize: 0x10x350(0x1)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_54 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_9CC[0xF];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bCallOnDamageEventOncePerHit;                      // 0x360(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9CD[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULightProjectileData* GetDefaultObj();

	void OnRicochet(class ULightProjectile* Projectile, struct FHitResult& Hit, const struct FVector& ImpactVelocity);
	void OnProxyImpact(class ULightProjectile* Projectile, struct FHitResult& Hit);
	void OnLifetimeExpired(class ULightProjectile* Projectile);
	void OnImpact(class ULightProjectile* Projectile, struct FHitResult& Hit);
	void OnExplode(class ULightProjectile* Projectile);
	void OnDamage(class ULightProjectile* Projectile, struct FHitResult& Hit, bool bCritical);
	void OnBegin(class ULightProjectile* Projectile);
	void OnAttached(class ULightProjectile* Projectile, class AActor* AttachedActor);
	void GetTimedEventNameList(TArray<class FName>* FuncList);
};

// 0x100 (0x558 - 0x458)
// Class GbxWeapon.LightBeamManager
class ALightBeamManager : public AActor
{
public:
	TArray<class ULightBeam*>                    ActiveBeams;                                       // 0x458(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_9E0[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ULightBeam*>                    BeamsWaitingBatch;                                 // 0x480(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<class ULightBeam*>                    BeamPool;                                          // 0x490(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<class UParticleSystemComponent*>      ActiveParticles;                                   // 0x4A0(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<struct FLightBeamParticlePoolData>    ParticlesPool;                                     // 0x4B0(0x10)(ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_9E2[0x6C];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxAsyncSpawnTime;                                 // 0x52C(0x4)(ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_9E3[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ALightBeamManager* GetDefaultObj();

	void OnParticleSystemFinished(class UParticleSystemComponent* FinishedComponent);
};

// 0x5F8 (0x620 - 0x28)
// Class GbxWeapon.LightBeam
class ULightBeam : public UObject
{
public:
	uint8                                        Pad_A2F[0x90];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ULightBeamData*                        Data;                                              // 0xB8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UParticleSystemComponent*              Component;                                         // 0xC0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UParticleSystemComponent*              AltViewComponent;                                  // 0xC8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DamageInterval;                                    // 0xD0(0x4)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LockOnContactTime;                                 // 0xD4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LockOnBreakRadius;                                 // 0xD8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LockOnBreakAngle;                                  // 0xDC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A35[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FClientLightBeamState                 ClientState;                                       // 0xE8(0xC8)(Net, Transient, RepNotify, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	enum class EWeaponShotModifierType           ModifierType;                                      // 0x1B0(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A37[0x17];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ModifierValue;                                     // 0x1C8(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector_NetQuantize10                 ServerSourcePoint;                                 // 0x1CC(0xC)(Net, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector_NetQuantize10                 ServerTargetPoint;                                 // 0x1D8(0xC)(Net, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A3B[0x20];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StartTime;                                         // 0x204(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A3D[0x30];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TWeakObjectPtr<class AActor>                 LastDamagedActor;                                  // 0x238(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<TWeakObjectPtr<class AActor>>         DamagedActors;                                     // 0x240(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	float                                        LastDamagedActorContinuousContact;                 // 0x250(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A3E[0xDC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            LastImpact;                                        // 0x330(0x90)(Transient, IsPlainOldData, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_A41[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ULightBeam*                            ParentBeam;                                        // 0x3D8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ULightBeam*                            RootParentBeam;                                    // 0x3E0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class ULightBeam*>                    ChildBeams;                                        // 0x3E8(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_A43[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FLightBeamImpactFXTrackingData> TrackingImpactEffects;                             // 0x408(0x10)(ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_A44[0x208];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULightBeam* GetDefaultObj();

	void SetTargetSocket(class FName Socket);
	void OnTrackedImpactParticleSystemFinished(class UParticleSystemComponent* PSC);
	void OnRep_ModifierValue();
	void OnRep_ModifierType();
	void OnRep_ClientState();
	void LockOntoTarget(struct FLightBeamAttachment& Target);
	void InitChildData(struct FLightBeamInitializationData* InitData);
	class AActor* GetTargetActor();
	struct FLightBeamAttachment GetTarget();
	class AActor* GetSourceActor();
	struct FLightBeamAttachment GetSource();
	class APawn* GetInstigator();
	float GetImpactForce();
	class UGbxDamageType* GetDamageType();
	class AActor* GetDamageCauser();
	float GetDamage();
	class AActor* GetAssociatedActor(enum class ELightBeamQueryActorType ActorType);
};

// 0x1A0 (0x1C8 - 0x28)
// Class GbxWeapon.LightBeamData
class ULightBeamData : public UObject
{
public:
	TSubclassOf<class ULightBeam>                BeamClass;                                         // 0x28(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LifeTime;                                          // 0x30(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A5A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystem*                       BeamFX;                                            // 0x38(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UEffectCollectionData>     BeamFXCollection;                                  // 0x40(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                       ViewerBeamFX;                                      // 0x48(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UEffectCollectionData>     ViewerBeamFXCollection;                            // 0x50(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseEvent*                           LoopingImpactAudio;                                // 0x58(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UEffectCollectionData>     AudioFXCollection;                                 // 0x60(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SourceTangentStrengthOverDistance;                 // 0x68(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TargetTangentStrengthOverDistance;                 // 0x6C(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BeamEmitterName;                                   // 0x70(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UExplosionData*                        ExplosionData;                                     // 0x78(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UImpactData*                           ImpactData;                                        // 0x80(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ImpactFXFrequency;                                 // 0x88(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bShowPenetrationImpacts : 1;                       // Mask: 0x1, PropSize: 0x10x8C(0x1)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bNoImpactDecals : 1;                               // Mask: 0x2, PropSize: 0x10x8C(0x1)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_5C : 6;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	enum class ECollisionChannel                 TraceChannel;                                      // 0x8D(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A66[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CollisionRadius;                                   // 0x90(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TraceInterval;                                     // 0x94(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumTraceSteps;                                     // 0x98(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxLength;                                         // 0x9C(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartLength;                                       // 0xA0(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GrowSpeed;                                         // 0xA4(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bGrowOverTime : 1;                                 // Mask: 0x1, PropSize: 0x10xA8(0x1)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSetTeamCollision : 1;                             // Mask: 0x2, PropSize: 0x10xA8(0x1)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIgnoreCollisionWithInstigatorTeam : 1;            // Mask: 0x4, PropSize: 0x10xA8(0x1)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bPenetratesTargetables : 1;                        // Mask: 0x8, PropSize: 0x10xA8(0x1)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bPenetratesWorld : 1;                              // Mask: 0x10, PropSize: 0x10xA8(0x1)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCanTriggerBulletDodges : 1;                       // Mask: 0x20, PropSize: 0x10xA8(0x1)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_5D : 2;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	enum class ELightBeamLock                    LockType;                                          // 0xA9(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCanAcquireLock : 1;                               // Mask: 0x1, PropSize: 0x10xAA(0x1)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAlignToLockedTarget : 1;                          // Mask: 0x2, PropSize: 0x10xAA(0x1)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCanLockOntoFriendlies : 1;                        // Mask: 0x4, PropSize: 0x10xAA(0x1)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bWorldCollisionBreaksLock : 1;                     // Mask: 0x8, PropSize: 0x10xAA(0x1)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_5E : 4;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_A6D[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DamageInterval;                                    // 0xAC(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDamageDirectTargetOnce : 1;                       // Mask: 0x1, PropSize: 0x10xB0(0x1)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_60 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_A6F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UDamageData>               DamageData;                                        // 0xB8(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UConditionalDamageModifier*>    ConditionalDamageModifiers;                        // 0xC0(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        bEnableDamageProxy : 1;                            // Mask: 0x1, PropSize: 0x10xD0(0x1)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_61 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_A72[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DamageProxyRadius;                                 // 0xD4(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionChannel                 DamageProxyTraceChannel;                           // 0xD8(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A75[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRuntimeFloatCurve                    DamageProxyRadiusCurve;                            // 0xE0(0x78)(Edit, BlueprintReadOnly, NativeAccessSpecifierPublic)
	uint8                                        bScaleDamageProxyRadiusByCurve : 1;                // Mask: 0x1, PropSize: 0x10x158(0x1)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDisableDragWhenLocked : 1;                        // Mask: 0x2, PropSize: 0x10x158(0x1)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_62 : 6;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_A78[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DragSpeed;                                         // 0x15C(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxDragRadius;                                     // 0x160(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A7A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVector2DWaveform>             SpreadWaveforms;                                   // 0x168(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        bSpreadWaveformIsAngle : 1;                        // Mask: 0x1, PropSize: 0x10x178(0x1)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_63 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_A7B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SpreadWaveformTimeScale;                           // 0x17C(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LockOnSpreadScale;                                 // 0x180(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bApplyAccuracyToSpread : 1;                        // Mask: 0x1, PropSize: 0x10x184(0x1)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_64 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_A80[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxChains;                                         // 0x188(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxChainDepth;                                     // 0x18C(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ULightBeamData>            ChainBeamData;                                     // 0x190(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UEnvQuery*                             ChainTargetsQuery;                                 // 0x198(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ChainTargetsQueryMaxRangeParam;                    // 0x1A0(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ChainDelay;                                        // 0x1A8(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ChainInterval;                                     // 0x1AC(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxChainDistance;                                  // 0x1B0(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ChainBreakDistance;                                // 0x1B4(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NetUpdateTime;                                     // 0x1B8(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A87[0xC];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULightBeamData* GetDefaultObj();

	float UpdateTarget(class ULightBeam* Beam);
	bool CanLockOn(class ULightBeam* Beam, class AActor* TargetActor);
};

// 0xA0 (0x218 - 0x178)
// Class GbxWeapon.WeaponUseComponent
class UWeaponUseComponent : public UActorComponent
{
public:
	uint8                                        Pad_AB3[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        UseMode;                                           // 0x180(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAutoSwitchModeWhenOutOfAmmo : 1;                  // Mask: 0x1, PropSize: 0x10x181(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bClearUseInputWhenSwitchingModes : 1;              // Mask: 0x2, PropSize: 0x10x181(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bActivateModeWhenZoomed : 1;                       // Mask: 0x4, PropSize: 0x10x181(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseAnimationSwitchModeTime : 1;                   // Mask: 0x8, PropSize: 0x10x181(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_66 : 4;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_AB7[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxCrosshairDataAsset*                CrosshairData;                                     // 0x188(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxCrosshairDataAsset*                ZoomedCrosshairData;                               // 0x190(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            Icon;                                              // 0x198(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ModeName;                                          // 0x1A0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAttributeEffectData>          InstigatorAttributeEffects;                        // 0x1B0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  NotifyUseStarted;                                  // 0x1C0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  NotifyUseFinished;                                 // 0x1D0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  NotifyUsed;                                        // 0x1E0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<struct FGbxAttributeModifierHandle>   InstigatorAttributeModifiers;                      // 0x1F0(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	class UWeaponPreUseComponent*                PreUseComponent;                                   // 0x200(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_AC9[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AWeapon*                               WeaponPrivate;                                     // 0x210(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UWeaponUseComponent* GetDefaultObj();

	bool ToggleMode();
	void SwitchToZoomedMode(uint8 ZoomLevel);
	void SwitchFromZoomedMode(uint8 ZoomLevel);
	void OnPreUseFinished(bool bInterrupted);
	void K2_OnDeactivated();
	void K2_OnActivated();
	bool CanActivateMode();
};

// 0x6E8 (0x900 - 0x218)
// Class GbxWeapon.WeaponFireComponent
class UWeaponFireComponent : public UWeaponUseComponent
{
public:
	struct FGbxAttributeFloat                    FireRate;                                          // 0x218(0xC)(Edit, BlueprintVisible, Net, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxAttributeInteger                  AutomaticBurstCount;                               // 0x224(0xC)(Edit, BlueprintVisible, Net, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxAttributeFloat                    BurstFireDelay;                                    // 0x230(0xC)(Edit, BlueprintVisible, Net, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoBurst;                                        // 0x23C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B63[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  FireSocket;                                        // 0x240(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          FireSockets;                                       // 0x248(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         FullFireSocketCycle;                               // 0x258(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionChannel                 TraceChannel;                                      // 0x259(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B6C[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinFireRateScale;                                  // 0x25C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxAttributeFloat                    FireRateAccelDuration;                             // 0x260(0xC)(Edit, BlueprintVisible, Net, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxAttributeFloat                    FireRateDecelDuration;                             // 0x26C(0xC)(Edit, BlueprintVisible, Net, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinFireRatePercentToFire;                          // 0x278(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B77[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           FireRateCurve;                                     // 0x280(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseShotStrengthFormula;                           // 0x288(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B7C[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAttributeInitializationData          ShotStrengthFormula;                               // 0x290(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        FireSequenceLength;                                // 0x2C8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxAttributeFloat                    ResetFireSequenceTime;                             // 0x2CC(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, Net, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ResetFireSequenceCompletePercent;                  // 0x2D8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAdvanceFireSequenceAtEndOfBurst;                  // 0x2DC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTotalShotCostRequiredToFire;                      // 0x2DD(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B83[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxAttributeInteger                  ShotAmmoCost;                                      // 0x2E0(0xC)(Edit, BlueprintVisible, Net, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinShotAmmoCost;                                   // 0x2EC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxAttributeFloat                    Spread;                                            // 0x2F0(0xC)(Edit, BlueprintVisible, Net, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxAttributeFloat                    AccuracyImpulse;                                   // 0x2FC(0xC)(Edit, BlueprintVisible, Net, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxAttributeFloat                    BurstAccuracyImpulseScale;                         // 0x308(0xC)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ViewModelShotOffsetScale;                          // 0x314(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxAttributeFloat                    Damage;                                            // 0x318(0xC)(BlueprintVisible, BlueprintReadOnly, Net, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B8E[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAttributeInitializationData          DamageFormula;                                     // 0x328(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	class UCurveFloat*                           ShotStrengthDamageCurve;                           // 0x360(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxAttributeFloat                    DamageRadius;                                      // 0x368(0xC)(BlueprintVisible, BlueprintReadOnly, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B92[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAttributeInitializationData          DamageRadiusFormula;                               // 0x378(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	class UCurveFloat*                           ShotStrengthDamageRadiusCurve;                     // 0x3B0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxAttributeFloat                    ImpactForce;                                       // 0x3B8(0xC)(BlueprintVisible, BlueprintReadOnly, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B96[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FForceSelection                       ImpactForceSelection;                              // 0x3C8(0x20)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	class UCurveFloat*                           ShotStrengthImpactForceCurve;                      // 0x3E8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UGbxDamageType>            DamageType;                                        // 0x3F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UDamageSource>             DamageSource;                                      // 0x3F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UImpactData*                           ImpactData;                                        // 0x400(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MuzzleFXSequenceLength;                            // 0x408(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoundPerceptionProperties            FireSoundPerception;                               // 0x40C(0xC)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UFeedbackData*                         FireFeedback;                                      // 0x418(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bPlayFeedbackAtLocation : 1;                       // Mask: 0x1, PropSize: 0x10x420(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bScaleFeedbackWithFireRate : 1;                    // Mask: 0x2, PropSize: 0x10x420(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_71 : 6;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_BA3[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UFeedbackData*                         ScaledFeedback;                                    // 0x428(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    FeedbackFireRateScalar;                            // 0x430(0x78)(Edit, NativeAccessSpecifierPublic)
	class FName                                  FeedbackSocket;                                    // 0x4A8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSyncAnimationToFireRate;                          // 0x4B0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BA8[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FireAnimationBlendSpace;                           // 0x4B4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWeaponEffectType                 SkeletalControlType;                               // 0x4B8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BAA[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  SkeletalControlName;                               // 0x4C0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SkeletalControlFireInput;                          // 0x4C8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLockOntoBestTarget;                               // 0x4CC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BAD[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DelayInitializeAttribute;                          // 0x4D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BAE[0xD];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        BitPad_72 : 1;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        bFireRateAccelActive : 1;                          // Mask: 0x2, PropSize: 0x10x4E1(0x1)(Net, Transient, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_73 : 6;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_BB1[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EWeaponFireRateState              FireRateState;                                     // 0x4E4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        CurrentBurstShotCount;                             // 0x4E8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        CurrentFireSequenceIndex;                          // 0x4EC(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_BB5[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        ClientFireSequenceState;                           // 0x4FD(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_BBB[0x22];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FireRatePercent;                                   // 0x520(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_BBE[0x14];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        FlashSlot;                                         // 0x538(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        FlashCount;                                        // 0x539(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_BC0[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector_NetQuantize                   ImpactLocation;                                    // 0x540(0xC)(Net, Transient, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DamageAmount;                                      // 0x54C(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGbxParam                             AIBurstCount;                                      // 0x550(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGbxParam                             AIBurstFireDelay;                                  // 0x5D0(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGbxParam                             AIFireInterval;                                    // 0x650(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGbxParam                             AIAccuracy;                                        // 0x6D0(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGbxParam                             AIProjectileSpeedScale;                            // 0x750(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FNumericRange                         AIDesiredRange;                                    // 0x7D0(0x8)(Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FGbxParam                             AIMinDesiredRange;                                 // 0x7D8(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGbxParam                             AIMaxDesiredRange;                                 // 0x858(0x80)(Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGbxForceFeedbackEffect               ScaledEffect;                                      // 0x8D8(0x18)(Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_BC8[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UWeaponFireComponent* GetDefaultObj();

	void ServerResetFireSequence();
	void OnStopFireRateDeceleration();
	void OnStopFireRateAcceleration();
	void OnStartFireRateDeceleration();
	void OnStartFireRateAcceleration();
	void OnRep_ImpactLocation();
	void OnRep_FlashCount();
	void OnRep_FireRateAccelChanged();
	void OnRep_ClientFireSequenceState();
	void OnReloadAmmoGiven();
	void OnLoopingFireActionEnd(enum class EGbxActionEndState EndState);
	void OnGivenTo();
	bool IsFireRateAccelEnabled();
	class AActor* GetLockedTarget();
	float GetFireRatePercent();
	void ClientStopResetFireSequence();
};

// 0x58 (0x958 - 0x900)
// Class GbxWeapon.WeaponFireProjectileComponent
class UWeaponFireProjectileComponent : public UWeaponFireComponent
{
public:
	struct FGbxAttributeInteger                  ProjectilesPerShot;                                // 0x900(0xC)(Edit, BlueprintVisible, Net, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxAttributeFloat                    ProjectileSpeedScale;                              // 0x90C(0xC)(Edit, BlueprintVisible, Net, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           ShotStrengthProjectileSpeedCurve;                  // 0x918(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class AActor>                    ProjectileTemplate;                                // 0x920(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAttributeBaseValueData>       ProjectileBaseValues;                              // 0x928(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TSubclassOf<class ULightProjectileData>      LightProjectileData;                               // 0x938(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFiringPattern*                        FiringPatternData;                                 // 0x940(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Range;                                             // 0x948(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C0A[0xC];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UWeaponFireProjectileComponent* GetDefaultObj();

	TSubclassOf<class AActor> GetShotProjectileData();
	TSubclassOf<class ULightProjectileData> GetShotLightProjectileData();
};

// 0x4A0 (0x8F8 - 0x458)
// Class GbxWeapon.Weapon
class AWeapon : public AActor
{
public:
	uint8                                        Pad_14DD[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UWeaponFireComponent*                  CurrentFireComponent;                              // 0x470(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWeaponTypeAsset*                      WeaponDisplayData;                                 // 0x478(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWeaponTypeData*                       WeaponType;                                        // 0x480(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14EB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxAttributeFloat                    SwitchModeTimeScale;                               // 0x48C(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, Net, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SwitchModeTime;                                    // 0x498(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SwitchModeCompletePercent;                         // 0x49C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TScriptInterface<class IGbxWeaponUserInterface> WeaponUser;                                        // 0x4A0(0x10)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  BegunPlay;                                         // 0x4B0(0x10)(ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  NotifyGivenTo;                                     // 0x4C0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  NotifyAttached;                                    // 0x4D0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  NotifyDetached;                                    // 0x4E0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  NotifyEquipped;                                    // 0x4F0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  NotifyPutDown;                                     // 0x500(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  NotifySwitchedMode;                                // 0x510(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  NotifyFirstPersonCreated;                          // 0x520(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  NotifyUseInput;                                    // 0x530(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  NotifyReloadStarted;                               // 0x540(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  NotifyReloadEnded;                                 // 0x550(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  NotifyTargetLockChanged;                           // 0x560(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  NotifyHidden;                                      // 0x570(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  NotifyDropped;                                     // 0x580(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	float                                        PostSprintDelayUseTime;                            // 0x590(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ViewModelFOV;                                      // 0x594(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DepthOfFieldZoomedForegroundNearRegion;            // 0x598(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1516[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FDamageScaleConditionalData>   DamageScaleConditionals;                           // 0x5A0(0x10)(Edit, ZeroConstructor, EditConst, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGbxObjectReplicatorProxy             ReplicationProxy;                                  // 0x5B0(0x78)(Net, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_151F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWeaponAttachState                    PendingAttachState;                                // 0x630(0x18)(Net, Transient, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FWeaponAttachState                    AttachState;                                       // 0x648(0x18)(Transient, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FGbxAttributeFloat                    EquipTime;                                         // 0x660(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_152D[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxAttributeFloat                    PutDownTime;                                       // 0x684(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_152F[0xA];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        PendingUseModeIndex;                               // 0x69A(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1533[0x15];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        CurrentUseModeIndex;                               // 0x6B0(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        CurrentSlotIndex;                                  // 0x6B1(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        NextSlotIndex;                                     // 0x6B2(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_153E[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FWeaponUseModeState>           UseModeState;                                      // 0x6B8(0x10)(ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_153F[0x28];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UAimAssistParameters*                  AimAssetParameters;                                // 0x6F0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsTargetLocked;                                   // 0x6F8(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1544[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint32                                       AttributeResolverUseModeBitmask;                   // 0x6FC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1548[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bForceUnzoomWhenSwitchingModes;                    // 0x710(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_154C[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UWeaponAttachmentSlot*>         AttachmentSlots3P;                                 // 0x720(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<class UWeaponAttachmentSlot*>         AttachmentSlots1P;                                 // 0x730(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	bool                                         bWeaponAttached;                                   // 0x740(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_155E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FWeaponRegisterMaterialEffectData> RegisteredMaterialEffects;                         // 0x748(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1565[0x58];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FWeaponRegisterSkeletalControlData> RegisteredSkeletalControls;                        // 0x7B0(0x10)(ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1569[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWeaponTriggerFeedbackAsset*           CachedFireTriggerFeedback;                         // 0x7C8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWeaponTriggerFeedbackAsset*           CachedZoomTriggerFeedback;                         // 0x7D0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bShowCrosshair;                                    // 0x7D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAlwaysTickAttachedMeshes;                         // 0x7D9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1576[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  BodyWeaponHoldName;                                // 0x7E0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class FName>                          AnimSetGenericNames;                               // 0x7E8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_157B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UDamageModifierComponent>  DamageModifierCompClass;                           // 0x800(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_157D[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CurrentState;                                      // 0x818(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1582[0x98];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FWeaponRegisterAttachmentEffectData> UnregisteredFirstPersonOnlyAttachmentEffects;      // 0x8B8(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<class UTexture2D*>                    UseModeIcons;                                      // 0x8C8(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<class FString>                        UseModeIconFrameNames;                             // 0x8D8(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	class FName                                  MainHandGripSocketName;                            // 0x8E8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  OffHandGripSocketName;                             // 0x8F0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AWeapon* GetDefaultObj();

	void Unlock(bool bReplicate);
	void TryAutoReload();
	void ToggleMode(uint8 InputChannel);
	void SwitchPendingUseMode();
	void SwitchMode(uint8 InputChannel, uint8 NextUseModeIndex, bool bForced);
	void StopZooming(bool bSkipTransitions, bool bClearInput);
	void StopWeaponAction(enum class EWeaponActionType WeaponAction);
	void StopUsing(uint8 InputChannel, bool bForced);
	void StopReloading();
	void StopModeSwitch();
	void StopEffects(enum class EWeaponEffectType EffectType, uint8 UseModeIndex);
	void StopDynamicMaterialEffect(int32 EffectID);
	void StopAnimation(class UAnimMontage* Anim, bool bFirstPerson);
	void StartZooming();
	void StartUsing(uint8 InputChannel);
	void StartReloading(bool bAuto);
	void SetTargetLocked(bool bIsLocked);
	void SetPreUseState(uint8 UseModeIndex, bool bEnabled);
	void SetMaterialVectorParameterValue(class FName ParamName, const struct FLinearColor& ParamValue);
	void SetMaterialScalarParameterValue(class FName ParamName, float ParamValue);
	void SetEffectVectorParameter(class FName ParamName, struct FVector& ParamValue, struct FWeaponEffectQueryData& QueryData);
	void SetEffectMaterialParameter(class FName ParamName, class UMaterialInterface* ParamValue, struct FWeaponEffectQueryData& QueryData);
	void SetEffectFloatParameter(class FName ParamName, float ParamValue, struct FWeaponEffectQueryData& QueryData);
	void SetEffectEmitterState(class FName EmitterName, bool bEnabled, struct FWeaponEffectQueryData& QueryData);
	void SetEffectColorParameter(class FName ParamName, struct FLinearColor& ParamValue, struct FWeaponEffectQueryData& QueryData);
	void SetBoneVisibility(class FName BoneName, bool bVisible, enum class EWeaponAttachmentVisibilityType AttachmentType);
	void ServerUnlock();
	void ServerSwitchMode(uint8 InputChannel, uint8 NextUseModeIndex, bool bForced);
	void ServerStopUsing(uint8 InputChannel, bool bForced);
	void ServerStopModeSwitch(uint8 InputChannel, uint8 ClientUseModeIndex);
	void ServerStartUsing(uint8 InputChannel, uint8 ClientPatternSeed);
	void ServerStartReloading(uint8 UseModeIndex, bool bAuto);
	void ServerSetZoomState(uint8 UseModeIndex, struct FWeaponZoomState& NewState, float ZoomStartOffset);
	void ServerSetPatternSeed(uint8 ClientPatternSeed);
	void ServerRestartAutoUse();
	void ServerLock(float Duration);
	void ServerInterruptReloadToUse(int32 ClientLoadedAmmo);
	void ServerEquipInterruptible();
	void RegisterSkeletalControl(struct FWeaponRegisterSkeletalControlData& Data);
	void RegisterSimpleEffect(enum class EWeaponEffectType EffectType, class UParticleSystem* Effect, class FName EffectSocket);
	void RegisterMaterialEffect(struct FWeaponRegisterMaterialEffectData& Data);
	void RegisterEffect(struct FWeaponRegisterAttachmentEffectData& Data);
	void ReevaluateConditionalEffects();
	void PrevZoomLevel();
	void PlayEffects(enum class EWeaponEffectType EffectType, uint8 UseModeIndex, int32 EffectID);
	int32 PlayDynamicMaterialEffect(struct FWeaponMaterialEffectData& Data);
	float PlayAnimation(class UAnimMontage* Anim, bool bFirstPerson, float PlayRate, float Duration);
	void OnZoomedOut();
	void OnUseStarted();
	void OnUseFinished();
	void OnUpdateSkeletalControlsWhenUseFinishes();
	void OnUpdateSkeletalControlsWhenUsed();
	void OnUpdateSkeletalControlsWhenAmmoChanges();
	void OnRep_TargetLockedChanged();
	void OnRep_PendingUseModeIndex();
	void OnRep_PendingAttachState();
	void OnRep_CurrentUseModeIndex(uint8 PreviousUseModeIndex);
	void OnReloadEnded(bool bCompleted, bool bAmmoGiven);
	void OnAmmoGivenToEmptyWeapon();
	void NotifySkeletalControl(enum class EWeaponEffectType ControlType, class FName ControlName, enum class EWeaponSkeletalControlEvent Event, float EventValue);
	void NextZoomLevel();
	void Lock(float Duration, bool bReplicate);
	void K2_StopWeaponActionObj(class UGbxAction* WeaponAction);
	class UGbxAction* K2_PlayWeaponActionEx(enum class EWeaponActionType WeaponAction, const struct FActionState_Base& ActionParams, bool bCheckForRelevancy);
	class UGbxAction* K2_PlayWeaponAction(enum class EWeaponActionType WeaponAction, float PlayRate, float Duration, bool bCheckForRelevancy);
	bool IsZoomedIn(bool bIncludeTransitions);
	bool IsZoomed();
	bool IsUsing();
	bool IsTargetLocked();
	bool IsSwitchingModes();
	bool IsReloading();
	bool IsPuttingDown();
	bool IsPendingUse(uint8 InputChannel);
	bool IsLocked();
	bool IsLocalAuthority();
	bool IsInactive();
	bool IsEquipping();
	bool IsAuthorityUsing();
	bool IsAuthoritySwitchingModes();
	bool IsAuthorityReloading();
	bool IsAuthorityPuttingDown();
	bool IsAuthorityEquipping();
	bool IsActive();
	void GivenTo(class APawn* NewOwner);
	float GetZoomFOVScale();
	float GetZoomEffect();
	float GetZoomDuration();
	class UActorComponent* GetUseModeComponentByClass(TSubclassOf<class UActorComponent> ComponentClass, uint8 UseModeIndex);
	float GetMuteADSAlpha();
	float GetMaxZoomFOVScale();
	uint8 GetLastInputChannel();
	uint8 GetCurrentReloadPartType();
	class UMeshComponent* GetAttachmentMesh(bool bFirstPerson, uint8 SlotIndex);
	class UActorComponent* GetAssociatedUseModeComponentByClass(TSubclassOf<class UActorComponent> ComponentClass, class UActorComponent* ReferenceComponent);
	class UAimAssistParameters* GetAimAssistParameters();
	void ForceResetZoom();
	void EquipInterruptible();
	void Dropped();
	void CycleZoomLevel();
	void ClientUnlock();
	void ClientStopReloading();
	void ClientSetModeSwitch(uint8 InputChannel, uint8 ServerUseModeIndex);
	void ClientLock(float Duration);
	uint8 AddUseMode(class UWeaponUseComponent* UseComponent, TArray<class UActorComponent*>& OtherComponents, int32 InputChannels);
	void Activate(class APawn* WeaponOwner, uint8 InSlot, enum class EWeaponEquipType InEquipType);
};

// 0x20 (0x460 - 0x440)
// Class GbxWeapon.WeaponAnimInstance
class UWeaponAnimInstance : public UAnimInstance
{
public:
	class AWeapon*                               Weapon;                                            // 0x440(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWeaponAttachmentSlot*                 Slot;                                              // 0x448(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ZoomDuration;                                      // 0x450(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ZoomEffect;                                        // 0x454(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsZoomedIn;                                       // 0x458(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1677[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UWeaponAnimInstance* GetDefaultObj();

	void BlueprintSwitchedMode(int32 NewMode);
};

// 0x0 (0x178 - 0x178)
// Class GbxWeapon.WeaponAudioProviderComponent
class UWeaponAudioProviderComponent : public UActorComponent
{
public:

	static class UClass* StaticClass();
	static class UWeaponAudioProviderComponent* GetDefaultObj();

};

// 0x90 (0x358 - 0x2C8)
// Class GbxWeapon.WalkingProjectileMovementComponent
class UWalkingProjectileMovementComponent : public UGbxProjectileMovementComponent
{
public:
	bool                                         bGravityAffectsSlopeWalking;                       // 0x2C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16A1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxWalkAngle;                                      // 0x2CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFallOffLedges;                                    // 0x2D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16A8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxStepUpHeight;                                   // 0x2D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MovementFrozenMaxTime;                             // 0x2D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBounceOffWalls;                                   // 0x2DC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16AE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxWallBounces;                                    // 0x2E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WallBounciness;                                    // 0x2E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideWalkingSpeed;                             // 0x2E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16B9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WalkingSpeedOverride;                              // 0x2EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16BB[0x38];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnHitUnwalkableSurface;                            // 0x328(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	UMulticastDelegateProperty_                  OnBecomeAirborne;                                  // 0x338(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	UMulticastDelegateProperty_                  OnLanded;                                          // 0x348(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UWalkingProjectileMovementComponent* GetDefaultObj();

};

// 0x38 (0x1B0 - 0x178)
// Class GbxWeapon.WeaponAmmoComponent
class UWeaponAmmoComponent : public UActorComponent
{
public:
	uint8                                        Pad_1702[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxAmmoTypeData*                      AmmoTypeData;                                      // 0x180(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDisplayAmmoInHUD;                                 // 0x188(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1703[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  NotifyAmmoChanged;                                 // 0x190(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1709[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AWeapon*                               WeaponPrivate;                                     // 0x1A8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UWeaponAmmoComponent* GetDefaultObj();

	void ClientRefillAmmo(int32 Amount);
};

// 0xC0 (0x238 - 0x178)
// Class GbxWeapon.WeaponHeatComponent
class UWeaponHeatComponent : public UActorComponent
{
public:
	uint8                                        Pad_1780[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxAttributeFloat                    HeatCoolDownRate;                                  // 0x188(0xC)(Edit, Net, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxAttributeFloat                    HeatCoolDownDelay;                                 // 0x194(0xC)(Edit, Net, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxAttributeFloat                    UseHeatImpulse;                                    // 0x1A0(0xC)(Edit, Net, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxAttributeFloat                    ActiveHeatRate;                                    // 0x1AC(0xC)(Edit, Net, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSimulateOnClients;                                // 0x1B8(0x1)(Edit, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSimulateOnAI : 1;                                 // Mask: 0x1, PropSize: 0x10x1B9(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bVisibleInHUD : 1;                                 // Mask: 0x2, PropSize: 0x10x1B9(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bStartCoolDownEffectOnEndUse : 1;                  // Mask: 0x4, PropSize: 0x10x1B9(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCanOverheat : 1;                                  // Mask: 0x8, PropSize: 0x10x1B9(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_A6 : 4;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	bool                                         bCanUseWhenOverheated;                             // 0x1BA(0x1)(Edit, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1792[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxAttributeFloat                    OverheatTime;                                      // 0x1BC(0xC)(Edit, Net, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxAttributeFloat                    OverheatCoolDownDelay;                             // 0x1C8(0xC)(Edit, Net, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1798[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FWeaponHeatEventNotify>        HeatEvents;                                        // 0x1D8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class FName                                  HeatMaterialParamName;                             // 0x1E8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           HeatMaterialParamCurve;                            // 0x1F0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWeaponEffectType                 CoolDownEffectType;                                // 0x1F8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17AC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CoolDownEffectOnThreshold;                         // 0x1FC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CoolDownEffectOffThreshold;                        // 0x200(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17B2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  NotifyHeatChanged;                                 // 0x208(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	float                                        Heat;                                              // 0x218(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_17BB[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        ReplicatedHeat;                                    // 0x228(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bOverheated : 1;                                   // Mask: 0x1, PropSize: 0x10x229(0x1)(BlueprintVisible, BlueprintReadOnly, Net, Transient, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_A7 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_17C5[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AWeapon*                               WeaponPrivate;                                     // 0x230(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UWeaponHeatComponent* GetDefaultObj();

	void SetCanUseWhenOverheated(bool bEnabled);
	void OnUseFinished();
	void OnUsed();
	void OnStopOverheat();
	void OnStartOverheat();
	void OnRep_ReplicatedHeat();
	void OnRep_Overheated(bool bWasOverheated);
	void OnPutDown();
	void OnEquipped();
	void OnDetached();
	void OnAttached();
};

// 0x60 (0x1D8 - 0x178)
// Class GbxWeapon.WeaponReloadComponent
class UWeaponReloadComponent : public UActorComponent
{
public:
	uint8                                        Pad_17DA[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        ReloadPartType;                                    // 0x188(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17DB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  NotifyReloadStarted;                               // 0x190(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  NotifyReloadEnded;                                 // 0x1A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  NotifyAmmoGiven;                                   // 0x1B0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_17DD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxAttributeFloat                    ReloadTime;                                        // 0x1C4(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AWeapon*                               WeaponPrivate;                                     // 0x1D0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UWeaponReloadComponent* GetDefaultObj();

};

// 0x170 (0x2E8 - 0x178)
// Class GbxWeapon.WeaponZoomComponent
class UWeaponZoomComponent : public UActorComponent
{
public:
	uint8                                        Pad_1853[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FWeaponZoomLevel>              ZoomLevels;                                        // 0x188(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        InstigatorAccuracyScale;                           // 0x198(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ViewModelShotOffsetScale;                          // 0x19C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ViewModelLeadingScale;                             // 0x1A0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MovementAnimationAlpha;                            // 0x1A4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FlinchAnimationMagnitudeScale;                     // 0x1A8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceUnzoomWhenSwitchingModes;                    // 0x1AC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1872[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ModeFOVScale;                                      // 0x1B0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ModeTransitionDuration;                            // 0x1B4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  EyeSocket;                                         // 0x1B8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseScopeSocket;                                   // 0x1C0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1880[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  FrontScopeSocket;                                  // 0x1C8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  FrontSightSocket;                                  // 0x1D0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RearSightSocket;                                   // 0x1D8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FOVScale;                                          // 0x1E0(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DurationScale;                                     // 0x1E4(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowCrosshairWhenZoomed;                          // 0x1E8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bApplyAttributesWhenFullyZoomed;                   // 0x1E9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1894[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAttributeEffectData>          AttributeEffects;                                  // 0x1F0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FAttributeEffectData>          InstigatorAttributeEffects;                        // 0x200(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class FName                                  DepthOfFieldFocusSocket;                           // 0x210(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEnableBlurVignetteSize : 1;                       // Mask: 0x1, PropSize: 0x10x218(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideStartBlurVignetteSize : 1;                // Mask: 0x2, PropSize: 0x10x218(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideBlurVignetteSharpness : 1;                // Mask: 0x4, PropSize: 0x10x218(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEnableColorVignetteSize : 1;                      // Mask: 0x8, PropSize: 0x10x218(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideStartColorVignetteSize : 1;               // Mask: 0x10, PropSize: 0x10x218(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideColorVignetteSharpness : 1;               // Mask: 0x20, PropSize: 0x10x218(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideLongitudinalMotionScale : 1;              // Mask: 0x40, PropSize: 0x10x218(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideLateralMotionScale : 1;                   // Mask: 0x80, PropSize: 0x10x218(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18AD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BlurVignetteSize;                                  // 0x21C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartBlurVignetteSize;                             // 0x220(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BlurVignetteSharpness;                             // 0x224(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ColorVignetteSize;                                 // 0x228(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartColorVignetteSize;                            // 0x22C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ColorVignetteSharpness;                            // 0x230(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LongitudinalMotionScale;                           // 0x234(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LateralMotionScale;                                // 0x238(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18C1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFeedbackData*                         UseFeedback;                                       // 0x240(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UseFeedbackScale;                                  // 0x248(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18C6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  NotifyZoomingIn;                                   // 0x250(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  NotifyZoomedIn;                                    // 0x260(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  NotifyZoomingOut;                                  // 0x270(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  NotifyZoomedOut;                                   // 0x280(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         bApplyWeaponModeZoom;                              // 0x290(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FWeaponZoomState                      ZoomState;                                         // 0x291(0x2)(Transient, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FWeaponZoomState                      ReplicatedZoomState;                               // 0x293(0x2)(Net, Transient, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        DesiredZoomLevel;                                  // 0x295(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_18EF[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ZoomStartTime;                                     // 0x298(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ZoomTransitionStartTime;                           // 0x29C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FGbxAttributeModifierHandle>   AttributeModifiers;                                // 0x2A0(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<struct FGbxAttributeModifierHandle>   InstigatorAttributeModifiers;                      // 0x2B0(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        CachedWeaponModeIndex;                             // 0x2C0(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_18FD[0x1F];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class AWeapon*                               WeaponPrivate;                                     // 0x2E0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UWeaponZoomComponent* GetDefaultObj();

	void OnSwitchedWeaponMode();
	void OnRep_ReplicatedZoomState();
	void OnDetached();
	void OnAttached();
	float GetMaxZoomFOVScaleWithMode(uint8 ModeIndex);
	float GetMaxZoomFOVScale();
};

// 0x0 (0x28 - 0x28)
// Class GbxWeapon.AmmoProviderInterface
class IAmmoProviderInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IAmmoProviderInterface* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class GbxWeapon.WeaponAnimNotify
class UWeaponAnimNotify : public UAnimNotify
{
public:
	bool                                         bTriggerOnFirstPerson;                             // 0x38(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1957[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UWeaponAnimNotify* GetDefaultObj();

};

// 0x0 (0x40 - 0x40)
// Class GbxWeapon.AnimNotify_AmmoReloaded
class UAnimNotify_AmmoReloaded : public UWeaponAnimNotify
{
public:

	static class UClass* StaticClass();
	static class UAnimNotify_AmmoReloaded* GetDefaultObj();

};

// 0x0 (0x40 - 0x40)
// Class GbxWeapon.AnimNotify_EquipInterruptible
class UAnimNotify_EquipInterruptible : public UWeaponAnimNotify
{
public:

	static class UClass* StaticClass();
	static class UAnimNotify_EquipInterruptible* GetDefaultObj();

};

// 0x18 (0x58 - 0x40)
// Class GbxWeapon.AnimNotify_WeaponSkeletalControlEvent
class UAnimNotify_WeaponSkeletalControlEvent : public UWeaponAnimNotify
{
public:
	enum class EWeaponEffectType                 ControlType;                                       // 0x40(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19A2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ControlName;                                       // 0x48(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWeaponSkeletalControlEvent       ControlEvent;                                      // 0x50(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19A9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ControlInput;                                      // 0x54(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAnimNotify_WeaponSkeletalControlEvent* GetDefaultObj();

};

// 0x30 (0x60 - 0x30)
// Class GbxWeapon.BodyWeaponHoldData
class UBodyWeaponHoldData : public UGbxDataAsset
{
public:
	class FName                                  HoldName;                                          // 0x30(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class FName>                          HoldNames;                                         // 0x38(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FBodyWeaponActionInfo>         WeaponActions;                                     // 0x48(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	float                                        DepthOfFieldForegroundFocusDistance;               // 0x58(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DepthOfFieldForegroundFocusNearRegionPct;          // 0x5C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UBodyWeaponHoldData* GetDefaultObj();

};

// 0x20 (0x198 - 0x178)
// Class GbxWeapon.BodyWeaponHoldManagerComponent
class UBodyWeaponHoldManagerComponent : public UActorComponent
{
public:
	class UBodyWeaponHoldData*                   DefaultWeaponHold;                                 // 0x178(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UBodyWeaponHoldData*>           WeaponHolds;                                       // 0x180(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class FName                                  UnarmedHoldName;                                   // 0x190(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UBodyWeaponHoldManagerComponent* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxWeapon.EnvQueryContext_ProjectileProxy
class UEnvQueryContext_ProjectileProxy : public UEnvQueryContext
{
public:

	static class UClass* StaticClass();
	static class UEnvQueryContext_ProjectileProxy* GetDefaultObj();

};

// 0x40 (0xA0 - 0x60)
// Class GbxWeapon.EnvQueryGenerator_FindProjectileTargets
class UEnvQueryGenerator_FindProjectileTargets : public UEnvQueryGenerator
{
public:
	struct FAIDataProviderFloatValue             Range;                                             // 0x60(0x30)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UGbxCondition*                         TargetSkipRangeCheckCondition;                     // 0x90(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowHostiles;                                    // 0x98(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowFriendlies;                                  // 0x99(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowNeutrals;                                    // 0x9A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAlsoFindTargetableComponents;                     // 0x9B(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIgnoreNonHostileAttachedParent;                   // 0x9C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A0A[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEnvQueryGenerator_FindProjectileTargets* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class GbxWeapon.EnvQueryItemType_ProjectileProxy
class UEnvQueryItemType_ProjectileProxy : public UEnvQueryItemType_VectorBase
{
public:

	static class UClass* StaticClass();
	static class UEnvQueryItemType_ProjectileProxy* GetDefaultObj();

};

// 0x20 (0x50 - 0x30)
// Class GbxWeapon.FiringPattern
class UFiringPattern : public UGbxDataAsset
{
public:
	TArray<struct FFiringPatternSample>          Samples;                                           // 0x30(0x10)(Edit, EditFixedSize, ZeroConstructor, NoClear, Protected, NativeAccessSpecifierProtected)
	uint8                                        bFireRandomlyFromPattern : 1;                      // Mask: 0x1, PropSize: 0x10x40(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bResetPatternAfterEachShot : 1;                    // Mask: 0x2, PropSize: 0x10x40(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bScalePattern : 1;                                 // Mask: 0x4, PropSize: 0x10x40(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bLerpAcrossFiringLineBasedOnProjectileCountWithinEachShot : 1; // Mask: 0x8, PropSize: 0x10x40(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bSuppressWeaponSpread : 1;                         // Mask: 0x10, PropSize: 0x10x40(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bSingleWeaponSpread : 1;                           // Mask: 0x20, PropSize: 0x10x40(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bDisableTracerThrottling : 1;                      // Mask: 0x40, PropSize: 0x10x40(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_AA : 1;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1A43[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BasePatternScale;                                  // 0x44(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MinPatternScale;                                   // 0x48(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        RequiredProjectilesPerShot;                        // 0x4C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFiringPattern* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class GbxWeapon.FiringPatternData
class UFiringPatternData : public UObject
{
public:
	TArray<struct FFiringPatternSample>          Samples;                                           // 0x28(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        bFireRandomlyFromPattern : 1;                      // Mask: 0x1, PropSize: 0x10x38(0x1)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bResetPatternAfterEachShot : 1;                    // Mask: 0x2, PropSize: 0x10x38(0x1)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bScalePattern : 1;                                 // Mask: 0x4, PropSize: 0x10x38(0x1)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bLerpAcrossFiringLineBasedOnProjectileCountWithinEachShot : 1; // Mask: 0x8, PropSize: 0x10x38(0x1)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSuppressWeaponSpread : 1;                         // Mask: 0x10, PropSize: 0x10x38(0x1)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSingleWeaponSpread : 1;                           // Mask: 0x20, PropSize: 0x10x38(0x1)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_AB : 2;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1A82[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BasePatternScale;                                  // 0x3C(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinPatternScale;                                   // 0x40(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RequiredProjectilesPerShot;                        // 0x44(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFiringPatternData* GetDefaultObj();

};

// 0x48 (0x78 - 0x30)
// Class GbxWeapon.GbxAmmoTypeData
class UGbxAmmoTypeData : public UGbxDataAsset
{
public:
	class FText                                  DisplayName;                                       // 0x30(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FName                                  Identifier;                                        // 0x48(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            DisplayIcon;                                       // 0x50(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ScaleformDisplayFrameID;                           // 0x58(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameResourceData*                     ResourceData;                                      // 0x68(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RegenerationRate;                                  // 0x70(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AA4[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxAmmoTypeData* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class GbxWeapon.GbxProjectileManager
class UGbxProjectileManager : public UIGbxProjectileManager
{
public:
	TArray<class UProjectileHomingComponent*>    HomingComponents;                                  // 0x28(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UGbxProjectileManager* GetDefaultObj();

};

// 0x1C8 (0x340 - 0x178)
// Class GbxWeapon.GbxTrajectometerComponent
class UGbxTrajectometerComponent : public UActorComponent
{
public:
	uint8                                        Pad_1B5B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGbxTrajectometerProjectile*           SimulatorProjectile;                               // 0x180(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UParticleSystemComponent*              TrailParticle;                                     // 0x188(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1B60[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class USceneComponent*                       ProjectileUpdatedComp;                             // 0x1A0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1B64[0x40];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bEnableOnStart;                                    // 0x1E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B66[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SimulationStepTime;                                // 0x1EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SimulationMaxTime;                                 // 0x1F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B6C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class AGbxTrajectometerProjectile> SimulatorTemplate;                                 // 0x1F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAttributeInitializationData          ProjectileSpeed;                                   // 0x200(0x38)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FAttributeInitializationData          ProjectileMaxSpeed;                                // 0x238(0x38)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FAttributeInitializationData          ProjectileAcceleration;                            // 0x270(0x38)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FAttributeInitializationData          ProjectileGravityScale;                            // 0x2A8(0x38)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               ProjectileInitialDirection;                        // 0x2E0(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxTrajectometerTraceData            TraceSettings;                                     // 0x2EC(0x20)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B7B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class AProjectile>               ProjectileToSimulate;                              // 0x310(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                       TrailEmitterTemplate;                              // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  OverrideSocket;                                    // 0x320(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bStartFromWeapon : 1;                              // Mask: 0x1, PropSize: 0x10x328(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bStartFromViewLocation : 1;                        // Mask: 0x2, PropSize: 0x10x328(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseSocketAsStartRotation : 1;                     // Mask: 0x4, PropSize: 0x10x328(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSimulateWeaponProjectile : 1;                     // Mask: 0x8, PropSize: 0x10x328(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseProjectileForCollision : 1;                    // Mask: 0x10, PropSize: 0x10x328(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bConvergeTowardsAimLocation : 1;                   // Mask: 0x20, PropSize: 0x10x328(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_AF : 2;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1B8D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnPostSimulation;                                  // 0x330(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGbxTrajectometerComponent* GetDefaultObj();

	void UpdateCollisionShape();
	void SimulationResultEvent__DelegateSignature(struct FHitResult& HitResult);
	void SetTrajectometerEnabled(bool bEnabled);
};

// 0x98 (0x728 - 0x690)
// Class GbxWeapon.GbxTrajectometerProjectile
class AGbxTrajectometerProjectile : public AProjectile
{
public:
	class UParticleSystemComponent*              TrailParticle;                                     // 0x690(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1B9A[0x90];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AGbxTrajectometerProjectile* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxWeapon.GbxWeaponUserInterface
class IGbxWeaponUserInterface : public IWeaponUserInterface
{
public:

	static class UClass* StaticClass();
	static class IGbxWeaponUserInterface* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxWeapon.LightBeamStatics
class ULightBeamStatics : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULightBeamStatics* GetDefaultObj();

	void SetBeamFlag(struct FLightBeamInitializationData& InitData, enum class ELightBeamFlag Flag);
	void RemoveLightBeamsBySource(class AActor* Source, class FName NameID);
	void RemoveLightBeamsByActor(struct FLightBeamQueryData& Query);
	bool IsBeamFlagSet(struct FLightBeamInitializationData& InitData, enum class ELightBeamFlag Flag);
	void ForEachLightBeam(struct FLightBeamQueryData& Query, UDelegateProperty_& Callback);
	bool DoesLightBeamExist(struct FLightBeamQueryData& Query);
	void CreateLightBeamFromData(struct FLightBeamInitializationData& InitData, bool bAsync, float ForceSpawnTimer);
	void CreateLightBeam(TSubclassOf<class ULightBeamData> Data, class APawn* Instigator, struct FLightBeamAttachment& Source, const struct FLightBeamAttachment& Target, bool bTargetLocked, class FName NameID, float Damage, TSubclassOf<class UGbxDamageType> DamageType, TSubclassOf<class UDamageSource> DamageSource, float DamageRadius, class AActor* DamageCauser, class UImpactData* ImpactDataOverride, const struct FForceSelection& ImpactForce, float LifetimeOverride, bool bViewDependent, bool bAsync, float ForceSpawnTimer);
	void ClearBeamFlag(struct FLightBeamInitializationData& InitData, enum class ELightBeamFlag Flag);
};

// 0x8 (0x30 - 0x28)
// Class GbxWeapon.LightProjectileMoveModifier
class ULightProjectileMoveModifier : public UObject
{
public:
	uint8                                        FiringPatternID;                                   // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRestrictFiringPattern;                            // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CCB[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULightProjectileMoveModifier* GetDefaultObj();

};

// 0x8 (0x38 - 0x30)
// Class GbxWeapon.LightProjectileAimViewPointHomingModifier
class ULightProjectileAimViewPointHomingModifier : public ULightProjectileMoveModifier
{
public:
	float                                        LookAheadDistance;                                 // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CCE[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULightProjectileAimViewPointHomingModifier* GetDefaultObj();

};

// 0x8 (0x38 - 0x30)
// Class GbxWeapon.LightProjectileCurveModifier
class ULightProjectileCurveModifier : public ULightProjectileMoveModifier
{
public:
	float                                        StartTangentMultiplier;                            // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CDC[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULightProjectileCurveModifier* GetDefaultObj();

};

// 0x40 (0x70 - 0x30)
// Class GbxWeapon.LightProjectileHomingModifier
class ULightProjectileHomingModifier : public ULightProjectileMoveModifier
{
public:
	struct FRotator                              MaxTurnRate;                                       // 0x30(0xC)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        StartApproachDistance;                             // 0x3C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FinalApproachDistance;                             // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ApproachTurnRateScale;                             // 0x44(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxEasingFunc                        ApproachEaseInFunc;                                // 0x48(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bBreakHomingWhenPassingTargetDuringFinalApproach;  // 0x54(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CF7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        EaseInTime;                                        // 0x58(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxEasingFunc                        EaseInFunc;                                        // 0x5C(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        StopHomingDistance;                                // 0x68(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CF8[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULightProjectileHomingModifier* GetDefaultObj();

};

// 0x38 (0x68 - 0x30)
// Class GbxWeapon.LightProjectileRandomDrunkenModifier
class ULightProjectileRandomDrunkenModifier : public ULightProjectileMoveModifier
{
public:
	float                                        PathCorrectionInterval;                            // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TurnSpeed;                                         // 0x34(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxSpreadAngle;                                    // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxDepartureAngle;                                 // 0x3C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGravityAffectsDrunkenness;                        // 0x40(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D14[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DrunkenGravityScalar;                              // 0x44(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartApproachDistance;                             // 0x48(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartDelayTime;                                    // 0x4C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EaseInTime;                                        // 0x50(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNormalizedEaseTime;                               // 0x54(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D18[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxEasingFunc                        EaseInFunc;                                        // 0x58(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D1A[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULightProjectileRandomDrunkenModifier* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxWeapon.LightProjectileStatics
class ULightProjectileStatics : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULightProjectileStatics* GetDefaultObj();

	void SplitLightProjectile(class ULightProjectile* Projectile, TSubclassOf<class ULightProjectileData> Data, enum class ELightProjectileSplitPattern Pattern, int32 Count, float SpreadAngle, float RotateAngle, float OffsetDistance, bool bDestroySource);
	void SetProjectileFlag(struct FLightProjectileInitializationData& InitData, enum class ELightProjectileFlag Flag);
	void SetHomingState(struct FLightProjectileQueryData& Query, bool bIsHoming);
	void RemoveLightProjectilesByActor(struct FLightProjectileQueryData& Query);
	bool IsProjectileFlagSet(struct FLightProjectileInitializationData& InitData, enum class ELightProjectileFlag Flag);
	void ForEachLightProjectile(struct FLightProjectileQueryData& Query, UDelegateProperty_& Callback);
	void DetonateLightProjectiles(struct FLightProjectileQueryData& Query, float StackingEnemyBonusDamage, float MinDetonationDelay, float MaxDetonationDelay);
	void CreateLightProjectileFromSource(class ULightProjectile* SourceProjectile, TSubclassOf<class ULightProjectileData> Data, const struct FVector& Location, const struct FVector& Direction, float Damage);
	void CreateLightProjectileFromDataAsync(struct FLightProjectileInitializationData& InitData, float ForceSpawnTimer);
	void CreateLightProjectileFromData(struct FLightProjectileInitializationData& InitData);
	void CreateLightProjectile(TSubclassOf<class ULightProjectileData> Data, const struct FVector& Location, const struct FVector& Direction, class APawn* Instigator, class AActor* Source, class AActor* DamageCauser, float Damage, TSubclassOf<class UGbxDamageType> DamageType, TSubclassOf<class UDamageSource> DamageSource, class UImpactData* ImpactDataOverride);
	void ClearProjectileFlag(struct FLightProjectileInitializationData& InitData, enum class ELightProjectileFlag Flag);
};

// 0x50 (0x80 - 0x30)
// Class GbxWeapon.LightProjectileWaveModifier
class ULightProjectileWaveModifier : public ULightProjectileMoveModifier
{
public:
	TArray<struct FVector2DWaveform>             Waveforms;                                         // 0x30(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        GlobalWaveformScale;                               // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVectorWaveform                       Waveform;                                          // 0x44(0x24)(Deprecated, NoDestructor, NativeAccessSpecifierPublic)
	float                                        EaseInTime;                                        // 0x68(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNormalizedEaseTime;                               // 0x6C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EBF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxEasingFunc                        EaseInFunc;                                        // 0x70(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bRandomize;                                        // 0x7C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EC5[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULightProjectileWaveModifier* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxWeapon.ProjectileBlueprintLibrary
class UProjectileBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UProjectileBlueprintLibrary* GetDefaultObj();

	int32 ThrowProjectileAsync(class UObject* WorldContext, const struct FThrowProjectileAsyncRequest& Request);
	void ThrowActorAt(class AActor* Actor, const struct FVector& TargetLocation, const struct FVector& TargetVelocity, float MaxPrediction, float Speed, float AnglePercent, const struct FRotator& DirectionOffset, const struct FVector& LocalTargetOffset);
	void PredictProjectilePathAsync(class UObject* WorldContext, struct FPredictProjectilePathAsyncRequest& Request);
	struct FTransform GetSafeProjectileThrowTransform_Component(class AActor* SourceActor, class USceneComponent* SourceComponent, class FName SocketName, TArray<class AActor*>& IgnoreActors, enum class ECollisionChannel TraceChannel);
	struct FTransform GetSafeProjectileThrowTransform(class AActor* SourceActor, class FName SocketName, TArray<class AActor*>& IgnoreActors, bool bThrowFromFirstPersonSocket, enum class ECollisionChannel TraceChannel);
	TArray<struct FTransform> GeneratePointsOnFan(const struct FVector& Origin, const struct FVector& Direction, int32 SampleCount, float SpreadAngle, float RotateAngle, float OriginOffset);
	TArray<struct FTransform> GeneratePointsOnCone(const struct FVector& Origin, const struct FVector& Direction, int32 SampleCount, float SpreadAngle, float RotateAngle, float OriginOffset);
	void DetachProjectilesFromActor(class AActor* BaseActor);
	struct FVector CalculateConeVector(float Fraction, struct FVector& Origin, struct FVector& Direction, float AngleWidth, float AngleHeight);
	void CalcThrowVelocityAtActor(struct FVector* ResultVelocity, float* ResultGravityScale, const struct FVector& StartLocation, class AActor* Target, float MaxPrediction, float Speed, float AnglePercent, const struct FRotator& DirectionOffset, const struct FVector& LocalTargetOffset);
	void CalcThrowVelocity(class UObject* WorldContextObject, struct FVector* ResultVelocity, float* ResultGravityScale, const struct FVector& StartLocation, const struct FVector& TargetLocation, const struct FVector& TargetVelocity, float MaxPrediction, float Speed, float AnglePercent, const struct FRotator& DirectionOffset, const struct FVector& LocalTargetOffset);
};

// 0x28 (0x50 - 0x28)
// Class GbxWeapon.ProjectileEQSProxy
class UProjectileEQSProxy : public UObject
{
public:
	uint8                                        Pad_213D[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Location;                                          // 0x30(0xC)(BlueprintVisible, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Rotation;                                          // 0x3C(0xC)(BlueprintVisible, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class AActor*                                ReferenceActor;                                    // 0x48(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UProjectileEQSProxy* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxWeapon.ProjectileSourceInterface
class IProjectileSourceInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IProjectileSourceInterface* GetDefaultObj();

};

// 0x60 (0x1D8 - 0x178)
// Class GbxWeapon.RecoilControlComponent
class URecoilControlComponent : public UActorComponent
{
public:
	UMulticastDelegateProperty_                  NotifyRecoveryFinished;                            // 0x178(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  NotifyResetRecoil;                                 // 0x188(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         bServerSimulatesRecoil;                            // 0x198(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2180[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              CurrentRotation;                                   // 0x19C(0xC)(Transient, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FRotator                              TargetRotation;                                    // 0x1A8(0xC)(Transient, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FRotator                              InputPassthroughThreshold;                         // 0x1B4(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_2187[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class URecoilControlComponent* GetDefaultObj();

	void ServerApplyInput(uint32 CompressedInputRot);
};

// 0xA8 (0xD8 - 0x30)
// Class GbxWeapon.RecoilPatternData
class URecoilPatternData : public UGbxDataAsset
{
public:
	TArray<struct FVector2D>                     Samples;                                           // 0x30(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bRandom;                                           // 0x40(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERecoilEndOfPatternAction         EndOfPatternAction;                                // 0x41(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_219F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        RepeatPatternStartIndex;                           // 0x44(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EndOfPatternRise;                                  // 0x48(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21A7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRuntimeFloatCurve                    ShotSequenceScaleCurve;                            // 0x50(0x78)(Edit, NativeAccessSpecifierPublic)
	bool                                         bAutoGenerateGoodness;                             // 0xC8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21AB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PatternHeightGoodness;                             // 0xCC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PatternWidthGoodness;                              // 0xD0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21AD[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class URecoilPatternData* GetDefaultObj();

};

// 0x8 (0xB8 - 0xB0)
// Class GbxWeapon.WeaponAccuracyPoolAttributePropertyValueResolver
class UWeaponAccuracyPoolAttributePropertyValueResolver : public UAttributePropertyValueResolver
{
public:
	class UGameResourceData*                     DefaultResource;                                   // 0xB0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UWeaponAccuracyPoolAttributePropertyValueResolver* GetDefaultObj();

};

// 0x68 (0x90 - 0x28)
// Class GbxWeapon.WeaponSkeletalControlBase
class UWeaponSkeletalControlBase : public UObject
{
public:
	class FName                                  ControlName;                                       // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAlwaysUpdate : 1;                                 // Mask: 0x1, PropSize: 0x10x30(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUpdateWhenAmmoChanges : 1;                        // Mask: 0x2, PropSize: 0x10x30(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bStartPaused : 1;                                  // Mask: 0x4, PropSize: 0x10x30(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSyncToFireRate : 1;                               // Mask: 0x8, PropSize: 0x10x30(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAddInputOnUse : 1;                                // Mask: 0x10, PropSize: 0x10x30(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_BE : 3;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_21D4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAttributeInitializationData          UseInputValue;                                     // 0x38(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        MinFireRate;                                       // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxFireRate;                                       // 0x74(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       UseModeContextBitmask;                             // 0x78(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21DB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWwiseEvent*                           ReceivedInputSound;                                // 0x80(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAttachToBone : 1;                                 // Mask: 0x1, PropSize: 0x10x88(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseDefaultAudioComponent : 1;                     // Mask: 0x2, PropSize: 0x10x88(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21E1[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UWeaponSkeletalControlBase* GetDefaultObj();

};

// 0x10 (0xA0 - 0x90)
// Class GbxWeapon.WeaponAmmoChamberBoneControl
class UWeaponAmmoChamberBoneControl : public UWeaponSkeletalControlBase
{
public:
	TArray<class FName>                          AmmoBoneNames;                                     // 0x90(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UWeaponAmmoChamberBoneControl* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxWeapon.WeaponConsumedLoadedAmmoValueResolver
class UWeaponConsumedLoadedAmmoValueResolver : public UAttributeValueResolver
{
public:

	static class UClass* StaticClass();
	static class UWeaponConsumedLoadedAmmoValueResolver* GetDefaultObj();

};

// 0xB0 (0x260 - 0x1B0)
// Class GbxWeapon.WeaponAmmoPoolComponent
class UWeaponAmmoPoolComponent : public UWeaponAmmoComponent
{
public:
	struct FGbxAttributeInteger                  MaxLoadedAmmo;                                     // 0x1B0(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        MaxStoredAmmo;                                     // 0x1BC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        LoadedAmmo;                                        // 0x1C0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        StoredAmmo;                                        // 0x1C4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        SpareAmmo;                                         // 0x1C8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bInfiniteAmmo : 1;                                 // Mask: 0x1, PropSize: 0x10x1CC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bInfiniteAmmoForAI : 1;                            // Mask: 0x2, PropSize: 0x10x1CC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bCreateAmmoResourceForAI : 1;                      // Mask: 0x4, PropSize: 0x10x1CC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bGiveAmmoOnPickup : 1;                             // Mask: 0x8, PropSize: 0x10x1CC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_BF : 4;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2203[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameResourceData*                     ResourceData;                                      // 0x1D0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FAttributeInitializationData          PickupAmmoFormula;                                 // 0x1D8(0x38)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	enum class EAmmoRegenType                    AmmoRegenType;                                     // 0x210(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        AmmoRegenRate;                                     // 0x214(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ConsumeAmmoRegenDelay;                             // 0x218(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_220C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameResourcePoolReference            ResourcePool;                                      // 0x220(0x18)(BlueprintVisible, BlueprintReadOnly, Net, Transient, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	int32                                        ServerSyncedLoadedAmmo;                            // 0x238(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2210[0x24];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UWeaponAmmoPoolComponent* GetDefaultObj();

	void ServerSendAmmoState();
	void OnRep_SpareAmmo();
	void OnRep_ServerSyncedLoadedAmmo();
	void OnMaxLoadedAmmoChanged(float OldValue, float NewValue);
	void OnGivenTo();
	void ClientSetLoadedAmmo(int32 NewLoadedAmmo);
	void ClientConsumeAmmo(int32 Amount);
};

// 0x0 (0x28 - 0x28)
// Class GbxWeapon.WeaponAmmoRegenAttributeValueResolver
class UWeaponAmmoRegenAttributeValueResolver : public UAttributeValueResolver
{
public:

	static class UClass* StaticClass();
	static class UWeaponAmmoRegenAttributeValueResolver* GetDefaultObj();

};

// 0x98 (0xC0 - 0x28)
// Class GbxWeapon.WeaponAttachmentSlot
class UWeaponAttachmentSlot : public UObject
{
public:
	uint8                                        Pad_2236[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  AttachSocket;                                      // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMeshComponent*                        Mesh;                                              // 0x38(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_223A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EWeaponTextureMipsSetting         TextureMipsSetting;                                // 0x44(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_223D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UTexture*>                      CachedForceMipTextures;                            // 0x48(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_223F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FWeaponEffectAttachment>       AttachmentEffects;                                 // 0x60(0x10)(ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_2241[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FWeaponMaterialEffectInstance> ActiveMaterialEffects;                             // 0x80(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<struct FWeaponSkeletalControlInstance> ActiveSkeletalControls;                            // 0x90(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<class UMeshComponent*>                SecondaryMeshes;                                   // 0xA0(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_224A[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UWeaponAttachmentSlot* GetDefaultObj();

	void SetMesh(class UMeshComponent* InMesh);
};

// 0x8 (0x58 - 0x50)
// Class GbxWeapon.WeaponAttributeContextResolver
class UWeaponAttributeContextResolver : public UAttributeContextResolver
{
public:
	uint32                                       UseModeContextBitmask;                             // 0x50(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2257[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UWeaponAttributeContextResolver* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxWeapon.WeaponChargePercentValueResolver
class UWeaponChargePercentValueResolver : public UAttributeValueResolver
{
public:

	static class UClass* StaticClass();
	static class UWeaponChargePercentValueResolver* GetDefaultObj();

};

// 0x20 (0x198 - 0x178)
// Class GbxWeapon.WeaponPreUseComponent
class UWeaponPreUseComponent : public UActorComponent
{
public:
	UMulticastDelegateProperty_                  NotifyPreUseFinished;                              // 0x178(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x188(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2274[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AWeapon*                               WeaponPrivate;                                     // 0x190(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UWeaponPreUseComponent* GetDefaultObj();

	void K2_OnDeactivated();
	void K2_OnActivated();
};

// 0x168 (0x300 - 0x198)
// Class GbxWeapon.WeaponChargeComponent
class UWeaponChargeComponent : public UWeaponPreUseComponent
{
public:
	struct FGbxAttributeFloat                    ChargeTime;                                        // 0x198(0xC)(Edit, BlueprintVisible, Net, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxAttributeFloat                    DischargeTime;                                     // 0x1A4(0xC)(Edit, BlueprintVisible, Net, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxAttributeFloat                    CancelChargeDelay;                                 // 0x1B0(0xC)(Edit, BlueprintVisible, Net, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RequiredUseChargePct;                              // 0x1BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CommitUseChargePct;                                // 0x1C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxAttributeFloat                    OverchargeHoldTime;                                // 0x1C4(0xC)(Edit, BlueprintVisible, Net, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseWhenCharged : 1;                               // Mask: 0x1, PropSize: 0x10x1D0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bChargeBeforeEachUse : 1;                          // Mask: 0x2, PropSize: 0x10x1D0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bStopChargingEffectsOnCharged : 1;                 // Mask: 0x4, PropSize: 0x10x1D0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bStopChargedEffectsOnOvercharged : 1;              // Mask: 0x8, PropSize: 0x10x1D0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUpdateChargeActionBlendSpace : 1;                 // Mask: 0x10, PropSize: 0x10x1D0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bZoomModifiesBlendSpaceY : 1;                      // Mask: 0x20, PropSize: 0x10x1D0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_C3 : 2;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2358[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ChargePercentParamName;                            // 0x1D8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ZoomChargeActionBlendSpaceScale;                   // 0x1E0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2364[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FWeaponChargeAttributeEffect>  AttributeEffects;                                  // 0x1E8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class UFeedbackData*                         ChargeFeedback;                                    // 0x1F8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFeedbackData*                         OverchargeFeedback;                                // 0x200(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bPlayFeedbackAtLocation : 1;                       // Mask: 0x1, PropSize: 0x10x208(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_C4 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_236E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  FeedbackSocket;                                    // 0x210(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FWeaponChargeEventNotify>      ChargeEvents;                                      // 0x218(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FWeaponChargeEventNotify>      DischargeEvents;                                   // 0x228(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  NotifyChargeStarted;                               // 0x238(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  NotifyChargeStopped;                               // 0x248(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  NotifyFullyCharged;                                // 0x258(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  NotifyChargeCanceled;                              // 0x268(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  NotifyOvercharged;                                 // 0x278(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  NotifyDischargeStarted;                            // 0x288(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  NotifyDischargeStopped;                            // 0x298(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  NotifyFullyDischarged;                             // 0x2A8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	enum class EWeaponChargeState                ChargeState;                                       // 0x2B8(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2394[0x47];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UWeaponChargeComponent* GetDefaultObj();

	void StopEffects();
	void Overcharged();
	void OnRep_ChargeState(enum class EWeaponChargeState PrevChargeState);
	void OnChargeActionEnd(enum class EGbxActionEndState EndState);
	float GetDischargeDuration();
	float GetChargePercent();
	float GetChargeDuration();
	void FullyDischarged();
	void FullyCharged();
	void DelayChargeFinished();
};

// 0x30 (0x208 - 0x1D8)
// Class GbxWeapon.WeaponClipReloadComponent
class UWeaponClipReloadComponent : public UWeaponReloadComponent
{
public:
	float                                        ReloadCompletePercent;                             // 0x1D8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGbxAttributeFloat                    TapedReloadTime;                                   // 0x1DC(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TapedReloadCompletePercent;                        // 0x1E8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        TapedClipCount;                                    // 0x1EC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_23C9[0x11];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        ClientReloadState;                                 // 0x201(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        CurrentClip;                                       // 0x202(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_23CC[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UWeaponClipReloadComponent* GetDefaultObj();

	void OnRep_ClientReloadState();
};

// 0x8 (0x90 - 0x88)
// Class GbxWeapon.GbxCondition_ZoomState
class UGbxCondition_ZoomState : public UGbxCondition
{
public:
	uint8                                        bIsZoomedIn : 1;                                   // Mask: 0x1, PropSize: 0x10x88(0x1)(Edit, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIncludeTransitions : 1;                           // Mask: 0x2, PropSize: 0x10x88(0x1)(Edit, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23DA[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxCondition_ZoomState* GetDefaultObj();

};

// 0x8 (0x90 - 0x88)
// Class GbxWeapon.GbxCondition_WeaponType
class UGbxCondition_WeaponType : public UGbxCondition
{
public:
	class UWeaponTypeData*                       WeaponType;                                        // 0x88(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGbxCondition_WeaponType* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxWeapon.WeaponDebugInterface
class IWeaponDebugInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IWeaponDebugInterface* GetDefaultObj();

};

// 0x38 (0x938 - 0x900)
// Class GbxWeapon.WeaponFireBeamComponent
class UWeaponFireBeamComponent : public UWeaponFireComponent
{
public:
	float                                        DamageRateScale;                                   // 0x900(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2449[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class ULightBeamData>            LightBeamData;                                     // 0x908(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFollowPlayerCrosshair;                            // 0x910(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_244A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LockOnContactTime;                                 // 0x914(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LockOnBreakRadius;                                 // 0x918(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LockOnBreakAngle;                                  // 0x91C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           DamageRampCurve;                                   // 0x920(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxAttributeFloat                    DamageRampScale;                                   // 0x928(0xC)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2459[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UWeaponFireBeamComponent* GetDefaultObj();

	TSubclassOf<class ULightBeamData> GetShotLightBeamData();
};

// 0x0 (0x28 - 0x28)
// Class GbxWeapon.WeaponFireRateAccelPercentValueResolver
class UWeaponFireRateAccelPercentValueResolver : public UAttributeValueResolver
{
public:

	static class UClass* StaticClass();
	static class UWeaponFireRateAccelPercentValueResolver* GetDefaultObj();

};

// 0x20 (0x198 - 0x178)
// Class GbxWeapon.WeaponRecoilComponent
class UWeaponRecoilComponent : public UActorComponent
{
public:
	uint8                                        Pad_248C[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class URecoilControlComponent*               CachedControlComponent;                            // 0x188(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AWeapon*                               WeaponPrivate;                                     // 0x190(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UWeaponRecoilComponent* GetDefaultObj();

	void OnUsed();
	void OnDetached();
	void OnAttached();
};

// 0x0 (0x28 - 0x28)
// Class GbxWeapon.WeaponRecoilGoodnessValueResolver
class UWeaponRecoilGoodnessValueResolver : public UAttributeValueResolver
{
public:

	static class UClass* StaticClass();
	static class UWeaponRecoilGoodnessValueResolver* GetDefaultObj();

};

// 0x68 (0x200 - 0x198)
// Class GbxWeapon.WeaponRecoilPatternComponent
class UWeaponRecoilPatternComponent : public UWeaponRecoilComponent
{
public:
	uint8                                        Pad_24CF[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class URecoilPatternData*                    Pattern;                                           // 0x1A0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGbxAttributeFloat                    PatternWidthScale;                                 // 0x1A8(0xC)(Edit, BlueprintVisible, Net, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGbxAttributeFloat                    PatternHeightScale;                                // 0x1B4(0xC)(Edit, BlueprintVisible, Net, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGbxAttributeFloat                    PatternZoomScale;                                  // 0x1C0(0xC)(Edit, BlueprintVisible, Net, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bScalePatternByFOV;                                // 0x1CC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bResetPatternWhenFiringEnds;                       // 0x1CD(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_24D3[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RecoilSpeed;                                       // 0x1D0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RecoilRecoveryTime;                                // 0x1D4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RecoilRecoveryDelayTime;                           // 0x1D8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bStartRecoilRecoveryWhenFiringEnds;                // 0x1DC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_24D6[0x23];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UWeaponRecoilPatternComponent* GetDefaultObj();

	void ResetPattern();
	void OnUseFinished();
	float GetRecoilPatternWidthGoodness();
	float GetRecoilPatternHeightGoodness();
	float GetRecoilPatternGoodness();
};

// 0x50 (0x88 - 0x38)
// Class GbxWeapon.WeaponSettings
class UWeaponSettings : public UDeveloperSettings
{
public:
	TArray<struct FWeaponEffectTypeName>         WeaponEffectTypes;                                 // 0x38(0x10)(ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	TArray<struct FWeaponActionTypeName>         WeaponActionTypes;                                 // 0x48(0x10)(ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	TArray<struct FLightProjectileFlagName>      LightProjectileFlags;                              // 0x58(0x10)(ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	TArray<struct FLightBeamFlagName>            LightBeamFlags;                                    // 0x68(0x10)(ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	TArray<struct FWeaponShotModifierTypeName>   WeaponShotModifierTypes;                           // 0x78(0x10)(ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UWeaponSettings* GetDefaultObj();

};

// 0x158 (0x188 - 0x30)
// Class GbxWeapon.WeaponShotModifier
class UWeaponShotModifier : public UGbxDataAsset
{
public:
	bool                                         bTriggerEveryXShots;                               // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2503[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAttributeInitializationData          TriggerEveryXShots;                                // 0x38(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	enum class EWeaponShotModifierType           ModifierType;                                      // 0x70(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bModifyDamage;                                     // 0x71(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2506[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAttributeInitializationData          DamageModifier;                                    // 0x78(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	enum class EWeaponShotDamageModifierType     DamageModifierType;                                // 0xB0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDistributeBetweenProjectiles;                     // 0xB4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_250B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UGbxDamageType>            DamageType;                                        // 0xB8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UImpactData*                           ImpactData;                                        // 0xC0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECriticalHitDamageOverride        CriticalHitModifier;                               // 0xC8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseDefaultCriticalHitMultiplier;                  // 0xC9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_250F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAttributeInitializationData          AdditionalCriticalMultiplier;                      // 0xD0(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FAttributeInitializationData          GoreModifier;                                      // 0x108(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FAttributeInitializationData          GibModifier;                                       // 0x140(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	class UConditionalDamageModifier*            ConditionalDamageModifier;                         // 0x178(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPassConditionalDamageModifierToChildProjectiles;  // 0x180(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRefundShotCostWhenTriggered;                      // 0x181(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSuppressRefundThatWouldPreventReload;             // 0x182(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2518[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UWeaponShotModifier* GetDefaultObj();

};

// 0x60 (0xF0 - 0x90)
// Class GbxWeapon.WeaponSimpleMotionControlBase
class UWeaponSimpleMotionControlBase : public UWeaponSkeletalControlBase
{
public:
	uint8                                        bStartActive : 1;                                  // Mask: 0x1, PropSize: 0x10x90(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAutoActivate : 1;                                 // Mask: 0x2, PropSize: 0x10x90(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_CA : 6;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	enum class ESimpleMotionInputHandler         InputHandler;                                      // 0x91(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_252E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAttributeInitializationData          ControlValue;                                      // 0x98(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        bLimitMinControlValue : 1;                         // Mask: 0x1, PropSize: 0x10xD0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bLimitMaxControlValue : 1;                         // Mask: 0x2, PropSize: 0x10xD0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_CB : 6;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2538[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinControlValue;                                   // 0xD4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxControlValue;                                   // 0xD8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ControlImpulseSpeed;                               // 0xDC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ControlImpulseMaxValue;                            // 0xE0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ControlImpulseDecayDelay;                          // 0xE4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ControlImpulseDecaySpeed;                          // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2540[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UWeaponSimpleMotionControlBase* GetDefaultObj();

};

// 0x68 (0x158 - 0xF0)
// Class GbxWeapon.WeaponSimpleMotionBlendControl
class UWeaponSimpleMotionBlendControl : public UWeaponSimpleMotionControlBase
{
public:
	uint8                                        bUseExistingNode : 1;                              // Mask: 0x1, PropSize: 0x10xF0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bMeshSpaceBlend : 1;                               // Mask: 0x2, PropSize: 0x10xF0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_CC : 6;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2548[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimationAsset*                       Animation;                                         // 0xF8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputBlendPose                       BlendLayerSetup;                                   // 0x100(0x10)(Edit, NativeAccessSpecifierPublic)
	struct FSimpleMotionState                    ActiveState;                                       // 0x110(0x20)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        ActiveBlendTarget;                                 // 0x130(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_254D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSimpleMotionState                    RecoveryState;                                     // 0x138(0x20)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UWeaponSimpleMotionBlendControl* GetDefaultObj();

};

// 0x188 (0x278 - 0xF0)
// Class GbxWeapon.WeaponSimpleMotionBoneControl
class UWeaponSimpleMotionBoneControl : public UWeaponSimpleMotionControlBase
{
public:
	class FName                                  BoneName;                                          // 0xF0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneModificationMode             TranslationMode;                                   // 0xF8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneControlSpace                 TranslationSpace;                                  // 0xF9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2559[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               IdleTranslation;                                   // 0xFC(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ActiveTranslation;                                 // 0x108(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_255C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSimpleMotionState                    IdleTranslationState;                              // 0x118(0x20)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FSimpleMotionState                    ActiveTranslationState;                            // 0x138(0x20)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FSimpleMotionState                    RecoveryTranslationState;                          // 0x158(0x20)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class EBoneModificationMode             RotationMode;                                      // 0x178(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneControlSpace                 RotationSpace;                                     // 0x179(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2563[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              IdleRotation;                                      // 0x17C(0xC)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              ActiveRotation;                                    // 0x188(0xC)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2568[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSimpleMotionState                    IdleRotationState;                                 // 0x198(0x20)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FSimpleMotionState                    ActiveRotationState;                               // 0x1B8(0x20)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FSimpleMotionState                    RecoveryRotationState;                             // 0x1D8(0x20)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class EBoneModificationMode             ScaleMode;                                         // 0x1F8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneControlSpace                 ScaleSpace;                                        // 0x1F9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2574[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               IdleScale;                                         // 0x1FC(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ActiveScale;                                       // 0x208(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_257A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSimpleMotionState                    IdleScaleState;                                    // 0x218(0x20)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FSimpleMotionState                    ActiveScaleState;                                  // 0x238(0x20)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FSimpleMotionState                    RecoveryScaleState;                                // 0x258(0x20)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UWeaponSimpleMotionBoneControl* GetDefaultObj();

};

// 0x38 (0x210 - 0x1D8)
// Class GbxWeapon.WeaponSingleFeedReloadComponent
class UWeaponSingleFeedReloadComponent : public UWeaponReloadComponent
{
public:
	bool                                         bDisableInterruptedToUse;                          // 0x1D8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_258A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SingleFeedIncrement;                               // 0x1DC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SingleFeedCompletePercent;                         // 0x1E0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_258D[0x25];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        ClientReloadState;                                 // 0x209(0x1)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2590[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UWeaponSingleFeedReloadComponent* GetDefaultObj();

	void OnUserInput(uint8 InputChannel);
	void OnRep_ClientReloadState();
};

// 0x0 (0x28 - 0x28)
// Class GbxWeapon.WeaponEffectShotStrengthValueResolver
class UWeaponEffectShotStrengthValueResolver : public UAttributeValueResolver
{
public:

	static class UClass* StaticClass();
	static class UWeaponEffectShotStrengthValueResolver* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxWeapon.WeaponStatics
class UWeaponStatics : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UWeaponStatics* GetDefaultObj();

	void UpdateVisibleAmmo(class AWeapon* Weapon);
	void UnhideWeapons(class AActor* WeaponUser, class FName Reason);
	void UnhideWeapon(class AActor* WeaponUser, uint8 Slot, class FName Reason);
	void SetVisibleAmmoUpdateMethod(class AWeapon* Weapon, enum class EWeaponVisibleAmmoUpdateMethod NewUpdateMethod);
	void SetVisibleAmmoState(class AWeapon* Weapon, enum class EWeaponVisibleAmmoState NewState);
	void ResetVisibleAmmoState(class AWeapon* Weapon);
	void RefillAmmo(class AWeapon* Weapon, int32 Amount, bool bAsPercent);
	class UGbxAction* K2_PlayWeaponHoldActionEx(class AActor* Actor, enum class EWeaponActionType WeaponAction, class AWeapon* Weapon, const struct FActionState_Base& ActionParams);
	class UGbxAction* K2_PlayWeaponHoldAction(class AActor* Actor, enum class EWeaponActionType WeaponAction, class AWeapon* Weapon, float PlayRate, float Duration);
	void HideWeapons(class AActor* WeaponUser, class FName Reason);
	void HideWeapon(class AActor* WeaponUser, uint8 Slot, class FName Reason);
	void GiveAmmo(class AWeapon* Weapon, int32 Amount, bool bLoaded, bool bAsPercent);
	class AWeapon* GetWeapon(class UObject* Context);
	float GetMaxZoomFOVScale(class AWeapon* Weapon, uint8 UseMode);
	int32 GetLoadedAmmo(class AWeapon* Weapon, uint8 UseMode);
	float GetFireRateAccelPercent(class AWeapon* Weapon, uint8 UseMode);
	float GetFireRate(class AWeapon* Weapon, uint8 UseMode);
	class UGbxDamageType* GetDamageType(class AWeapon* Weapon, uint8 UseMode);
	class UProjectileEQSProxy* CreateProjectileEQSProxy(const struct FVector& Location, const struct FRotator& Rotation, class AActor* ReferenceActor);
};

// 0x28 (0x58 - 0x30)
// Class GbxWeapon.WeaponTriggerFeedbackAsset
class UWeaponTriggerFeedbackAsset : public UGbxDataAsset
{
public:
	enum class EWeaponTriggerFeedbackMode        Mode;                                              // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2855[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWeaponTriggerFeedbackData            Feedback;                                          // 0x34(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FWeaponTriggerWeaponData              Weapon;                                            // 0x3C(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FWeaponTriggerVibrationData           Vibration;                                         // 0x48(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FWeaponTriggerFireThreasholdData      FireThreshold;                                     // 0x54(0x4)(Edit, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UWeaponTriggerFeedbackAsset* GetDefaultObj();

};

// 0x30 (0x60 - 0x30)
// Class GbxWeapon.WeaponTypeAsset
class UWeaponTypeAsset : public UGbxDataAsset
{
public:
	class FText                                  DisplayName;                                       // 0x30(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FString                                ScaleformDisplayFrameID;                           // 0x48(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  EquipAudioEventName;                               // 0x58(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UWeaponTypeAsset* GetDefaultObj();

};

// 0x20 (0x50 - 0x30)
// Class GbxWeapon.WeaponTypeData
class UWeaponTypeData : public UGbxDataAsset
{
public:
	struct FDataTableRowHandle                   BaseWeaponBalanceTableRow;                         // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   ManufacturerDamageScaleRow;                        // 0x40(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UWeaponTypeData* GetDefaultObj();

};

// 0x8 (0xE0 - 0xD8)
// Class GbxWeapon.WeaponTypeDataTableAttributeValueResolver
class UWeaponTypeDataTableAttributeValueResolver : public UDataTableFunctionAttributeValueResolver
{
public:
	enum class EWeaponTypeDataTableType          DataTableFromWeaponType;                           // 0xD8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2876[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UWeaponTypeDataTableAttributeValueResolver* GetDefaultObj();

};

// 0xD8 (0x250 - 0x178)
// Class GbxWeapon.WeaponVisibleAmmoComponent
class UWeaponVisibleAmmoComponent : public UActorComponent
{
public:
	uint8                                        Pad_28B7[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          AmmoBoneNames;                                     // 0x180(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	enum class EWeaponAttachmentVisibilityType   MeshType;                                          // 0x190(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EWeaponVisibleAmmoState           InitialState;                                      // 0x191(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EWeaponVisibleAmmoUpdateMethod    UpdateMethod;                                      // 0x192(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_28BB[0xD];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWeaponVisibleAmmoEffectData          HideAmmoEffect;                                    // 0x1A0(0x40)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FWeaponVisibleAmmoEffectData          ShowAmmoEffect;                                    // 0x1E0(0x40)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	enum class EWeaponVisibleAmmoState           VisibleAmmoState;                                  // 0x220(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_28BF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ServerAmmoCount;                                   // 0x224(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWeaponAmmoComponent*                  CachedAmmoComponent;                               // 0x228(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_28C5[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class AWeapon*                               WeaponPrivate;                                     // 0x248(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UWeaponVisibleAmmoComponent* GetDefaultObj();

	void UpdateBoneVisibility(bool bForce);
	void SetVisibleAmmoUpdateMethod(enum class EWeaponVisibleAmmoUpdateMethod NewUpdateMethod);
	void SetVisibleAmmoState(enum class EWeaponVisibleAmmoState NewState);
	void ResetVisibleAmmoState();
	void OnRep_ServerAmmoCount();
	void OnDetached();
	void OnAttached();
	void OnAmmoChanged();
};

// 0x8 (0x30 - 0x28)
// Class GbxWeapon.WeaponMaxZoomFOVScaleValueResolver
class UWeaponMaxZoomFOVScaleValueResolver : public UAttributeValueResolver
{
public:
	uint8                                        bInvertValue : 1;                                  // Mask: 0x1, PropSize: 0x10x28(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bApplyWeaponModeZoom : 1;                          // Mask: 0x2, PropSize: 0x10x28(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28D2[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UWeaponMaxZoomFOVScaleValueResolver* GetDefaultObj();

};

}


