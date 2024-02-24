#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x228 (0x4F8 - 0x2D0)
// BlueprintGeneratedClass _ActionSkill_Parent._ActionSkill_Parent_C
class U_ActionSkill_Parent_C : public UOakActionAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D0(0x8)(Transient, DuplicateTransient)
	struct FGbxAttributeModifierHandle           ActionSkillCooldownTimeModifier;                   // 0x2D8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGbxAttributeModifierHandle           ActionSkillDurationModifier;                       // 0x2E8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FAttributeInitializationData          ActionSkillCooldownTimeData;                       // 0x2F8(0x38)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FAttributeInitializationData          ActionSkillDurationData;                           // 0x330(0x38)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FEnvQueryParams                       EQS_FindAllPlayerCharacters;                       // 0x368(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FEnvQueryParams                       EQS_FindAllPlayerCompanions;                       // 0x420(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FGbxAttributeModifierHandle           ActionSkillDurationRateModifier;                   // 0x4D8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	enum class Enum_ActionSkills                 ActionSkill_Enum;                                  // 0x4E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B87[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBPEventHub_PlayerCharacter_C*         BPCharPlayerEventHub;                              // 0x4F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class U_ActionSkill_Parent_C* GetDefaultObj();

	bool ShouldAbortActivation(uint8* OutAbortCode, uint8 CallFunc_ShouldAbortActivation_OutAbortCode, bool CallFunc_ShouldAbortActivation_ReturnValue, bool CallFunc_IsCastingSpell_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void UnpauseActionSkillDuration(bool* Res, bool CallFunc_RemoveAttributeModifier_ReturnValue);
	void PauseActionSkillDuration(bool* Res, bool CallFunc_RemoveAttributeModifier_ReturnValue, enum class EGbxAttributeModifierActionExecOutput CallFunc_AddModifierToGbxAttribute_ModifierActionResult, const struct FGbxAttributeModifierHandle& CallFunc_AddModifierToGbxAttribute_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void FindAllCompanions(TArray<class AActor*>* Res, class AActor* CallFunc_GetAbilityOwner_ReturnValue, TArray<class AActor*>& CallFunc_RunEnvQueryForAllActors_ResultActors, bool CallFunc_RunEnvQueryForAllActors_ReturnValue);
	void FindAllPlayerCharacters(TArray<class AActor*>* Res, class AActor* CallFunc_GetAbilityOwner_ReturnValue, TArray<class AActor*>& CallFunc_RunEnvQueryForAllActors_ResultActors, bool CallFunc_RunEnvQueryForAllActors_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue);
	void HandleActionSkillEndedEvents(class UBPEventHub_PlayerCharacter_C* K2Node_DynamicCast_AsBPEvent_Hub_Player_Character, bool K2Node_DynamicCast_bSuccess);
	void HandleActionSkillStartedEvents();
	void InitActionSkillResourcePools(float CallFunc_EvaluateAttributeInitializationData_ReturnValue, float CallFunc_EvaluateAttributeInitializationData_ReturnValue1, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue1, bool CallFunc_RemoveAttributeModifier_ReturnValue, bool CallFunc_RemoveAttributeModifier_ReturnValue1, enum class EGbxAttributeModifierActionExecOutput CallFunc_AddModifierToGbxAttribute_ModifierActionResult, const struct FGbxAttributeModifierHandle& CallFunc_AddModifierToGbxAttribute_ReturnValue, enum class EGbxAttributeModifierActionExecOutput CallFunc_AddModifierToGbxAttribute_ModifierActionResult1, const struct FGbxAttributeModifierHandle& CallFunc_AddModifierToGbxAttribute_ReturnValue1, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum1_CmpSuccess);
	void OnStartActionAbility();
	void OnCoolingDown();
	void OnActivated();
	void OnAbilitySlotted();
	void ExecuteUbergraph__ActionSkill_Parent(int32 EntryPoint, class UBPEventHub_PlayerCharacter_C* K2Node_DynamicCast_AsBPEvent_Hub_Player_Character, bool K2Node_DynamicCast_bSuccess, class UOakPlayerAbilityManagerComponent* K2Node_DynamicCast_AsOak_Player_Ability_Manager_Component, bool K2Node_DynamicCast_bSuccess1);
};

}


