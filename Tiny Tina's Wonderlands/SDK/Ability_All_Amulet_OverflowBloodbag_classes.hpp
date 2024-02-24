#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x42 (0x174 - 0x132)
// BlueprintGeneratedClass Ability_All_Amulet_OverflowBloodbag.Ability_All_Amulet_OverflowBloodbag_C
class UAbility_All_Amulet_OverflowBloodbag_C : public UBP_InventoryAbility_C
{
public:
	uint8                                        Pad_203B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x138(0x8)(Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_All_Amulet_SacSkeep; // 0x140(0x28)(None)
	class ABPChar_Player_C*                      PlayerOwner;                                       // 0x168(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        OverflowHP;                                        // 0x170(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAbility_All_Amulet_OverflowBloodbag_C* GetDefaultObj();

	void OnActivated();
	void CE_TookHealing(class AActor* HealReceiver, float Healing, class AActor* HealInstigator, class UDamageSource* DamageSource, class UDamageType* DamageType);
	void ExecuteUbergraph_Ability_All_Amulet_OverflowBloodbag(int32 EntryPoint, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue, class AActor* CallFunc_GetAbilityOwner_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* CallFunc_GetOwner_ReturnValue, class ABPChar_Player_C* K2Node_DynamicCast_AsBPChar_Player, bool K2Node_DynamicCast_bSuccess, class AActor* K2Node_CustomEvent_HealReceiver, float K2Node_CustomEvent_Healing, class AActor* K2Node_CustomEvent_HealInstigator, class UDamageSource* K2Node_CustomEvent_DamageSource, class UDamageType* K2Node_CustomEvent_DamageType, bool CallFunc_Compare_Damage_Source_Equal, bool CallFunc_Compare_Damage_Source_Not_Equal, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate, float CallFunc_GetCurrentHealthPercent_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue);
};

}


