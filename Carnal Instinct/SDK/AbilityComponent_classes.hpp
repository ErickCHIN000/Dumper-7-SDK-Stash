#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x140 - 0xB0)
// BlueprintGeneratedClass AbilityComponent.AbilityComponent_C
class UAbilityComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AAbility_C*                            CurrentAbility;                                    // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsPressed;                                         // 0xC0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsCasting;                                         // 0xC1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2AAA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACharacter*                            Character;                                         // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnAbilityStarted;                                  // 0xD0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnAbilityEnded;                                    // 0xE0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class ABP_SpellIndicator_C*                  SpellIndicator;                                    // 0xF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnManaConsumed;                                    // 0xF8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnAbilityChanged;                                  // 0x108(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UAnimMontage*                          RecentlyPlayedMontage;                             // 0x118(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnCastingChanged;                                  // 0x120(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnPressedChanged;                                  // 0x130(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UAbilityComponent_C* GetDefaultObj();

	void IsPlayingAbilityMontage(bool* Result, bool CallFunc_IsValid_ReturnValue, class UAnimMontage* CallFunc_GetCurrentMontage_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void EndAbility(enum class E_AbilityEndResult Result, bool CallFunc_GetIsPressed_Result, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetIsPressed_Result_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_CanAbilityBeCancelled_Result, bool CallFunc_IsUsingAbility_ReturnValue, bool CallFunc_GetIsCasting_Result);
	void SetIsCasting(bool Value, bool CallFunc_GetIsCasting_Result, bool CallFunc_NotEqual_BoolBool_ReturnValue);
	void SetIsPressed(bool Value, bool CallFunc_GetIsPressed_Result, bool CallFunc_NotEqual_BoolBool_ReturnValue);
	void ShouldRotateOnPressed(bool* RotateOnPressed, bool CallFunc_IsValid_ReturnValue);
	void GetAbilityCrosshair(class UTexture2D** Crosshair, bool CallFunc_IsValid_ReturnValue);
	void StopAbilityMontage(class UAnimMontage* CallFunc_GetCurrentMontage_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void PlayAbilityMontage(class UAnimMontage* Montage, float PlayRate, class FName Section, float* Duration, bool CallFunc_NotEqual_FloatFloat_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, float CallFunc_Montage_Play_ReturnValue);
	void IsAbilityValid(bool* Valid, bool CallFunc_IsValid_ReturnValue);
	void CanAbilityBeCancelled(bool* Result, bool CallFunc_IsValid_ReturnValue);
	void GetManaCost(float* Value, bool CallFunc_IsValid_ReturnValue);
	void UpdateSpellIndicatorLocation(const struct FVector& NewLocation, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void HideSpellIndicator(bool CallFunc_IsValid_ReturnValue);
	void ShowSpellIndicator(const struct FVector& Location, float Radius, class UMaterialInterface* Material, bool CallFunc_IsValid_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_SpellIndicator_C* CallFunc_FinishSpawningActor_ReturnValue);
	bool IsUsingAbility(bool CallFunc_GetIsCasting_Result, bool CallFunc_GetIsPressed_Result, bool CallFunc_BooleanOR_ReturnValue);
	void GetIsPressed(bool* Result);
	void GetIsCasting(bool* Result);
	void GetEffectTransform(struct FTransform* Transform, bool CallFunc_IsValid_ReturnValue);
	void IsAbilityUsingCrosshair(bool* Result, bool CallFunc_IsValid_ReturnValue);
	void StartAbility(bool* Result, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetIsCasting_Result, class AActor* CallFunc_GetOwner_ReturnValue, TScriptInterface<class II_AbilityComponent_C> K2Node_DynamicCast_AsI_Ability_Component, bool K2Node_DynamicCast_bSuccess, bool CallFunc_CanCastAbility_Result);
	void GetCurrentAbility(class AAbility_C** Ability);
	void UpdateAbility(class UClass* Ability, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_NotEqual_ClassClass_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AAbility_C* CallFunc_FinishSpawningActor_ReturnValue);
	void AbilityEffect();
	void ConsumeMana(float Amount);
	void AbilityChanged();
	void ReceiveBeginPlay();
	void AbilityReleased();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void AbilityPressed();
	void ExecuteUbergraph_AbilityComponent(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, float K2Node_CustomEvent_Amount, bool CallFunc_IsAbilityValid_Valid, bool CallFunc_IsUsingAbility_ReturnValue, bool CallFunc_GetIsPressed_Result, bool CallFunc_IsValid_ReturnValue_4, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess);
	void OnPressedChanged__DelegateSignature(bool IsPressed);
	void OnCastingChanged__DelegateSignature(bool IsCasting);
	void OnAbilityChanged__DelegateSignature(class AAbility_C* NewAbility);
	void OnManaConsumed__DelegateSignature(float Amount);
	void OnAbilityEnded__DelegateSignature(enum class E_AbilityEndResult Result);
	void OnAbilityStarted__DelegateSignature();
};

}


