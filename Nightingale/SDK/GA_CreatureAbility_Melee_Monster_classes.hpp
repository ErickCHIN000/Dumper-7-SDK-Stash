#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE8 (0x630 - 0x548)
// BlueprintGeneratedClass GA_CreatureAbility_Melee_Monster.GA_CreatureAbility_Melee_Monster_C
class UGA_CreatureAbility_Melee_Monster_C : public UGA_CreatureAbility_Melee_C
{
public:
	uint8                                        Pad_258F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            LTransform;                                        // 0x550(0x60)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<enum class Enum_CreatureAbilityZone, struct FDynamicMontageArray> CreatureAbilityZone;                               // 0x5B0(0x50)(Edit, BlueprintVisible)
	double                                       Ring3MaxDistance;                                  // 0x600(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Ring3MinDistance;                                  // 0x608(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Ring2MaxDistance;                                  // 0x610(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Ring2MinDistance;                                  // 0x618(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Ring1MaxDistance;                                  // 0x620(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Ring1MinDistance;                                  // 0x628(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_CreatureAbility_Melee_Monster_C* GetDefaultObj();

	void SelectMontage(const struct FTransform& TargetTransform, class UAnimMontage** SelectedMontage, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetTarget_Target, bool CallFunc_IsValid_ReturnValue_1, enum class Enum_CreatureAbilityZone CallFunc_Get_Creature_Ability_Zone_4_Way_CreatureAbilityZone, const struct FDynamicMontageArray& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UAnimMontage* CallFunc_SelectMontageNearTarget_ReturnValue, class UAnimMontage* CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, class UAnimMontage* CallFunc_SelectMontageNearTarget_ReturnValue_1, float CallFunc_SelectMontageNearTarget_Leeway_ImplicitCast, float CallFunc_SelectMontageNearTarget_Leeway_ImplicitCast_1);
};

}


