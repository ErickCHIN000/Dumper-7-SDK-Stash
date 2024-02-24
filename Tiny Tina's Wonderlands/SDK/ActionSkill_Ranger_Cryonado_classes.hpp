#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x530 - 0x4F8)
// BlueprintGeneratedClass ActionSkill_Ranger_Cryonado.ActionSkill_Ranger_Cryonado_C
class UActionSkill_Ranger_Cryonado_C : public U_ActionSkill_Parent_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4F8(0x8)(Transient, DuplicateTransient)
	bool                                         InitializeFailure;                                 // 0x500(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2AF2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_ActionSkill_Ranger_Cryonado; // 0x508(0x28)(None)

	static class UClass* StaticClass();
	static class UActionSkill_Ranger_Cryonado_C* GetDefaultObj();

	float GetCooldownRestartPercent(bool Temp_bool_Variable, float Temp_float_Variable, float CallFunc_GetCooldownRestartPercent_ReturnValue, float K2Node_Select_Default);
	void OnDialogSequenceFinished_2();
	void BeginSpawningTornados();
	void OnStartActionAbility();
	void CryonadoFailed();
	void OnDeactivated();
	void OnActivated();
	void ExecuteUbergraph_ActionSkill_Ranger_Cryonado(int32 EntryPoint, TArray<struct FGbxActionRegister>& Temp_struct_Variable, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue, const struct FDialogConversation& CallFunc_FinishTriggerDialog_Conversation, int32 CallFunc_FinishTriggerDialog_SequenceID, bool CallFunc_FinishTriggerDialog_ReturnValue, class UGbxAction* CallFunc_K2Play_ReturnValue, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate, const struct FDialogConversation& CallFunc_FinishTriggerDialog_Conversation1, int32 CallFunc_FinishTriggerDialog_SequenceID1, bool CallFunc_FinishTriggerDialog_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1);
};

}


