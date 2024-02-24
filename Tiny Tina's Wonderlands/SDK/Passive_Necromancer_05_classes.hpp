#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x2F0 - 0x2C8)
// BlueprintGeneratedClass Passive_Necromancer_05.Passive_Necromancer_05_C
class UPassive_Necromancer_05_C : public U_Passive_KillSkill_Parent_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C8(0x8)(Transient, DuplicateTransient)
	float                                        BuffDuration;                                      // 0x2D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2E13[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableValueHandle                 BuffDurationHandle;                                // 0x2D8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UPassive_Necromancer_05_C* GetDefaultObj();

	void OnActivated();
	void OakPassiveTriggerKillSkillEffect(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details, bool bWasAutoTrigger);
	void ExecuteUbergraph_Passive_Necromancer_05(int32 EntryPoint, class UDamageComponent* K2Node_Event_Damaged, const struct FCausedDeathDetails& K2Node_Event_Details, bool K2Node_Event_bWasAutoTrigger, float CallFunc_GetDataTableValueFromHandle_ReturnValue, class AActor* CallFunc_GetAbilityOwner_ReturnValue, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue);
};

}


