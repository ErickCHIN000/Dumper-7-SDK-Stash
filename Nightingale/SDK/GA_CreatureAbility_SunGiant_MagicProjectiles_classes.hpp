#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x74 (0x72C - 0x6B8)
// BlueprintGeneratedClass GA_CreatureAbility_SunGiant_MagicProjectiles.GA_CreatureAbility_SunGiant_MagicProjectiles_C
class UGA_CreatureAbility_SunGiant_MagicProjectiles_C : public UGA_CreatureAbility_Ranged01_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x6B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_Creature_Wildlife_HillGiant_C*     HillGiant;                                         // 0x6C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TMap<enum class Enum_CreatureAbilityZone, struct FDynamicMontageArray> CreatureAbilityZone;                               // 0x6C8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                       Ring1MinDistance;                                  // 0x718(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Ring1MaxDistance;                                  // 0x720(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ProjectileIndex;                                   // 0x728(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_CreatureAbility_SunGiant_MagicProjectiles_C* GetDefaultObj();

	void GetProjectileClass(class UClass** ProjectileClass, bool* bSuccess, class UClass* CallFunc_GetProjectileClass_ProjectileClass, bool CallFunc_GetProjectileClass_bSuccess, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void SelectMontage(const struct FTransform& TargetTransform, class UAnimMontage** SelectedMontage, const struct FTransform& LTransform, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetTarget_Target, bool CallFunc_IsValid_ReturnValue_1, enum class Enum_CreatureAbilityZone CallFunc_Get_Creature_Ability_Zone_8_Way_CreatureAbilityZone, const struct FDynamicMontageArray& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UAnimMontage* CallFunc_SelectMontageNearTarget_ReturnValue, float CallFunc_SelectMontageNearTarget_Leeway_ImplicitCast);
	void GetProjectileStart(struct FTransform* ProjectileStart, bool* bSuccess, int32 Temp_int_Variable, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, class FName Temp_name_Variable_3, class FName Temp_name_Variable_4, class FName Temp_name_Variable_5, class FName Temp_name_Variable_6, class FName Temp_name_Variable_7, class FName Temp_name_Variable_8, class FName Temp_name_Variable_9, class FName Temp_name_Variable_10, class FName K2Node_Select_Default, const struct FTransform& CallFunc_GetProjectileStart_ProjectileStart, bool CallFunc_GetProjectileStart_bSuccess, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue);
	void HandleEvent(const struct FGameplayTag& EventTags, const struct FGameplayEventData& EventData, const struct FGameplayTag& Temp_struct_Variable, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_CreatureAbilityActivate_bSuccess);
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_CreatureAbility_SunGiant_MagicProjectiles(int32 EntryPoint, bool K2Node_Event_bWasCancelled);
};

}


