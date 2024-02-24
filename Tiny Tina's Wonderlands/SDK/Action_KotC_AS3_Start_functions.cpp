#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_KotC_AS3_Start.Action_KotC_AS3_Start_C
// (None)

class UClass* UAction_KotC_AS3_Start_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_KotC_AS3_Start_C");

	return Clss;
}


// Action_KotC_AS3_Start_C Action_KotC_AS3_Start.Default__Action_KotC_AS3_Start_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_KotC_AS3_Start_C* UAction_KotC_AS3_Start_C::GetDefaultObj()
{
	static class UAction_KotC_AS3_Start_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_KotC_AS3_Start_C*>(UAction_KotC_AS3_Start_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Action_KotC_AS3_Start.Action_KotC_AS3_Start_C.OnDialogSequenceFinished_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAction_KotC_AS3_Start_C::OnDialogSequenceFinished_2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_KotC_AS3_Start_C", "OnDialogSequenceFinished_2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Action_KotC_AS3_Start.Action_KotC_AS3_Start_C.AN_StartAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAction_KotC_AS3_Start_C::AN_StartAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_KotC_AS3_Start_C", "AN_StartAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Action_KotC_AS3_Start.Action_KotC_AS3_Start_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_KotC_AS3_Start_C::OnBegin(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_KotC_AS3_Start_C", "OnBegin");

	Params::UAction_KotC_AS3_Start_C_OnBegin_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Action_KotC_AS3_Start.Action_KotC_AS3_Start_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EGbxActionEndState      ActionEndState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_KotC_AS3_Start_C::OnEnd(enum class EGbxActionEndState ActionEndState, class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_KotC_AS3_Start_C", "OnEnd");

	Params::UAction_KotC_AS3_Start_C_OnEnd_Params Parms{};

	Parms.ActionEndState = ActionEndState;
	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Action_KotC_AS3_Start.Action_KotC_AS3_Start_C.SetCameraMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Push                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAction_KotC_AS3_Start_C::SetCameraMode(bool Push)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_KotC_AS3_Start_C", "SetCameraMode");

	Params::UAction_KotC_AS3_Start_C_SetCameraMode_Params Parms{};

	Parms.Push = Push;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Action_KotC_AS3_Start.Action_KotC_AS3_Start_C.DoNovaEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAction_KotC_AS3_Start_C::DoNovaEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_KotC_AS3_Start_C", "DoNovaEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Action_KotC_AS3_Start.Action_KotC_AS3_Start_C.ShowHammer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAction_KotC_AS3_Start_C::ShowHammer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_KotC_AS3_Start_C", "ShowHammer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Action_KotC_AS3_Start.Action_KotC_AS3_Start_C.AN_HideHammer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAction_KotC_AS3_Start_C::AN_HideHammer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_KotC_AS3_Start_C", "AN_HideHammer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Action_KotC_AS3_Start.Action_KotC_AS3_Start_C.OnServerBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_KotC_AS3_Start_C::OnServerBegin(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_KotC_AS3_Start_C", "OnServerBegin");

	Params::UAction_KotC_AS3_Start_C_OnServerBegin_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Action_KotC_AS3_Start.Action_KotC_AS3_Start_C.OnBeginBringUpWeapon
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_KotC_AS3_Start_C::OnBeginBringUpWeapon(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_KotC_AS3_Start_C", "OnBeginBringUpWeapon");

	Params::UAction_KotC_AS3_Start_C_OnBeginBringUpWeapon_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Action_KotC_AS3_Start.Action_KotC_AS3_Start_C.AN_LockRotation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAction_KotC_AS3_Start_C::AN_LockRotation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_KotC_AS3_Start_C", "AN_LockRotation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Action_KotC_AS3_Start.Action_KotC_AS3_Start_C.AN_UnlockRotation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAction_KotC_AS3_Start_C::AN_UnlockRotation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_KotC_AS3_Start_C", "AN_UnlockRotation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Action_KotC_AS3_Start.Action_KotC_AS3_Start_C.ExecuteUbergraph_Action_KotC_AS3_Start
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// TScriptInterface<class IIBPChar_Player_C>K2Node_DynamicCast_AsIBPChar_Player                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDialogContext              CallFunc_NewDialogContext_ReturnValue                            (None)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakCharacter_Player*        K2Node_DynamicCast_AsOak_Character_Player                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_Event_Actor3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOakActionAbility*           CallFunc_GetPrimaryActionAbility_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIActionSkill_KotC_AS3_C>K2Node_DynamicCast_AsIAction_Skill_Kot_C_AS3                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EGbxActionEndState      K2Node_Event_ActionEndState                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Actor2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FieryRedemptionStartEffect_Res                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Push                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetAssociatedPlayerController_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetHammerTransform3rd_Res                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue1                              (IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetHammerTransform1st_Res                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDialogContext              CallFunc_NewDialogContext_ReturnValue1                           (None)
// struct FDialogConversation         CallFunc_FinishTriggerDialog_Conversation                        (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FinishTriggerDialog_SequenceID                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FinishTriggerDialog_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDialogConversation         CallFunc_FinishTriggerDialog_Conversation1                       (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FinishTriggerDialog_SequenceID1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FinishTriggerDialog_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorUpVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue1                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetActorSocket_ReturnValue                              (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue1                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Actor1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIBPChar_Player_C>K2Node_DynamicCast_AsIBPChar_Player1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOakActionAbility*           CallFunc_GetPrimaryActionAbility_ReturnValue1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIActionSkill_KotC_AS3_C>K2Node_DynamicCast_AsIAction_Skill_Kot_C_AS31                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess4                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_FieryRedemptionSetBreathWeaponEnable_Res                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetAssociatedPlayerController_ReturnValue1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetAssociatedPlayerController_ReturnValue2              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue7                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  Temp_struct_Variable1                                            (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue8                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDataTableValueFromHandle_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Actor                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue9                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue10                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIBPChar_Player_C>K2Node_DynamicCast_AsIBPChar_Player2                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess5                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue11                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_KotC_AS3_Start_C::ExecuteUbergraph_Action_KotC_AS3_Start(int32 EntryPoint, class AActor* CallFunc_K2_GetActor_ReturnValue, const struct FHitResult& Temp_struct_Variable, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue, class AActor* CallFunc_K2_GetActor_ReturnValue1, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess1, class AActor* K2Node_Event_Actor3, class UOakActionAbility* CallFunc_GetPrimaryActionAbility_ReturnValue, TScriptInterface<class IIActionSkill_KotC_AS3_C> K2Node_DynamicCast_AsIAction_Skill_Kot_C_AS3, bool K2Node_DynamicCast_bSuccess2, enum class EGbxActionEndState K2Node_Event_ActionEndState, class AActor* K2Node_Event_Actor2, bool CallFunc_FieryRedemptionStartEffect_Res, bool K2Node_CustomEvent_Push, class AActor* CallFunc_K2_GetActor_ReturnValue2, class APlayerController* CallFunc_GetAssociatedPlayerController_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_SetHammerTransform3rd_Res, const struct FTransform& CallFunc_MakeTransform_ReturnValue1, bool CallFunc_SetHammerTransform1st_Res, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue1, const struct FDialogConversation& CallFunc_FinishTriggerDialog_Conversation, int32 CallFunc_FinishTriggerDialog_SequenceID, bool CallFunc_FinishTriggerDialog_ReturnValue, bool Temp_bool_IsClosed_Variable, const struct FDialogConversation& CallFunc_FinishTriggerDialog_Conversation1, int32 CallFunc_FinishTriggerDialog_SequenceID1, bool CallFunc_FinishTriggerDialog_ReturnValue1, class AActor* CallFunc_K2_GetActor_ReturnValue3, class AActor* CallFunc_K2_GetActor_ReturnValue4, const struct FVector& CallFunc_GetActorUpVector_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue1, const struct FTransform& CallFunc_GetActorSocket_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue1, class AActor* K2Node_Event_Actor1, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player1, bool K2Node_DynamicCast_bSuccess3, class UOakActionAbility* CallFunc_GetPrimaryActionAbility_ReturnValue1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, TScriptInterface<class IIActionSkill_KotC_AS3_C> K2Node_DynamicCast_AsIAction_Skill_Kot_C_AS31, bool K2Node_DynamicCast_bSuccess4, bool CallFunc_FieryRedemptionSetBreathWeaponEnable_Res, bool Temp_bool_Has_Been_Initd_Variable, class AActor* CallFunc_K2_GetActor_ReturnValue5, class AActor* CallFunc_K2_GetActor_ReturnValue6, class APlayerController* CallFunc_GetAssociatedPlayerController_ReturnValue1, class APlayerController* CallFunc_GetAssociatedPlayerController_ReturnValue2, class AActor* CallFunc_K2_GetActor_ReturnValue7, const struct FHitResult& Temp_struct_Variable1, class AActor* CallFunc_K2_GetActor_ReturnValue8, float CallFunc_GetDataTableValueFromHandle_ReturnValue, class AActor* K2Node_Event_Actor, class AActor* CallFunc_K2_GetActor_ReturnValue9, class AActor* CallFunc_K2_GetActor_ReturnValue10, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player2, bool K2Node_DynamicCast_bSuccess5, class AActor* CallFunc_K2_GetActor_ReturnValue11)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_KotC_AS3_Start_C", "ExecuteUbergraph_Action_KotC_AS3_Start");

	Params::UAction_KotC_AS3_Start_C_ExecuteUbergraph_Action_KotC_AS3_Start_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_GetActor_ReturnValue = CallFunc_K2_GetActor_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_DynamicCast_AsIBPChar_Player = K2Node_DynamicCast_AsIBPChar_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_NewDialogContext_ReturnValue = CallFunc_NewDialogContext_ReturnValue;
	Parms.CallFunc_K2_GetActor_ReturnValue1 = CallFunc_K2_GetActor_ReturnValue1;
	Parms.K2Node_DynamicCast_AsOak_Character_Player = K2Node_DynamicCast_AsOak_Character_Player;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.K2Node_Event_Actor3 = K2Node_Event_Actor3;
	Parms.CallFunc_GetPrimaryActionAbility_ReturnValue = CallFunc_GetPrimaryActionAbility_ReturnValue;
	Parms.K2Node_DynamicCast_AsIAction_Skill_Kot_C_AS3 = K2Node_DynamicCast_AsIAction_Skill_Kot_C_AS3;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.K2Node_Event_ActionEndState = K2Node_Event_ActionEndState;
	Parms.K2Node_Event_Actor2 = K2Node_Event_Actor2;
	Parms.CallFunc_FieryRedemptionStartEffect_Res = CallFunc_FieryRedemptionStartEffect_Res;
	Parms.K2Node_CustomEvent_Push = K2Node_CustomEvent_Push;
	Parms.CallFunc_K2_GetActor_ReturnValue2 = CallFunc_K2_GetActor_ReturnValue2;
	Parms.CallFunc_GetAssociatedPlayerController_ReturnValue = CallFunc_GetAssociatedPlayerController_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_SetHammerTransform3rd_Res = CallFunc_SetHammerTransform3rd_Res;
	Parms.CallFunc_MakeTransform_ReturnValue1 = CallFunc_MakeTransform_ReturnValue1;
	Parms.CallFunc_SetHammerTransform1st_Res = CallFunc_SetHammerTransform1st_Res;
	Parms.CallFunc_NewDialogContext_ReturnValue1 = CallFunc_NewDialogContext_ReturnValue1;
	Parms.CallFunc_FinishTriggerDialog_Conversation = CallFunc_FinishTriggerDialog_Conversation;
	Parms.CallFunc_FinishTriggerDialog_SequenceID = CallFunc_FinishTriggerDialog_SequenceID;
	Parms.CallFunc_FinishTriggerDialog_ReturnValue = CallFunc_FinishTriggerDialog_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_FinishTriggerDialog_Conversation1 = CallFunc_FinishTriggerDialog_Conversation1;
	Parms.CallFunc_FinishTriggerDialog_SequenceID1 = CallFunc_FinishTriggerDialog_SequenceID1;
	Parms.CallFunc_FinishTriggerDialog_ReturnValue1 = CallFunc_FinishTriggerDialog_ReturnValue1;
	Parms.CallFunc_K2_GetActor_ReturnValue3 = CallFunc_K2_GetActor_ReturnValue3;
	Parms.CallFunc_K2_GetActor_ReturnValue4 = CallFunc_K2_GetActor_ReturnValue4;
	Parms.CallFunc_GetActorUpVector_ReturnValue = CallFunc_GetActorUpVector_ReturnValue;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue1 = CallFunc_Multiply_VectorFloat_ReturnValue1;
	Parms.CallFunc_GetActorSocket_ReturnValue = CallFunc_GetActorSocket_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue1 = CallFunc_Add_VectorVector_ReturnValue1;
	Parms.K2Node_Event_Actor1 = K2Node_Event_Actor1;
	Parms.K2Node_DynamicCast_AsIBPChar_Player1 = K2Node_DynamicCast_AsIBPChar_Player1;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;
	Parms.CallFunc_GetPrimaryActionAbility_ReturnValue1 = CallFunc_GetPrimaryActionAbility_ReturnValue1;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue = CallFunc_SpawnEmitterAttached_ReturnValue;
	Parms.K2Node_DynamicCast_AsIAction_Skill_Kot_C_AS31 = K2Node_DynamicCast_AsIAction_Skill_Kot_C_AS31;
	Parms.K2Node_DynamicCast_bSuccess4 = K2Node_DynamicCast_bSuccess4;
	Parms.CallFunc_FieryRedemptionSetBreathWeaponEnable_Res = CallFunc_FieryRedemptionSetBreathWeaponEnable_Res;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_K2_GetActor_ReturnValue5 = CallFunc_K2_GetActor_ReturnValue5;
	Parms.CallFunc_K2_GetActor_ReturnValue6 = CallFunc_K2_GetActor_ReturnValue6;
	Parms.CallFunc_GetAssociatedPlayerController_ReturnValue1 = CallFunc_GetAssociatedPlayerController_ReturnValue1;
	Parms.CallFunc_GetAssociatedPlayerController_ReturnValue2 = CallFunc_GetAssociatedPlayerController_ReturnValue2;
	Parms.CallFunc_K2_GetActor_ReturnValue7 = CallFunc_K2_GetActor_ReturnValue7;
	Parms.Temp_struct_Variable1 = Temp_struct_Variable1;
	Parms.CallFunc_K2_GetActor_ReturnValue8 = CallFunc_K2_GetActor_ReturnValue8;
	Parms.CallFunc_GetDataTableValueFromHandle_ReturnValue = CallFunc_GetDataTableValueFromHandle_ReturnValue;
	Parms.K2Node_Event_Actor = K2Node_Event_Actor;
	Parms.CallFunc_K2_GetActor_ReturnValue9 = CallFunc_K2_GetActor_ReturnValue9;
	Parms.CallFunc_K2_GetActor_ReturnValue10 = CallFunc_K2_GetActor_ReturnValue10;
	Parms.K2Node_DynamicCast_AsIBPChar_Player2 = K2Node_DynamicCast_AsIBPChar_Player2;
	Parms.K2Node_DynamicCast_bSuccess5 = K2Node_DynamicCast_bSuccess5;
	Parms.CallFunc_K2_GetActor_ReturnValue11 = CallFunc_K2_GetActor_ReturnValue11;

	UObject::ProcessEvent(Func, &Parms);

}

}


