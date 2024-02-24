#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x200 - 0x198)
// BlueprintGeneratedClass Ability_Mage_Guns_Polymorph_DamageAmp.Ability_Mage_Guns_Polymorph_DamageAmp_C
class UAbility_Mage_Guns_Polymorph_DamageAmp_C : public UAbility_All_Enchantment_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x198(0x8)(Transient, DuplicateTransient)
	class AActor*                                PolymorphedTarget;                                 // 0x1A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_Mage_Polymorph_DamageAmp; // 0x1A8(0x28)(None)
	struct FGbxAbilityResourceController_ConditionalDamageModifier RsrcCntrlr_GbxAbilityResourceController_ConditionalDamageModifier_Ability_Mage_Guns_Polymorph_Dama_0; // 0x1D0(0x28)(None)
	class UBPEventHub_PlayerCharacter_C*         PlayerEventHub;                                    // 0x1F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAbility_Mage_Guns_Polymorph_DamageAmp_C* GetDefaultObj();

	void OnActivated();
	void CE_Ench_PolymorphedTarget(class AActor* PolymorphedActor, bool WasImmune, class AActor* PolymorphDrone);
	void CE_Ench_PolymorphEnded(class AActor* PolymorphedTarget, bool KilledTarget, class AActor* PolymorphDrone);
	void OnDeactivated();
	void ExecuteUbergraph_Ability_Mage_Guns_Polymorph_DamageAmp(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* K2Node_CustomEvent_PolymorphedActor, bool K2Node_CustomEvent_WasImmune, class AActor* K2Node_CustomEvent_PolymorphDrone1, class UOakDamageComponent* CallFunc_GetComponentByClass_ReturnValue, class UBPEventHub_PlayerCharacter_C* K2Node_DynamicCast_AsBPEvent_Hub_Player_Character, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FGbxAbilityResourceSpec_ConditionalDamageModifier& K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier, class AActor* K2Node_CustomEvent_PolymorphedTarget, bool K2Node_CustomEvent_KilledTarget, class AActor* K2Node_CustomEvent_PolymorphDrone, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UOakDamageComponent* CallFunc_GetComponentByClass_ReturnValue1, const struct FGbxAbilityResourceSpec_ConditionalDamageModifier& K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier1, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate, class UOakDamageComponent* CallFunc_GetComponentByClass_ReturnValue2, bool CallFunc_IsValid_ReturnValue, const struct FGbxAbilityResourceSpec_ConditionalDamageModifier& K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier2, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate3);
};

}


