#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x36 (0x168 - 0x132)
// BlueprintGeneratedClass Ability_Ring_Cond_LowShield.Ability_Ring_Cond_LowShield_C
class UAbility_Ring_Cond_LowShield_C : public UBP_InventoryAbility_C
{
public:
	uint8                                        Pad_40DF[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x138(0x8)(Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ResourcePoolDelegate RsrcCntrlr_GbxAbilityResourceController_ResourcePoolDelegate_Ability_Ring_Cond_LowShield; // 0x140(0x28)(None)

	static class UClass* StaticClass();
	static class UAbility_Ring_Cond_LowShield_C* GetDefaultObj();

	void OnActivated();
	void CE_ShieldNowNotFilled(const struct FGameResourcePoolReference& ResourcePool);
	void CE_ShieldNowFilled(const struct FGameResourcePoolReference& ResourcePool);
	void ExecuteUbergraph_Ability_Ring_Cond_LowShield(int32 EntryPoint, const struct FStatusEffectRemoveSpec& K2Node_MakeStruct_StatusEffectRemoveSpec, bool CallFunc_RemoveStatusEffect_ReturnValue, const struct FGameResourcePoolReference& K2Node_CustomEvent_ResourcePool1, const struct FGameResourcePoolReference& K2Node_CustomEvent_ResourcePool, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FGbxAbilityResourceSpec_ResourcePoolDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ResourcePoolDelegate, const struct FGbxAbilityResourceSpec_ResourcePoolDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ResourcePoolDelegate1, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue);
};

}


