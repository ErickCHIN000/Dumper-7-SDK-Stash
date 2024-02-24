#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_GunMage_Polymorph_Cast.Action_GunMage_Polymorph_Cast_C
// (None)

class UClass* UAction_GunMage_Polymorph_Cast_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_GunMage_Polymorph_Cast_C");

	return Clss;
}


// Action_GunMage_Polymorph_Cast_C Action_GunMage_Polymorph_Cast.Default__Action_GunMage_Polymorph_Cast_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_GunMage_Polymorph_Cast_C* UAction_GunMage_Polymorph_Cast_C::GetDefaultObj()
{
	static class UAction_GunMage_Polymorph_Cast_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_GunMage_Polymorph_Cast_C*>(UAction_GunMage_Polymorph_Cast_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Action_GunMage_Polymorph_Cast.Action_GunMage_Polymorph_Cast_C.PlayFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystem*             FX                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Play1stFX                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Play3rdFX                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxSkeletalMeshComponent*   CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOakFirstPersonComponent*    CallFunc_GetComponentByClass_ReturnValue1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue1                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_GunMage_Polymorph_Cast_C::PlayFX(class UParticleSystem* FX, bool Play1stFX, bool Play3rdFX, class AActor* CallFunc_K2_GetActor_ReturnValue, class UGbxSkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class AActor* CallFunc_K2_GetActor_ReturnValue1, class UOakFirstPersonComponent* CallFunc_GetComponentByClass_ReturnValue1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_GunMage_Polymorph_Cast_C", "PlayFX");

	Params::UAction_GunMage_Polymorph_Cast_C_PlayFX_Params Parms{};

	Parms.FX = FX;
	Parms.Play1stFX = Play1stFX;
	Parms.Play3rdFX = Play3rdFX;
	Parms.CallFunc_K2_GetActor_ReturnValue = CallFunc_K2_GetActor_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue = CallFunc_SpawnEmitterAttached_ReturnValue;
	Parms.CallFunc_K2_GetActor_ReturnValue1 = CallFunc_K2_GetActor_ReturnValue1;
	Parms.CallFunc_GetComponentByClass_ReturnValue1 = CallFunc_GetComponentByClass_ReturnValue1;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue1 = CallFunc_SpawnEmitterAttached_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Action_GunMage_Polymorph_Cast.Action_GunMage_Polymorph_Cast_C.OnDialogSequenceFinished_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAction_GunMage_Polymorph_Cast_C::OnDialogSequenceFinished_2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_GunMage_Polymorph_Cast_C", "OnDialogSequenceFinished_2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Action_GunMage_Polymorph_Cast.Action_GunMage_Polymorph_Cast_C.AN_StartAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAction_GunMage_Polymorph_Cast_C::AN_StartAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_GunMage_Polymorph_Cast_C", "AN_StartAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Action_GunMage_Polymorph_Cast.Action_GunMage_Polymorph_Cast_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_GunMage_Polymorph_Cast_C::OnBegin(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_GunMage_Polymorph_Cast_C", "OnBegin");

	Params::UAction_GunMage_Polymorph_Cast_C_OnBegin_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Action_GunMage_Polymorph_Cast.Action_GunMage_Polymorph_Cast_C.OnServerBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_GunMage_Polymorph_Cast_C::OnServerBegin(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_GunMage_Polymorph_Cast_C", "OnServerBegin");

	Params::UAction_GunMage_Polymorph_Cast_C_OnServerBegin_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Action_GunMage_Polymorph_Cast.Action_GunMage_Polymorph_Cast_C.OnServerEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EGbxActionEndState      ActionEndState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_GunMage_Polymorph_Cast_C::OnServerEnd(enum class EGbxActionEndState ActionEndState, class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_GunMage_Polymorph_Cast_C", "OnServerEnd");

	Params::UAction_GunMage_Polymorph_Cast_C_OnServerEnd_Params Parms{};

	Parms.ActionEndState = ActionEndState;
	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Action_GunMage_Polymorph_Cast.Action_GunMage_Polymorph_Cast_C.AN_ShowIdol
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAction_GunMage_Polymorph_Cast_C::AN_ShowIdol()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_GunMage_Polymorph_Cast_C", "AN_ShowIdol");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Action_GunMage_Polymorph_Cast.Action_GunMage_Polymorph_Cast_C.AN_HideIdol
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAction_GunMage_Polymorph_Cast_C::AN_HideIdol()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_GunMage_Polymorph_Cast_C", "AN_HideIdol");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Action_GunMage_Polymorph_Cast.Action_GunMage_Polymorph_Cast_C.Audio_IdolCrush
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAction_GunMage_Polymorph_Cast_C::Audio_IdolCrush()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_GunMage_Polymorph_Cast_C", "Audio_IdolCrush");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Action_GunMage_Polymorph_Cast.Action_GunMage_Polymorph_Cast_C.CloseFailsafeGate
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAction_GunMage_Polymorph_Cast_C::CloseFailsafeGate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_GunMage_Polymorph_Cast_C", "CloseFailsafeGate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Action_GunMage_Polymorph_Cast.Action_GunMage_Polymorph_Cast_C.ExecuteUbergraph_Action_GunMage_Polymorph_Cast
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIBPChar_Player_C>K2Node_DynamicCast_AsIBPChar_Player                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDialogContext              CallFunc_NewDialogContext_ReturnValue                            (None)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetAssociatedPlayerController_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Actor2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetAssociatedPlayerController_ReturnValue1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIBPChar_Player_C>K2Node_DynamicCast_AsIBPChar_Player1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_Event_Actor1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGbxActionEndState      K2Node_Event_ActionEndState                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Actor                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIBPChar_Player_C>K2Node_DynamicCast_AsIBPChar_Player2                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIBPChar_Player_C>K2Node_DynamicCast_AsIBPChar_Player3                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDialogContext              CallFunc_NewDialogContext_ReturnValue1                           (None)
// struct FDialogConversation         CallFunc_FinishTriggerDialog_Conversation                        (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FinishTriggerDialog_SequenceID                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FinishTriggerDialog_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDialogConversation         CallFunc_FinishTriggerDialog_Conversation1                       (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FinishTriggerDialog_SequenceID1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FinishTriggerDialog_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IIBPChar_Player_C>K2Node_DynamicCast_AsIBPChar_Player4                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess4                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue7                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakCharacter_Player*        K2Node_DynamicCast_AsOak_Character_Player                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess5                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IIActionSkill_GunMage_Polymorph_C>K2Node_DynamicCast_AsIAction_Skill_Gun_Mage_Polymorph            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess6                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOakActionAbility*           CallFunc_GetPrimaryActionAbility_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PolymorphSetFailedToFindTarget_Res                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IIActionSkill_GunMage_Polymorph_C>K2Node_DynamicCast_AsIAction_Skill_Gun_Mage_Polymorph1           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess7                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IIActionSkill_GunMage_Polymorph_C>K2Node_DynamicCast_AsIAction_Skill_Gun_Mage_Polymorph2           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess8                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_PolymorphFindTarget_Res                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_PolymorphFindTarget_PolymorphTarget                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue8                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue9                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_GunMage_Polymorph_Cast_C::ExecuteUbergraph_Action_GunMage_Polymorph_Cast(int32 EntryPoint, class AActor* CallFunc_K2_GetActor_ReturnValue, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable1, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool Temp_bool_Has_Been_Initd_Variable1, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue, class AActor* CallFunc_K2_GetActor_ReturnValue1, class APlayerController* CallFunc_GetAssociatedPlayerController_ReturnValue, class AActor* K2Node_Event_Actor2, class AActor* CallFunc_K2_GetActor_ReturnValue2, class APlayerController* CallFunc_GetAssociatedPlayerController_ReturnValue1, class AActor* CallFunc_K2_GetActor_ReturnValue3, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player1, bool K2Node_DynamicCast_bSuccess1, class AActor* K2Node_Event_Actor1, enum class EGbxActionEndState K2Node_Event_ActionEndState, class AActor* K2Node_Event_Actor, class AActor* CallFunc_K2_GetActor_ReturnValue4, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player2, bool K2Node_DynamicCast_bSuccess2, bool Temp_bool_IsClosed_Variable2, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_K2_GetActor_ReturnValue5, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player3, bool K2Node_DynamicCast_bSuccess3, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue1, const struct FDialogConversation& CallFunc_FinishTriggerDialog_Conversation, int32 CallFunc_FinishTriggerDialog_SequenceID, bool CallFunc_FinishTriggerDialog_ReturnValue, class AActor* CallFunc_K2_GetActor_ReturnValue6, const struct FDialogConversation& CallFunc_FinishTriggerDialog_Conversation1, int32 CallFunc_FinishTriggerDialog_SequenceID1, bool CallFunc_FinishTriggerDialog_ReturnValue1, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player4, bool K2Node_DynamicCast_bSuccess4, class AActor* CallFunc_K2_GetActor_ReturnValue7, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess5, TScriptInterface<class IIActionSkill_GunMage_Polymorph_C> K2Node_DynamicCast_AsIAction_Skill_Gun_Mage_Polymorph, bool K2Node_DynamicCast_bSuccess6, class UOakActionAbility* CallFunc_GetPrimaryActionAbility_ReturnValue, bool CallFunc_PolymorphSetFailedToFindTarget_Res, TScriptInterface<class IIActionSkill_GunMage_Polymorph_C> K2Node_DynamicCast_AsIAction_Skill_Gun_Mage_Polymorph1, bool K2Node_DynamicCast_bSuccess7, TScriptInterface<class IIActionSkill_GunMage_Polymorph_C> K2Node_DynamicCast_AsIAction_Skill_Gun_Mage_Polymorph2, bool K2Node_DynamicCast_bSuccess8, bool CallFunc_PolymorphFindTarget_Res, class AActor* CallFunc_PolymorphFindTarget_PolymorphTarget, class AActor* CallFunc_K2_GetActor_ReturnValue8, bool Temp_bool_Has_Been_Initd_Variable2, class AActor* CallFunc_K2_GetActor_ReturnValue9)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_GunMage_Polymorph_Cast_C", "ExecuteUbergraph_Action_GunMage_Polymorph_Cast");

	Params::UAction_GunMage_Polymorph_Cast_C_ExecuteUbergraph_Action_GunMage_Polymorph_Cast_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_GetActor_ReturnValue = CallFunc_K2_GetActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsIBPChar_Player = K2Node_DynamicCast_AsIBPChar_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_IsClosed_Variable1 = Temp_bool_IsClosed_Variable1;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable1 = Temp_bool_Has_Been_Initd_Variable1;
	Parms.CallFunc_NewDialogContext_ReturnValue = CallFunc_NewDialogContext_ReturnValue;
	Parms.CallFunc_K2_GetActor_ReturnValue1 = CallFunc_K2_GetActor_ReturnValue1;
	Parms.CallFunc_GetAssociatedPlayerController_ReturnValue = CallFunc_GetAssociatedPlayerController_ReturnValue;
	Parms.K2Node_Event_Actor2 = K2Node_Event_Actor2;
	Parms.CallFunc_K2_GetActor_ReturnValue2 = CallFunc_K2_GetActor_ReturnValue2;
	Parms.CallFunc_GetAssociatedPlayerController_ReturnValue1 = CallFunc_GetAssociatedPlayerController_ReturnValue1;
	Parms.CallFunc_K2_GetActor_ReturnValue3 = CallFunc_K2_GetActor_ReturnValue3;
	Parms.K2Node_DynamicCast_AsIBPChar_Player1 = K2Node_DynamicCast_AsIBPChar_Player1;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.K2Node_Event_Actor1 = K2Node_Event_Actor1;
	Parms.K2Node_Event_ActionEndState = K2Node_Event_ActionEndState;
	Parms.K2Node_Event_Actor = K2Node_Event_Actor;
	Parms.CallFunc_K2_GetActor_ReturnValue4 = CallFunc_K2_GetActor_ReturnValue4;
	Parms.K2Node_DynamicCast_AsIBPChar_Player2 = K2Node_DynamicCast_AsIBPChar_Player2;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.Temp_bool_IsClosed_Variable2 = Temp_bool_IsClosed_Variable2;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_K2_GetActor_ReturnValue5 = CallFunc_K2_GetActor_ReturnValue5;
	Parms.K2Node_DynamicCast_AsIBPChar_Player3 = K2Node_DynamicCast_AsIBPChar_Player3;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;
	Parms.CallFunc_NewDialogContext_ReturnValue1 = CallFunc_NewDialogContext_ReturnValue1;
	Parms.CallFunc_FinishTriggerDialog_Conversation = CallFunc_FinishTriggerDialog_Conversation;
	Parms.CallFunc_FinishTriggerDialog_SequenceID = CallFunc_FinishTriggerDialog_SequenceID;
	Parms.CallFunc_FinishTriggerDialog_ReturnValue = CallFunc_FinishTriggerDialog_ReturnValue;
	Parms.CallFunc_K2_GetActor_ReturnValue6 = CallFunc_K2_GetActor_ReturnValue6;
	Parms.CallFunc_FinishTriggerDialog_Conversation1 = CallFunc_FinishTriggerDialog_Conversation1;
	Parms.CallFunc_FinishTriggerDialog_SequenceID1 = CallFunc_FinishTriggerDialog_SequenceID1;
	Parms.CallFunc_FinishTriggerDialog_ReturnValue1 = CallFunc_FinishTriggerDialog_ReturnValue1;
	Parms.K2Node_DynamicCast_AsIBPChar_Player4 = K2Node_DynamicCast_AsIBPChar_Player4;
	Parms.K2Node_DynamicCast_bSuccess4 = K2Node_DynamicCast_bSuccess4;
	Parms.CallFunc_K2_GetActor_ReturnValue7 = CallFunc_K2_GetActor_ReturnValue7;
	Parms.K2Node_DynamicCast_AsOak_Character_Player = K2Node_DynamicCast_AsOak_Character_Player;
	Parms.K2Node_DynamicCast_bSuccess5 = K2Node_DynamicCast_bSuccess5;
	Parms.K2Node_DynamicCast_AsIAction_Skill_Gun_Mage_Polymorph = K2Node_DynamicCast_AsIAction_Skill_Gun_Mage_Polymorph;
	Parms.K2Node_DynamicCast_bSuccess6 = K2Node_DynamicCast_bSuccess6;
	Parms.CallFunc_GetPrimaryActionAbility_ReturnValue = CallFunc_GetPrimaryActionAbility_ReturnValue;
	Parms.CallFunc_PolymorphSetFailedToFindTarget_Res = CallFunc_PolymorphSetFailedToFindTarget_Res;
	Parms.K2Node_DynamicCast_AsIAction_Skill_Gun_Mage_Polymorph1 = K2Node_DynamicCast_AsIAction_Skill_Gun_Mage_Polymorph1;
	Parms.K2Node_DynamicCast_bSuccess7 = K2Node_DynamicCast_bSuccess7;
	Parms.K2Node_DynamicCast_AsIAction_Skill_Gun_Mage_Polymorph2 = K2Node_DynamicCast_AsIAction_Skill_Gun_Mage_Polymorph2;
	Parms.K2Node_DynamicCast_bSuccess8 = K2Node_DynamicCast_bSuccess8;
	Parms.CallFunc_PolymorphFindTarget_Res = CallFunc_PolymorphFindTarget_Res;
	Parms.CallFunc_PolymorphFindTarget_PolymorphTarget = CallFunc_PolymorphFindTarget_PolymorphTarget;
	Parms.CallFunc_K2_GetActor_ReturnValue8 = CallFunc_K2_GetActor_ReturnValue8;
	Parms.Temp_bool_Has_Been_Initd_Variable2 = Temp_bool_Has_Been_Initd_Variable2;
	Parms.CallFunc_K2_GetActor_ReturnValue9 = CallFunc_K2_GetActor_ReturnValue9;

	UObject::ProcessEvent(Func, &Parms);

}

}


