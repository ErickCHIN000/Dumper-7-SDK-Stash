#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x1128 - 0x1108)
// BlueprintGeneratedClass BP_SesterDaggersBase.BP_SesterDaggersBase_C
class ABP_SesterDaggersBase_C : public ABasicMeleeEnemy_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1108(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x1110(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Dagger;                                            // 0x1118(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Rapier;                                            // 0x1120(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_SesterDaggersBase_C* GetDefaultObj();

	void GetMeleeTraceEnd(class FName OptionalSocketOverride, struct FVector* TraceEnd, bool K2Node_SwitchName_CmpSuccess, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_1);
	void GetMeleeTraceStart(class FName OptionalSocketOverride, struct FVector* TraceStart, bool K2Node_SwitchName_CmpSuccess, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_1);
	void OnNotifyEnd_E50FC84E424814F85C3039902AFE61C5(class FName NotifyName);
	void OnNotifyBegin_E50FC84E424814F85C3039902AFE61C5(class FName NotifyName);
	void OnInterrupted_E50FC84E424814F85C3039902AFE61C5(class FName NotifyName);
	void OnBlendOut_E50FC84E424814F85C3039902AFE61C5(class FName NotifyName);
	void OnCompleted_E50FC84E424814F85C3039902AFE61C5(class FName NotifyName);
	void OnNotifyEnd_F79AA1774D3F2EA8C16D6992EADE2905(class FName NotifyName);
	void OnNotifyBegin_F79AA1774D3F2EA8C16D6992EADE2905(class FName NotifyName);
	void OnInterrupted_F79AA1774D3F2EA8C16D6992EADE2905(class FName NotifyName);
	void OnBlendOut_F79AA1774D3F2EA8C16D6992EADE2905(class FName NotifyName);
	void OnCompleted_F79AA1774D3F2EA8C16D6992EADE2905(class FName NotifyName);
	void OnNotifyEnd_FE19792D4F8583CBE022A9809D52533A(class FName NotifyName);
	void OnNotifyBegin_FE19792D4F8583CBE022A9809D52533A(class FName NotifyName);
	void OnInterrupted_FE19792D4F8583CBE022A9809D52533A(class FName NotifyName);
	void OnBlendOut_FE19792D4F8583CBE022A9809D52533A(class FName NotifyName);
	void OnCompleted_FE19792D4F8583CBE022A9809D52533A(class FName NotifyName);
	void OnNotifyEnd_225948F4407AEDA9347C04AD16374DFA(class FName NotifyName);
	void OnNotifyBegin_225948F4407AEDA9347C04AD16374DFA(class FName NotifyName);
	void OnInterrupted_225948F4407AEDA9347C04AD16374DFA(class FName NotifyName);
	void OnBlendOut_225948F4407AEDA9347C04AD16374DFA(class FName NotifyName);
	void OnCompleted_225948F4407AEDA9347C04AD16374DFA(class FName NotifyName);
	void OnWasAggroed();
	void ClientPlayImpactSound(const struct FVector& ImpactLocation, class AActor* HitActor);
	void PlayAttackMontage(class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, class FName StartingSection);
	void SelectAttack(float DistanceFromPlayer);
	void PlayLightHitReaction();
	void ForceHeavyStaggerDamage(const struct FVector& DirectionToSource);
	void PlayDeathMontage();
	void EnemyDeath(class AActor* Killer, bool bShouldPlayDeathAnim);
	void ExecuteUbergraph_BP_SesterDaggersBase(int32 EntryPoint, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FName K2Node_CustomEvent_NotifyName_16, class FName K2Node_CustomEvent_NotifyName_15, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName Temp_name_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_SwitchName_CmpSuccess, class FName K2Node_CustomEvent_NotifyName_14, class FName K2Node_CustomEvent_NotifyName_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName K2Node_CustomEvent_NotifyName_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class FName Temp_name_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class FName K2Node_CustomEvent_NotifyName_9, class FName K2Node_CustomEvent_NotifyName_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class FName K2Node_CustomEvent_NotifyName_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class FName K2Node_CustomEvent_NotifyName_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class FName K2Node_CustomEvent_NotifyName_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class FName Temp_name_Variable_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, class FName K2Node_CustomEvent_NotifyName_2, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, class FName K2Node_CustomEvent_NotifyName, class FName Temp_name_Variable_3, bool CallFunc_EqualEqual_NameName_ReturnValue, class FName K2Node_CustomEvent_NotifyName_17, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UTwinSisters_Daggers_AnimBlueprint_C* K2Node_DynamicCast_AsTwin_Sisters_Daggers_Anim_Blueprint, bool K2Node_DynamicCast_bSuccess, const struct FVector& K2Node_Event_ImpactLocation, class AActor* K2Node_Event_HitActor, int32 CallFunc_SelectRandomAttack_SelectedAttack, bool K2Node_SwitchInteger_CmpSuccess, class UAnimMontage* K2Node_Event_MontageToPlay, float K2Node_Event_PlayRate, float K2Node_Event_StartingPosition, class FName K2Node_Event_StartingSection, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, float K2Node_Event_DistanceFromPlayer, class FName K2Node_CustomEvent_NotifyName_18, float CallFunc_UpdateCurrentMontagePlayLength_PlayLengthAtDefaultPlaybackSpeed, const struct FVector& K2Node_Event_DirectionToSource, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, class FName CallFunc_MakeLiteralName_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_17, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_3, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, float CallFunc_UpdateCurrentMontagePlayLength_PlayLengthAtDefaultPlaybackSpeed_1, class FName K2Node_CustomEvent_NotifyName_19, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_18, class AActor* K2Node_Event_Killer, bool K2Node_Event_bShouldPlayDeathAnim, class AController* CallFunc_GetController_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_19);
};

}


