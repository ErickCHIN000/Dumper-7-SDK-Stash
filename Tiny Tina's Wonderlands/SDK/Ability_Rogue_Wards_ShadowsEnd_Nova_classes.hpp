#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x1B0 - 0x198)
// BlueprintGeneratedClass Ability_Rogue_Wards_ShadowsEnd_Nova.Ability_Rogue_Wards_ShadowsEnd_Nova_C
class UAbility_Rogue_Wards_ShadowsEnd_Nova_C : public UAbility_All_Enchantment_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x198(0x8)(Transient, DuplicateTransient)
	float                                        StatusEffectDamage;                                // 0x1A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4168[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          Timer_Nova;                                        // 0x1A8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UAbility_Rogue_Wards_ShadowsEnd_Nova_C* GetDefaultObj();

	void Enchantment_ActionSkillEnded(class UOakActionAbility* ActionAbility, enum class Enum_ActionSkills ActionSkill);
	void CE_Ench_DoNova();
	void OnAbilityTimerEnded(struct FOakAbilityTimerSpec& Spec, struct FOakAbilityTimerResult& Result);
	void OnDeactivated();
	void ExecuteUbergraph_Ability_Rogue_Wards_ShadowsEnd_Nova(int32 EntryPoint, const struct FHitResult& Temp_struct_Variable, const struct FHitResult& Temp_struct_Variable1, const struct FDataTableValueHandle& K2Node_MakeStruct_DataTableValueHandle, const struct FDataTableValueHandle& K2Node_MakeStruct_DataTableValueHandle1, float CallFunc_GetDataTableValueFromHandle_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue1, const struct FOakAbilityTimerSpec& K2Node_MakeStruct_OakAbilityTimerSpec, class UOakActionAbility* K2Node_Event_ActionAbility, enum class Enum_ActionSkills K2Node_Event_ActionSkill, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class AActor* CallFunc_GetEquippedInventoryForSlot_ReturnValue, class AMeleeWeapon* K2Node_DynamicCast_AsMelee_Weapon, bool K2Node_DynamicCast_bSuccess, float CallFunc_Conv_GbxAttributeFloatToFloat_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FOakAbilityTimerSpec& K2Node_Event_Spec, const struct FOakAbilityTimerResult& K2Node_Event_Result);
};

}


