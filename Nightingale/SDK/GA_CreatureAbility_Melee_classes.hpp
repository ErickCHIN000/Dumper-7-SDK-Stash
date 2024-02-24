#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x548 - 0x510)
// BlueprintGeneratedClass GA_CreatureAbility_Melee.GA_CreatureAbility_Melee_C
class UGA_CreatureAbility_Melee_C : public UGA_CreatureAbilityBase_C
{
public:
	struct FGameplayAttribute                    DamageAttribute;                                   // 0x510(0x38)(Edit, BlueprintVisible, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_CreatureAbility_Melee_C* GetDefaultObj();

	void SetCreaturePawnTargetTransform(const struct FGameplayTag& Temp_struct_Variable, const struct FVector& CallFunc_TryGetBlackboardVector_Value, enum class EBlackboardGetResult CallFunc_TryGetBlackboardVector_Branches, bool K2Node_SwitchEnum_CmpSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, TScriptInterface<class IBPI_Targeter_C> CallFunc_GetTarget_self_CastInput, class AActor* CallFunc_GetTarget_Target, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue);
	void CreatureAbilityInitialize(bool* bSuccess, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue, TArray<double>& K2Node_MakeArray_Array, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute_1, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue_1, double CallFunc_StandardBonusFormula_Total, double K2Node_MakeArray__0__ImplicitCast, double CallFunc_StandardBonusFormula_Base_ImplicitCast);
};

}


