#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x50 - 0x40)
// BlueprintGeneratedClass EEC_FlameWeaponDoT.EEC_FlameWeaponDoT_C
class UEEC_FlameWeaponDoT_C : public UNWXGameplayEffectExecutionCalculation
{
public:
	double                                       BaseDamage;                                        // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                           ScalingCurve;                                      // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UEEC_FlameWeaponDoT_C* GetDefaultObj();

	void Execute(struct FGameplayEffectCustomExecutionParameters& ExecutionParams, struct FGameplayEffectCustomExecutionOutput* OutExecutionOutput, class UAbilitySystemComponent* CallFunc_GetTargetAbilitySystemComponent_ReturnValue, class UAbilitySystemComponent* CallFunc_GetSourceAbilitySystemComponent_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, double CallFunc_ScaleSpellDamage_ScaledDamage, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character, bool K2Node_DynamicCast_bSuccess);
};

}


