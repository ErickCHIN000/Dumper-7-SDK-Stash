#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x88 - 0x88)
// BlueprintGeneratedClass Cond_KotC_CanAddToAura.Cond_KotC_CanAddToAura_C
class UCond_KotC_CanAddToAura_C : public UGbxCondition_Blueprint
{
public:

	static class UClass* StaticClass();
	static class UCond_KotC_CanAddToAura_C* GetDefaultObj();

	bool EvaluateCondition(class UObject* Context, class UObject* OptionalContext, class ASpellActor_Hydra_Base_C* K2Node_DynamicCast_AsSpell_Actor_Hydra_Base, bool K2Node_DynamicCast_bSuccess, class ADrone_PlayerCompanionParent_C* K2Node_DynamicCast_AsDrone_Player_Companion_Parent, bool K2Node_DynamicCast_bSuccess1, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess2);
};

}


