#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x1D8 - 0x198)
// BlueprintGeneratedClass Ability_Melee_HiltMod_03.Ability_Melee_HiltMod_03_C
class UAbility_Melee_HiltMod_03_C : public UAbility_Melee_HiltMod_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x198(0x8)(Transient, DuplicateTransient)
	float                                        ActionSkillCooldownPercentage;                     // 0x1A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_144D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableValueHandle                 ActionSkillCooldownPercentageHandle;               // 0x1A8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FGameResourcePoolReference            ActionSkillCooldown;                               // 0x1C0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UAbility_Melee_HiltMod_03_C* GetDefaultObj();

	void OnActivated();
	void DoHiltMod_Hit(class UGbxDamageType* DamageType, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
	void ExecuteUbergraph_Ability_Melee_HiltMod_03(int32 EntryPoint, class AActor* CallFunc_GetAbilityOwner_ReturnValue, const struct FGameResourcePoolReference& CallFunc_GetResourcePoolByResource_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue, class UGbxDamageType* K2Node_Event_DamageType, class AActor* K2Node_Event_DamagedActor, const struct FCausedDamageDetails& K2Node_Event_Details, const struct FGameResourcePoolReference& CallFunc_GetResourcePoolByResource_ReturnValue1, bool CallFunc_BreakResourcePoolReference_bValid, float CallFunc_BreakResourcePoolReference_CurrentValue, float CallFunc_BreakResourcePoolReference_MinValue, float CallFunc_BreakResourcePoolReference_MaxValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue);
};

}


