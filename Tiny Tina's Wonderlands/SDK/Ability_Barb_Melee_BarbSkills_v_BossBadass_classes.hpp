#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x1C8 - 0x198)
// BlueprintGeneratedClass Ability_Barb_Melee_BarbSkills_v_BossBadass.Ability_Barb_Melee_BarbSkills_v_BossBadass_C
class UAbility_Barb_Melee_BarbSkills_v_BossBadass_C : public UAbility_All_Enchantment_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x198(0x8)(Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ConditionalDamageModifier RsrcCntrlr_GbxAbilityResourceController_ConditionalDamageModifier_Ability_Barb_Melee_BarbSkills_v__0; // 0x1A0(0x28)(None)

	static class UClass* StaticClass();
	static class UAbility_Barb_Melee_BarbSkills_v_BossBadass_C* GetDefaultObj();

	void OnDeactivated();
	void OnActivated();
	void ExecuteUbergraph_Ability_Barb_Melee_BarbSkills_v_BossBadass(int32 EntryPoint, class AActor* CallFunc_GetAbilityOwner_ReturnValue, const struct FStatusEffectRemoveSpec& K2Node_MakeStruct_StatusEffectRemoveSpec, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_RemoveStatusEffect_ReturnValue, const struct FGbxAbilityResourceSpec_ConditionalDamageModifier& K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier, const struct FGbxAbilityResourceSpec_ConditionalDamageModifier& K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier1, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue);
};

}


