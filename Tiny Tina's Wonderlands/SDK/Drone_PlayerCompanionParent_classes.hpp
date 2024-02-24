#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x360 (0xB20 - 0x7C0)
// BlueprintGeneratedClass Drone_PlayerCompanionParent.Drone_PlayerCompanionParent_C
class ADrone_PlayerCompanionParent_C : public AOakDroneProjectile
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7C0(0x8)(Transient, DuplicateTransient)
	class UGameplayTagContainerComponent*        GameplayTagContainer;                              // 0x7C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneBodySwitchComponent*             Necromancer_15_FX;                                 // 0x7D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStanceComponent*                      Stance;                                            // 0x7D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              PS_Necromancer_15;                                 // 0x7E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Necromancer_15_FX_Off;                             // 0x7E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Necromancer_15_FX_On;                              // 0x7F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGbxActionComponent*                   GbxAction;                                         // 0x7F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UOakUsableComponent*                   OakUsable;                                         // 0x800(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGameResourcePoolManagerComponent*     GameResourcePoolManager;                           // 0x808(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UOakMinimapIconComponent*              OakMinimapIcon;                                    // 0x810(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGbxSkeletalMeshComponent*             GbxSkeletalMesh;                                   // 0x818(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         EnableTargeting;                                   // 0x820(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_2613[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CurrentTarget;                                     // 0x828(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	float                                        CheckTargetTime;                                   // 0x830(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2618[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEnvQueryParams                       FindTargetInArea;                                  // 0x838(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FTimerHandle                          CheckTargetTimer;                                  // 0x8F0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                        HoverTarget_DroneSpeed;                            // 0x8F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HoverTarget_HoverSpeed;                            // 0x8FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HoverTarget_HoverAltitude;                         // 0x900(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HoverTarget_HoverThreshold;                        // 0x904(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HoverTarget_HoverRadius;                           // 0x908(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HoverTarget_HoverRadiusMin;                        // 0x90C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HoverOwner_DroneSpeed;                             // 0x910(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HoverOwner_HoverSpeed;                             // 0x914(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HoverOwner_HoverAltitude;                          // 0x918(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HoverOwner_HoverThreshold;                         // 0x91C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HoverOwner_HoverRadius;                            // 0x920(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HoverOwner_HoverRadiusMin;                         // 0x924(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FlyToTarget_DroneSpeed;                            // 0x928(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2640[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  CompanionOnCausedDeath;                            // 0x930(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  CompanionOnCausedAnyDamage;                        // 0x940(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  CompanionOnDeath;                                  // 0x950(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         TetherEnabled;                                     // 0x960(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EOakDroneFacingMode               HoverTargetFacingMode;                             // 0x961(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EOakDroneFacingMode               HoverAtOwnerFacingMode;                            // 0x962(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EOakDroneFacingMode               FlyToTargetFacingMode;                             // 0x963(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2654[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                SpawnFX;                                           // 0x968(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                DespawnFX;                                         // 0x970(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TetherTimer;                                       // 0x978(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TetherDistance;                                    // 0x97C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableValueHandle                 TetherDistanceHandle;                              // 0x980(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FTimerHandle                          TetherCheckHandle;                                 // 0x998(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FEnvQueryParams                       TetherTeleportQuery;                               // 0x9A0(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                         AllowPlayerAlertOverride;                          // 0xA58(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         CompanionInCombat;                                 // 0xA59(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	enum class EOakPlayerClass                   CompanionPlayerClass;                              // 0xA5A(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2676[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBPEventHub_PlayerCharacter_C*         PlayerEventHub;                                    // 0xA60(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         BindClassDelegates;                                // 0xA68(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_267D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxAbility*                           RangerFeat;                                        // 0xA70(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                SpawnAction;                                       // 0xA78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                DespawnAction;                                     // 0xA80(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CanInteract;                                       // 0xA88(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2688[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableValueHandle                 InteractionCooldownHandle;                         // 0xA90(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UClass*                                InteractionActions;                                // 0xAA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableValueHandle                 FidgetCooldownHandle;                              // 0xAB0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UClass*                                FidgetActions;                                     // 0xAC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PlayingInteraction;                                // 0xAD0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2690[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AOakCharacter_Player*                  DroneOwnerPlayer;                                  // 0xAD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         RecalculateHealthBasedOnAttributes;                // 0xAE0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2693[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGbxAttributeDelegateBindingHandle> BindedAttributeEvents;                             // 0xAE8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UGbxAttributeData*                     ClassStat;                                         // 0xAF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          FidgetTimer;                                       // 0xB00(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FGbxAttributeInteger                  Att_KnightOfTheClaw_DragonAura_RebukingAura;       // 0xB08(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         TargetOverriden;                                   // 0xB14(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_26A0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                PreviousTarget;                                    // 0xB18(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ADrone_PlayerCompanionParent_C* GetDefaultObj();

	void Enemy_OnPolymorphStart(bool* Res);
	void Enemy_OnPolymorphStop(bool* Res);
	void GetCompanionTargetingSocket(class FName* Socket);
	void CanEnemyBeTeamSwapped(bool* Res);
	void CompanionDespawn(bool* Res);
	void CompanionSpawn(bool* Res);
	void CompanionDeath(bool* Res);
	void IsCompanionInCombat(bool* Res);
	void KillCompanion(bool* Res);
	void OnRep_PreviousTarget(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UOakDamageComponent* CallFunc_GetComponentByClass_ReturnValue);
	void SetNewTarget(class AActor* NewTarget);
	void CanISeeMyTarget(bool* Res, class AController* CallFunc_GetAssociatedController_ReturnValue, class AGbxAIController* K2Node_DynamicCast_AsGbx_AIController, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LineOfSightTo_ReturnValue);
	void ShouldDespawnCompanion(bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_CompanionDespawn_Res, class AActor* CallFunc_GetDroneOwner_DroneOwner, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasPlayerClass_Res);
	void GetDroneOwner(class AActor** DroneOwner, class AActor* CallFunc_GetOwner_ReturnValue);
	void HandleInteracts(TArray<struct FGbxActionRegister>& Temp_struct_Variable, float CallFunc_GetDataTableValueFromHandle_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UGbxAction* CallFunc_K2Play_ReturnValue);
	void SetDroneMovement(float DroneSpeed, float HoverAltitude, float HoverAltitudeThreshold, float HoverRadius, float HoverRadiusMin, float HoverSpeed, enum class EOakDroneFacingMode FacingMode, bool CallFunc_HasAuthority_ReturnValue);
	void CompanionDespawnActions(TArray<struct FGbxActionRegister>& Temp_struct_Variable, TArray<struct FGbxActionRegister>& Temp_struct_Variable1, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_IsValidClass_ReturnValue1, class UGbxAction* CallFunc_K2Play_ReturnValue, class UGbxAction* CallFunc_K2Play_ReturnValue1);
	void CompanionSpawnActions(TArray<struct FGbxActionRegister>& Temp_struct_Variable, TArray<struct FGbxActionRegister>& Temp_struct_Variable1, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_IsValidClass_ReturnValue1, class UGbxAction* CallFunc_K2Play_ReturnValue, class UGbxAction* CallFunc_K2Play_ReturnValue1);
	void InitPlayerCompanionParentData(class AActor* CallFunc_GetDroneOwner_DroneOwner, class UOakPlayerAbilityManagerComponent* CallFunc_GetComponentByClass_ReturnValue, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess, class UGbxAbility* CallFunc_GetClassFeat_Res, class UBPEventHub_PlayerCharacter_C* K2Node_DynamicCast_AsBPEvent_Hub_Player_Character, bool K2Node_DynamicCast_bSuccess1, class APawn* CallFunc_GetInstigator_ReturnValue, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess2);
	void SetDroneUsable(bool Usable, bool* Res);
	void OnRep_CompanionInCombat();
	void SetCompanionInCombat(bool InCombat, bool* Res);
	void HandleTargeting();
	void PlayerAlertOverride(class AActor* OverrideTarget, class UTargetableComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsTargetableByAIPlayers_ReturnValue, bool CallFunc_IsTargetableByActor_ReturnValue, bool CallFunc_IsHostile_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue2);
	void HandleTethering(float CallFunc_GetDataTableValueFromHandle_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue);
	struct FTransform GetTetherTeleport(class AActor* CallFunc_GetDroneOwner_DroneOwner, class AActor* CallFunc_GetDroneOwner_DroneOwner1, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_RunEnvQueryForBestLocation_ResultLocation, bool CallFunc_RunEnvQueryForBestLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue);
	void TetherCheck(class AActor* CallFunc_GetDroneOwner_DroneOwner, const struct FTransform& CallFunc_GetTetherTeleport_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, bool CallFunc_K2_TeleportTo_ReturnValue, float CallFunc_GetDistanceBetweenVectors_Distance, bool CallFunc_Less_FloatFloat_ReturnValue);
	void CompanionCleanup(int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FGbxAttributeDelegateBindingHandle& CallFunc_Array_Get_Item, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void TrackCompanion(bool TrackStatus, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, class UOakGameInstance* K2Node_DynamicCast_AsOak_Game_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasAuthority_ReturnValue, int32 CallFunc_GetManagedActorCount_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue1, const class FString& CallFunc_Concat_StrStr_ReturnValue2, const class FString& CallFunc_Concat_StrStr_ReturnValue3);
	void OnOwnerLevelUp(int32 OldExperienceLevel, int32 NewExperienceLevel, class UBalanceStateComponent* CallFunc_GetBalanceComponent_ReturnValue);
	void InitSelfBalance(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APawn* CallFunc_GetInstigator_ReturnValue, class UBalanceStateComponent* CallFunc_GetBalanceComponent_ReturnValue, class UPlayerBalanceStateComponent* CallFunc_GetComponentByClass_ReturnValue, int32 CallFunc_GetExperienceLevel_ReturnValue);
	void SetFlyToTarget(bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasAuthority_ReturnValue);
	void SetHoverAtOwner();
	void SetHoverAtTarget(bool CallFunc_IsValid_ReturnValue);
	void OnTargetDied(class AActor* DamageReceiver, class AActor* DamageCauser);
	void OnRep_CurrentTarget(bool CallFunc_SetCompanionInCombat_Res, bool CallFunc_SetCompanionInCombat_Res1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, class UOakDamageComponent* CallFunc_GetComponentByClass_ReturnValue);
	void ReturnToOwner(const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue);
	void FindTarget(class AActor* CallFunc_GetDroneOwner_DroneOwner, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, class AActor* CallFunc_RunEnvQueryForBestActor_ResultActor, bool CallFunc_RunEnvQueryForBestActor_ReturnValue);
	void CheckTarget(const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void OnRep_EnableTargeting();
	void SetTargetingEnabled(bool Enabled);
	void UserConstructionScript();
	void OnPlayerAlert(class AActor* TargetActor, const struct FVector& TargetLocation, class AOakPlayerController* InstigatingController);
	void Necromancer_15_Buff_Activated();
	void Necromancer_15_Buff_Deactivated();
	void BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_Drone_PlayerCompanionParent(class AActor* DamageReceiver, class AActor* DamageCauser);
	void Enemy_OnThoughtLockStop();
	void BndEvt__OakUsable_K2Node_ComponentBoundEvent_0_UsableUsedOnChannelSignature__DelegateSignature_Drone_Necromancer_DemiLich(class AController* UserController, class UPrimitiveComponent* UsedComponent);
	void UnlockInteraction();
	void TriggerFidget();
	void Enemy_OnThoughtLockStart();
	void Health_Recalculate(float OldValue, float NewValue);
	void ReceiveBeginPlay();
	void Enemy_OnPhaseLockStop();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void Player_SpawnTransfusionProjectile(class UClass* DataBlueprint__Override_, class UClass* DamageType__Override_, class AActor* SourceActor, class AActor* TargetActor, float Damage, class AActor* Causer__Override_);
	void Enemy_OnPhaseLockStart();
	void Player_HealthDepleted(class AOakCharacter* Character);
	void ExecuteUbergraph_Drone_PlayerCompanionParent(int32 EntryPoint, bool CallFunc_K2_EvaluateConditionType_ReturnValue, bool CallFunc_K2_EvaluateConditionType_ReturnValue1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class AController* K2Node_ComponentBoundEvent_UserController, class UPrimitiveComponent* K2Node_ComponentBoundEvent_UsedComponent, bool CallFunc_CompanionSpawn_Res, bool CallFunc_CompanionDeath_Res, bool CallFunc_IsValidClass_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_BooleanAND_ReturnValue1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float K2Node_CustomEvent_OldValue, float K2Node_CustomEvent_NewValue, class APlayerController* CallFunc_GetAssociatedPlayerController_ReturnValue, class AActor* K2Node_ComponentBoundEvent_DamageReceiver, class AActor* K2Node_ComponentBoundEvent_DamageCauser, enum class EEndPlayReason K2Node_Event_EndPlayReason, class UClass* K2Node_Event_DataBlueprint__Override_, class UClass* K2Node_Event_DamageType__Override_, class AActor* K2Node_Event_SourceActor, class AActor* K2Node_Event_TargetActor, float K2Node_Event_Damage, class AActor* K2Node_Event_Causer__Override_, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, float CallFunc_GetDataTableValueFromHandle_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, TArray<struct FGbxActionRegister>& Temp_struct_Variable, class UGbxAction* CallFunc_K2Play_ReturnValue, class AOakCharacter* K2Node_Event_Character, class AActor* K2Node_CustomEvent_TargetActor, const struct FVector& K2Node_CustomEvent_TargetLocation, class AOakPlayerController* K2Node_CustomEvent_InstigatingController, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, const struct FGbxAttributeDelegateBindingHandle& CallFunc_BindEventToOnAttributeChanged_ReturnValue, const struct FGbxAttributeDelegateBindingHandle& CallFunc_BindEventToOnAttributeChanged_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate8, const struct FGbxAttributeDelegateBindingHandle& CallFunc_BindEventToOnAttributeChanged_ReturnValue2, const struct FGbxAttributeDelegateBindingHandle& CallFunc_BindEventToOnAttributeChanged_ReturnValue3, TArray<struct FGbxAttributeDelegateBindingHandle>& K2Node_MakeArray_Array);
	void CompanionOnDeath__DelegateSignature();
	void CompanionOnCausedAnyDamage__DelegateSignature(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
	void CompanionOnCausedDeath__DelegateSignature(class UDamageComponent* Damaged, struct FCausedDeathDetails& Details);
};

}


