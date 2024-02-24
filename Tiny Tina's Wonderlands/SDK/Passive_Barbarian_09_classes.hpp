#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x318 - 0x2C8)
// BlueprintGeneratedClass Passive_Barbarian_09.Passive_Barbarian_09_C
class UPassive_Barbarian_09_C : public U_Passive_KillSkill_Parent_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C8(0x8)(Transient, DuplicateTransient)
	float                                        RageTimerExtension;                                // 0x2D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2E7D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableValueHandle                 RageTimerExtensionHandle;                          // 0x2D8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                        HealDuration;                                      // 0x2F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2E88[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableValueHandle                 HealDurationHandle;                                // 0x2F8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UGbxAbility*                           BarbarianFeat;                                     // 0x310(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UPassive_Barbarian_09_C* GetDefaultObj();

	void OnActivated();
	void OakPassiveTriggerKillSkillEffect(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details, bool bWasAutoTrigger);
	void ExecuteUbergraph_Passive_Barbarian_09(int32 EntryPoint, class AActor* CallFunc_GetAbilityOwner_ReturnValue, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetAbilityOwner_ReturnValue1, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player1, bool K2Node_DynamicCast_bSuccess1, TScriptInterface<class IIFeat_Barbarian_C> K2Node_DynamicCast_AsIFeat_Barbarian, bool K2Node_DynamicCast_bSuccess2, class UGbxAbility* CallFunc_GetClassFeat_Res, float CallFunc_GetDataTableValueFromHandle_ReturnValue, TScriptInterface<class IIFeat_Barbarian_C> K2Node_DynamicCast_AsIFeat_Barbarian1, bool K2Node_DynamicCast_bSuccess3, bool CallFunc_IsEnraged_Res, float CallFunc_GetDataTableValueFromHandle_ReturnValue1, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, class UDamageComponent* K2Node_Event_Damaged, const struct FCausedDeathDetails& K2Node_Event_Details, bool K2Node_Event_bWasAutoTrigger, float CallFunc_Multiply_IntFloat_ReturnValue, class AActor* CallFunc_GetAbilityOwner_ReturnValue2, float CallFunc_AddRageTime_Res, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue);
};

}


