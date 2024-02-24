#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x144 (0x364 - 0x220)
// BlueprintGeneratedClass BP_ParryShell.BP_ParryShell_C
class ABP_ParryShell_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*              P_groundtrail;                                     // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDecalComponent*                       Decal;                                             // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                   SpotLight;                                         // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                DarkForm_Ghost;                                    // 0x240(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Darkform;                                          // 0x248(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SK_ShellDetaching;                                 // 0x250(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x258(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_HideDarkForm_Amount_9EADBC07404F88A81B5A41A6B78E2875; // 0x260(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_HideDarkForm__Direction_9EADBC07404F88A81B5A41A6B78E2875; // 0x264(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_19FF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_HideDarkForm;                             // 0x268(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_ShowGhot_light_EAA42AF84AA91CA87F69E39EEA1478CF; // 0x270(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_ShowGhot_amount_EAA42AF84AA91CA87F69E39EEA1478CF; // 0x274(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_ShowGhot__Direction_EAA42AF84AA91CA87F69E39EEA1478CF; // 0x278(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A16[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_ShowGhot;                                 // 0x280(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_FadeOut_ShellDetaching_Alpha_E4FCA8EA42CDE829300BC3BC842C17D2; // 0x288(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_FadeOut_ShellDetaching__Direction_E4FCA8EA42CDE829300BC3BC842C17D2; // 0x28C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A1E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_FadeOut_ShellDetaching;                   // 0x290(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FinalHitTimeline_TimeDilation_6FB82D9A43C0A58D929315973DF44CA2; // 0x298(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                FinalHitTimeline__Direction_6FB82D9A43C0A58D929315973DF44CA2; // 0x29C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A26[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    FinalHitTimeline;                                  // 0x2A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ParryHitTimeline_TimeDilation_42B0184E42922508BAC815A243737DBC; // 0x2A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                ParryHitTimeline__Direction_42B0184E42922508BAC815A243737DBC; // 0x2AC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A34[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    ParryHitTimeline;                                  // 0x2B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FadeOutDarkform_NewTrack_0_2D0FE9DC4F1507B09701E58D49D28B84; // 0x2B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                FadeOutDarkform__Direction_2D0FE9DC4F1507B09701E58D49D28B84; // 0x2BC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A44[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    FadeOutDarkform;                                   // 0x2C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABaseCharacter_C*                      ParriedChar;                                       // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnRiposteCompleted;                                // 0x2D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnFadeOut;                                         // 0x2E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class AZero_Base_C*                          ZeroBase;                                          // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         ParticleEffectCompleted;                           // 0x2F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1A4E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnParticlesEnded;                                  // 0x300(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                        Combo_Damage;                                      // 0x310(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        Combo_Damage_Bonus;                                // 0x314(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        Combo_Damage_Multiplier;                           // 0x318(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        Ghost_Damage;                                      // 0x31C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        Ghost_Damage_Bonus;                                // 0x320(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        Ghost_Damage_Multiplier;                           // 0x324(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        Ghost_FreezeChance;                                // 0x328(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        Ghost_PoisonDuration;                              // 0x32C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        Ghost_PoisonDamageDPS;                             // 0x330(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        Ghost_WeakenMultiplier;                            // 0x334(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<class AActor*>                        IgnoreActors;                                      // 0x338(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnRiposteInterrupted;                              // 0x348(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         UseMasterPoseComponent;                            // 0x358(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_1A8D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  RiposteUpgradeID;                                  // 0x35C(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_ParryShell_C* GetDefaultObj();

	void DarkFormGhost_ApplyDamage(class AActor* Actor, class AEnemyCharacter_C* Local_Enemy, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess_1, class FName CallFunc_StormMode_GetCurrentUpgradeForSlot_ID, bool K2Node_SwitchName_CmpSuccess, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_1, float CallFunc_RandomFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, const class FString& CallFunc_GetDisplayName_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_ApplyDamage_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2);
	void SetDarkFormShell(class USkeletalMesh* CallFunc_GetMeshForArmorType_ReturnValue, class USkeletalMesh* CallFunc_GetMeshForArmorType_ReturnValue_1);
	void SetDetachingShell(class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, class USkeletalMesh* CallFunc_GetMeshForArmorType_ReturnValue);
	void SpawnEffects(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_RadialBlur_C* CallFunc_FinishSpawningActor_ReturnValue);
	void SetParriedEnemyAsLockOnTarget(class ABaseCharacter_C* ParriedEnemy, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void SetIsMasterPoseComponent();
	void FadeOutDarkform__FinishedFunc();
	void FadeOutDarkform__UpdateFunc();
	void ParryHitTimeline__FinishedFunc();
	void ParryHitTimeline__UpdateFunc();
	void FinalHitTimeline__FinishedFunc();
	void FinalHitTimeline__UpdateFunc();
	void Timeline_ShowGhot__FinishedFunc();
	void Timeline_ShowGhot__UpdateFunc();
	void Timeline_HideDarkForm__FinishedFunc();
	void Timeline_HideDarkForm__UpdateFunc();
	void Timeline_FadeOut_ShellDetaching__FinishedFunc();
	void Timeline_FadeOut_ShellDetaching__UpdateFunc();
	void OnNotifyEnd_87F1D06F4F4A726E14C71CBFF47E4D61(class FName NotifyName);
	void OnNotifyBegin_87F1D06F4F4A726E14C71CBFF47E4D61(class FName NotifyName);
	void OnInterrupted_87F1D06F4F4A726E14C71CBFF47E4D61(class FName NotifyName);
	void OnBlendOut_87F1D06F4F4A726E14C71CBFF47E4D61(class FName NotifyName);
	void OnCompleted_87F1D06F4F4A726E14C71CBFF47E4D61(class FName NotifyName);
	void ParryMissed();
	void PerformRiposte(class ABaseCharacter_C* ParriedChar);
	void FadeOutDF();
	void BndEvt__DarkForm_Ghost_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void ExecuteUbergraph_BP_ParryShell(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName Temp_name_Variable, bool K2Node_SwitchName_CmpSuccess, bool Temp_bool_Variable, const struct FTransform& CallFunc_GetTransform_ReturnValue, class ABaseCharacter_C* K2Node_CustomEvent_ParriedChar, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_RadialBlur_C* CallFunc_FinishSpawningActor_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, const struct FTransform& CallFunc_GetTransform_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, class ABP_RadialBlur_C* CallFunc_FinishSpawningActor_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_4, class APlayerController* CallFunc_GetPlayerController_ReturnValue_5, class APlayerController* CallFunc_GetPlayerController_ReturnValue_6, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, enum class ERiposteTypes CallFunc_GetCurrentlyEquippedSecondaryRiposte_Output, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, const struct FVector& CallFunc_DirectionTo2D_Dir, class USkeletalMeshComponent* K2Node_Select_Default, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, bool CallFunc_Not_PreBool_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1, bool CallFunc_Not_PreBool_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_7, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_ApplyDamage_ReturnValue);
	void OnRiposteInterrupted__DelegateSignature();
	void OnParticlesEnded__DelegateSignature();
	void OnFadeOut__DelegateSignature();
	void OnRiposteCompleted__DelegateSignature();
};

}


