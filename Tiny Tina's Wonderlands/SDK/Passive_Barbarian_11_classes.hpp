#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x79 (0x341 - 0x2C8)
// BlueprintGeneratedClass Passive_Barbarian_11.Passive_Barbarian_11_C
class UPassive_Barbarian_11_C : public U_Passive_KillSkill_Parent_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C8(0x8)(Transient, DuplicateTransient)
	float                                        ActionSkillReduction;                              // 0x2D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_266E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableValueHandle                 ActionSkillReductionHandle;                        // 0x2D8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FGameResourcePoolReference            ActionSkillCooldown;                               // 0x2F0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, ContainsInstancedReference)
	struct FGameResourcePoolReference            ActionSkillDuration;                               // 0x308(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, ContainsInstancedReference)
	float                                        ActionSkillDurationExtension;                      // 0x320(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2679[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableValueHandle                 ActionSkillDurationExtensionHandle;                // 0x328(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                         ActionSkillActive;                                 // 0x340(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UPassive_Barbarian_11_C* GetDefaultObj();

	void OnActivated();
	void OnDeactivated();
	void OakPassiveOnActionSkillActivated(class UOakActionAbility* ActionAbility);
	void OakPassiveOnActionSkillCoolingDown(class UOakActionAbility* ActionAbility);
	void OakPassiveTriggerKillSkillEffect(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details, bool bWasAutoTrigger);
	void ExecuteUbergraph_Passive_Barbarian_11(int32 EntryPoint, float CallFunc_GetDataTableValueFromHandle_ReturnValue, const struct FGameResourcePoolReference& CallFunc_GetResourcePoolByResource_ReturnValue, bool CallFunc_BreakResourcePoolReference_bValid, float CallFunc_BreakResourcePoolReference_CurrentValue, float CallFunc_BreakResourcePoolReference_MinValue, float CallFunc_BreakResourcePoolReference_MaxValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, class UOakActionAbility* K2Node_Event_ActionAbility1, float CallFunc_Add_FloatFloat_ReturnValue, class UOakActionAbility* K2Node_Event_ActionAbility, const struct FGameResourcePoolReference& CallFunc_GetResourcePoolByResource_ReturnValue1, bool CallFunc_BreakResourcePoolReference_bValid1, float CallFunc_BreakResourcePoolReference_CurrentValue1, float CallFunc_BreakResourcePoolReference_MinValue1, float CallFunc_BreakResourcePoolReference_MaxValue1, float CallFunc_Subtract_FloatFloat_ReturnValue1, class UDamageComponent* K2Node_Event_Damaged, const struct FCausedDeathDetails& K2Node_Event_Details, bool K2Node_Event_bWasAutoTrigger, float CallFunc_Multiply_IntFloat_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue1, float CallFunc_GetDataTableValueFromHandle_ReturnValue1, float CallFunc_Add_FloatFloat_ReturnValue1);
};

}


