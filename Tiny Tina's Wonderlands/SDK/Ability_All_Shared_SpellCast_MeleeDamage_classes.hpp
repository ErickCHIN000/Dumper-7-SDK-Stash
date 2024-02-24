#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x1A0 - 0x198)
// BlueprintGeneratedClass Ability_All_Shared_SpellCast_MeleeDamage.Ability_All_Shared_SpellCast_MeleeDamage_C
class UAbility_All_Shared_SpellCast_MeleeDamage_C : public UAbility_All_Enchantment_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x198(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UAbility_All_Shared_SpellCast_MeleeDamage_C* GetDefaultObj();

	void Enchantment_OnSpellCast(class AGrenadeMod* GrenadeMod, class AOakCharacter_Player* EquippedPlayer);
	void ExecuteUbergraph_Ability_All_Shared_SpellCast_MeleeDamage(int32 EntryPoint, const struct FDataTableValueHandle& K2Node_MakeStruct_DataTableValueHandle, float CallFunc_GetDataTableValueFromHandle_ReturnValue, class AGrenadeMod* K2Node_Event_GrenadeMod, class AOakCharacter_Player* K2Node_Event_EquippedPlayer, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue);
};

}


