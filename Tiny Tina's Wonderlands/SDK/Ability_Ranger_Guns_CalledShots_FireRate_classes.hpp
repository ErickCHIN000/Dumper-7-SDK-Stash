#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x1A0 - 0x198)
// BlueprintGeneratedClass Ability_Ranger_Guns_CalledShots_FireRate.Ability_Ranger_Guns_CalledShots_FireRate_C
class UAbility_Ranger_Guns_CalledShots_FireRate_C : public UAbility_All_Enchantment_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x198(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UAbility_Ranger_Guns_CalledShots_FireRate_C* GetDefaultObj();

	void Enchantment_ActionSkillEnded(class UOakActionAbility* ActionAbility, enum class Enum_ActionSkills ActionSkill);
	void ExecuteUbergraph_Ability_Ranger_Guns_CalledShots_FireRate(int32 EntryPoint, const struct FDataTableValueHandle& K2Node_MakeStruct_DataTableValueHandle, float CallFunc_GetDataTableValueFromHandle_ReturnValue, class UOakActionAbility* K2Node_Event_ActionAbility, enum class Enum_ActionSkills K2Node_Event_ActionSkill, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue);
};

}

