#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x94 (0x2B4 - 0x220)
// BlueprintGeneratedClass BP_CrossRiposteHandler.BP_CrossRiposteHandler_C
class ABP_CrossRiposteHandler_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UDHConsoleExtensionComponent*          DHConsoleExtension;                                // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPostProcessComponent*                 PostProcess;                                       // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_TimeDilation_TimeDilation_A6BA339C419B8398F926E5AEF2ADEA71; // 0x240(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_TimeDilation__Direction_A6BA339C419B8398F926E5AEF2ADEA71; // 0x244(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C6D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_TimeDilation;                             // 0x248(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ParryEffectTimeline_ForceFeedbackBuildup_F069621D4CDD8DD8B00E8AA0191E2827; // 0x250(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                ParryEffectTimeline__Direction_F069621D4CDD8DD8B00E8AA0191E2827; // 0x254(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C77[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    ParryEffectTimeline;                               // 0x258(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AZero_Base_C*                          Char;                                              // 0x260(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABaseCharacter_C*                      ParriedEnemy;                                      // 0x268(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bRotateTowardsEnemy;                               // 0x270(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C90[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_FireGrenade_Attached_C*            SpawnedGrenade;                                    // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BlastRange;                                        // 0x280(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        BlastRange_Bonus;                                  // 0x284(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        ConeAngle;                                         // 0x288(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        ConeAngle_Bonus;                                   // 0x28C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        DamageMultiplier_Bonus;                            // 0x290(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        TimeFreeze_DurationBonus;                          // 0x294(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class AGameplayPC_C*                         GameplayPC;                                        // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              Particle;                                          // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        IceAfterSlowedTime;                                // 0x2A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        RemoveFromTimelineChance;                          // 0x2AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        OnDeathWhileSlowExplosionDMG;                      // 0x2B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_CrossRiposteHandler_C* GetDefaultObj();

	void OnRiposteMontageEnd(bool CallFunc_Not_PreBool_ReturnValue);
	void GetHitResults(class AActor* Actor, TArray<struct FHitResult>* Array, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FHitResult& CallFunc_MakeHitResult_ReturnValue, TArray<struct FHitResult>& K2Node_MakeArray_Array);
	struct FVector GetImpulse(class AActor* Actor, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue);
	void DamageEnemiesInCone(class ABaseCharacter_C* Local_BaseEnemy, class AActor* Local_Actor, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess, class ABossBaseCharacter_C* K2Node_DynamicCast_AsBoss_Base_Character, bool K2Node_DynamicCast_bSuccess_1, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess_2, TArray<struct FHitResult>& CallFunc_GetHitResults_Array, bool CallFunc_IsInConeAngle_ReturnValue, bool CallFunc_IsInRange_bInRange, int32 Temp_int_Array_Index_Variable, bool CallFunc_BooleanAND_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AEnemyCharacter_C*>& CallFunc_GetAllActorsOfClass_OutActors, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void PlayBlastEffects(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, class ACrossLightRiposteEffect_C* CallFunc_FinishSpawningActor_ReturnValue, class ABP_RadialBlur_C* CallFunc_FinishSpawningActor_ReturnValue_1);
	void PlayChargeEffects(class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_RadialBlur_C* CallFunc_FinishSpawningActor_ReturnValue);
	bool IsInConeAngle(class AActor* OverlappedEnemy, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue, float CallFunc_DegAcos_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue);
	void IsInRange(class AActor* OverlappedEnemy, bool* bInRange, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue);
	void RotatePlayerTowardsEnemy(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_GetWorldDeltaSeconds_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_ProjectVectorOnToPlane_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, const struct FRotator& CallFunc_RInterpTo_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue);
	void Timeline_TimeDilation__FinishedFunc();
	void Timeline_TimeDilation__UpdateFunc();
	void ParryEffectTimeline__FinishedFunc();
	void ParryEffectTimeline__UpdateFunc();
	void OnNotifyEnd_DD0E388D4A609A44157FD295A0B1B80C(class FName NotifyName);
	void OnNotifyBegin_DD0E388D4A609A44157FD295A0B1B80C(class FName NotifyName);
	void OnInterrupted_DD0E388D4A609A44157FD295A0B1B80C(class FName NotifyName);
	void OnBlendOut_DD0E388D4A609A44157FD295A0B1B80C(class FName NotifyName);
	void OnCompleted_DD0E388D4A609A44157FD295A0B1B80C(class FName NotifyName);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void HandleSuccess(class AZero_Base_C* Char, class ABaseCharacter_C* ParriedChar);
	void DH_SpawnParticle();
	void ExecuteUbergraph_BP_CrossRiposteHandler(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName Temp_name_Variable, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IEnemyCommonInterface_C> K2Node_DynamicCast_AsEnemy_Common_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EnemyCommon_SkipDeathBlowReactionAnimation_ShouldSkip, bool K2Node_SwitchName_CmpSuccess, enum class EDynamicForceFeedbackAction Temp_byte_Variable, float K2Node_Event_DeltaSeconds, class AZero_Base_C* K2Node_CustomEvent_Char, class ABaseCharacter_C* K2Node_CustomEvent_ParriedChar, enum class ERiposteTypes CallFunc_GetCurrentlyEquippedSecondaryRiposte_Output, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess_1, class FName K2Node_CustomEvent_NotifyName_4, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, bool CallFunc_IsValid_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1, bool CallFunc_Not_PreBool_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ABP_RadialBlur_C* CallFunc_FinishSpawningActor_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2);
};

}


