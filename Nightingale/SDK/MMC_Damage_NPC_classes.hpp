#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x40 - 0x40)
// BlueprintGeneratedClass MMC_Damage_NPC.MMC_Damage_NPC_C
class UMMC_Damage_NPC_C : public UMMC_Damage_Creature_C
{
public:

	static class UClass* StaticClass();
	static class UMMC_Damage_NPC_C* GetDefaultObj();

	float NWXCalculateBaseMagnitude(struct FGameplayEffectSpec& Spec, struct FTagValueContainer& MMCIntermediateOutputs, float CallFunc_NWXCalculateBaseMagnitude_ReturnValue, double CallFunc_NPC_Modify_OutDamage, float K2Node_FunctionResult_ReturnValue_ImplicitCast, double CallFunc_NPC_Modify_InDamage_ImplicitCast);
	void NPC_Modify(const struct FGameplayEffectSpec& Spec, double InDamage, double* OutDamage, class AEquippableItem* InstigatorItem, float TotalMagicPower, class AActor* Instigator, const struct FGameplayTagContainer& SourceAggregatedTags, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, class AEquippableItem* Temp_object_Variable, bool CallFunc_HasTag_ReturnValue, bool CallFunc_IsValid_ReturnValue, double CallFunc_Get_Healing_Touch_Perk_Maximum_Heal_Value_Maximum_Heal, double CallFunc_Get_Healing_Touch_Perk_Dealing_Multiplication_Curve_Healing_Multiplier, TScriptInterface<class ILoadoutReadInterface> K2Node_DynamicCast_AsLoadout_Read_Interface, bool K2Node_DynamicCast_bSuccess, const struct FGameplayAttribute& Temp_struct_Variable, class AEquippableItem* CallFunc_GetEquippedItem_ReturnValue, float CallFunc_CalculateItemAttributeValue_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FGameplayEffectContextHandle& CallFunc_GetEffectContext_ReturnValue, class AActor* CallFunc_EffectContextGetInstigatorActor_ReturnValue, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_FMin_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, const struct FGameplayTagContainer& CallFunc_GetSourceAggregatedTags_ReturnValue, const struct FGameplayTag& CallFunc_PlayerOwnedTag_PlayerOwnedTag, const struct FGameplayTag& CallFunc_PlayerControlledTag_ReturnValue, bool CallFunc_ContainerContainsState_ReturnValue, bool CallFunc_ContainerContainsState_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, double CallFunc_Add_DoubleDouble_B_ImplicitCast, double CallFunc_Get_Healing_Touch_Perk_Dealing_Multiplication_Curve_Magic_Power_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float K2Node_VariableSet_TotalMagicPower_ImplicitCast);
};

}


