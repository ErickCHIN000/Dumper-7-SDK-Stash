#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA8 (0x5A0 - 0x4F8)
// BlueprintGeneratedClass ActionSkill_Barbarian_Whirlwind.ActionSkill_Barbarian_Whirlwind_C
class UActionSkill_Barbarian_Whirlwind_C : public U_ActionSkill_Parent_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4F8(0x8)(Transient, DuplicateTransient)
	class UOakAction_Anim_ActionAbility*         ActionRef;                                         // 0x500(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameResourcePoolReference            SkillDurationPool;                                 // 0x508(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, ContainsInstancedReference)
	struct FGameResourcePoolReference            SkillCooldownPool;                                 // 0x520(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, ContainsInstancedReference)
	float                                        SkillDurationPercentage;                           // 0x538(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CooldownRefundScalar;                              // 0x53C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableValueHandle                 CooldownRefundScalarHandle;                        // 0x540(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UWwiseEvent*                           Audio_WhirlwindStart;                              // 0x558(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWwisePlaybackInstance                Audio_WhirlwindInst;                               // 0x560(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UWwiseEvent*                           Audio_WhirlwindStop;                               // 0x578(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           Audio_WhirlwindAxeWoosh;                           // 0x580(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWwisePlaybackInstance                Audio_WhirlwindAxeWooshInst;                       // 0x588(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UActionSkill_Barbarian_Whirlwind_C* GetDefaultObj();

	bool K2_CanRetrigger(class AActor* CallFunc_GetAbilityOwner_ReturnValue, class AOakCharacter* K2Node_DynamicCast_AsOak_Character, bool K2Node_DynamicCast_bSuccess, const struct FGameResourcePoolReference& CallFunc_GetResourcePoolByResource_ReturnValue, bool CallFunc_BreakResourcePoolReference_bValid, float CallFunc_BreakResourcePoolReference_CurrentValue, float CallFunc_BreakResourcePoolReference_MinValue, float CallFunc_BreakResourcePoolReference_MaxValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue);
	void OnDialogSequenceFinished_2();
	void OnActivated();
	void OnStartActionAbility();
	void OnStopActionAbility();
	void OnCoolingDown();
	void OnResumed();
	void OnActionAbilityRetrigger();
	void EndWhirlwind();
	void ExecuteUbergraph_ActionSkill_Barbarian_Whirlwind(int32 EntryPoint, class AActor* CallFunc_GetAbilityOwner_ReturnValue, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue1, bool Temp_bool_Has_Been_Initd_Variable, const struct FDialogConversation& CallFunc_FinishTriggerDialog_Conversation, int32 CallFunc_FinishTriggerDialog_SequenceID, bool CallFunc_FinishTriggerDialog_ReturnValue, const struct FDialogConversation& CallFunc_FinishTriggerDialog_Conversation1, int32 CallFunc_FinishTriggerDialog_SequenceID1, bool CallFunc_FinishTriggerDialog_ReturnValue1, class AActor* CallFunc_GetAbilityOwner_ReturnValue1, bool CallFunc_BreakResourcePoolReference_bValid, float CallFunc_BreakResourcePoolReference_CurrentValue, float CallFunc_BreakResourcePoolReference_MinValue, float CallFunc_BreakResourcePoolReference_MaxValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, class AActor* CallFunc_GetAbilityOwner_ReturnValue2, class AActor* CallFunc_GetAbilityOwner_ReturnValue3, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player1, bool K2Node_DynamicCast_bSuccess1, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue, const struct FStatusEffectRemoveSpec& K2Node_MakeStruct_StatusEffectRemoveSpec, bool CallFunc_RemoveStatusEffect_ReturnValue, class AActor* CallFunc_GetAbilityOwner_ReturnValue4, class AActor* CallFunc_GetAbilityOwner_ReturnValue5, class AOakCharacter* K2Node_DynamicCast_AsOak_Character, bool K2Node_DynamicCast_bSuccess2, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player2, bool K2Node_DynamicCast_bSuccess3, const struct FGameResourcePoolReference& CallFunc_GetResourcePoolByResource_ReturnValue, const struct FGameResourcePoolReference& CallFunc_GetResourcePoolByResource_ReturnValue1, bool Temp_bool_IsClosed_Variable, bool CallFunc_PauseActionSkillDuration_Res, bool CallFunc_UnpauseActionSkillDuration_Res, TArray<struct FGbxActionRegister>& Temp_struct_Variable, class UGbxAction* CallFunc_K2Play_ReturnValue, class UOakAction_Anim_ActionAbility* K2Node_DynamicCast_AsOak_Action_Ability_Anim_Action, bool K2Node_DynamicCast_bSuccess4);
};

}


