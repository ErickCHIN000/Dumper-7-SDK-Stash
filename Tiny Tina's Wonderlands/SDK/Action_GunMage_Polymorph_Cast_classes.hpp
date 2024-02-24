#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD0 (0x350 - 0x280)
// BlueprintGeneratedClass Action_GunMage_Polymorph_Cast.Action_GunMage_Polymorph_Cast_C
class UAction_GunMage_Polymorph_Cast_C : public UOakAction_Anim_ActionAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(Transient, DuplicateTransient)
	class AOakCharacter_Player*                  PlayerCharacter;                                   // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FEnvQueryParams                       EQSFindPolymorphTarget;                            // 0x290(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UOakActionAbility*                     PolymorphAbility;                                  // 0x348(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAction_GunMage_Polymorph_Cast_C* GetDefaultObj();

	void PlayFX(class UParticleSystem* FX, bool Play1stFX, bool Play3rdFX, class AActor* CallFunc_K2_GetActor_ReturnValue, class UGbxSkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class AActor* CallFunc_K2_GetActor_ReturnValue1, class UOakFirstPersonComponent* CallFunc_GetComponentByClass_ReturnValue1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue1);
	void OnDialogSequenceFinished_2();
	void AN_StartAction();
	void OnBegin(class AActor* Actor);
	void OnServerBegin(class AActor* Actor);
	void OnServerEnd(enum class EGbxActionEndState ActionEndState, class AActor* Actor);
	void AN_ShowIdol();
	void AN_HideIdol();
	void Audio_IdolCrush();
	void CloseFailsafeGate();
	void ExecuteUbergraph_Action_GunMage_Polymorph_Cast(int32 EntryPoint, class AActor* CallFunc_K2_GetActor_ReturnValue, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable1, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool Temp_bool_Has_Been_Initd_Variable1, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue, class AActor* CallFunc_K2_GetActor_ReturnValue1, class APlayerController* CallFunc_GetAssociatedPlayerController_ReturnValue, class AActor* K2Node_Event_Actor2, class AActor* CallFunc_K2_GetActor_ReturnValue2, class APlayerController* CallFunc_GetAssociatedPlayerController_ReturnValue1, class AActor* CallFunc_K2_GetActor_ReturnValue3, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player1, bool K2Node_DynamicCast_bSuccess1, class AActor* K2Node_Event_Actor1, enum class EGbxActionEndState K2Node_Event_ActionEndState, class AActor* K2Node_Event_Actor, class AActor* CallFunc_K2_GetActor_ReturnValue4, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player2, bool K2Node_DynamicCast_bSuccess2, bool Temp_bool_IsClosed_Variable2, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_K2_GetActor_ReturnValue5, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player3, bool K2Node_DynamicCast_bSuccess3, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue1, const struct FDialogConversation& CallFunc_FinishTriggerDialog_Conversation, int32 CallFunc_FinishTriggerDialog_SequenceID, bool CallFunc_FinishTriggerDialog_ReturnValue, class AActor* CallFunc_K2_GetActor_ReturnValue6, const struct FDialogConversation& CallFunc_FinishTriggerDialog_Conversation1, int32 CallFunc_FinishTriggerDialog_SequenceID1, bool CallFunc_FinishTriggerDialog_ReturnValue1, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player4, bool K2Node_DynamicCast_bSuccess4, class AActor* CallFunc_K2_GetActor_ReturnValue7, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess5, TScriptInterface<class IIActionSkill_GunMage_Polymorph_C> K2Node_DynamicCast_AsIAction_Skill_Gun_Mage_Polymorph, bool K2Node_DynamicCast_bSuccess6, class UOakActionAbility* CallFunc_GetPrimaryActionAbility_ReturnValue, bool CallFunc_PolymorphSetFailedToFindTarget_Res, TScriptInterface<class IIActionSkill_GunMage_Polymorph_C> K2Node_DynamicCast_AsIAction_Skill_Gun_Mage_Polymorph1, bool K2Node_DynamicCast_bSuccess7, TScriptInterface<class IIActionSkill_GunMage_Polymorph_C> K2Node_DynamicCast_AsIAction_Skill_Gun_Mage_Polymorph2, bool K2Node_DynamicCast_bSuccess8, bool CallFunc_PolymorphFindTarget_Res, class AActor* CallFunc_PolymorphFindTarget_PolymorphTarget, class AActor* CallFunc_K2_GetActor_ReturnValue8, bool Temp_bool_Has_Been_Initd_Variable2, class AActor* CallFunc_K2_GetActor_ReturnValue9);
};

}


