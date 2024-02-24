#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x1E0 - 0x198)
// BlueprintGeneratedClass Ability_All_Melee_Legendary_DiamondGuard.Ability_All_Melee_Legendary_DiamondGuard_C
class UAbility_All_Melee_Legendary_DiamondGuard_C : public UAbility_Melee_HiltMod_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x198(0x8)(Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ConditionalDamageModifier RsrcCntrlr_GbxAbilityResourceController_ConditionalDamageModifier_Ability_All_Melee_Legendary_Diam_0; // 0x1A0(0x28)(None)
	int32                                        IndexCDM;                                          // 0x1C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3766[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UConditionalDamageTypeModifier*> CDMArray;                                          // 0x1D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UAbility_All_Melee_Legendary_DiamondGuard_C* GetDefaultObj();

	void OnActivated();
	void DoHiltMod_Hit(class UGbxDamageType* DamageType, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
	void OnDeactivated();
	void ExecuteUbergraph_Ability_All_Melee_Legendary_DiamondGuard(int32 EntryPoint, const struct FDataTableValueHandle& K2Node_MakeStruct_DataTableValueHandle, float CallFunc_GetDataTableValueFromHandle_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, class UConditionalDamageTypeModifier* CallFunc_Array_Get_Item, class UGbxDamageType* K2Node_Event_DamageType, class AActor* K2Node_Event_DamagedActor, const struct FCausedDamageDetails& K2Node_Event_Details, class UConditionalDamageTypeModifier* CallFunc_Array_Get_Item1, int32 CallFunc_RandomIntegerInRange_ReturnValue1, class UConditionalDamageTypeModifier* CallFunc_Array_Get_Item2, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, const struct FGbxAbilityResourceSpec_ConditionalDamageModifier& K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue, const struct FGbxAbilityResourceSpec_ConditionalDamageModifier& K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier1, class UConditionalDamageTypeModifier* CallFunc_Array_Get_Item3, const struct FGbxAbilityResourceSpec_ConditionalDamageModifier& K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier2, const struct FGbxAbilityResourceSpec_ConditionalDamageModifier& K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier3);
};

}


