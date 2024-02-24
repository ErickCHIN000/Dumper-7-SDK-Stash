#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x408 (0x990 - 0x588)
// BlueprintGeneratedClass Actor_Shaman_02_Totem.Actor_Shaman_02_Totem_C
class AActor_Shaman_02_Totem_C : public AInteractiveObject
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x588(0x8)(Transient, DuplicateTransient)
	class UGbxActionComponent*                   GbxAction;                                         // 0x590(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneBodySwitchComponent*             Necromancer_15_FX;                                 // 0x598(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Necromancer_15_FX_Off;                             // 0x5A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              PS_Necromancer_15;                                 // 0x5A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Necromancer_15_FX_On;                              // 0x5B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWwiseAudioComponent*                  TotemAudio;                                        // 0x5B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTargetableComponent*                  Targetable;                                        // 0x5C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGbxParticleSystemComponent*           VFX_Spawn;                                         // 0x5C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DecalTarget;                                       // 0x5D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGbxParticleSystemComponent*           VFX_Element;                                       // 0x5D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGameResourcePoolManagerComponent*     GameResourcePoolManager;                           // 0x5E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USocketComponent*                      FiringSocket;                                      // 0x5E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGbxSkeletalMeshComponent*             GbxSkeletalMesh;                                   // 0x5F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                     Capsule;                                           // 0x5F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TMap<class UClass*, class UParticleSystem*>  VFX_Element_Grid_Spawn_Ambient;                    // 0x600(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<class UClass*, class UParticleSystem*>  VFX_Element_Grid_Despawn;                          // 0x650(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<class UClass*, class UMaterialInterface*> Decal_Element_Grid;                                // 0x6A0(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FEnvQueryParams                       TargetEQS;                                         // 0x6F0(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TMap<class UClass*, class UMaterialInstance*> HeartMaterial_Element_Grid;                        // 0x7A8(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                TotemElementalType;                                // 0x7F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AWeapon*                               TotemGunStats;                                     // 0x800(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CurrentTarget;                                     // 0x808(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       SpawnVFX;                                          // 0x810(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AOakCharacter*                         OwnerPlayerCharacter;                              // 0x818(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       DespawnVFX;                                        // 0x820(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameResourceData*                     DurationResourcePool;                              // 0x828(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBPEventHub_PlayerCharacter_C*         PlayerEventHub;                                    // 0x830(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          FireProjectileTimerHandle;                         // 0x838(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UParticleSystem*                       DrainVFX;                                          // 0x840(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableValueHandle                 HalfHeightHandle;                                  // 0x848(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FGameResourcePoolReference            TotemResourcePool;                                 // 0x860(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, ContainsInstancedReference)
	float                                        TotemResourceRestoration;                          // 0x878(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_16B7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableValueHandle                 TotemResourceRestorationHandle;                    // 0x880(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UDecalComponent*                       DecalRef;                                          // 0x898(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                MantisOverrideDmgType;                             // 0x8A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGbxAttributeModifierHandle           TrackHandle;                                       // 0x8A8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FAttributeEffectData                  TrackEffect;                                       // 0x8B8(0x48)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                        TotemFireRate;                                     // 0x900(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_16C1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableValueHandle                 TotemFireRateHandle;                               // 0x908(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class AActor*                                OverrideTarget;                                    // 0x920(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOakManagedActorDefinition*            ManagedActor;                                      // 0x928(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableValueHandle                 TotemDamageHandle;                                 // 0x930(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UWwiseEvent*                           TotemAudioStart;                                   // 0x948(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           TotemAudioStop;                                    // 0x950(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           TotemRestoreAudio;                                 // 0x958(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SpiritStatusEffectChance;                          // 0x960(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_16E2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableValueHandle                 SpiritStatusEffectChanceHandle;                    // 0x968(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                         Necromancer_15_Activated;                          // 0x980(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_16F7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  TargetSocket;                                      // 0x988(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AActor_Shaman_02_Totem_C* GetDefaultObj();

	void GetClawArmorElement(class UClass** Res);
	void GetCompanionTargetingSocket(class FName* Socket);
	void CanEnemyBeTeamSwapped(bool* Res);
	void Enemy_OnPolymorphStart(bool* Res);
	void Enemy_OnPolymorphStop(bool* Res);
	void TrackManagedActor(bool TrackStatus, class APawn* CallFunc_GetInstigator_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UOakGameInstance* K2Node_DynamicCast_AsOak_Game_Instance, bool K2Node_DynamicCast_bSuccess);
	void IsValidOverrideTarget(class AActor* Actor, bool* ValidOverrideTarget, class UTargetableComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsHostile_ReturnValue, bool CallFunc_IsTargetableByAIPlayers_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1);
	void TrackCompanion(bool TrackStatus, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UOakGameInstance* K2Node_DynamicCast_AsOak_Game_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasAuthority_ReturnValue);
	void GetClawElement(class AActor* CallFunc_GetEquippedInventoryForSlot_ReturnValue, class UGbxAbilityManagerComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class UGbxAbility* CallFunc_FindAbility_ReturnValue, bool CallFunc_IsValid_ReturnValue2, TScriptInterface<class IBPI_ClawArmor_C> K2Node_DynamicCast_AsBPI_Claw_Armor, bool K2Node_DynamicCast_bSuccess, class UClass* CallFunc_GetClawArmorElement_Res);
	void CacheValues(float CallFunc_GetDataTableValueFromHandle_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue1, const struct FGameResourcePoolReference& CallFunc_GetResourcePoolByResource_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue2);
	void BindEvents(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5);
	void UserConstructionScript();
	void Player_HealthDepleted(class AOakCharacter* Character);
	void Enemy_OnPhaseLockStart();
	void Enemy_OnPhaseLockStop();
	void Enemy_OnThoughtLockStart();
	void Enemy_OnThoughtLockStop();
	void Player_SpawnTransfusionProjectile(class UClass* DataBlueprint__Override_, class UClass* DamageType__Override_, class AActor* SourceActor, class AActor* TargetActor, float Damage, class AActor* Causer__Override_);
	void ReceiveBeginPlay();
	void Shaman_02_FireProjectile();
	void Shaman02_CleanUp(const struct FGameResourcePoolReference& ResourcePool);
	void Notify_TotemActive();
	void Shaman_02_Owner_CausedDeath(class UDamageComponent* Damaged, struct FCausedDeathDetails& Details);
	void Multicast_Cleanup();
	void OnPlayerPing(class AActor* TargetActor, const struct FVector& TargetLocation, class AOakPlayerController* AlertInstigator);
	void OnDeath_OverrideTarget(class AActor* DamageReceiver, class AActor* DamageCauser);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void Shaman_02_Deactivated();
	void Necromancer_15_Buff_Activated();
	void Necromancer_15_Buff_Deactivated();
	void Audio_Totem_Activate();
	void Audio_Totem_Deactivate();
	void Audio_Totem_Restore();
	void ExecuteUbergraph_Actor_Shaman_02_Totem(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, class AOakCharacter* K2Node_Event_Character, class UClass* K2Node_Event_DataBlueprint__Override_, class UClass* K2Node_Event_DamageType__Override_, class AActor* K2Node_Event_SourceActor, class AActor* K2Node_Event_TargetActor, float K2Node_Event_Damage, class AActor* K2Node_Event_Causer__Override_, class AActor* CallFunc_RunEnvQueryForBestActor_ResultActor, bool CallFunc_RunEnvQueryForBestActor_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, const struct FTransform& CallFunc_GetActorSocket_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class UParticleSystem* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UOakDamageComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FGameResourcePoolReference& K2Node_CustomEvent_ResourcePool, class AWeapon* CallFunc_GetActiveWeapon_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class UGbxDamageType* CallFunc_GetDamageType_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* CallFunc_GetOwner_ReturnValue, class UOakPlayerAbilityManagerComponent* CallFunc_GetComponentByClass_ReturnValue1, class AOakCharacter* K2Node_DynamicCast_AsOak_Character, bool K2Node_DynamicCast_bSuccess, class UBPEventHub_PlayerCharacter_C* K2Node_DynamicCast_AsBPEvent_Hub_Player_Character, bool K2Node_DynamicCast_bSuccess1, class UDamageComponent* K2Node_CustomEvent_Damaged, const struct FCausedDeathDetails& K2Node_CustomEvent_Details, bool Temp_bool_IsClosed_Variable1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue, bool Temp_bool_Variable, bool CallFunc_IsValidClass_ReturnValue, class UClass* K2Node_Select_Default, class UParticleSystem* CallFunc_Map_Find_Value1, bool CallFunc_Map_Find_ReturnValue1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue1, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue1, class UMaterialInterface* CallFunc_Map_Find_Value2, bool CallFunc_Map_Find_ReturnValue2, class UDecalComponent* CallFunc_SpawnDecalAtLocation_ReturnValue, bool CallFunc_IsServer_ReturnValue, class AActor* K2Node_CustomEvent_TargetActor, const struct FVector& K2Node_CustomEvent_TargetLocation, class AOakPlayerController* K2Node_CustomEvent_AlertInstigator, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsValidOverrideTarget_ValidOverrideTarget, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IBPI_PlayerEnemyInteractions_C> K2Node_DynamicCast_AsBPI_Player_Enemy_Interactions, bool K2Node_DynamicCast_bSuccess2, class FName CallFunc_GetCompanionTargetingSocket_Socket, TArray<struct FGbxActionRegister>& Temp_struct_Variable, class AActor* K2Node_CustomEvent_DamageReceiver, class AActor* K2Node_CustomEvent_DamageCauser, class UGbxAction* CallFunc_K2Play_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UOakDamageComponent* CallFunc_GetComponentByClass_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class UOakDamageComponent* CallFunc_GetComponentByClass_ReturnValue3, bool CallFunc_IsServer_ReturnValue1, enum class EEndPlayReason K2Node_Event_EndPlayReason, class APawn* CallFunc_GetInstigator_ReturnValue1, class UMaterialInstance* CallFunc_Map_Find_Value3, bool CallFunc_Map_Find_ReturnValue3, float CallFunc_GetDataTableValueFromHandle_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FOakLightProjectileInitializationData& K2Node_MakeStruct_OakLightProjectileInitializationData, class AController* CallFunc_GetInstigatorController_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostAttachedEvent_ReturnValue, TScriptInterface<class IBPI_PlayerEnemyInteractions_C> K2Node_DynamicCast_AsBPI_Player_Enemy_Interactions1, bool K2Node_DynamicCast_bSuccess3, bool Temp_bool_Has_Been_Initd_Variable1, class FName CallFunc_GetCompanionTargetingSocket_Socket1);
};

}


