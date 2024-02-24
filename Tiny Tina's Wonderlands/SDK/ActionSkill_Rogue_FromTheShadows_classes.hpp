#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x580 - 0x4F8)
// BlueprintGeneratedClass ActionSkill_Rogue_FromTheShadows.ActionSkill_Rogue_FromTheShadows_C
class UActionSkill_Rogue_FromTheShadows_C : public U_ActionSkill_Parent_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4F8(0x8)(Transient, DuplicateTransient)
	class UGbxAction*                            ActionRef;                                         // 0x500(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGbxAbilityResourceController_ConditionalDamageModifier RsrcCntrlr_GbxAbilityResourceController_ConditionalDamageModifier_ActionSkill_Rogue_FromTheShadows; // 0x508(0x28)(None)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_ActionSkill_Rogue_FromTheShadows; // 0x530(0x28)(None)
	bool                                         StealthActivated;                                  // 0x558(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2BA9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameResourcePoolReference            SkillCooldownPool;                                 // 0x560(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, ContainsInstancedReference)
	class UGbxAction*                            StartupActionRef;                                  // 0x578(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UActionSkill_Rogue_FromTheShadows_C* GetDefaultObj();

	void StartStealth(bool* Res, TArray<struct FGbxActionRegister>& Temp_struct_Variable, bool CallFunc_UnpauseActionSkillDuration_Res, class AActor* CallFunc_GetAbilityOwner_ReturnValue, const struct FGbxAbilityResourceSpec_ConditionalDamageModifier& K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier, const struct FGbxAbilityResourceSpec_ConditionalDamageModifier& K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier1, class AActor* CallFunc_GetAbilityOwner_ReturnValue1, class UGbxAction* CallFunc_K2Play_ReturnValue);
	void CleanUpStealth(class AActor* CallFunc_GetAbilityOwner_ReturnValue, class AActor* CallFunc_GetAbilityOwner_ReturnValue1, class AActor* CallFunc_GetAbilityOwner_ReturnValue2, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess, const struct FGbxAbilityResourceSpec_ConditionalDamageModifier& K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier, const struct FGbxAbilityResourceSpec_ConditionalDamageModifier& K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier1, class AActor* CallFunc_GetAbilityOwner_ReturnValue3);
	void OnDialogSequenceFinished_2();
	void OnCoolingDown();
	void StealthFailedToActivate();
	void OnActivated();
	void OnResumed();
	void OnPaused();
	void OnDeactivated();
	void OnStartActionAbility();
	void OnStopActionAbility();
	void ExecuteUbergraph_ActionSkill_Rogue_FromTheShadows(int32 EntryPoint, TArray<struct FGbxActionRegister>& Temp_struct_Variable, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue, const struct FDialogConversation& CallFunc_FinishTriggerDialog_Conversation, int32 CallFunc_FinishTriggerDialog_SequenceID, bool CallFunc_FinishTriggerDialog_ReturnValue, class AActor* CallFunc_GetAbilityOwner_ReturnValue, bool CallFunc_PauseActionSkillDuration_Res, class UGbxAction* CallFunc_K2Play_ReturnValue, bool CallFunc_UnpauseActionSkillDuration_Res, const struct FGameResourcePoolReference& CallFunc_GetResourcePoolByResource_ReturnValue, class AActor* CallFunc_GetAbilityOwner_ReturnValue1, class UBPFightForYourLifeComponent_C* CallFunc_GetComponentByClass_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate, class AActor* CallFunc_GetAbilityOwner_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UBPFightForYourLifeComponent_C* CallFunc_GetComponentByClass_ReturnValue1, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1, bool CallFunc_Not_PreBool_ReturnValue, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue1, const struct FDialogConversation& CallFunc_FinishTriggerDialog_Conversation1, int32 CallFunc_FinishTriggerDialog_SequenceID1, bool CallFunc_FinishTriggerDialog_ReturnValue1, class APlayerController* CallFunc_GetAssociatedPlayerController_ReturnValue);
};

}


