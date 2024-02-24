#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x1A0 - 0x198)
// BlueprintGeneratedClass Ability_Mage_Spell_MageCast_GunDmgFireRt.Ability_Mage_Spell_MageCast_GunDmgFireRt_C
class UAbility_Mage_Spell_MageCast_GunDmgFireRt_C : public UAbility_All_Enchantment_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x198(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UAbility_Mage_Spell_MageCast_GunDmgFireRt_C* GetDefaultObj();

	void Enchantment_OnSpellCast(class AGrenadeMod* GrenadeMod, class AOakCharacter_Player* EquippedPlayer);
	void ExecuteUbergraph_Ability_Mage_Spell_MageCast_GunDmgFireRt(int32 EntryPoint, const struct FDataTableValueHandle& K2Node_MakeStruct_DataTableValueHandle, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetDataTableValueFromHandle_ReturnValue, bool CallFunc_HasPlayerClass_Res, class AGrenadeMod* K2Node_Event_GrenadeMod, class AOakCharacter_Player* K2Node_Event_EquippedPlayer, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue);
};

}


