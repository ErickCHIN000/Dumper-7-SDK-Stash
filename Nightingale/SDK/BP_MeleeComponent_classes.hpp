#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x5C (0xFC - 0xA0)
// BlueprintGeneratedClass BP_MeleeComponent.BP_MeleeComponent_C
class UBP_MeleeComponent_C : public UActorComponent
{
public:
	FMulticastInlineDelegateProperty_            OnMeleeAttack;                                     // 0xA0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FGameplayTag                          MeleeImpactTag;                                    // 0xB0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          AnimCachedMeleeImpactTag;                          // 0xB8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       MeleeImpactTagCacheEndTimeInSeconds;               // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MeleeImpactTagCacheBufferTimeInSeconds;            // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       PowerSwingDamageModifier;                          // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       PowerSwingStrengthModifier;                        // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       SameTargetComboDamageBonus;                        // 0xE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ComboDamageModifier;                               // 0xE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ClientOnly_CanRetriggerSwing;                      // 0xF0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ClientOnly_InDualComboWindow;                      // 0xF1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7AC9[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ClientOnly_DualComboSection;                       // 0xF4(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_MeleeComponent_C* GetDefaultObj();

	void ClientOnly_SetDualCombo(bool TEMP_InDualComboWindow, class FName TEMP_DualComboSection, bool CallFunc_AreAutomatedTestsRunning_ReturnValue, bool CallFunc_IsServer_ReturnValue);
	void GetDualCombo(bool* TEMP_InDualComboWindow, class FName* TEMP_DualComboSection);
	void StartScreenShake(class ABP_Character_C* Player, class ABP_EquippableItemBase_C* Item, class ANWXPlayerController* CallFunc_GetPlayerControllerFromCharacter_PlayerController, TArray<struct FGameplayTag>& CallFunc_GetItemDataTraits_Traits, bool CallFunc_IsValid_ReturnValue, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromArray_ReturnValue, double CallFunc_GetScreenShakeModifier_ShakeModifier, bool CallFunc_UsingAThirdPersonCamera_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, float CallFunc_ClientStartCameraShake_Scale_ImplicitCast, float CallFunc_ClientStartCameraShake_Scale_ImplicitCast_1);
	void InitializeMeleeWeaponData(const struct FItemData_WeaponMelee& MeleeWeaponData, double K2Node_VariableSet_PowerSwingDamageModifier_ImplicitCast, double K2Node_VariableSet_PowerSwingStrengthModifier_ImplicitCast, double K2Node_VariableSet_ComboDamageModifier_ImplicitCast);
	void GetCanRetriggerSwing(bool* CanRetriggerSwing);
	void ClientOnly_SetCanRetriggerSwing(bool CanRetriggerSwing, bool CallFunc_AreAutomatedTestsRunning_ReturnValue, bool CallFunc_IsServer_ReturnValue);
	void ClearMeleeImpactTagCache(double CallFunc_GetGameTimeInSeconds_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue);
	void CacheMeleeImpactTag(struct FGameplayTag& MeleeImpactTagToCache, double CacheDuration, double CallFunc_GetGameTimeInSeconds_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1);
	void GetSameTargetComboDamageBonus(double* Modifier);
	double GetPowerSwingStrengthModifier();
	void GetComboDamageModifier(double* Modifier);
	void GetPowerSwingDamageModifier(double* Modifier);
	void GetImpactTag(struct FGameplayTag* ImpactTag, double CallFunc_GetGameTimeInSeconds_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue);
	void GetRaycastRange(double* Range);
	void OnMeleeAttack__DelegateSignature();
};

}


