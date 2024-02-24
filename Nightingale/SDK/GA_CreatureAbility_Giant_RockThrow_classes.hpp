#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x728 - 0x6B8)
// BlueprintGeneratedClass GA_CreatureAbility_Giant_RockThrow.GA_CreatureAbility_Giant_RockThrow_C
class UGA_CreatureAbility_Giant_RockThrow_C : public UGA_CreatureAbility_Ranged01_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x6B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_Creature_Wildlife_HillGiant_C*     HillGiant;                                         // 0x6C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TMap<enum class Enum_CreatureAbilityZone, struct FDynamicMontageArray> CreatureAbilityZone;                               // 0x6C8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                       Ring1MinDistance;                                  // 0x718(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Ring1MaxDistance;                                  // 0x720(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_CreatureAbility_Giant_RockThrow_C* GetDefaultObj();

	void SelectMontage(const struct FTransform& TargetTransform, class UAnimMontage** SelectedMontage, const struct FTransform& LTransform, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetTarget_Target, bool CallFunc_IsValid_ReturnValue_1, enum class Enum_CreatureAbilityZone CallFunc_Get_Creature_Ability_Zone_8_Way_CreatureAbilityZone, const struct FDynamicMontageArray& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UAnimMontage* CallFunc_SelectMontageNearTarget_ReturnValue, float CallFunc_SelectMontageNearTarget_Leeway_ImplicitCast);
	void GetProjectileStart(struct FTransform* ProjectileStart, bool* bSuccess, const struct FTransform& CallFunc_GetProjectileStart_ProjectileStart, bool CallFunc_GetProjectileStart_bSuccess, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_TransformLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue);
	void HandleEvent(const struct FGameplayTag& EventTags, const struct FGameplayEventData& EventData, const struct FGameplayTag& Temp_struct_Variable, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, bool CallFunc_CreatureAbilityActivate_bSuccess);
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_CreatureAbility_Giant_RockThrow(int32 EntryPoint, bool K2Node_Event_bWasCancelled);
};

}


