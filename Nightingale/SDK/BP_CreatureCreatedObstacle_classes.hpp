#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x5C (0x2FC - 0x2A0)
// BlueprintGeneratedClass BP_CreatureCreatedObstacle.BP_CreatureCreatedObstacle_C
class ABP_CreatureCreatedObstacle_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     DeathEffect;                                       // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x2B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_FloatyTextComponent_C*             BP_FloatyTextComponent;                            // 0x2B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNWXAbilitySystemComponent*            NWXAbilitySystem;                                  // 0x2C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       Health;                                            // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       InfluenceMultiplier;                               // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                           DamageHealthCurve;                                 // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IsDead;                                            // 0x2E8(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                         IsTraversable;                                     // 0x2E9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7979[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkAudioEvent*                         DeathAudioEvent;                                   // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        CorpseTime;                                        // 0x2F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_CreatureCreatedObstacle_C* GetDefaultObj();

	bool CanClimb();
	bool CanTraverse();
	void DamageActor(class AActor* Source, struct FGameplayTagContainer& EffectTags, float BaseDamage, struct FHitResult& HitResult, struct FTagValueContainer& TagValueContainer, TArray<struct FGameplayEffectCue>& GameplayCues, struct FTagValueContainer* AggregatedDamageTags, const struct FTagValueContainer& CallFunc_Damage_Actor_Internal_OutTagValueContainer, double CallFunc_Damage_Actor_Internal_BaseDamage_ImplicitCast, double CallFunc_TEMP_DamageRecieved_Damage_ImplicitCast);
	void OnDamageActor(class AActor* Source, struct FGameplayTagContainer& EffectTags, float BaseDamage, struct FHitResult& HitResult, struct FTagValueContainer& TagValueContainer, TArray<struct FGameplayEffectCue>& GameplayCues, struct FTagValueContainer* AggregatedDamageTags, const struct FTagValueContainer& CallFunc_Damage_Actor_Internal_OutTagValueContainer, double CallFunc_Damage_Actor_Internal_BaseDamage_ImplicitCast);
	class UHitResponseComponent* GetHitResponseComponent();
	struct FVector GetVocalizationLocation();
	void GetDamageEffect(class UClass** DamageEffect);
	void GetRedirectedTarget(bool* ShouldRedirect, class AActor** RedirectedTarget);
	void DeathLogic(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UScopedAkComponent* CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	void CorpseCleanup();
	void OnRep_IsDead();
	void OnDamageReceived(float Damage, class AActor* Target, class AActor* Source, struct FGameplayTagContainer& EffectTags, struct FHitResult& HitResult, struct FTagValueContainer& TagValueContainer);
	void OnAnyAttributeChanged(struct FGameplayAttribute& Attribute);
	void OnBuildProgressChanged(float Delta);
	void OnCharacterOverWeight();
	void OnCharacterUnderWeight();
	void OnCharacterWeightChanged(float Delta);
	void OnCharacterWeightMaxChanged(float Delta);
	void OnCraftBuildPointsChanged(float Delta);
	void OnCraftIntegrityChanged(float Delta);
	void OnCraftQualityChanged(float Delta);
	void OnEstateScoreChanged(float Delta);
	void OnFedChanged(float Delta);
	void OnFedMaxChanged(float Delta);
	void OnFuelChanged(float Delta);
	void OnHealthChanged(float Delta);
	void OnHealthMaxChanged(float Delta);
	void OnHopeChanged(float Delta);
	void OnHopeMaxChanged(float Delta);
	void OnHopeMinChanged(float Delta);
	void OnLoadoutLevelChanged(float Delta);
	void OnMaxSpeedBonusChanged(float Delta);
	void OnMaxSpeedRunChanged(float Delta);
	void OnMaxSpeedWalkChanged(float Delta);
	void OnMaxSpeedWalkFastChanged(float Delta);
	void OnQuestScoreChanged(float Delta);
	void OnReachedMinSchematicTimeout();
	void OnRestedChanged(float Delta);
	void OnRestedMaxChanged(float Delta);
	void OnStaminaChanged(float Delta);
	void OnStaminaDepleted();
	void OnStaminaMaxChanged(float Delta);
	void ReceiveBeginPlay();
	void TEMP_DamageRecieved(double Damage, class AActor* DamageSource);
	void ExecuteUbergraph_BP_CreatureCreatedObstacle(int32 EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float K2Node_Event_Damage, class AActor* K2Node_Event_Target, class AActor* K2Node_Event_Source, const struct FGameplayTagContainer& K2Node_Event_EffectTags, const struct FHitResult& K2Node_Event_HitResult, const struct FTagValueContainer& K2Node_Event_TagValueContainer, const struct FGameplayAttribute& K2Node_Event_Attribute, float K2Node_Event_Delta_24, float K2Node_Event_Delta_23, float K2Node_Event_Delta_22, float K2Node_Event_Delta_21, float K2Node_Event_Delta_20, float K2Node_Event_Delta_19, float K2Node_Event_Delta_18, float K2Node_Event_Delta_17, float K2Node_Event_Delta_16, float K2Node_Event_Delta_15, float K2Node_Event_Delta_14, float K2Node_Event_Delta_13, float K2Node_Event_Delta_12, float K2Node_Event_Delta_11, float K2Node_Event_Delta_10, float K2Node_Event_Delta_9, float K2Node_Event_Delta_8, float K2Node_Event_Delta_7, float K2Node_Event_Delta_6, float K2Node_Event_Delta_5, float K2Node_Event_Delta_4, float K2Node_Event_Delta_3, float K2Node_Event_Delta_2, float K2Node_Event_Delta_1, float K2Node_Event_Delta, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingSpec_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, const struct FGameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_1, int32 CallFunc_GetCurrentRealmPower_RealmPower, double CallFunc_Conv_IntToDouble_ReturnValue, float CallFunc_GetFloatValue_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsAtMinHealth_AtMinHealth, double K2Node_CustomEvent_Damage, class AActor* K2Node_CustomEvent_DamageSource, float CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast, float CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast_1, float CallFunc_GetFloatValue_InTime_ImplicitCast, double K2Node_VariableSet_InfluenceMultiplier_ImplicitCast);
};

}


