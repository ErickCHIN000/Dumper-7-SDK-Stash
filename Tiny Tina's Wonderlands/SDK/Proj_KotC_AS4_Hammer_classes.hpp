#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x299 (0xA09 - 0x770)
// BlueprintGeneratedClass Proj_KotC_AS4_Hammer.Proj_KotC_AS4_Hammer_C
class AProj_KotC_AS4_Hammer_C : public AOakProjectile_ActionAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x770(0x8)(Transient, DuplicateTransient)
	class UWwiseAudioComponent*                  ProjAudio;                                         // 0x778(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGbxSkeletalMeshComponent*             GbxSkeletalMesh;                                   // 0x780(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URotatingMovementComponent*            RotatingMovement;                                  // 0x788(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      PawnCollision;                                     // 0x790(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USocketComponent*                      GripSocket;                                        // 0x798(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UProjectileHomingComponent*            ProjectileHoming;                                  // 0x7A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              AreaParticle;                                      // 0x7A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGbxProjectileMovementComponent*       GbxProjectileMovement;                             // 0x7B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      Sphere;                                            // 0x7B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class EKnightOfTheClawHammerState       HammerState;                                       // 0x7C0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2BD8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               HitLocation;                                       // 0x7C4(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               HitNormal;                                         // 0x7D0(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2BDD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            HitInfo;                                           // 0x7E0(0x90)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FDataTableValueHandle                 ActionSkillDuration;                               // 0x870(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                        Scalar;                                            // 0x888(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2BE7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableValueHandle                 HammerDamageCalc;                                  // 0x890(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableValueHandle                 HammerRadius;                                      // 0x8A8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FEnvQueryParams                       ReturnSearch;                                      // 0x8C0(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FDataTableValueHandle                 HammerWorldRadius;                                 // 0x978(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                         AllowEnemyImpactDamage;                            // 0x990(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_2BF3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        HammerRotateDistance;                              // 0x994(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           Audio_ThrownLp;                                    // 0x998(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           Audio_Impact;                                      // 0x9A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           Audio_DamageAreaLp;                                // 0x9A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           Audio_ReturningLp;                                 // 0x9B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           Audio_ReturnToPlayerLp;                            // 0x9B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           Audio_ReturnBoom;                                  // 0x9C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWwisePlaybackInstance                Audio_DamageAreaInst;                              // 0x9C8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        Audio_ReturnWooshDistance;                         // 0x9E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasLanded;                                         // 0x9E4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C06[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWwiseEvent*                           Audio_HammerReturnAir;                             // 0x9E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           Audio_HammerReturnGround;                          // 0x9F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CaughtHammer;                                      // 0x9F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C10[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               LastImpactLocation;                                // 0x9FC(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SatisfiedDelay;                                    // 0xA08(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class AProj_KotC_AS4_Hammer_C* GetDefaultObj();

	void KnightOfTheClawSetHammerState(enum class EKnightOfTheClawHammerState State, bool* Res);
	void ToggleInFlightAreaDamage(bool Toggle, const struct FHitResult& Temp_struct_Variable, float CallFunc_GetDataTableValueFromHandle_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue);
	void Audio_PlaySonicBoom(bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue);
	void Audio_StartReturnLoop(const struct FVector& CallFunc_GetVelocity_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, float CallFunc_VSize_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue);
	void OnRep_AllowEnemyImpactDamage(const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue);
	void EnableHammerImpactDamage();
	void DoHammerImpactDamage(bool WorldHit, bool Catch, bool Temp_bool_Variable, bool Temp_bool_Variable1, float Temp_float_Variable, float Temp_float_Variable1, bool Temp_bool_Variable2, float K2Node_Select_Default, const struct FHitResult& Temp_struct_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FDataTableValueHandle& K2Node_Select1_Default, const struct FVector& K2Node_Select2_Default, float CallFunc_GetDataTableValueFromHandle_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue);
	void EnableHammerGravity(bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void ToggleDamageArea(bool Enable, bool* Res, const struct FHitResult& Temp_struct_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue);
	void OnRep_HammerState(bool K2Node_SwitchEnum_CmpSuccess);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void HammerStateOnSpawn();
	void HammerStateOnSending();
	void HammerStateOnReturning();
	void HammerStateOnIdle();
	void HammerStateOnDestroy();
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void HammerOnActionSkillCoolingDown(class UOakActionAbility* ActionAbility);
	void HammerStateOnCatching();
	void BndEvt__ProjectileHoming_K2Node_ComponentBoundEvent_0_ProjectileHomingComponentEvent__DelegateSignature_Proj_KotC_AS4_Hammer();
	void ReturnFailSafe();
	void DurationEnded(const struct FGameResourcePoolReference& ResourcePool);
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Proj_KotC_AS4_Hammer(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void DisableAutoRotator();
	void ReturningHammerRotation();
	void Audio_Start_Return();
	void Audio_Start_Idle_Loop();
	void Audio_Stop_Idle_Loop();
	void Audio_Start_ThrownLoop();
	void Audio_Hammer_Impact(const struct FVector& Location);
	void OpenAudioHammerImpactGate();
	void ExecuteUbergraph_Proj_KotC_AS4_Hammer(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_IsClosed_Variable1, bool Temp_bool_Has_Been_Initd_Variable1, bool Temp_bool_Has_Been_Initd_Variable2, bool Temp_bool_IsClosed_Variable2, TArray<struct FGbxActionRegister>& Temp_struct_Variable, bool CallFunc_HasAuthority_ReturnValue, bool Temp_bool_IsClosed_Variable3, bool CallFunc_HasAuthority_ReturnValue1, bool Temp_bool_IsClosed_Variable4, bool Temp_bool_Has_Been_Initd_Variable3, bool CallFunc_KnightOfTheClawSetHammerState_Res, bool CallFunc_KnightOfTheClawSetHammerState_Res1, bool Temp_bool_Has_Been_Initd_Variable4, class UPrimitiveComponent* K2Node_Event_MyComp, class AActor* K2Node_Event_Other, class UPrimitiveComponent* K2Node_Event_OtherComp, bool K2Node_Event_bSelfMoved, const struct FVector& K2Node_Event_HitLocation, const struct FVector& K2Node_Event_HitNormal, const struct FVector& K2Node_Event_NormalImpulse, const struct FHitResult& K2Node_Event_Hit, bool CallFunc_IsBlockingHit_ReturnValue, bool CallFunc_KnightOfTheClawSetHammerState_Res2, const struct FVector& CallFunc_GetHitLocation_ReturnValue, const struct FVector& CallFunc_GetHitNormal_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, bool CallFunc_ToggleDamageArea_Res, const struct FHitResult& CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult, bool CallFunc_ToggleDamageArea_Res1, bool CallFunc_ToggleDamageArea_Res2, float CallFunc_GetDataTableValueFromHandle_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, class UOakPlayerAbilityManagerComponent* CallFunc_GetComponentByClass_ReturnValue, class UOakActionAbility* K2Node_CustomEvent_ActionAbility, TScriptInterface<class IIActionSkill_KotC_AS4_C> K2Node_DynamicCast_AsI_Action_Skill_Kot_C_AS4, bool K2Node_DynamicCast_bSuccess, bool CallFunc_KnightOfTheClawRegisterHammer_Res, bool CallFunc_KnightOfTheClawSetHammerState_Res3, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UGbxAction* CallFunc_K2Play_ReturnValue, bool Temp_bool_IsClosed_Variable5, bool Temp_bool_IsClosed_Variable6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FGameResourcePoolReference& K2Node_CustomEvent_ResourcePool, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FHitResult& CallFunc_K2_SetActorRelativeLocation_SweepHitResult, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult, bool CallFunc_K2_SetActorTransform_ReturnValue, bool CallFunc_IsHealthy_ReturnValue, bool CallFunc_KnightOfTheClawSetHammerState_Res4, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable5, const struct FHitResult& CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult, float CallFunc_GetDistanceTo_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable6, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, bool Temp_bool_Has_Been_Initd_Variable7, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, bool CallFunc_IsAudioPlaying_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, bool Temp_bool_IsClosed_Variable7, bool CallFunc_IsServer_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue2, const struct FVector& K2Node_CustomEvent_Location, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue1, int32 Temp_int_Variable, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue2, float CallFunc_GetDistanceBetweenVectors_Distance, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool Temp_bool_Variable, bool K2Node_MultiGate_FirstRun, bool K2Node_MultiGate_ScratchBool, int32 K2Node_MultiGate_ScratchIndex, class UWwiseEvent* K2Node_Select_Default, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue);
};

}


