#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x36 (0x168 - 0x132)
// BlueprintGeneratedClass Ability_Ring_Cond_Healthy.Ability_Ring_Cond_Healthy_C
class UAbility_Ring_Cond_Healthy_C : public UBP_InventoryAbility_C
{
public:
	uint8                                        Pad_1C6A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x138(0x8)(Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_Ring_Cond_LowHealth; // 0x140(0x28)(None)

	static class UClass* StaticClass();
	static class UAbility_Ring_Cond_Healthy_C* GetDefaultObj();

	void OnActivated();
	void CE_HeallthState_Changed(enum class EHealthState HealthState);
	void ExecuteUbergraph_Ability_Ring_Cond_Healthy(int32 EntryPoint, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec1, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class EHealthState K2Node_CustomEvent_HealthState, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FStatusEffectRemoveSpec& K2Node_MakeStruct_StatusEffectRemoveSpec, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate, bool CallFunc_RemoveStatusEffect_ReturnValue);
};

}


