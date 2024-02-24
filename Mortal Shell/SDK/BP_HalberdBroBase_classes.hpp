#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x1128 - 0x1108)
// BlueprintGeneratedClass BP_HalberdBroBase.BP_HalberdBroBase_C
class ABP_HalberdBroBase_C : public ABasicMeleeEnemy_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1108(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                Halberd;                                           // 0x1110(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RagdollBlend_Anim_12ACFEA549014F541B655DB08FB14AA1; // 0x1118(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                RagdollBlend__Direction_12ACFEA549014F541B655DB08FB14AA1; // 0x111C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3377[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    RagdollBlend;                                      // 0x1120(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_HalberdBroBase_C* GetDefaultObj();

	void EnableHalberdPhysicsSimulation();
	void GetMeleeTraceEnd(class FName OptionalSocketOverride, struct FVector* TraceEnd, const struct FVector& CallFunc_GetSocketLocation_ReturnValue);
	void GetMeleeTraceStart(class FName OptionalSocketOverride, struct FVector* TraceStart, const struct FVector& CallFunc_GetSocketLocation_ReturnValue);
	void RagdollBlend__FinishedFunc();
	void RagdollBlend__UpdateFunc();
	void OnNotifyEnd_ADEAA5434476F6C62E2D638E01E9A356(class FName NotifyName);
	void OnNotifyBegin_ADEAA5434476F6C62E2D638E01E9A356(class FName NotifyName);
	void OnInterrupted_ADEAA5434476F6C62E2D638E01E9A356(class FName NotifyName);
	void OnBlendOut_ADEAA5434476F6C62E2D638E01E9A356(class FName NotifyName);
	void OnCompleted_ADEAA5434476F6C62E2D638E01E9A356(class FName NotifyName);
	void OnNotifyEnd_6D782025485527483570F5993AC1F6E1(class FName NotifyName);
	void OnNotifyBegin_6D782025485527483570F5993AC1F6E1(class FName NotifyName);
	void OnInterrupted_6D782025485527483570F5993AC1F6E1(class FName NotifyName);
	void OnBlendOut_6D782025485527483570F5993AC1F6E1(class FName NotifyName);
	void OnCompleted_6D782025485527483570F5993AC1F6E1(class FName NotifyName);
	void OnNotifyEnd_381B29C04BB63848EBAEC19DA81E93DB(class FName NotifyName);
	void OnNotifyBegin_381B29C04BB63848EBAEC19DA81E93DB(class FName NotifyName);
	void OnInterrupted_381B29C04BB63848EBAEC19DA81E93DB(class FName NotifyName);
	void OnBlendOut_381B29C04BB63848EBAEC19DA81E93DB(class FName NotifyName);
	void OnCompleted_381B29C04BB63848EBAEC19DA81E93DB(class FName NotifyName);
	void OnNotifyEnd_8029C9E54E89C2DF5B3A5EA7F2374241(class FName NotifyName);
	void OnNotifyBegin_8029C9E54E89C2DF5B3A5EA7F2374241(class FName NotifyName);
	void OnInterrupted_8029C9E54E89C2DF5B3A5EA7F2374241(class FName NotifyName);
	void OnBlendOut_8029C9E54E89C2DF5B3A5EA7F2374241(class FName NotifyName);
	void OnCompleted_8029C9E54E89C2DF5B3A5EA7F2374241(class FName NotifyName);
	void OnNotifyEnd_E3E673E14FF28A660F7BE7B205FD52D4(class FName NotifyName);
	void OnNotifyBegin_E3E673E14FF28A660F7BE7B205FD52D4(class FName NotifyName);
	void OnInterrupted_E3E673E14FF28A660F7BE7B205FD52D4(class FName NotifyName);
	void OnBlendOut_E3E673E14FF28A660F7BE7B205FD52D4(class FName NotifyName);
	void OnCompleted_E3E673E14FF28A660F7BE7B205FD52D4(class FName NotifyName);
	void OnWasAggroed();
	void PlayAttackMontage(class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, class FName StartingSection);
	void SelectAttack(float DistanceFromPlayer);
	void PlayLightHitReaction();
	void ForceHeavyStaggerDamage(const struct FVector& DirectionToSource);
	void PlayDeathMontage();
	void EnemyDeath(class AActor* Killer, bool bShouldPlayDeathAnim);
	void ExecuteUbergraph_BP_HalberdBroBase(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_21, class FName K2Node_CustomEvent_NotifyName_20, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName Temp_name_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_SwitchName_CmpSuccess, class FName K2Node_CustomEvent_NotifyName_19, class FName K2Node_CustomEvent_NotifyName_18, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_17, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName_16, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName K2Node_CustomEvent_NotifyName_15, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class FName Temp_name_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class FName K2Node_CustomEvent_NotifyName_14, class FName K2Node_CustomEvent_NotifyName_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class FName K2Node_CustomEvent_NotifyName_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class FName K2Node_CustomEvent_NotifyName_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class FName K2Node_CustomEvent_NotifyName_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class FName Temp_name_Variable_2, class FName K2Node_CustomEvent_NotifyName_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class FName K2Node_CustomEvent_NotifyName_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, class FName K2Node_CustomEvent_NotifyName_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, class FName K2Node_CustomEvent_NotifyName_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, class FName K2Node_CustomEvent_NotifyName_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, class FName Temp_name_Variable_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_17, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_18, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_19, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_20, class FName Temp_name_Variable_4, bool CallFunc_EqualEqual_NameName_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_21, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UHalberdBro_animBP_C* K2Node_DynamicCast_AsHalberd_Bro_Anim_BP, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_22, int32 CallFunc_SelectRandomAttack_SelectedAttack, bool K2Node_SwitchInteger_CmpSuccess, class FName K2Node_CustomEvent_NotifyName_23, class UAnimMontage* K2Node_Event_MontageToPlay, float K2Node_Event_PlayRate, float K2Node_Event_StartingPosition, class FName K2Node_Event_StartingSection, float K2Node_Event_DistanceFromPlayer, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_23, float CallFunc_UpdateCurrentMontagePlayLength_PlayLengthAtDefaultPlaybackSpeed, const struct FVector& K2Node_Event_DirectionToSource, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class FName CallFunc_MakeLiteralName_ReturnValue, class FName K2Node_CustomEvent_NotifyName_24, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, float CallFunc_UpdateCurrentMontagePlayLength_PlayLengthAtDefaultPlaybackSpeed_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_24, class FName K2Node_CustomEvent_NotifyName_22, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_5, class AActor* K2Node_Event_Killer, bool K2Node_Event_bShouldPlayDeathAnim, class AController* CallFunc_GetController_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_7, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_8);
};

}


