#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_Spell_Snap_IceSpike_Mod_02.Action_Spell_Snap_IceSpike_Mod_02_C
// (None)

class UClass* UAction_Spell_Snap_IceSpike_Mod_02_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_Spell_Snap_IceSpike_Mod_02_C");

	return Clss;
}


// Action_Spell_Snap_IceSpike_Mod_02_C Action_Spell_Snap_IceSpike_Mod_02.Default__Action_Spell_Snap_IceSpike_Mod_02_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_Spell_Snap_IceSpike_Mod_02_C* UAction_Spell_Snap_IceSpike_Mod_02_C::GetDefaultObj()
{
	static class UAction_Spell_Snap_IceSpike_Mod_02_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_Spell_Snap_IceSpike_Mod_02_C*>(UAction_Spell_Snap_IceSpike_Mod_02_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Action_Spell_Snap_IceSpike_Mod_02.Action_Spell_Snap_IceSpike_Mod_02_C.OnDialogSequenceFinished_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAction_Spell_Snap_IceSpike_Mod_02_C::OnDialogSequenceFinished_2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_Spell_Snap_IceSpike_Mod_02_C", "OnDialogSequenceFinished_2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Action_Spell_Snap_IceSpike_Mod_02.Action_Spell_Snap_IceSpike_Mod_02_C.Notify_SpellWarmup
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAction_Spell_Snap_IceSpike_Mod_02_C::Notify_SpellWarmup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_Spell_Snap_IceSpike_Mod_02_C", "Notify_SpellWarmup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Action_Spell_Snap_IceSpike_Mod_02.Action_Spell_Snap_IceSpike_Mod_02_C.Notify_SpellCast
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAction_Spell_Snap_IceSpike_Mod_02_C::Notify_SpellCast()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_Spell_Snap_IceSpike_Mod_02_C", "Notify_SpellCast");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Action_Spell_Snap_IceSpike_Mod_02.Action_Spell_Snap_IceSpike_Mod_02_C.Audio_FingerSnap
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAction_Spell_Snap_IceSpike_Mod_02_C::Audio_FingerSnap()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_Spell_Snap_IceSpike_Mod_02_C", "Audio_FingerSnap");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Action_Spell_Snap_IceSpike_Mod_02.Action_Spell_Snap_IceSpike_Mod_02_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Spell_Snap_IceSpike_Mod_02_C::OnBegin(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_Spell_Snap_IceSpike_Mod_02_C", "OnBegin");

	Params::UAction_Spell_Snap_IceSpike_Mod_02_C_OnBegin_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Action_Spell_Snap_IceSpike_Mod_02.Action_Spell_Snap_IceSpike_Mod_02_C.ExecuteUbergraph_Action_Spell_Snap_IceSpike_Mod_02
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDialogContext              CallFunc_NewDialogContext_ReturnValue                            (None)
// struct FDialogConversation         CallFunc_FinishTriggerDialog_Conversation                        (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FinishTriggerDialog_SequenceID                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FinishTriggerDialog_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_PlayFX_1stFXComponent                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_PlayFX_3rdFXComponent                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_PlayFX_Socket                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_PlayFX_1stFXComponent1                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_PlayFX_3rdFXComponent1                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_PlayFX_Socket1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Actor                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EOakElementalType       CallFunc_GetSpellElement_ReturnedElement                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWwiseEvent*                 CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EOakElementalType       CallFunc_GetSpellElement_ReturnedElement1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWwiseEvent*                 CallFunc_Map_Find_Value1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDialogContext              CallFunc_NewDialogContext_ReturnValue1                           (None)
// struct FDialogConversation         CallFunc_FinishTriggerDialog_Conversation1                       (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FinishTriggerDialog_SequenceID1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FinishTriggerDialog_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Spell_Snap_IceSpike_Mod_02_C::ExecuteUbergraph_Action_Spell_Snap_IceSpike_Mod_02(int32 EntryPoint, class AActor* CallFunc_K2_GetActor_ReturnValue, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue, const struct FDialogConversation& CallFunc_FinishTriggerDialog_Conversation, int32 CallFunc_FinishTriggerDialog_SequenceID, bool CallFunc_FinishTriggerDialog_ReturnValue, class AActor* CallFunc_K2_GetActor_ReturnValue1, class UParticleSystemComponent* CallFunc_PlayFX_1stFXComponent, class UParticleSystemComponent* CallFunc_PlayFX_3rdFXComponent, class FName CallFunc_PlayFX_Socket, class AActor* CallFunc_K2_GetActor_ReturnValue2, class UParticleSystemComponent* CallFunc_PlayFX_1stFXComponent1, class UParticleSystemComponent* CallFunc_PlayFX_3rdFXComponent1, class FName CallFunc_PlayFX_Socket1, class AActor* CallFunc_K2_GetActor_ReturnValue3, class AActor* K2Node_Event_Actor, class AActor* CallFunc_K2_GetActor_ReturnValue4, enum class EOakElementalType CallFunc_GetSpellElement_ReturnedElement, class AActor* CallFunc_K2_GetActor_ReturnValue5, class UWwiseEvent* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, enum class EOakElementalType CallFunc_GetSpellElement_ReturnedElement1, class UWwiseEvent* CallFunc_Map_Find_Value1, bool CallFunc_Map_Find_ReturnValue1, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue1, const struct FDialogConversation& CallFunc_FinishTriggerDialog_Conversation1, int32 CallFunc_FinishTriggerDialog_SequenceID1, bool CallFunc_FinishTriggerDialog_ReturnValue1, class AActor* CallFunc_K2_GetActor_ReturnValue6)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_Spell_Snap_IceSpike_Mod_02_C", "ExecuteUbergraph_Action_Spell_Snap_IceSpike_Mod_02");

	Params::UAction_Spell_Snap_IceSpike_Mod_02_C_ExecuteUbergraph_Action_Spell_Snap_IceSpike_Mod_02_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_GetActor_ReturnValue = CallFunc_K2_GetActor_ReturnValue;
	Parms.CallFunc_NewDialogContext_ReturnValue = CallFunc_NewDialogContext_ReturnValue;
	Parms.CallFunc_FinishTriggerDialog_Conversation = CallFunc_FinishTriggerDialog_Conversation;
	Parms.CallFunc_FinishTriggerDialog_SequenceID = CallFunc_FinishTriggerDialog_SequenceID;
	Parms.CallFunc_FinishTriggerDialog_ReturnValue = CallFunc_FinishTriggerDialog_ReturnValue;
	Parms.CallFunc_K2_GetActor_ReturnValue1 = CallFunc_K2_GetActor_ReturnValue1;
	Parms.CallFunc_PlayFX_1stFXComponent = CallFunc_PlayFX_1stFXComponent;
	Parms.CallFunc_PlayFX_3rdFXComponent = CallFunc_PlayFX_3rdFXComponent;
	Parms.CallFunc_PlayFX_Socket = CallFunc_PlayFX_Socket;
	Parms.CallFunc_K2_GetActor_ReturnValue2 = CallFunc_K2_GetActor_ReturnValue2;
	Parms.CallFunc_PlayFX_1stFXComponent1 = CallFunc_PlayFX_1stFXComponent1;
	Parms.CallFunc_PlayFX_3rdFXComponent1 = CallFunc_PlayFX_3rdFXComponent1;
	Parms.CallFunc_PlayFX_Socket1 = CallFunc_PlayFX_Socket1;
	Parms.CallFunc_K2_GetActor_ReturnValue3 = CallFunc_K2_GetActor_ReturnValue3;
	Parms.K2Node_Event_Actor = K2Node_Event_Actor;
	Parms.CallFunc_K2_GetActor_ReturnValue4 = CallFunc_K2_GetActor_ReturnValue4;
	Parms.CallFunc_GetSpellElement_ReturnedElement = CallFunc_GetSpellElement_ReturnedElement;
	Parms.CallFunc_K2_GetActor_ReturnValue5 = CallFunc_K2_GetActor_ReturnValue5;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_GetSpellElement_ReturnedElement1 = CallFunc_GetSpellElement_ReturnedElement1;
	Parms.CallFunc_Map_Find_Value1 = CallFunc_Map_Find_Value1;
	Parms.CallFunc_Map_Find_ReturnValue1 = CallFunc_Map_Find_ReturnValue1;
	Parms.CallFunc_NewDialogContext_ReturnValue1 = CallFunc_NewDialogContext_ReturnValue1;
	Parms.CallFunc_FinishTriggerDialog_Conversation1 = CallFunc_FinishTriggerDialog_Conversation1;
	Parms.CallFunc_FinishTriggerDialog_SequenceID1 = CallFunc_FinishTriggerDialog_SequenceID1;
	Parms.CallFunc_FinishTriggerDialog_ReturnValue1 = CallFunc_FinishTriggerDialog_ReturnValue1;
	Parms.CallFunc_K2_GetActor_ReturnValue6 = CallFunc_K2_GetActor_ReturnValue6;

	UObject::ProcessEvent(Func, &Parms);

}

}


