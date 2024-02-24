#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x2C0 - 0x290)
// BlueprintGeneratedClass LostControl_X-LiftTeleport.LostControl_X-LiftTeleport_C
class ALostControl_XMinusLiftTeleport_C : public AGenericLostControlEffect_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x290(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         IsPlayingTeleportMontage;                          // 0x298(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsPlaying;                                         // 0x299(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_11E0[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioComponent*                       BreathSound;                                       // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AXMinusLift_C*                         TeleportToLift;                                    // 0x2A8(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AXMinusLift_C*                         TeleportFromLift;                                  // 0x2B0(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ALevelSequenceActor*                   PlayingLevelSequence;                              // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ALostControl_XMinusLiftTeleport_C* GetDefaultObj();

	void TeleportTo(const struct FRotator& CallFunc_MakeRotator_ReturnValue, class ASHPlayerCharacter* CallFunc_GetCharacter_ReturnValue, class ASHPlayerCharacter* CallFunc_GetCharacter_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_K2_TeleportTo_ReturnValue);
	void ReturnControl(class ASHPlayerCharacter* CallFunc_GetCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void GetControl(class ASHPlayerCharacter* CallFunc_GetCharacter_ReturnValue);
	void OnNotifyEnd_ECE1B325466F494F343A689A0B81BED6(class FName NotifyName);
	void OnNotifyBegin_ECE1B325466F494F343A689A0B81BED6(class FName NotifyName);
	void OnInterrupted_ECE1B325466F494F343A689A0B81BED6(class FName NotifyName);
	void OnBlendOut_ECE1B325466F494F343A689A0B81BED6(class FName NotifyName);
	void OnCompleted_ECE1B325466F494F343A689A0B81BED6(class FName NotifyName);
	void ReceiveTick(float DeltaSeconds);
	void OnApply();
	void OnFinish(bool bWasInterruptedByQTE);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void OnLiftTeleported();
	void ServerTeleport();
	void OnStop();
	void OnExitStop();
	void ServerFinish();
	void MulticastTeleport();
	void ExecuteUbergraph_LostControl_XMinusLiftTeleport(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_2, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName Temp_name_Variable, bool Temp_bool_Variable, const struct FVector& Temp_struct_Variable, const struct FVector& Temp_struct_Variable_1, class FName K2Node_CustomEvent_NotifyName_4, float K2Node_Event_DeltaSeconds, bool K2Node_Event_bWasInterruptedByQTE, class ASHPlayerCharacter* CallFunc_GetCharacter_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, class ASHWeapon* CallFunc_GetCurrentWeapon_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, class ASHPlayerCharacter* CallFunc_GetCharacter_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_IsInLoadingState_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FMovieSceneSequencePlaybackSettings& K2Node_MakeStruct_MovieSceneSequencePlaybackSettings, class ALevelSequenceActor* CallFunc_CreateLevelSequencePlayer_OutActor, class ULevelSequencePlayer* CallFunc_CreateLevelSequencePlayer_ReturnValue, class ASHPlayerCharacter* CallFunc_GetCharacter_ReturnValue_2, TArray<class AActor*>& K2Node_MakeArray_Array, class ASHPlayerCharacter* CallFunc_GetCharacter_ReturnValue_3, bool CallFunc_IsLocallyControlled_ReturnValue_1, class ASHPlayerCharacter* CallFunc_GetCharacter_ReturnValue_4, float CallFunc_PlayAnimMontage_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, const struct FMovieSceneSequencePlaybackSettings& K2Node_MakeStruct_MovieSceneSequencePlaybackSettings_1, class ALevelSequenceActor* CallFunc_CreateLevelSequencePlayer_OutActor_1, class ULevelSequencePlayer* CallFunc_CreateLevelSequencePlayer_ReturnValue_1, TArray<class AActor*>& K2Node_MakeArray_Array_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class ASHPlayerCharacter* CallFunc_GetCharacter_ReturnValue_5, bool CallFunc_HasAuthority_ReturnValue, class ASHPlayerCharacter* CallFunc_GetCharacter_ReturnValue_6, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class ASHPlayerCharacter* CallFunc_GetCharacter_ReturnValue_7, class ASHPlayerCharacter* CallFunc_GetCharacter_ReturnValue_8, class ASHPlayerCharacter* CallFunc_GetCharacter_ReturnValue_9, class ASHPlayerCharacter* CallFunc_GetCharacter_ReturnValue_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, bool CallFunc_IsInFirstPerson_ReturnValue, class ASHPlayerCharacter* CallFunc_GetCharacter_ReturnValue_11, const struct FVector& K2Node_Select_Default, class AController* CallFunc_GetController_ReturnValue, float CallFunc_GetUnscaledCapsuleHalfHeight_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_TransformLocation_ReturnValue, const struct FVector& CallFunc_TransformLocation_ReturnValue_1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocationAndRotation_SweepHitResult, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue);
};

}


