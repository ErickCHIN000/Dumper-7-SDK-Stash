#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA8 (0x5F0 - 0x548)
// BlueprintGeneratedClass GA_CreatureAbility_Melee_Ishmael.GA_CreatureAbility_Melee_Ishmael_C
class UGA_CreatureAbility_Melee_Ishmael_C : public UGA_CreatureAbility_Melee_C
{
public:
	TArray<class UAnimMontage*>                  RotationMontages;                                  // 0x548(0x10)(Edit, BlueprintVisible)
	TArray<class UAnimMontage*>                  PositionMontages;                                  // 0x558(0x10)(Edit, BlueprintVisible)
	double                                       PositionMatchThreshold;                            // 0x568(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<enum class Enum_CreatureAbilityZone, struct FDynamicMontageArray> CreatureAbilityZone;                               // 0x570(0x50)(Edit, BlueprintVisible)
	double                                       Ring1MinDistance;                                  // 0x5C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Ring1MaxDistance;                                  // 0x5C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Ring2MinDistance;                                  // 0x5D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Ring2MaxDistance;                                  // 0x5D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Ring3MinDistance;                                  // 0x5E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Ring3MaxDistance;                                  // 0x5E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_CreatureAbility_Melee_Ishmael_C* GetDefaultObj();

	void SelectMontage(const struct FTransform& TargetTransform, class UAnimMontage** SelectedMontage, bool LRotational, const struct FTransform& LTransform, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetTarget_Target, bool CallFunc_IsValid_ReturnValue_1, enum class Enum_CreatureAbilityZone CallFunc_Get_Creature_Ability_Zone_8_Way_CreatureAbilityZone, const struct FDynamicMontageArray& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UAnimMontage* CallFunc_SelectMontageNearTarget_ReturnValue, float CallFunc_SelectMontageNearTarget_Leeway_ImplicitCast);
};

}


