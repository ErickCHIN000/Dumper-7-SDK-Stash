#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x630 - 0x630)
// BlueprintGeneratedClass GA_CreatureAbility_Melee_01_Eoten.GA_CreatureAbility_Melee_01_Eoten_C
class UGA_CreatureAbility_Melee_01_Eoten_C : public UGA_CreatureAbility_Melee_Monster_C
{
public:

	static class UClass* StaticClass();
	static class UGA_CreatureAbility_Melee_01_Eoten_C* GetDefaultObj();

	void SelectMontage(const struct FTransform& TargetTransform, class UAnimMontage** SelectedMontage, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetTarget_Target, bool CallFunc_IsValid_ReturnValue_1, enum class Enum_CreatureAbilityZone CallFunc_Get_Creature_Ability_Zone_4_Way_CreatureAbilityZone, const struct FDynamicMontageArray& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UAnimMontage* CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex);
};

}


