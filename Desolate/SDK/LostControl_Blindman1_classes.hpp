#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x2F8 - 0x290)
// BlueprintGeneratedClass LostControl_Blindman1.LostControl_Blindman1_C
class ALostControl_Blindman1_C : public AGenericLostControlEffect_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x290(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                DorgMesh;                                          // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABlindMan_Character_C*                 BlindMan;                                          // 0x2A0(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AnimationIsPlaying;                                // 0x2A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_131A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DotTickTime;                                       // 0x2AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DotDamage;                                         // 0x2B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_131C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          DamageTimer;                                       // 0x2B8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        MontageEndFailSectionDuration;                     // 0x2C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MontageEndSectionDuration;                         // 0x2C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          BlindmanMontage;                                   // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CorrectionRotation;                                // 0x2D0(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1324[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWeaponAnimMontageInfo                PlayerMontage;                                     // 0x2E0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class ALostControl_Blindman1_C* GetDefaultObj();

	void BlindmanStopAnimation(class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue);
	void PlayQTEEnd(float CallFunc_PlayWeaponAnimation_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, float CallFunc_Montage_Play_ReturnValue);
	void ReturnControl(class ASHPlayerCharacter* CallFunc_GetCharacter_ReturnValue, class ASHWeapon* CallFunc_GetCurrentWeapon_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ASHPlayerCharacter* CallFunc_GetCharacter_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2);
	void PlayEndFail(float CallFunc_PlayWeaponAnimation_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, float CallFunc_Montage_Play_ReturnValue);
	void OnApply();
	void ReceiveTick(float DeltaSeconds);
	void OnFinish(bool bWasInterruptedByQTE);
	void DealDamage();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ExecuteUbergraph_LostControl_Blindman1(int32 EntryPoint, class ASHPlayerCharacter* CallFunc_GetCharacter_ReturnValue, class ASHWeapon* CallFunc_GetCurrentWeapon_ReturnValue, bool CallFunc_IsValid_ReturnValue, float K2Node_Event_DeltaSeconds, bool CallFunc_IsValid_ReturnValue_1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class ASHPlayerCharacter* CallFunc_GetCharacter_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_InDyingState_ReturnValue, bool CallFunc_IsAlive_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_IsAlive_ReturnValue_1, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, bool CallFunc_BooleanAND_ReturnValue_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue, class ASHPlayerCharacter* CallFunc_GetCharacter_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, bool CallFunc_IsInFirstPerson_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, float CallFunc_GetWorldDeltaSeconds_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_4, float CallFunc_GetWorldDeltaSeconds_ReturnValue_1, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue_1, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_5, float CallFunc_BreakRotator_Roll_2, float CallFunc_BreakRotator_Pitch_2, float CallFunc_BreakRotator_Yaw_2, class ASHPlayerCharacter* CallFunc_GetCharacter_ReturnValue_3, class ASHPlayerCharacter* CallFunc_GetCharacter_ReturnValue_4, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_6, bool CallFunc_IsInFirstPerson_ReturnValue_1, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue_2, float CallFunc_BreakRotator_Roll_3, float CallFunc_BreakRotator_Pitch_3, float CallFunc_BreakRotator_Yaw_3, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue_2, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, float CallFunc_BreakRotator_Roll_4, float CallFunc_BreakRotator_Pitch_4, float CallFunc_BreakRotator_Yaw_4, const struct FRotator& CallFunc_RInterpTo_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_2, bool CallFunc_K2_SetActorRotation_ReturnValue_1, const struct FRotator& CallFunc_GetControlRotation_ReturnValue, class AController* CallFunc_GetController_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_4, const struct FRotator& CallFunc_RInterpTo_ReturnValue_1, bool K2Node_Event_bWasInterruptedByQTE, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class ASHPlayerCharacter* CallFunc_GetCharacter_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_5, float CallFunc_ApplyDamage_ReturnValue, float Temp_float_Variable, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, class ASHPlayerCharacter* CallFunc_GetCharacter_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsAlive_ReturnValue_2, class ASHPlayerCharacter* CallFunc_GetCharacter_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_InDyingState_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsAlive_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, enum class EEndPlayReason K2Node_Event_EndPlayReason, float Temp_float_Variable_1, bool CallFunc_HasAuthority_ReturnValue, bool Temp_bool_Variable, class ASHPlayerCharacter* CallFunc_GetCharacter_ReturnValue_8, float K2Node_Select_Default, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, class ASHPlayerCharacter* CallFunc_GetCharacter_ReturnValue_9, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_VInterpTo_ReturnValue, bool CallFunc_IsWalking_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, bool CallFunc_IsCrouching_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_4, float CallFunc_Montage_Play_ReturnValue, float CallFunc_PlayWeaponAnimation_ReturnValue);
};

}


