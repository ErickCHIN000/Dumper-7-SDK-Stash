#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x91 (0x229 - 0x198)
// BlueprintGeneratedClass Ability_All_Spell_SpellKill_WeapProj.Ability_All_Spell_SpellKill_WeapProj_C
class UAbility_All_Spell_SpellKill_WeapProj_C : public UAbility_All_Enchantment_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x198(0x8)(Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_All_Spell_SpellKill_WeapProj; // 0x1A0(0x28)(None)
	struct FAttributeEffectData                  AttEffect_BonusProjPerShot;                        // 0x1C8(0x48)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FGbxAttributeModifierHandle           AttEffectHandle_BonusProjPerShot;                  // 0x210(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UWwiseEvent*                           Audio_SpellKillAbility;                            // 0x220(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ExtraProjectileActive_;                            // 0x228(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UAbility_All_Spell_SpellKill_WeapProj_C* GetDefaultObj();

	void Enchantment_DoOnKillBehavior();
	void OnAbilityTimerEnded(struct FOakAbilityTimerSpec& Spec, struct FOakAbilityTimerResult& Result);
	void CE_WeaponUsed(class AWeapon* EventWeapon);
	void CE_RollBonusProj();
	void CE_Weap_Switched(class AWeapon* NewWeapon, class AWeapon* LastWeapon);
	void ExecuteUbergraph_Ability_All_Spell_SpellKill_WeapProj(int32 EntryPoint, const struct FOakAbilityTimerSpec& K2Node_Event_Spec, const struct FOakAbilityTimerResult& K2Node_Event_Result, class AWeapon* K2Node_CustomEvent_EventWeapon, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class AActor* CallFunc_GetAbilityOwner_ReturnValue, float CallFunc_EvaluateAttributeInitializer_ReturnValue, enum class EGbxAttributeModifierActionExecOutput CallFunc_ApplyAttributeEffect_ModifierActionResult, const struct FGbxAttributeModifierHandle& CallFunc_ApplyAttributeEffect_ReturnValue, bool CallFunc_RandomBoolWithWeight_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_RemoveAttributeModifier_ReturnValue, bool CallFunc_RemoveAttributeModifier_ReturnValue1, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1, class AWeapon* K2Node_CustomEvent_NewWeapon, class AWeapon* K2Node_CustomEvent_LastWeapon, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate2, const struct FDataTableValueHandle& K2Node_MakeStruct_DataTableValueHandle, float CallFunc_GetDataTableValueFromHandle_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, const struct FOakAbilityTimerSpec& K2Node_MakeStruct_OakAbilityTimerSpec, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate3);
};

}


