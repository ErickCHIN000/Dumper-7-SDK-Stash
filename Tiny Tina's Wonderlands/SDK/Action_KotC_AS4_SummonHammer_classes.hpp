#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x338 - 0x330)
// BlueprintGeneratedClass Action_KotC_AS4_SummonHammer.Action_KotC_AS4_SummonHammer_C
class UAction_KotC_AS4_SummonHammer_C : public UAction_KotC_Parent_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UAction_KotC_AS4_SummonHammer_C* GetDefaultObj();

	void OnDialogSequenceFinished_2();
	void OnServerEnd(enum class EGbxActionEndState ActionEndState, class AActor* Actor);
	void AN_ShowHammer();
	void AN_ReleaseHammer();
	void HideHammer();
	void OnServerBegin(class AActor* Actor);
	void OnBeginBringUpWeapon(class AActor* Actor);
	void Audio_TossHammer();
	void ExecuteUbergraph_Action_KotC_AS4_SummonHammer(int32 EntryPoint, class AActor* CallFunc_K2_GetActor_ReturnValue, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_IsClosed_Variable, class AActor* CallFunc_K2_GetActor_ReturnValue1, class AActor* CallFunc_K2_GetActor_ReturnValue2, enum class EGbxActionEndState K2Node_Event_ActionEndState, class AActor* K2Node_Event_Actor2, TArray<class AActor*>& K2Node_MakeArray_Array, const struct FTransform& CallFunc_GetSafeProjectileThrowTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AProj_KotC_AS4_Hammer_C* CallFunc_FinishSpawningActor_ReturnValue, class AActor* K2Node_Event_Actor1, bool Temp_bool_Has_Been_Initd_Variable, class UOakActionAbility* CallFunc_GetPrimaryActionAbility_ReturnValue, TScriptInterface<class IIActionSkill_KotC_AS4_C> K2Node_DynamicCast_AsI_Action_Skill_Kot_C_AS4, bool K2Node_DynamicCast_bSuccess1, class UOakActionAbility* CallFunc_GetPrimaryActionAbility_ReturnValue1, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue1, class AActor* CallFunc_K2_GetActor_ReturnValue3, class APlayerController* CallFunc_GetAssociatedPlayerController_ReturnValue, const struct FDialogConversation& CallFunc_FinishTriggerDialog_Conversation, int32 CallFunc_FinishTriggerDialog_SequenceID, bool CallFunc_FinishTriggerDialog_ReturnValue, const struct FDialogConversation& CallFunc_FinishTriggerDialog_Conversation1, int32 CallFunc_FinishTriggerDialog_SequenceID1, bool CallFunc_FinishTriggerDialog_ReturnValue1, class AActor* K2Node_Event_Actor, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_K2_GetActor_ReturnValue4, bool CallFunc_SetHammerTransform3rd_Res, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player1, bool K2Node_DynamicCast_bSuccess2, class AActor* CallFunc_K2_GetActor_ReturnValue5, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player2, bool K2Node_DynamicCast_bSuccess3, bool CallFunc_IsServer_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue1, bool CallFunc_SetHammerTransform1st_Res, class AActor* CallFunc_K2_GetActor_ReturnValue6, class AActor* CallFunc_K2_GetActor_ReturnValue7);
};

}


