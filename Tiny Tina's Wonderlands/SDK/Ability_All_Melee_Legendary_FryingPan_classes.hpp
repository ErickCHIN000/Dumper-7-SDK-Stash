#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x1F0 - 0x198)
// BlueprintGeneratedClass Ability_All_Melee_Legendary_FryingPan.Ability_All_Melee_Legendary_FryingPan_C
class UAbility_All_Melee_Legendary_FryingPan_C : public UAbility_Melee_HiltMod_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x198(0x8)(Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_All_Melee_Legendary_FryingPan; // 0x1A0(0x28)(None)
	struct FGbxAbilityResourceController_ConditionalDamageModifier RsrcCntrlr_GbxAbilityResourceController_ConditionalDamageModifier_Ability_All_Melee_Legendary_Fryi_0; // 0x1C8(0x28)(None)

	static class UClass* StaticClass();
	static class UAbility_All_Melee_Legendary_FryingPan_C* GetDefaultObj();

	void CE_FryingPan_MeleeStart(class UPlayerMeleeData* MeleeData, bool bSuccess, class AActor* MeleeTarget);
	void OnDeactivated();
	void OnActivated();
	void CE_FryingPan_MeleeEnd(class UPlayerMeleeData* MeleeData, bool bSuccess, class AActor* MeleeTarget);
	void ExecuteUbergraph_Ability_All_Melee_Legendary_FryingPan(int32 EntryPoint, class UPlayerMeleeData* K2Node_CustomEvent_MeleeData, bool K2Node_CustomEvent_bSuccess, class AActor* K2Node_CustomEvent_MeleeTarget, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, const struct FStatusEffectRemoveSpec& K2Node_MakeStruct_StatusEffectRemoveSpec, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue, bool CallFunc_RemoveStatusEffect_ReturnValue, class UPlayerMeleeData* K2Node_CustomEvent_MeleeData1, bool K2Node_CustomEvent_bSuccess1, class AActor* K2Node_CustomEvent_MeleeTarget1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPlayerMeleeStateComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec1, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue1, const struct FGbxAbilityResourceSpec_ConditionalDamageModifier& K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier);
};

}


