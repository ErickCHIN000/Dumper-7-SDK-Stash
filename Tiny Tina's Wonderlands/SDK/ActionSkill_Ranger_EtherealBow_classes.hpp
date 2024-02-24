#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x508 - 0x4F8)
// BlueprintGeneratedClass ActionSkill_Ranger_EtherealBow.ActionSkill_Ranger_EtherealBow_C
class UActionSkill_Ranger_EtherealBow_C : public U_ActionSkill_Parent_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4F8(0x8)(Transient, DuplicateTransient)
	class UGbxSkeletalMeshComponent*             NewVar_0_0;                                        // 0x500(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UActionSkill_Ranger_EtherealBow_C* GetDefaultObj();

	void OnDialogSequenceFinished_2();
	void OnStartActionAbility();
	void OnActivated();
	void OnResumed();
	void ExecuteUbergraph_ActionSkill_Ranger_EtherealBow(int32 EntryPoint, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue, TArray<struct FGbxActionRegister>& Temp_struct_Variable, class UGbxAction* CallFunc_K2Play_ReturnValue, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue1, const struct FDialogConversation& CallFunc_FinishTriggerDialog_Conversation, int32 CallFunc_FinishTriggerDialog_SequenceID, bool CallFunc_FinishTriggerDialog_ReturnValue, const struct FDialogConversation& CallFunc_FinishTriggerDialog_Conversation1, int32 CallFunc_FinishTriggerDialog_SequenceID1, bool CallFunc_FinishTriggerDialog_ReturnValue1);
};

}


