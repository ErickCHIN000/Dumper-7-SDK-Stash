#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x95A (0xCB2 - 0x358)
// BlueprintGeneratedClass BP_ProjectileBase.BP_ProjectileBase_C
class ABP_ProjectileBase_C : public AGASProjectile
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x358(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UScopedAkComponent*                    ScopedAk;                                          // 0x360(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Scene;                                             // 0x368(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_PlayerVisibilityComponent_C*       BP_PlayerVisibilityComponent;                      // 0x370(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAsyncAssetLoaderComponent*            AsyncAssetLoader;                                  // 0x378(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     InFlightParticleSystem;                            // 0x380(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                       Arrow;                                             // 0x388(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_Projectile_Audio_Component_C*      BP_Projectile_Audio_Component;                     // 0x390(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Mesh;                                              // 0x398(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_ProjectileTraceComponent_C*        ProjectileTraceComponent;                          // 0x3A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UProjectileMovementComponent*          ProjectileMovement;                                // 0x3A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         LeaveProjectileProxy;                              // 0x3B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_81CF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       TraceTimeToImpact;                                 // 0x3B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FHitResult                            TraceHitResult;                                    // 0x3C0(0xE8)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference, AdvancedDisplay)
	struct FVector                               TraceHitVelocity;                                  // 0x4A8(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class ABP_ProjectileProxyBase_C*             ProjectileProxy;                                   // 0x4C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                        Pad_81D8[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemDataReference                    ItemId;                                            // 0x4D0(0x80)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	struct FS_ProjectileSourceData               SourceData;                                        // 0x550(0x131)(Edit, BlueprintVisible, ContainsInstancedReference, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_81DB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                LaunchAbility;                                     // 0x688(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       LaunchEmitter;                                     // 0x690(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       LaunchEmitterDistance;                             // 0x698(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               LaunchEmitterScale;                                // 0x6A0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              LaunchEmitterRotator;                              // 0x6B8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ImpactDecalScalesToRadius;                         // 0x6D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_81E2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    ImpactDecal;                                       // 0x6D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                ImpactAoEActorClass;                               // 0x6E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       ImpulseStrength;                                   // 0x6E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ImpactRadius;                                      // 0x6F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       ImpactParticleEffect;                              // 0x6F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGameplayTag>                  ProjectileTags;                                    // 0x700(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                               PMVelocity;                                        // 0x710(0x18)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FVector                               LaunchVelocity;                                    // 0x728(0x18)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FTransform                            TraceOffsetTransform;                              // 0x740(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       TimeToArm;                                         // 0x7A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       PostPayloadLifeTime;                               // 0x7A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                         Async;                                             // 0x7B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_81F4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 SD_Instigator;                                     // 0x7B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	double                                       SD_ProjectileDamage;                               // 0x7C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class AActor*                                SD_IntendedTarget;                                 // 0x7C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FVector                               SD_StartingLocation;                               // 0x7D0(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FHitResult                            SD_HitResult;                                      // 0x7E8(0xE8)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference, AdvancedDisplay)
	TArray<class UClass*>                        SD_ImpactGameplayEffects;                          // 0x8D0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, AdvancedDisplay)
	class ABP_ProjectileBase_C*                  SD_Projectile;                                     // 0x8E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                         SD_IsAsync;                                        // 0x8E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                        Pad_8204[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       MaxFlightDistance;                                 // 0x8F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               StartingLocation;                                  // 0x8F8(0x18)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FVector                               MaxFlightLocation;                                 // 0x910(0x18)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          ServiceMaxFlightDistanceTimer;                     // 0x928(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FTimerHandle                          ServicePassedHomingTargetTimer;                    // 0x930(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FTimerHandle                          ServiceLifeTimeTimer;                              // 0x938(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FTimerHandle                          ImpactTimer;                                       // 0x940(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	double                                       MaxFlightDistanceFallback;                         // 0x948(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ProjectileLifetime;                                // 0x950(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	double                                       HomingPassedTargetDistanceThreshold;               // 0x958(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ProjectileInitialized;                             // 0x960(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                         ProjectileLaunched;                                // 0x961(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                         ProjectileArmed;                                   // 0x962(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                         ProjectilePayloadDelivered;                        // 0x963(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                         ProjectileCollisionEnabled;                        // 0x964(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                         ProjectileCleanedUp;                               // 0x965(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                         HomingHasPassedTarget;                             // 0x966(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	enum class E_ProjectileState                 State;                                             // 0x967(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnProjectileInitialized;                           // 0x968(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnProjectileLaunch;                                // 0x978(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnProjectileArmed;                                 // 0x988(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnProjectileDisarmed;                              // 0x998(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnProjectileImpactDetected;                        // 0x9A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnProjectilePayloadActivated;                      // 0x9B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnProjectileAwaitPayload;                          // 0x9C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnProjectileCleanup;                               // 0x9D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	enum class E_ProjectileState                 PreviousState;                                     // 0x9E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                        Pad_8232[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          ArmTimer;                                          // 0x9F0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                         ExceededMaxFlightDistance;                         // 0x9F8(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                        Pad_8236[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       PreviousDistance;                                  // 0xA00(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UClass*                                FlightAbility;                                     // 0xA08(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                PayloadAbility;                                    // 0xA10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       PMMaxSpeed;                                        // 0xA18(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	double                                       CreationTime;                                      // 0xA20(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                         DebugStates;                                       // 0xA28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_823E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnProjectileMaxTravelDistanceReached;              // 0xA30(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnProjectilePassedHomingTarget;                    // 0xA40(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	double                                       CurrentFlightDistance;                             // 0xA50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                         ProjectileStop;                                    // 0xA58(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                         ProjectileHidden;                                  // 0xA59(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8246[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          GCTarget;                                          // 0xA5C(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_824F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   ProjectileDataHandle;                              // 0xA68(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FProjectileData                       ProjectileData;                                    // 0xA78(0xD0)(Edit, BlueprintVisible, DisableEditOnInstance, AdvancedDisplay)
	bool                                         DebugPrintMissingRowHandle;                        // 0xB48(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8250[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_RangedAbilityResponses             RangedAbilityResponse;                             // 0xB50(0x138)(Edit, BlueprintVisible, DisableEditOnInstance, AdvancedDisplay, HasGetValueTypeHash)
	TArray<class UAkAudioEvent*>                 CachedAudio;                                       // 0xC88(0x10)(Edit, BlueprintVisible)
	bool                                         LaunchPresentationShown;                           // 0xC98(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                        Pad_8253[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UBP_ProjectileTraceComponent_C*> OnTraceReadyListeners;                             // 0xCA0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                         LocalProxy;                                        // 0xCB0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         InitializedLocally;                                // 0xCB1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_ProjectileBase_C* GetDefaultObj();

	void GetMaximumRange(double InitialHeight, double* Range, double CallFunc_VSize_ReturnValue, float CallFunc_GetGravityZ_ReturnValue, double CallFunc_CalculateProjectileRange_Distance, double CallFunc_CalculateProjectileRange_Gravity_ImplicitCast);
	void IsReadyToTrace(bool* IsReady);
	void ShouldHideOnFirstCollision(bool* ShouldStopTrace);
	void TraceOffset(struct FTransform* TraceOffset);
	void TraceIgnoreActors(TArray<class AActor*>* TraceIgnoreActors, TArray<class AActor*>& K2Node_MakeArray_Array);
	void TraceImpactDetected(double TimeToImpact, const struct FVector& HitVelocity, const struct FHitResult& HitResult, bool* bSuccess);
	void StartSoundPresentation(bool CallFunc_IsDedicatedServer_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UAkAudioEvent* K2Node_DynamicCast_AsAk_Audio_Event, bool K2Node_DynamicCast_bSuccess, class UScopedAkComponent* CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue);
	void OnFlightParticleLoaded(class UObject* Asset, class UNiagaraSystem* K2Node_DynamicCast_AsNiagara_System, bool K2Node_DynamicCast_bSuccess);
	void PlayInAirParticles(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TScriptInterface<class IAssetLoaderProvider> CallFunc_LoadSingle_LoaderProvider_CastInput, bool CallFunc_IsValidSoftObjectReference_ReturnValue);
	void CacheSourceData(double K2Node_VariableSet_SD_ProjectileDamage_ImplicitCast);
	void OnRep_StartingLocation();
	void LaunchPresentation();
	void CacheAudio(FDelegateProperty_ Temp_delegate_Variable, TArray<TSoftObjectPtr<class UAkAudioEvent>>& K2Node_MakeArray_Array);
	void GetPMVelocity(struct FVector* PMVelocity);
	void PlayTimeoutEffects(const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue);
	void Is_Projectile_Instigator_Locally_Controlled(bool* IsLocallyControlled, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void Get_Source_Tag(struct FGameplayTag* ImpactTag);
	void CacheProjectileData(TArray<class UScriptStruct*>& K2Node_MakeArray_Array, bool CallFunc_IsDedicatedServer_ReturnValue, TArray<struct FAffinityTableCellDataWrapper>& CallFunc_QueryTable_OutMemoryPtrs, bool CallFunc_QueryTable_ReturnValue, const struct FS_RangedAbilityResponses& CallFunc_GetTableCellData_OutData, bool CallFunc_IsValidRowHandle_IsValid, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayCueParameters& Temp_struct_Variable_1, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const struct FProjectileData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue);
	void Get_Element_Tag(struct FGameplayTag* ElementTag);
	void Get_Impact_Tag(struct FGameplayTag* ImpactTag);
	void OnRep_ProjectileHidden();
	void OnRep_ProjectileStop();
	void OnRep_PMVelocity();
	void OnRep_PMMaxSpeed(float K2Node_VariableSet_MaxSpeed_ImplicitCast);
	void GetMaxFlightDistance(double* MaxFlightDistance);
	void GetMaxFlightLocation(struct FVector* MaxFlightLocation);
	void GetStartingLocation(struct FVector* StartingLocation);
	bool HasExceededMaxFlightDistance();
	void GetMaxFlightDistanceProgress(double* FlightDistanceProgress, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue);
	void IsLaunchAbilityActive(bool* IsActive, bool CallFunc_IsAbilityActive_bIsAbilityActive);
	void IsFlightAbilityActive(bool* IsActive, bool CallFunc_IsAbilityActive_bIsAbilityActive);
	void IsPayloadAbilityActive(bool* IsActive, bool CallFunc_IsAbilityActive_bIsAbilityActive);
	void ServiceLifeTimeCheck(double CallFunc_GetGameTimeInSeconds_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue);
	void StopProjectile(bool CallFunc_Not_PreBool_ReturnValue);
	void SetMaxSpeed(double NewMaxSpeed);
	void SetVelocity(const struct FVector& NewVelocity);
	void SetProjectileCollision(bool Enabled);
	void SetHomingEnabled(bool HomingEnabled);
	void GetTraceImpactDetectionData(struct FHitResult* TraceHitResult, double* TraceTimeToImpact, struct FVector* TraceHitVelocity);
	void HandleServiceHomingPassedTarget();
	void HandleServiceMaxFlightDistance();
	void ValidatePayloadConditions(bool* CanActivatePayload);
	void ActivateProjectileAbility(class UClass* ProjectileAbility, const class FString& CallFunc_GetClassDisplayName_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_IsServer_ReturnValue, bool CallFunc_TryActivateAbilityByClass_ReturnValue);
	void GrantProjectileAbilities(const struct FGameplayAbilitySpecDef& CallFunc_CreateAbilitySpecDefFromClass_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, const struct FGameplayAbilitySpecDef& CallFunc_CreateAbilitySpecDefFromClass_ReturnValue_1, bool CallFunc_IsValidClass_ReturnValue_1, const struct FGameplayAbilitySpecHandle& CallFunc_GiveAbility_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FGameplayAbilitySpecDef& CallFunc_CreateAbilitySpecDefFromClass_ReturnValue_2, bool CallFunc_IsValidClass_ReturnValue_2, const struct FGameplayAbilitySpecHandle& CallFunc_GiveAbility_ReturnValue_1, const struct FGameplayAbilitySpecHandle& CallFunc_GiveAbility_ReturnValue_2);
	void HandleCleanup();
	void HandleAwaitPayload();
	void ValidateImpactDetection(bool* ValidTraceImpact, const struct FHitResult& CallFunc_GetTraceImpactDetectionData_TraceHitResult, double CallFunc_GetTraceImpactDetectionData_TraceTimeToImpact, const struct FVector& CallFunc_GetTraceImpactDetectionData_TraceHitVelocity, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
	void StateChanged(enum class E_ProjectileState& NewState, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsServer_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3);
	void OnRep_ProjectileCollisionEnabled();
	void OnRep_State();
	void SetServiceLifeTime(bool Enable, bool CallFunc_Less_DoubleDouble_ReturnValue, double CallFunc_GetGameTimeInSeconds_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void Set_Service_Passed_Homing_Target(bool Enable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	void SetServiceMaxFlightDistance(bool Enable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue);
	void GetState(enum class E_ProjectileState* ProjectileState);
	void GetSourceData(struct FS_ProjectileSourceData* SourceData);
	void CheckPayloadComplete(bool CallFunc_IsPayloadAbilityActive_IsActive);
	void SetState(enum class E_ProjectileState State);
	void ProjectileLog(const class FString& LogMessage, enum class ENWXLogLevel LogLevel, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2);
	void ServiceHomingPassedTargetCheck(const struct FTransform& CallFunc_GetTransform_ReturnValue, bool Temp_bool_Variable, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasMatchingGameplayTag_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, double CallFunc_Vector_Distance_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1);
	void ServiceMaxFlightDistanceCheck(bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, double CallFunc_Vector_Distance_ReturnValue);
	void LaunchEffect(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue);
	void SetProjectileVisibility(bool IsVisible, bool CallFunc_Not_PreBool_ReturnValue);
	void Hook_to_Item_Table(const struct FItemData& CallFunc_TryGetItemData_ItemData, enum class EGetResult CallFunc_TryGetItemData_Branches, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FItemData_Projectile& CallFunc_TryGetItemDataProjectile_OutData, enum class EGetResult CallFunc_TryGetItemDataProjectile_Branches, bool K2Node_SwitchEnum_CmpSuccess_1);
	void TransitionToProxy(const struct FVector& HitVelocity, double TimeToImpact, struct FHitResult& HitResult, const struct FTransform& TransitionTransformL, class AActor* HitActorL, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_DetectedImpact_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector& CallFunc_K2_GetComponentScale_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void HandlePayload();
	void HandleImpactDetected();
	void HandleDisarm(bool CallFunc_StopTrace_bSuccess);
	void HandleArm();
	void HandleLaunched(bool CallFunc_IsServer_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Greater_DoubleDouble_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast);
	void Cleanup(bool CallFunc_StopTrace_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_SetLifeSpan_InLifespan_ImplicitCast);
	void Payload(bool CallFunc_ValidatePayloadConditions_CanActivatePayload);
	void ImpactCommit();
	void ImpactDetected(double TimeToImpact, const struct FVector& HitVelocity, const struct FHitResult& HitResult, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Greater_DoubleDouble_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_ValidateImpactDetection_ValidTraceImpact, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast);
	void Disarm();
	void Arm();
	void Launch(const struct FVector& LaunchVelocity, double CallFunc_VSize_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void Initialize(int32 Temp_int_Array_Index_Variable, bool CallFunc_IsServer_ReturnValue, class UBP_ProjectileTraceComponent_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, double K2Node_VariableSet_ProjectileLifetime_ImplicitCast);
	void UserConstructionScript(class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void ReceiveBeginPlay();
	void LaunchProjectile(const struct FVector& Velocity);
	void GetImpactDecal();
	void LatentLaunchProjectile(class ABP_ProjectileBase_C* Projectile);
	void GetImpactParticle();
	void ReceiveAuthorityGained();
	void RegisterWhenTraceReady(class UBP_ProjectileTraceComponent_C* Registree);
	void ExecuteUbergraph_BP_ProjectileBase(int32 EntryPoint, const struct FVector& K2Node_CustomEvent_Velocity, class ABP_ProjectileBase_C* K2Node_CustomEvent_Projectile, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UBP_ProjectileTraceComponent_C* K2Node_Event_Registree, int32 CallFunc_Array_Add_ReturnValue);
	void OnProjectilePassedHomingTarget__DelegateSignature(const struct FTransform& ProjectileTransform);
	void OnProjectileMaxTravelDistanceReached__DelegateSignature();
	void OnProjectileCleanup__DelegateSignature(class ABP_ProjectileBase_C* Projectile);
	void OnProjectileAwaitPayload__DelegateSignature(class ABP_ProjectileBase_C* Projectile);
	void OnProjectileDisarmed__DelegateSignature(class ABP_ProjectileBase_C* Projectile);
	void OnProjectileArmed__DelegateSignature(class ABP_ProjectileBase_C* Projectile);
	void OnProjectileInitialized__DelegateSignature(class ABP_ProjectileBase_C* Projectile);
	void OnProjectilePayloadActivated__DelegateSignature(class ABP_ProjectileBase_C* Projectile);
	void OnProjectileLaunch__DelegateSignature(class ABP_ProjectileBase_C* Projectile);
	void OnProjectileImpactDetected__DelegateSignature(class ABP_ProjectileBase_C* Projectile);
};

}


