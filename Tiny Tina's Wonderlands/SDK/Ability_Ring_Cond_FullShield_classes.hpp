#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x5E (0x190 - 0x132)
// BlueprintGeneratedClass Ability_Ring_Cond_FullShield.Ability_Ring_Cond_FullShield_C
class UAbility_Ring_Cond_FullShield_C : public UBP_InventoryAbility_C
{
public:
	uint8                                        Pad_35D1[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x138(0x8)(Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ResourcePoolDelegate RsrcCntrlr_GbxAbilityResourceController_ResourcePoolDelegate_Ability_Ring_Cond_LowShield; // 0x140(0x28)(None)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_Ring_Cond_FullShield; // 0x168(0x28)(None)

	static class UClass* StaticClass();
	static class UAbility_Ring_Cond_FullShield_C* GetDefaultObj();

	void CE_ShieldNowNotFilled(const struct FGameResourcePoolReference& ResourcePool);
	void CE_ShieldNowFilled(const struct FGameResourcePoolReference& ResourcePool);
	void OnDeactivated();
	void OnActivated();
	void RemoveRingEffect();
	void RingUser_ShieldUnequipped();
	void ExecuteUbergraph_Ability_Ring_Cond_FullShield(int32 EntryPoint, const struct FGameResourcePoolReference& K2Node_CustomEvent_ResourcePool1, const struct FGameResourcePoolReference& K2Node_CustomEvent_ResourcePool, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FGbxAbilityResourceSpec_ResourcePoolDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ResourcePoolDelegate, const struct FGbxAbilityResourceSpec_ResourcePoolDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ResourcePoolDelegate1, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, const struct FStatusEffectRemoveSpec& K2Node_MakeStruct_StatusEffectRemoveSpec, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue, bool CallFunc_RemoveStatusEffect_ReturnValue, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec1, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue1, float CallFunc_GetMaxShield_ReturnValue, float CallFunc_GetCurrentShield_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_HasShieldEquipped_ReturnValue, bool CallFunc_HasShieldEquipped_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate);
};

}


