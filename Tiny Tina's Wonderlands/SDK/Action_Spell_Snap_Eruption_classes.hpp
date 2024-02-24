#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x418 - 0x408)
// BlueprintGeneratedClass Action_Spell_Snap_Eruption.Action_Spell_Snap_Eruption_C
class UAction_Spell_Snap_Eruption_C : public UAction_SpellThrow_Snap_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x408(0x8)(Transient, DuplicateTransient)
	class UWwiseEvent*                           Audio_Snap;                                        // 0x410(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAction_Spell_Snap_Eruption_C* GetDefaultObj();

	void OnDialogSequenceFinished_2();
	void Notify_SpellWarmup();
	void Notify_SpellCast();
	void Audio_FingerSnap();
	void ExecuteUbergraph_Action_Spell_Snap_Eruption(int32 EntryPoint, class AActor* CallFunc_K2_GetActor_ReturnValue, class AActor* CallFunc_K2_GetActor_ReturnValue1, class UParticleSystem* CallFunc_GetCollectionFX_ReturnValue, enum class EOakElementalType CallFunc_GetSpellElement_ReturnedElement, class UParticleSystemComponent* CallFunc_PlayFX_1stFXComponent, class UParticleSystemComponent* CallFunc_PlayFX_3rdFXComponent, class FName CallFunc_PlayFX_Socket, class AActor* CallFunc_K2_GetActor_ReturnValue2, class AActor* CallFunc_K2_GetActor_ReturnValue3, class UParticleSystem* CallFunc_GetCollectionFX_ReturnValue1, class AActor* CallFunc_K2_GetActor_ReturnValue4, class UParticleSystemComponent* CallFunc_PlayFX_1stFXComponent1, class UParticleSystemComponent* CallFunc_PlayFX_3rdFXComponent1, class FName CallFunc_PlayFX_Socket1, class AActor* CallFunc_K2_GetActor_ReturnValue5, class UWwiseEvent* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, enum class EOakElementalType CallFunc_GetSpellElement_ReturnedElement1, class USceneComponent* CallFunc_DeterminSnapLocation_Component, class FName CallFunc_DeterminSnapLocation_Socket, const struct FWwisePlaybackInstance& CallFunc_PostAttachedEvent_ReturnValue, class UWwiseEvent* CallFunc_Map_Find_Value1, bool CallFunc_Map_Find_ReturnValue1, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue1, const struct FDialogConversation& CallFunc_FinishTriggerDialog_Conversation, int32 CallFunc_FinishTriggerDialog_SequenceID, bool CallFunc_FinishTriggerDialog_ReturnValue, class AActor* CallFunc_K2_GetActor_ReturnValue6, const struct FDialogConversation& CallFunc_FinishTriggerDialog_Conversation1, int32 CallFunc_FinishTriggerDialog_SequenceID1, bool CallFunc_FinishTriggerDialog_ReturnValue1);
};

}


