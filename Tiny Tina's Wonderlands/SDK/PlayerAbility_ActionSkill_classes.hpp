#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x190 - 0x188)
// BlueprintGeneratedClass PlayerAbility_ActionSkill.PlayerAbility_ActionSkill_C
class UPlayerAbility_ActionSkill_C : public UOakCharacterInputAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x188(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UPlayerAbility_ActionSkill_C* GetDefaultObj();

	void GetOakCharacterPlayer(class AOakCharacter_Player** Res, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess);
	void GetPlayerCharacterComponent(class UPlayerCharacterComponent** Res, class UPlayerCharacterComponent* CallFunc_GetComponentByClass_ReturnValue);
	void HandleStopActionSkillHold(class UOakActionAbility* ActionAbility, bool CallFunc_IsValid_ReturnValue);
	void HandleStartActionSkillHold(class UOakActionAbility* ActionAbility, bool CallFunc_IsValid_ReturnValue);
	void HandleStopActionSkill(class UOakActionAbility* ActionAbility, bool CallFunc_IsValid_ReturnValue);
	void HandleStartActionSkill(class UOakActionAbility* ActionAbility, bool CallFunc_IsValid_ReturnValue);
	void GetActionSkill(class UOakActionAbility** Res, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess, class UOakActionAbility* CallFunc_GetPrimaryActionAbility_ReturnValue);
	void GbxInpActEvt_action_skill_K2Node_GbxInputActionEvent_Discrete_15(class FName Action);
	void GbxInpActEvt_action_skill_hold_K2Node_GbxInputActionEvent_Discrete_14(class FName Action);
	void GbxInpActEvt_action_skill_hold_K2Node_GbxInputActionEvent_Discrete_13(class FName Action);
	void GbxInpActEvt_action_skill_override_K2Node_GbxInputActionEvent_Discrete_12(class FName Action);
	void GbxInpActEvt_action_skill_override_K2Node_GbxInputActionEvent_Discrete_11(class FName Action);
	void GbxInpActEvt_pre_action_skill_K2Node_GbxInputActionEvent_Discrete_10(class FName Action);
	void GbxInpActEvt_secondary_spell_K2Node_GbxInputActionEvent_Discrete_9(class FName Action);
	void GbxInpActEvt_secondary_spell_K2Node_GbxInputActionEvent_Discrete_8(class FName Action);
	void ExecuteUbergraph_PlayerAbility_ActionSkill(int32 EntryPoint, class AOakCharacter_Player* CallFunc_GetOakCharacterPlayer_Res, class FName K2Node_GbxInputActionEvent_Discrete_Action4, bool CallFunc_TryStopSecondarySpell_ReturnValue, bool CallFunc_TryStartSecondarySpell_ReturnValue, class FName K2Node_GbxInputActionEvent_Discrete_Action3, class FName Temp_name_Variable, class FName K2Node_GbxInputActionEvent_Discrete_Action2, class FName K2Node_GbxInputActionEvent_Discrete_Action1, class FName K2Node_GbxInputActionEvent_Discrete_Action, class FName Temp_name_Variable1, class FName K2Node_GbxInputActionEvent_Discrete_Action5, class UOakActionAbility* CallFunc_GetActionSkill_Res, class UOakActionAbility* CallFunc_GetActionSkill_Res1, class UOakActionAbility* CallFunc_GetActionSkill_Res2, class FName K2Node_GbxInputActionEvent_Discrete_Action6, class UPlayerCharacterComponent* CallFunc_GetPlayerCharacterComponent_Res, class UPlayerCharacterComponent* CallFunc_GetPlayerCharacterComponent_Res1, class FName Temp_name_Variable2, class UPlayerCharacterComponent* CallFunc_GetPlayerCharacterComponent_Res2, class FName K2Node_GbxInputActionEvent_Discrete_Action7);
};

}


