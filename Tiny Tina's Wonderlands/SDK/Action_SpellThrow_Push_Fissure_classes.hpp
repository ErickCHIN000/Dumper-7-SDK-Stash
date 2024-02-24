#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x410 - 0x408)
// BlueprintGeneratedClass Action_SpellThrow_Push_Fissure.Action_SpellThrow_Push_Fissure_C
class UAction_SpellThrow_Push_Fissure_C : public UAction_SpellThrow_Push_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x408(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UAction_SpellThrow_Push_Fissure_C* GetDefaultObj();

	void OnDialogSequenceFinished_2();
	void OnBegin(class AActor* Actor);
	void SpellCast();
	void ExecuteUbergraph_Action_SpellThrow_Push_Fissure(int32 EntryPoint, class AActor* CallFunc_K2_GetActor_ReturnValue, class AActor* K2Node_Event_Actor, class UParticleSystem* CallFunc_GetCollectionFX_ReturnValue, enum class EOakElementalType CallFunc_GetSpellElement_ReturnedElement, class UParticleSystemComponent* CallFunc_PlayFX_1stFXComponent, class UParticleSystemComponent* CallFunc_PlayFX_3rdFXComponent, class FName CallFunc_PlayFX_Socket, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue, class UWwiseEvent* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FDialogConversation& CallFunc_FinishTriggerDialog_Conversation, int32 CallFunc_FinishTriggerDialog_SequenceID, bool CallFunc_FinishTriggerDialog_ReturnValue, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue1, const struct FDialogConversation& CallFunc_FinishTriggerDialog_Conversation1, int32 CallFunc_FinishTriggerDialog_SequenceID1, bool CallFunc_FinishTriggerDialog_ReturnValue1);
};

}


