#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC8 (0x358 - 0x290)
// BlueprintGeneratedClass LostControl_Dorg.LostControl_Dorg_C
class ALostControl_Dorg_C : public AGenericLostControlEffect_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x290(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                DorgMesh;                                          // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADog_Character_C*                      DorgActor;                                         // 0x2A0(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AnimationIsPlaying;                                // 0x2A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_134E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWeaponAnimMontageInfo                PlayingMontage;                                    // 0x2B0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                        DotTickTime;                                       // 0x2C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DotDamage;                                         // 0x2CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          DamageTimer;                                       // 0x2D0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        MontageEndSectionDuration;                         // 0x2D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1358[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          DorgMontage;                                       // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CorrectionRotation;                                // 0x2E8(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_135C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWeaponDetailedAnimMontageInfo        PlayerQTEMontages;                                 // 0x2F8(0x60)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class ALostControl_Dorg_C* GetDefaultObj();

	void PlayEnd(bool CallFunc_IsValid_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue);
	void ReturnControl(class ASHPlayerCharacter* CallFunc_GetCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void PlayInterrupt(bool CallFunc_IsValid_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue);
	void ReceiveTick(float DeltaSeconds);
	void OnFinish(bool bWasInterruptedByQTE);
	void OnApply();
	void DealDamage();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ExecuteUbergraph_LostControl_Dorg(int32 EntryPoint, float K2Node_Event_DeltaSeconds, bool CallFunc_IsValid_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, float CallFunc_Montage_Play_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsAlive_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class ASHPlayerCharacter* CallFunc_GetCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_InDyingState_ReturnValue, bool CallFunc_IsAlive_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, class ASHPlayerCharacter* CallFunc_GetCharacter_ReturnValue_1, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, bool CallFunc_IsInFirstPerson_ReturnValue, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_4, float CallFunc_GetWorldDeltaSeconds_ReturnValue, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue_1, const struct FVector& CallFunc_GetForwardVector_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ASHPlayerCharacter* CallFunc_GetCharacter_ReturnValue_2, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_5, float CallFunc_BreakRotator_Roll_2, float CallFunc_BreakRotator_Pitch_2, float CallFunc_BreakRotator_Yaw_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_6, class ASHPlayerCharacter* CallFunc_GetCharacter_ReturnValue_3, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue_2, bool CallFunc_IsInFirstPerson_ReturnValue_1, float CallFunc_BreakRotator_Roll_3, float CallFunc_BreakRotator_Pitch_3, float CallFunc_BreakRotator_Yaw_3, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue_2, const struct FRotator& CallFunc_RInterpTo_ReturnValue, float CallFunc_BreakRotator_Roll_4, float CallFunc_BreakRotator_Pitch_4, float CallFunc_BreakRotator_Yaw_4, bool CallFunc_K2_SetActorRotation_ReturnValue_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue_2, const struct FRotator& CallFunc_GetControlRotation_ReturnValue, class AController* CallFunc_GetController_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, const struct FRotator& CallFunc_RInterpTo_ReturnValue_1, bool K2Node_Event_bWasInterruptedByQTE, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class ASHPlayerCharacter* CallFunc_GetCharacter_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_4, float CallFunc_ApplyDamage_ReturnValue, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, class ASHPlayerCharacter* CallFunc_GetCharacter_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsAlive_ReturnValue_2, class ASHPlayerCharacter* CallFunc_GetCharacter_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_InDyingState_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsAlive_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, float Temp_float_Variable, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_HasAuthority_ReturnValue, float Temp_float_Variable_1, bool Temp_bool_Variable, class ASHPlayerCharacter* CallFunc_GetCharacter_ReturnValue_7, float K2Node_Select_Default, class ASHPlayerCharacter* CallFunc_GetCharacter_ReturnValue_8, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_VInterpTo_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, class ASHPlayerCharacter* CallFunc_GetCharacter_ReturnValue_9, const struct FWeaponAnimMontageInfo& CallFunc_GetCurrentWeaponMontage_ReturnValue, bool CallFunc_IsWalking_ReturnValue, float CallFunc_PlayWeaponAnimation_ReturnValue, bool CallFunc_IsCrouching_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_4);
};

}


