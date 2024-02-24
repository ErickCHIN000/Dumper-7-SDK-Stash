#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3E (0x170 - 0x132)
// BlueprintGeneratedClass Ability_Ring_Cond_SkillCooldown.Ability_Ring_Cond_SkillCooldown_C
class UAbility_Ring_Cond_SkillCooldown_C : public UBP_InventoryAbility_C
{
public:
	uint8                                        Pad_1031[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x138(0x8)(Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_Ring_Cond_SkillCooldown; // 0x140(0x28)(None)
	class UOakActionAbility*                     CachedActionSkill;                                 // 0x168(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAbility_Ring_Cond_SkillCooldown_C* GetDefaultObj();

	void CE_ActionSkillCoolingDown(class UOakActionAbility* ActionAbility);
	void CE_ActionSkillReady(class UOakActionAbility* ActionAbility);
	void RingCond_ActionSkillActivated(class UOakActionAbility* ActionAbility);
	void OnActivated();
	void ExecuteUbergraph_Ability_Ring_Cond_SkillCooldown(int32 EntryPoint, class UOakActionAbility* K2Node_CustomEvent_ActionAbility2, class UOakPlayerAbilityManagerComponent* CallFunc_GetComponentByClass_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UOakActionAbility* K2Node_CustomEvent_ActionAbility1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue, const struct FStatusEffectRemoveSpec& K2Node_MakeStruct_StatusEffectRemoveSpec, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1, bool CallFunc_RemoveStatusEffect_ReturnValue, class UOakActionAbility* K2Node_CustomEvent_ActionAbility, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate2, class UOakPlayerAbilityManagerComponent* CallFunc_GetComponentByClass_ReturnValue1, class UOakPlayerAbility* CallFunc_GetSlotAbility_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
};

}


