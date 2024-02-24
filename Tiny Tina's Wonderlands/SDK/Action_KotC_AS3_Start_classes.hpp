#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2C (0x35C - 0x330)
// BlueprintGeneratedClass Action_KotC_AS3_Start.Action_KotC_AS3_Start_C
class UAction_KotC_AS3_Start_C : public UAction_KotC_Parent_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(Transient, DuplicateTransient)
	class FName                                  CameraModeName;                                    // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableValueHandle                 HammerImpactDamage;                                // 0x340(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                        HammerImpactRadius;                                // 0x358(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAction_KotC_AS3_Start_C* GetDefaultObj();

	void OnDialogSequenceFinished_2();
	void AN_StartAction();
	void OnBegin(class AActor* Actor);
	void OnEnd(enum class EGbxActionEndState ActionEndState, class AActor* Actor);
	void SetCameraMode(bool Push);
	void DoNovaEvent();
	void ShowHammer();
	void AN_HideHammer();
	void OnServerBegin(class AActor* Actor);
	void OnBeginBringUpWeapon(class AActor* Actor);
	void AN_LockRotation();
	void AN_UnlockRotation();
	void ExecuteUbergraph_Action_KotC_AS3_Start(int32 EntryPoint, class AActor* CallFunc_K2_GetActor_ReturnValue, const struct FHitResult& Temp_struct_Variable, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue, class AActor* CallFunc_K2_GetActor_ReturnValue1, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess1, class AActor* K2Node_Event_Actor3, class UOakActionAbility* CallFunc_GetPrimaryActionAbility_ReturnValue, TScriptInterface<class IIActionSkill_KotC_AS3_C> K2Node_DynamicCast_AsIAction_Skill_Kot_C_AS3, bool K2Node_DynamicCast_bSuccess2, enum class EGbxActionEndState K2Node_Event_ActionEndState, class AActor* K2Node_Event_Actor2, bool CallFunc_FieryRedemptionStartEffect_Res, bool K2Node_CustomEvent_Push, class AActor* CallFunc_K2_GetActor_ReturnValue2, class APlayerController* CallFunc_GetAssociatedPlayerController_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_SetHammerTransform3rd_Res, const struct FTransform& CallFunc_MakeTransform_ReturnValue1, bool CallFunc_SetHammerTransform1st_Res, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue1, const struct FDialogConversation& CallFunc_FinishTriggerDialog_Conversation, int32 CallFunc_FinishTriggerDialog_SequenceID, bool CallFunc_FinishTriggerDialog_ReturnValue, bool Temp_bool_IsClosed_Variable, const struct FDialogConversation& CallFunc_FinishTriggerDialog_Conversation1, int32 CallFunc_FinishTriggerDialog_SequenceID1, bool CallFunc_FinishTriggerDialog_ReturnValue1, class AActor* CallFunc_K2_GetActor_ReturnValue3, class AActor* CallFunc_K2_GetActor_ReturnValue4, const struct FVector& CallFunc_GetActorUpVector_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue1, const struct FTransform& CallFunc_GetActorSocket_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue1, class AActor* K2Node_Event_Actor1, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player1, bool K2Node_DynamicCast_bSuccess3, class UOakActionAbility* CallFunc_GetPrimaryActionAbility_ReturnValue1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, TScriptInterface<class IIActionSkill_KotC_AS3_C> K2Node_DynamicCast_AsIAction_Skill_Kot_C_AS31, bool K2Node_DynamicCast_bSuccess4, bool CallFunc_FieryRedemptionSetBreathWeaponEnable_Res, bool Temp_bool_Has_Been_Initd_Variable, class AActor* CallFunc_K2_GetActor_ReturnValue5, class AActor* CallFunc_K2_GetActor_ReturnValue6, class APlayerController* CallFunc_GetAssociatedPlayerController_ReturnValue1, class APlayerController* CallFunc_GetAssociatedPlayerController_ReturnValue2, class AActor* CallFunc_K2_GetActor_ReturnValue7, const struct FHitResult& Temp_struct_Variable1, class AActor* CallFunc_K2_GetActor_ReturnValue8, float CallFunc_GetDataTableValueFromHandle_ReturnValue, class AActor* K2Node_Event_Actor, class AActor* CallFunc_K2_GetActor_ReturnValue9, class AActor* CallFunc_K2_GetActor_ReturnValue10, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player2, bool K2Node_DynamicCast_bSuccess5, class AActor* CallFunc_K2_GetActor_ReturnValue11);
};

}


