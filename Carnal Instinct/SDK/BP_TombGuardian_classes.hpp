#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x730 - 0x6F0)
// BlueprintGeneratedClass BP_TombGuardian.BP_TombGuardian_C
class ABP_TombGuardian_C : public ABP_BaseAI_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x6F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class Ubp_msl_identifier_component_C*        bp_msl_identifier_component;                       // 0x6F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  ThrownProjectile;                                  // 0x700(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       ProjectileSpawnLocation;                           // 0x708(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaggerComponent_C*                   StaggerComponent;                                  // 0x710(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWB_BossHealthBar_C*                   BossHealth;                                        // 0x718(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseExtraLife_;                                     // 0x720(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_185B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AimAlpha;                                          // 0x724(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ArrowInitialSpeed;                                 // 0x728(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        R_Duration;                                        // 0x72C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_TombGuardian_C* GetDefaultObj();

	void UpdateAimAlpha(float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_GetStatValue_Value, float CallFunc_FInterpTo_Constant_ReturnValue);
	void GetSpawnedProjectileTransform(struct FTransform* Transform, const struct FVector& CallFunc_GetVelocity_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue);
	void RangeAttack(float* Duration);
	void CanBeStunned(bool* Result, bool CallFunc_IsEffectApplied_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void MeleeAttack(enum class E_MeleeAttackType Type, float* Duration, float CallFunc_MeleeAttack_Duration);
	void HideStatsWidget(bool CallFunc_IsValid_ReturnValue);
	void ShowStatsWidget(bool CallFunc_IsValid_ReturnValue, class UWB_BossHealthBar_C* CallFunc_Create_ReturnValue);
	void Death(class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player, class Abp_item_diamond_jar_C* CallFunc_GetActorOfClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_get_layout_widget_is_valid, class UW_01_quest_layout_C* CallFunc_get_layout_widget_quest_widget, bool CallFunc_get_quest_is_valid, int32 CallFunc_get_quest_found_index, class Abp_quest_actor_C* CallFunc_get_quest_quest_actor, class ABP_AmbientMusic_Controller_C* CallFunc_GetActorOfClass_ReturnValue_1);
	void GetMontages(enum class E_MontageAction Action, class UDataTable** Montages);
	void OnNotifyEnd_BCDFEA7D485E6725C0750C80CDED4794(class FName NotifyName);
	void OnNotifyBegin_BCDFEA7D485E6725C0750C80CDED4794(class FName NotifyName);
	void OnInterrupted_BCDFEA7D485E6725C0750C80CDED4794(class FName NotifyName);
	void OnBlendOut_BCDFEA7D485E6725C0750C80CDED4794(class FName NotifyName);
	void OnCompleted_BCDFEA7D485E6725C0750C80CDED4794(class FName NotifyName);
	void OnNotifyEnd_38AB94B24209CFD46AB344AF3CFEAAAA(class FName NotifyName);
	void OnNotifyBegin_38AB94B24209CFD46AB344AF3CFEAAAA(class FName NotifyName);
	void OnInterrupted_38AB94B24209CFD46AB344AF3CFEAAAA(class FName NotifyName);
	void OnBlendOut_38AB94B24209CFD46AB344AF3CFEAAAA(class FName NotifyName);
	void OnCompleted_38AB94B24209CFD46AB344AF3CFEAAAA(class FName NotifyName);
	void OnCollisionActivated(enum class E_CollisionPart Selection);
	void Update_Items();
	void HandleMeshOnDeath();
	void Respawn();
	void BndEvt__MeleeCollisionHandler_K2Node_ComponentBoundEvent_0_OnHit__DelegateSignature(const struct FHitResult& HitResult);
	void UpdateStaggerValue();
	void ActivateStagger();
	void SecondStageBuffs();
	void ReceiveDestroyed();
	void ReceiveTick(float DeltaSeconds);
	void RangedAttack();
	void ExecuteUbergraph_BP_TombGuardian(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_8, class FName K2Node_CustomEvent_NotifyName_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName Temp_name_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class FName Temp_name_Variable_1, enum class E_CollisionPart K2Node_Event_Selection, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, const struct FHitResult& K2Node_ComponentBoundEvent_HitResult, class FName K2Node_CustomEvent_NotifyName_9, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class UStaggerComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player, float CallFunc_PlayAnimMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, TArray<class FName>& CallFunc_GetAllSocketNames_ReturnValue, float K2Node_Event_DeltaSeconds, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UAnimMontage* CallFunc_GetMontageForAction_Montage, bool CallFunc_IsValid_ReturnValue_4, float CallFunc_Montage_Play_ReturnValue, float CallFunc_GetDamage_Damage, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, const struct FTransform& CallFunc_GetSpawnedProjectileTransform_Transform, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_BlockProjectile_C* CallFunc_FinishSpawningActor_ReturnValue);
};

}


