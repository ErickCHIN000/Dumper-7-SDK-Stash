#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x1C8 - 0x198)
// BlueprintGeneratedClass Ability_All_Melee_MDmg_v_Healthy.Ability_All_Melee_MDmg_v_Healthy_C
class UAbility_All_Melee_MDmg_v_Healthy_C : public UAbility_All_Enchantment_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x198(0x8)(Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ConditionalDamageModifier RsrcCntrlr_GbxAbilityResourceController_ConditionalDamageModifier_Ability_All_Melee_Dmg_v_BossesBa_0; // 0x1A0(0x28)(None)

	static class UClass* StaticClass();
	static class UAbility_All_Melee_MDmg_v_Healthy_C* GetDefaultObj();

	void OnActivated();
	void OnDeactivated();
	void ExecuteUbergraph_Ability_All_Melee_MDmg_v_Healthy(int32 EntryPoint, const struct FGbxAbilityResourceSpec_ConditionalDamageModifier& K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier, const struct FGbxAbilityResourceSpec_ConditionalDamageModifier& K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier1);
};

}


