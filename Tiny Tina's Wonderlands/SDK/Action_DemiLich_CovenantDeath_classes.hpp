#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x228 - 0x220)
// BlueprintGeneratedClass Action_DemiLich_CovenantDeath.Action_DemiLich_CovenantDeath_C
class UAction_DemiLich_CovenantDeath_C : public UOakAction_Anim
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UAction_DemiLich_CovenantDeath_C* GetDefaultObj();

	void OnDialogSequenceFinished_2();
	void OnEnd(enum class EGbxActionEndState ActionEndState, class AActor* Actor);
	void OnBegin(class AActor* Actor);
	void ExecuteUbergraph_Action_DemiLich_CovenantDeath(int32 EntryPoint, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue1, class AActor* CallFunc_K2_GetActor_ReturnValue, const struct FDialogConversation& CallFunc_FinishTriggerDialog_Conversation, int32 CallFunc_FinishTriggerDialog_SequenceID, bool CallFunc_FinishTriggerDialog_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const struct FDialogConversation& CallFunc_FinishTriggerDialog_Conversation1, int32 CallFunc_FinishTriggerDialog_SequenceID1, bool CallFunc_FinishTriggerDialog_ReturnValue1, class AActor* CallFunc_K2_GetActor_ReturnValue1, enum class EGbxActionEndState K2Node_Event_ActionEndState, class AActor* K2Node_Event_Actor1, class UOakPlayerAbilityManagerComponent* CallFunc_GetComponentByClass_ReturnValue, class ADrone_Necromancer_DemiLich_C* K2Node_DynamicCast_AsDrone_Necromancer_Demi_Lich, bool K2Node_DynamicCast_bSuccess, class UBPEventHub_PlayerCharacter_C* K2Node_DynamicCast_AsBPEvent_Hub_Player_Character, bool K2Node_DynamicCast_bSuccess1, class AActor* K2Node_Event_Actor);
};

}


