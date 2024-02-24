#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x418 - 0x408)
// BlueprintGeneratedClass Action_SpellThrow_Meteor.Action_SpellThrow_Meteor_C
class UAction_SpellThrow_Meteor_C : public UAction_SpellThrow_Push_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x408(0x8)(Transient, DuplicateTransient)
	class AActor*                                ActorCasting;                                      // 0x410(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAction_SpellThrow_Meteor_C* GetDefaultObj();

	void OnDialogSequenceFinished_2();
	void OnBegin(class AActor* Actor);
	void Notify_SpellWarmup();
	void Notify_SpellStart();
	void Notify_SpellCast();
	void Notify_SpellWarmup3rd();
	void Notify_SpellStart3rd();
	void Notify_SpellCast3rd();
	void ExecuteUbergraph_Action_SpellThrow_Meteor(int32 EntryPoint, class AActor* CallFunc_K2_GetActor_ReturnValue, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue, const struct FDialogConversation& CallFunc_FinishTriggerDialog_Conversation, int32 CallFunc_FinishTriggerDialog_SequenceID, bool CallFunc_FinishTriggerDialog_ReturnValue, class AActor* K2Node_Event_Actor, enum class EOakElementalType CallFunc_GetSpellElement_ReturnedElement, class UParticleSystem* CallFunc_GetCollectionFX_ReturnValue, class UParticleSystemComponent* CallFunc_PlayFX_1stFXComponent, class UParticleSystemComponent* CallFunc_PlayFX_3rdFXComponent, class FName CallFunc_PlayFX_Socket, class UParticleSystem* CallFunc_GetCollectionFX_ReturnValue1, class UParticleSystem* CallFunc_GetCollectionFX_ReturnValue2, class UParticleSystemComponent* CallFunc_PlayFX_1stFXComponent1, class UParticleSystemComponent* CallFunc_PlayFX_3rdFXComponent1, class FName CallFunc_PlayFX_Socket1, class UParticleSystemComponent* CallFunc_PlayFX_1stFXComponent2, class UParticleSystemComponent* CallFunc_PlayFX_3rdFXComponent2, class FName CallFunc_PlayFX_Socket2, class UParticleSystem* CallFunc_GetCollectionFX_ReturnValue3, class UParticleSystem* CallFunc_GetCollectionFX_ReturnValue4, class UParticleSystemComponent* CallFunc_PlayFX_1stFXComponent3, class UParticleSystemComponent* CallFunc_PlayFX_3rdFXComponent3, class FName CallFunc_PlayFX_Socket3, class UParticleSystemComponent* CallFunc_PlayFX_1stFXComponent4, class UParticleSystemComponent* CallFunc_PlayFX_3rdFXComponent4, class FName CallFunc_PlayFX_Socket4, class UParticleSystem* CallFunc_GetCollectionFX_ReturnValue5, class UParticleSystemComponent* CallFunc_PlayFX_1stFXComponent5, class UParticleSystemComponent* CallFunc_PlayFX_3rdFXComponent5, class FName CallFunc_PlayFX_Socket5, class UWwiseEvent* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue1, class UWwiseEvent* CallFunc_Map_Find_Value1, bool CallFunc_Map_Find_ReturnValue1, const struct FDialogConversation& CallFunc_FinishTriggerDialog_Conversation1, int32 CallFunc_FinishTriggerDialog_SequenceID1, bool CallFunc_FinishTriggerDialog_ReturnValue1, class AActor* CallFunc_K2_GetActor_ReturnValue1);
};

}


