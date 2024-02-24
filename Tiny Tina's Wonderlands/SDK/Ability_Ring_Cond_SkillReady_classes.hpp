#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x36 (0x168 - 0x132)
// BlueprintGeneratedClass Ability_Ring_Cond_SkillReady.Ability_Ring_Cond_SkillReady_C
class UAbility_Ring_Cond_SkillReady_C : public UBP_InventoryAbility_C
{
public:
	uint8                                        Pad_450C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x138(0x8)(Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_Ring_Cond_SkillCooldown; // 0x140(0x28)(None)

	static class UClass* StaticClass();
	static class UAbility_Ring_Cond_SkillReady_C* GetDefaultObj();

	void OnActivated();
	void CE_ActionSkillActivated(class UOakActionAbility* ActionAbility);
	void CE_ActionSkillReady(class UOakActionAbility* ActionAbility);
	void ExecuteUbergraph_Ability_Ring_Cond_SkillReady(int32 EntryPoint, const struct FStatusEffectRemoveSpec& K2Node_MakeStruct_StatusEffectRemoveSpec, bool CallFunc_RemoveStatusEffect_ReturnValue, class UOakActionAbility* K2Node_CustomEvent_ActionAbility1, class ABPChar_Player_C* K2Node_DynamicCast_AsBPChar_Player, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UOakActionAbility* K2Node_CustomEvent_ActionAbility, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue);
};

}


