#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x1F0 - 0x198)
// BlueprintGeneratedClass Ability_Shaman_Gun_SpiritDamage_BonusPoison.Ability_Shaman_Gun_SpiritDamage_BonusPoison_C
class UAbility_Shaman_Gun_SpiritDamage_BonusPoison_C : public UAbility_All_Enchantment_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x198(0x8)(Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_Shaman_Gun_SpiritDamage_BonusPoison; // 0x1A0(0x28)(None)
	struct FGbxAbilityResourceController_ConditionalDamageModifier RsrcCntrlr_GbxAbilityResourceController_ConditionalDamageModifier_Ability_Shaman_Gun_SpiritDamage__0; // 0x1C8(0x28)(None)

	static class UClass* StaticClass();
	static class UAbility_Shaman_Gun_SpiritDamage_BonusPoison_C* GetDefaultObj();

	void OnActivated();
	void CausedDamage_ShamanEnch_BogSpirits(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
	void ExecuteUbergraph_Ability_Shaman_Gun_SpiritDamage_BonusPoison(int32 EntryPoint, class AActor* K2Node_CustomEvent_DamageInstigator, float K2Node_CustomEvent_Damage, class UGbxDamageType* K2Node_CustomEvent_DamageType, class UDamageSource* K2Node_CustomEvent_DamageSource, class AActor* K2Node_CustomEvent_DamagedActor, const struct FCausedDamageDetails& K2Node_CustomEvent_Details, const class FString& CallFunc_GetDisplayName_ReturnValue, class UOakDamageComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FGbxAbilityResourceSpec_ConditionalDamageModifier& K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier, bool CallFunc_Compare_Damage_Source_Equal, bool CallFunc_Compare_Damage_Source_Not_Equal, bool CallFunc_Compare_Damage_Source_Equal1, bool CallFunc_Compare_Damage_Source_Not_Equal1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_BooleanOR_ReturnValue, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate);
};

}


