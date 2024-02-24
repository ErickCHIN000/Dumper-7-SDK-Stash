#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE6 (0x3F8 - 0x312)
// BlueprintGeneratedClass Usable_Chalice.Usable_Chalice_C
class AUsable_Chalice_C : public AUsable_Actor_C
{
public:
	uint8                                        Pad_2E54[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x318(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USpotLightComponent*                   SpotLight1;                                        // 0x320(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                  PointLight;                                        // 0x328(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Chalice;                                           // 0x330(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        InterpToCHalcieTimeline_Alpha_B63B106049C85BE3BE5FB5950BD768B7; // 0x338(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                InterpToCHalcieTimeline__Direction_B63B106049C85BE3BE5FB5950BD768B7; // 0x33C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2E67[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    InterpToCHalcieTimeline;                           // 0x340(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            TeleportPlayerToBoss;                              // 0x348(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UBriefFadeToBlack_C*                   BriefFadeToBlackWB;                                // 0x358(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          InterpToChalice;                                   // 0x360(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USkipCutscene_C*                       SkipCutsceneWB;                                    // 0x368(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CanSkipCutscene;                                   // 0x370(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         EnableInputOnEnd;                                  // 0x371(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2E74[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  BossDefeatedString;                                // 0x374(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector                               DesiredPlayerLocation;                             // 0x37C(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              DesiredPlayerRotation;                             // 0x388(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2E83[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameplayPC_C*                         GameplayPC;                                        // 0x398(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AZero_Base_C*                          ZeroBase;                                          // 0x3A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBriefReturnFromBlackFade_C*           BriefReturnfromFadeToBlackWB;                      // 0x3A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TeleportBlacknessDelay;                            // 0x3B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2E92[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class ALevelSequenceActor>    ChaliceCutscene;                                   // 0x3B8(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            DestroyCathedralNonBossEnemies;                    // 0x3E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class ULevelSequencePlayer*                  Sequence;                                          // 0x3F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AUsable_Chalice_C* GetDefaultObj();

	void UnbindFadeToBlackCompleted(bool CallFunc_IsValid_ReturnValue);
	void SetIsInCutscene(bool IsInCutscene, bool CallFunc_IsValid_ReturnValue);
	void GetIsActorUsable(bool* IsUsable, bool CallFunc_CheckForNearbyEnemies_ReturnValue, bool CallFunc_GetIsActorUsable_IsUsable);
	void SetPlayerDesiredRotationAndLocation(float CallFunc_GetScaledCapsuleHalfHeight_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_GetRightVector_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue);
	void OnActorUsed(class APlayerController* Controller, bool* Success, bool CallFunc_CheckForNearbyEnemies_ReturnValue, bool CallFunc_OnActorUsed_Success);
	void InterpToCHalcieTimeline__FinishedFunc();
	void InterpToCHalcieTimeline__UpdateFunc();
	void OnNotifyEnd_72D470C344A1370C777DE9B461609CF9(class FName NotifyName);
	void OnNotifyBegin_72D470C344A1370C777DE9B461609CF9(class FName NotifyName);
	void OnInterrupted_72D470C344A1370C777DE9B461609CF9(class FName NotifyName);
	void OnBlendOut_72D470C344A1370C777DE9B461609CF9(class FName NotifyName);
	void OnCompleted_72D470C344A1370C777DE9B461609CF9(class FName NotifyName);
	void OnNotifyEnd_7608A40C4AC3E23C2D778EA99699EBBF(class FName NotifyName);
	void OnNotifyBegin_7608A40C4AC3E23C2D778EA99699EBBF(class FName NotifyName);
	void OnInterrupted_7608A40C4AC3E23C2D778EA99699EBBF(class FName NotifyName);
	void OnBlendOut_7608A40C4AC3E23C2D778EA99699EBBF(class FName NotifyName);
	void OnCompleted_7608A40C4AC3E23C2D778EA99699EBBF(class FName NotifyName);
	void OnNotifyEnd_BE49EA7E47C6E20475BB48AB15F50C43(class FName NotifyName);
	void OnNotifyBegin_BE49EA7E47C6E20475BB48AB15F50C43(class FName NotifyName);
	void OnInterrupted_BE49EA7E47C6E20475BB48AB15F50C43(class FName NotifyName);
	void OnBlendOut_BE49EA7E47C6E20475BB48AB15F50C43(class FName NotifyName);
	void OnCompleted_BE49EA7E47C6E20475BB48AB15F50C43(class FName NotifyName);
	void BeginInterpPlayerToChalice();
	void InterpPlayerToChalice();
	void BeginTeleportingSequence();
	void CathedralTrap();
	void AdjustChaliceAfterUsed();
	void CutsceneSkip_Enable();
	void FadeToBlackEnd();
	void ReceiveBeginPlay();
	void PuzzleCompleted();
	void PlayerUsedBossBook();
	void BeginningFadeToBlack_End_Set();
	void ChaliceCutscene_Start();
	void FadeInCompleted();
	void ChaliceCutscene_Bind();
	void BeginningFadeToBlack_End_Bind();
	void FadeBackIn();
	void ChalicheCutscene_Completed();
	void ChaliceCutscene_OnNotifyBegin(class FName Notify);
	void ChalicheCutscene_Interrupted();
	void TeleportToBossOnCutsceneFinish();
	void ForcedFadeToBlackAndTeleport();
	void PlayChaliceCutscene();
	void ExecuteUbergraph_Usable_Chalice(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_9, class FName K2Node_CustomEvent_NotifyName_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName Temp_name_Variable, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class FName K2Node_CustomEvent_NotifyName_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, class FName Temp_name_Variable_1, bool CallFunc_EqualEqual_NameName_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, TScriptInterface<class IGameModeUtilInterface_C> K2Node_DynamicCast_AsGame_Mode_Util_Interface, bool K2Node_DynamicCast_bSuccess, class FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_GetArbNameInChangedSetPure_bIsInSet, class FName K2Node_CustomEvent_NotifyName_14, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_17, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, const struct FRotator& CallFunc_RInterpTo_ReturnValue, const struct FVector& CallFunc_VInterpTo_ReturnValue, bool CallFunc_EqualEqual_VectorVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult, bool CallFunc_IsValid_ReturnValue_2, class FName Temp_name_Variable_2, class FName K2Node_CustomEvent_NotifyName_10, bool CallFunc_SetStaticMesh_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_18, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, class FName K2Node_CustomEvent_NotifyName_11, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UBriefFadeToBlack_C* CallFunc_Create_ReturnValue, class FName K2Node_CustomEvent_Notify, bool K2Node_SwitchName_CmpSuccess, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UBriefReturnFromBlackFade_C* CallFunc_Create_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_19, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_GetArbNameInChangedSetPure_bIsInSet_1, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class ALevelSequenceActor* K2Node_DynamicCast_AsLevel_Sequence_Actor, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_20, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class FName CallFunc_GetCurrentPersistentLevelName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, class FName CallFunc_GetCurrentPersistentLevelName_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue_2, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class FName K2Node_CustomEvent_NotifyName_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_21, class FName K2Node_CustomEvent_NotifyName_13, class UDHGameInstance* CallFunc_GetInstance_ReturnValue, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_1, class UDHRayTracing* CallFunc_GetRayTracingSettings_ReturnValue, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_2, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FRotator& CallFunc_RLerp_ReturnValue, const struct FVector& CallFunc_VLerp_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue);
	void DestroyCathedralNonBossEnemies__DelegateSignature();
	void TeleportPlayerToBoss__DelegateSignature();
};

}


