#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x408 - 0x400)
// BlueprintGeneratedClass Action_Spell_Push_ElementalHawk.Action_Spell_Push_ElementalHawk_C
class UAction_Spell_Push_ElementalHawk_C : public UAction_SpellThrow_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x400(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UAction_Spell_Push_ElementalHawk_C* GetDefaultObj();

	void OnDialogSequenceFinished_2();
	void SpellPush();
	void OnBegin(class AActor* Actor);
	void SpellWarmUp();
	void ExecuteUbergraph_Action_Spell_Push_ElementalHawk(int32 EntryPoint, class AActor* CallFunc_K2_GetActor_ReturnValue, class AActor* K2Node_Event_Actor, enum class EOakElementalType CallFunc_GetSpellElement_ReturnedElement, class UParticleSystem* CallFunc_GetCollectionFX_ReturnValue, class UParticleSystem* CallFunc_GetCollectionFX_ReturnValue1, class UParticleSystemComponent* CallFunc_PlayFX_1stFXComponent, class UParticleSystemComponent* CallFunc_PlayFX_3rdFXComponent, class FName CallFunc_PlayFX_Socket, class UParticleSystemComponent* CallFunc_PlayFX_1stFXComponent1, class UParticleSystemComponent* CallFunc_PlayFX_3rdFXComponent1, class FName CallFunc_PlayFX_Socket1, enum class EOakElementalType CallFunc_GetSpellElement_ReturnedElement1, class UWwiseEvent* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UWwiseEvent* CallFunc_Map_Find_Value1, bool CallFunc_Map_Find_ReturnValue1, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue1, const struct FDialogConversation& CallFunc_FinishTriggerDialog_Conversation, int32 CallFunc_FinishTriggerDialog_SequenceID, bool CallFunc_FinishTriggerDialog_ReturnValue, const struct FDialogConversation& CallFunc_FinishTriggerDialog_Conversation1, int32 CallFunc_FinishTriggerDialog_SequenceID1, bool CallFunc_FinishTriggerDialog_ReturnValue1);
};

}


