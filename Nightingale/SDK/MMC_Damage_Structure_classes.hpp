#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x40 - 0x40)
// BlueprintGeneratedClass MMC_Damage_Structure.MMC_Damage_Structure_C
class UMMC_Damage_Structure_C : public UMMC_Damage_Base_C
{
public:

	static class UClass* StaticClass();
	static class UMMC_Damage_Structure_C* GetDefaultObj();

	void Hail_Modify(struct FGameplayEffectSpec& Spec, double InDamage, double* OutDamage, const struct FGameplayTag& CallFunc_EncounterOriginatorTag_EncounterOriginatorTag, const struct FGameplayEffectContextHandle& CallFunc_GetEffectContext_ReturnValue, class AActor* CallFunc_EffectContextGetInstigatorActor_ReturnValue, bool CallFunc_IsObjectHailDamageSource_ReturnValue, const struct FGameplayTag& CallFunc_CreatureOriginatorTag_CreatureOriginatorTag, const struct FGameplayTagContainer& CallFunc_GetSourceAggregatedTags_ReturnValue, bool CallFunc_ContainerContainsState_ReturnValue, bool CallFunc_ContainerContainsState_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
	void Repair_Modify(struct FGameplayEffectSpec& Spec, double InDamage, double* OutDamage, const struct FGameplayTag& Temp_struct_Variable, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, const struct FGameplayTagContainer& CallFunc_GetSourceAggregatedTags_ReturnValue, bool CallFunc_ContainerContainsState_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue);
	void Creature_Modify(const struct FGameplayEffectSpec& Spec, double InDamage, double* OutDamage, const struct FGameplayTag& CallFunc_HailDamageTag_HailDamageTag, const struct FGameplayTagContainer& CallFunc_GetSourceAggregatedTags_ReturnValue, const struct FGameplayTag& CallFunc_CreatureOriginatorTag_CreatureOriginatorTag, bool CallFunc_ContainerContainsState_ReturnValue, const struct FGameplayTagContainer& CallFunc_GetSourceAggregatedTags_ReturnValue_1, bool CallFunc_ContainerContainsState_ReturnValue_1);
	void Encounter_Modify(const struct FGameplayEffectSpec& Spec, double InDamage, double* OutDamage, const struct FGameplayTag& CallFunc_HailDamageTag_HailDamageTag, const struct FGameplayTagContainer& CallFunc_GetSourceAggregatedTags_ReturnValue, const struct FGameplayTag& CallFunc_EncounterOriginatorTag_EncounterOriginatorTag, bool CallFunc_ContainerContainsState_ReturnValue, const struct FGameplayTagContainer& CallFunc_GetSourceAggregatedTags_ReturnValue_1, bool CallFunc_ContainerContainsState_ReturnValue_1);
	float NWXCalculateBaseMagnitude(struct FGameplayEffectSpec& Spec, struct FTagValueContainer& MMCIntermediateOutputs, double Damage, float CallFunc_NWXCalculateBaseMagnitude_ReturnValue, const struct FGameplayEffectContextHandle& CallFunc_GetEffectContext_ReturnValue, class AActor* CallFunc_EffectContextGetInstigatorActor_ReturnValue, bool CallFunc_IsObjectHailDamageSource_ReturnValue, double CallFunc_Piece_Modify_OutDamage, double CallFunc_Repair_Modify_OutDamage, double CallFunc_Sledgehammer_Modify_OutDamage, double CallFunc_Piece_Modify_OutDamage_1, double CallFunc_Schematic_Modify_OutDamage, double CallFunc_Hail_Modify_OutDamage, float K2Node_FunctionResult_ReturnValue_ImplicitCast, float K2Node_FunctionResult_ReturnValue_ImplicitCast_1, double CallFunc_Schematic_Modify_InDamage_ImplicitCast);
	void Sledgehammer_Modify(struct FGameplayEffectSpec& Spec, double InDamage, double* OutDamage, double SledgehammerMultiplier, const struct FGameplayTag& CallFunc_SledgehammerTag_SledgehammerTag, const struct FGameplayTagContainer& CallFunc_GetSourceAggregatedTags_ReturnValue, bool CallFunc_HasTag_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue);
	void Piece_Modify(struct FGameplayEffectSpec& Spec, double InDamage, double* OutDamage, const struct FGameplayTag& CallFunc_PieceHealthTag_PieceHealthTag, double CallFunc_Multiply_DoubleDouble_ReturnValue, float CallFunc_GetSetByCallerMagnitudeInSpec_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_FMax_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, float CallFunc_GetSetByCallerMagnitudeInSpec_DefaultIfNotFound_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast);
	void Schematic_Modify(struct FGameplayEffectSpec& Spec, double InDamage, double* OutDamage, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, const struct FGameplayTag& CallFunc_SchematicTag_SchematicTag, const struct FGameplayTagContainer& CallFunc_GetTargetAggregatedTags_ReturnValue, bool CallFunc_ContainerContainsState_ReturnValue);
};

}


