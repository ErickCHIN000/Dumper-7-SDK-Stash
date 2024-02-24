#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x1A0 - 0x198)
// BlueprintGeneratedClass Ability_All_Shared_SkillActive_Base.Ability_All_Shared_SkillActive_Base_C
class UAbility_All_Shared_SkillActive_Base_C : public UAbility_All_Enchantment_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x198(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UAbility_All_Shared_SkillActive_Base_C* GetDefaultObj();

	void Enchantment_ActionSkillEnded(class UOakActionAbility* ActionAbility, enum class Enum_ActionSkills ActionSkill);
	void Enchantment_ActionSkillActivated(class UOakActionAbility* ActionAbility, enum class Enum_ActionSkills ActionSkill);
	void ExecuteUbergraph_Ability_All_Shared_SkillActive_Base(int32 EntryPoint, class UOakActionAbility* K2Node_Event_ActionAbility1, enum class Enum_ActionSkills K2Node_Event_ActionSkill1, const struct FStatusEffectRemoveSpec& K2Node_MakeStruct_StatusEffectRemoveSpec, class UOakActionAbility* K2Node_Event_ActionAbility, enum class Enum_ActionSkills K2Node_Event_ActionSkill, bool CallFunc_RemoveStatusEffect_ReturnValue, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue);
};

}


