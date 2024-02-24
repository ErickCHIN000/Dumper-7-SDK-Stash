#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x1120 - 0x1108)
// BlueprintGeneratedClass BP_SwordBroBase.BP_SwordBroBase_C
class ABP_SwordBroBase_C : public ABasicMeleeEnemy_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1108(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                LavaBlade_L;                                       // 0x1110(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                LavaBlade_R;                                       // 0x1118(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_SwordBroBase_C* GetDefaultObj();

	void GetMeleeTraceEnd(class FName OptionalSocketOverride, struct FVector* TraceEnd, bool K2Node_SwitchName_CmpSuccess, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_1);
	void GetMeleeTraceStart(class FName OptionalSocketOverride, struct FVector* TraceStart, bool K2Node_SwitchName_CmpSuccess, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_1);
	void OnNotifyEnd_195E397846399CE283D43283CA6805F3(class FName NotifyName);
	void OnNotifyBegin_195E397846399CE283D43283CA6805F3(class FName NotifyName);
	void OnInterrupted_195E397846399CE283D43283CA6805F3(class FName NotifyName);
	void OnBlendOut_195E397846399CE283D43283CA6805F3(class FName NotifyName);
	void OnCompleted_195E397846399CE283D43283CA6805F3(class FName NotifyName);
	void OnNotifyEnd_111B1FD9401EBBEBBE12C6B53A706F90(class FName NotifyName);
	void OnNotifyBegin_111B1FD9401EBBEBBE12C6B53A706F90(class FName NotifyName);
	void OnInterrupted_111B1FD9401EBBEBBE12C6B53A706F90(class FName NotifyName);
	void OnBlendOut_111B1FD9401EBBEBBE12C6B53A706F90(class FName NotifyName);
	void OnCompleted_111B1FD9401EBBEBBE12C6B53A706F90(class FName NotifyName);
	void OnNotifyEnd_7034FFEC4827BBCF84ACCCA704237F22(class FName NotifyName);
	void OnNotifyBegin_7034FFEC4827BBCF84ACCCA704237F22(class FName NotifyName);
	void OnInterrupted_7034FFEC4827BBCF84ACCCA704237F22(class FName NotifyName);
	void OnBlendOut_7034FFEC4827BBCF84ACCCA704237F22(class FName NotifyName);
	void OnCompleted_7034FFEC4827BBCF84ACCCA704237F22(class FName NotifyName);
	void OnNotifyEnd_10BDCB63467BC1A01A8BB79C82CBF71E(class FName NotifyName);
	void OnNotifyBegin_10BDCB63467BC1A01A8BB79C82CBF71E(class FName NotifyName);
	void OnInterrupted_10BDCB63467BC1A01A8BB79C82CBF71E(class FName NotifyName);
	void OnBlendOut_10BDCB63467BC1A01A8BB79C82CBF71E(class FName NotifyName);
	void OnCompleted_10BDCB63467BC1A01A8BB79C82CBF71E(class FName NotifyName);
	void OnWasAggroed();
	void PlayAttackMontage(class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, class FName StartingSection);
	void SelectAttack(float DistanceFromPlayer);
	void PlayLightHitReaction();
	void ForceHeavyStaggerDamage(const struct FVector& DirectionToSource);
	void PlayDeathMontage();
	void EnemyDeath(class AActor* Killer, bool bShouldPlayDeathAnim);
	void ExecuteUbergraph_BP_SwordBroBase(int32 EntryPoint, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FName K2Node_CustomEvent_NotifyName_16, class FName K2Node_CustomEvent_NotifyName_15, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName Temp_name_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_SwitchName_CmpSuccess, class FName K2Node_CustomEvent_NotifyName_14, class FName K2Node_CustomEvent_NotifyName_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName K2Node_CustomEvent_NotifyName_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class FName Temp_name_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class FName K2Node_CustomEvent_NotifyName_9, class FName K2Node_CustomEvent_NotifyName_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class FName K2Node_CustomEvent_NotifyName_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class FName K2Node_CustomEvent_NotifyName_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class FName K2Node_CustomEvent_NotifyName_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class FName Temp_name_Variable_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, class FName K2Node_CustomEvent_NotifyName_2, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, class FName K2Node_CustomEvent_NotifyName, class FName Temp_name_Variable_3, bool CallFunc_EqualEqual_NameName_ReturnValue, class FName K2Node_CustomEvent_NotifyName_17, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, int32 CallFunc_SelectRandomAttack_SelectedAttack, class USwordBro_animBP_C* K2Node_DynamicCast_AsSword_Bro_Anim_BP, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchInteger_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16, class UAnimMontage* K2Node_Event_MontageToPlay, float K2Node_Event_PlayRate, float K2Node_Event_StartingPosition, class FName K2Node_Event_StartingSection, float K2Node_Event_DistanceFromPlayer, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_UpdateCurrentMontagePlayLength_PlayLengthAtDefaultPlaybackSpeed, class FName K2Node_CustomEvent_NotifyName_18, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2, const struct FVector& K2Node_Event_DirectionToSource, bool CallFunc_IsValid_ReturnValue_2, class FName CallFunc_MakeLiteralName_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_17, float CallFunc_UpdateCurrentMontagePlayLength_PlayLengthAtDefaultPlaybackSpeed_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_18, class AActor* K2Node_Event_Killer, bool K2Node_Event_bShouldPlayDeathAnim, class FName K2Node_CustomEvent_NotifyName_19, class AController* CallFunc_GetController_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_19);
};

}


