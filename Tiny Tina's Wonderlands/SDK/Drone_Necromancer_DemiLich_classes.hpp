#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x328 (0xE48 - 0xB20)
// BlueprintGeneratedClass Drone_Necromancer_DemiLich.Drone_Necromancer_DemiLich_C
class ADrone_Necromancer_DemiLich_C : public ADrone_PlayerCompanionParent_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB20(0x8)(Transient, DuplicateTransient)
	class UOakStatusEffectManagerComponent*      OakStatusEffectManager;                            // 0xB28(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGbxCustomizationComponent*            GbxCustomization;                                  // 0xB30(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UOakDialogComponent*                   GbxDialog;                                         // 0xB38(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWwiseAudioComponent*                  DefaultAudio;                                      // 0xB40(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UOakCharacterSoundLogicComponent*      OakCharacterSoundLogic;                            // 0xB48(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USocketComponent*                      NameplateSocket;                                   // 0xB50(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USocketComponent*                      SnapZoom;                                          // 0xB58(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          StartAttackHandle;                                 // 0xB60(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                         DefaultAttack;                                     // 0xB68(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_1BD8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DefaultAttackCooldown;                             // 0xB6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          PostAttackTimer;                                   // 0xB70(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                        PostAttackCooldownTimer;                           // 0xB78(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1BDF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableValueHandle                 DefaultAttackCalcDamage;                           // 0xB80(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class AOakCharacter_Player*                  Necromancer;                                       // 0xB98(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SpellCasting;                                      // 0xBA0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_1BE7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SpellCastCooldown;                                 // 0xBA4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableValueHandle                 SpellCastCalcDamageHandle;                         // 0xBA8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableValueHandle                 SpellCastCooldownHandle;                           // 0xBC0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                        DoubleSpellDelay;                                  // 0xBD8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1BED[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableValueHandle                 DoubleCastSpellDelayHandle;                        // 0xBE0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class AGrenadeMod*                           SpellCastSpellInfo;                                // 0xBF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DoubleSpellCast;                                   // 0xC00(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsDying;                                           // 0xC01(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1BFB[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableValueHandle                 DefaultAttackCooldownHandle;                       // 0xC08(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UClass*                                DeathAction;                                       // 0xC20(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FEnvQueryParams                       SpellCrosshairTargetEQS;                           // 0xC28(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FEnvQueryParams                       SpellNearbyTargetEQS;                              // 0xCE0(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class AActor*                                SpellCastTarget;                                   // 0xD98(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableValueHandle                 SpellCastCooldownScalarLimit;                      // 0xDA0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	TMap<enum class EOakElementalType, class UWwiseEvent*> Audio_SpellCast;                                   // 0xDB8(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UWwiseEvent*                           Audio_BasicAttack;                                 // 0xE08(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCharacterSoundTag*                    Audio_CST_Pain;                                    // 0xE10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCharacterSoundTag*                    Audio_CST_TargetAquired;                           // 0xE18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           Audio_CovenantDeathLeadin;                         // 0xE20(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           Audio_CovenantDeathExp;                            // 0xE28(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                MantisOverrideDmgType;                             // 0xE30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AGrenadeMod*>                   SpellCastQueue;                                    // 0xE38(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class ADrone_Necromancer_DemiLich_C* GetDefaultObj();

	void GetDemiLichIsDying(bool* Res);
	void GetDemiLichOwner(class AActor** Res);
	void Passive09_LichSacrifice(bool* Res, TArray<struct FGbxActionRegister>& Temp_struct_Variable, class UGbxAction* CallFunc_K2Play_ReturnValue);
	void GetDemiLichCompanionTarget(class AActor** Res);
	void CheckIsTargetValid(bool* TargetValid, bool CallFunc_CanISeeMyTarget_Res, class AActor* CallFunc_GetDroneOwner_DroneOwner, bool CallFunc_IsValid_ReturnValue, class UTargetableComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsTargetableByActor_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsPerformingAnyAttack_Res, bool CallFunc_Not_PreBool_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1);
	void CheckClawElement(class UGbxAbility* ClawAbility, class AActor* CallFunc_GetEquippedInventoryForSlot_ReturnValue, TScriptInterface<class IBPI_ClawArmor_C> K2Node_DynamicCast_AsBPI_Claw_Armor, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UClass* CallFunc_GetClawArmorElement_Res, class UGbxAbilityManagerComponent* CallFunc_GetComponentByClass_ReturnValue, class UGbxAbility* CallFunc_FindAbility_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsValid_ReturnValue2);
	void SetMovementProperties_Target();
	void SetMovementProperties_Hover();
	void GetSpellCastTarget(bool* Res, bool CallFunc_CheckIsTargetValid_TargetValid, bool CallFunc_CheckIsTargetValid_TargetValid1, bool CallFunc_BooleanAND_ReturnValue, class AActor* CallFunc_RunEnvQueryForBestActor_ResultActor, bool CallFunc_RunEnvQueryForBestActor_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_RunEnvQueryForBestActor_ResultActor1, bool CallFunc_RunEnvQueryForBestActor_ReturnValue1);
	void HandleDeathInitialization();
	void CompanionDeath(bool* Res, TArray<struct FGbxActionRegister>& Temp_struct_Variable, class UGbxAction* CallFunc_K2Play_ReturnValue);
	void CompanionDespawn(bool* Res, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, bool CallFunc_CompanionDespawn_Res);
	void ClearAllAttacks();
	void StartSpellCast(TArray<struct FGbxActionRegister>& Temp_struct_Variable, class UGbxAction* CallFunc_K2Play_ReturnValue);
	void PerformSpellCast(bool CallFunc_IsValidClass_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, TScriptInterface<class IBPI_PlayerEnemyInteractions_C> K2Node_DynamicCast_AsBPI_Player_Enemy_Interactions, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FName CallFunc_GetCompanionTargetingSocket_Socket, const struct FTransform& CallFunc_GetActorSocket_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool Temp_bool_Variable, class UClass* CallFunc_GetSpellDamageType_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsGbx_Damage_Type, bool K2Node_ClassDynamicCast_bSuccess, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, class UClass* K2Node_Select_Default, class APawn* CallFunc_GetInstigator_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue1, float CallFunc_GetDataTableValueFromHandle_ReturnValue, const struct FLightProjectileInitializationData& K2Node_MakeStruct_LightProjectileInitializationData);
	void OnRep_SpellCasting(class AActor* CallFunc_GetOwner_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue, bool CallFunc_RandomBoolWithWeight_ReturnValue);
	void OnRep_DefaultAttack(TArray<struct FGbxActionRegister>& Temp_struct_Variable, class UGbxAction* CallFunc_K2Play_ReturnValue);
	void InitData(const struct FDataTableValueHandle& DefaultAttackCooldownHandle, float CallFunc_GetDataTableValueFromHandle_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue1, class AActor* CallFunc_GetOwner_ReturnValue, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetDataTableValueFromHandle_ReturnValue2);
	void StartPostAttackCooldown(float Time, bool IgnoreAttackSpeed, bool Temp_bool_Variable, float Temp_float_Variable, class AActor* CallFunc_GetOwner_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_Select_Default, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	void PostAttackCooldown();
	void StartDefaultAttack(class UClass* Temp_class_Variable, bool Temp_bool_Variable, bool CallFunc_IsValidClass_ReturnValue, TScriptInterface<class IBPI_PlayerEnemyInteractions_C> K2Node_DynamicCast_AsBPI_Player_Enemy_Interactions, bool K2Node_DynamicCast_bSuccess, class UClass* K2Node_Select_Default, class FName CallFunc_GetCompanionTargetingSocket_Socket, const struct FTransform& CallFunc_GetActorSocket_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class APawn* CallFunc_GetInstigator_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue1, float CallFunc_GetDataTableValueFromHandle_ReturnValue, const struct FLightProjectileInitializationData& K2Node_MakeStruct_LightProjectileInitializationData);
	void CanPerformAttack(bool Enabled, const struct FTimerHandle& Timer, float Min_Distance, float Max_Distance, bool* Res, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue1, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue2);
	void IsPerformingAnyAttack(bool* Res, bool CallFunc_BooleanOR_ReturnValue);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void SetHoverAtTarget();
	void SetHoverAtOwner();
	void OnRep_EnableTargeting();
	void OnRep_CurrentTarget();
	void DemiLichOwner_OnSpellCastDelegate(class AGrenadeMod* GrenadeMod, class AOakCharacter_Player* EquippedPlayer);
	void DemiLich_BasicAttackFired();
	void DemiLich_SpellCastFired();
	void DemiLich_Covenant_Explosion();
	void DemiLich_Death();
	void DemiLich_Respawn();
	void StopAttack();
	void HandleInteracts();
	void StartAttack();
	void DemiLich_InteractionEnd();
	void DemiLich_Covenant_CleanUp();
	void Audio_Play_Spellcast();
	void Audio_Play_BasicAttack();
	void BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_TakeAnyPipelineDamageDelegate__DelegateSignature_Drone_Necromancer_DemiLich(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details);
	void Audio_Target_Aquired();
	void Audio_CovenantDeath_Start();
	void Audio_CovenantDeath_Explosion();
	void Audio_OnTargetDied(class AActor* DamageReceiver, class AActor* DamageCauser);
	void OnTargetDied(class AActor* DamageReceiver, class AActor* DamageCauser);
	void OnPlayerAlert(class AActor* TargetActor, const struct FVector& TargetLocation, class AOakPlayerController* InstigatingController);
	void StartDemiLichSpellCast();
	void TriggerFidget();
	void ExecuteUbergraph_Drone_Necromancer_DemiLich(int32 EntryPoint, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue, const struct FDialogConversation& CallFunc_FinishTriggerDialog_Conversation, int32 CallFunc_FinishTriggerDialog_SequenceID, bool CallFunc_FinishTriggerDialog_ReturnValue, bool CallFunc_CheckIsTargetValid_TargetValid, bool Temp_bool_IsClosed_Variable, class AGrenadeMod* K2Node_CustomEvent_GrenadeMod, class AOakCharacter_Player* K2Node_CustomEvent_EquippedPlayer, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue1, const struct FDialogConversation& CallFunc_FinishTriggerDialog_Conversation1, int32 CallFunc_FinishTriggerDialog_SequenceID1, bool CallFunc_FinishTriggerDialog_ReturnValue1, class UClass* CallFunc_GetSpellDamageType_ReturnValue, enum class EOakElementalType CallFunc_GetClassElementalType_ReturnValue, class UWwiseEvent* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostAttachedEvent_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostAttachedEvent_ReturnValue1, class UDamageComponent* K2Node_ComponentBoundEvent_DamageReceiver, float K2Node_ComponentBoundEvent_Damage, class UGbxDamageType* K2Node_ComponentBoundEvent_DamageType, class UDamageSource* K2Node_ComponentBoundEvent_DamageSource, class AController* K2Node_ComponentBoundEvent_InstigatedBy, class UDamageCauserComponent* K2Node_ComponentBoundEvent_DamageCauser, const struct FReceivedDamageDetails& K2Node_ComponentBoundEvent_Details, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostAttachedEvent_ReturnValue2, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue, class AActor* K2Node_CustomEvent_DamageReceiver, class AActor* K2Node_CustomEvent_DamageCauser, class AActor* K2Node_Event_DamageReceiver, class AActor* K2Node_Event_DamageCauser, bool Temp_bool_Has_Been_Initd_Variable, class AActor* K2Node_Event_TargetActor, const struct FVector& K2Node_Event_TargetLocation, class AOakPlayerController* K2Node_Event_InstigatingController, bool CallFunc_GetSpellCastTarget_Res, int32 CallFunc_Array_Add_ReturnValue, class AGrenadeMod* CallFunc_Array_Get_Item, bool CallFunc_CheckIsTargetValid_TargetValid1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
};

}


