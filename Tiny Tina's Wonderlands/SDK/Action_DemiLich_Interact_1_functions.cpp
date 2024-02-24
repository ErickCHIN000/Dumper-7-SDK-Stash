#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_DemiLich_Interact_1.Action_DemiLich_Interact_1_C
// (None)

class UClass* UAction_DemiLich_Interact_1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_DemiLich_Interact_1_C");

	return Clss;
}


// Action_DemiLich_Interact_1_C Action_DemiLich_Interact_1.Default__Action_DemiLich_Interact_1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_DemiLich_Interact_1_C* UAction_DemiLich_Interact_1_C::GetDefaultObj()
{
	static class UAction_DemiLich_Interact_1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_DemiLich_Interact_1_C*>(UAction_DemiLich_Interact_1_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Action_DemiLich_Interact_1.Action_DemiLich_Interact_1_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_DemiLich_Interact_1_C::OnBegin(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_DemiLich_Interact_1_C", "OnBegin");

	Params::UAction_DemiLich_Interact_1_C_OnBegin_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Action_DemiLich_Interact_1.Action_DemiLich_Interact_1_C.ExecuteUbergraph_Action_DemiLich_Interact_1
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDialogContext              CallFunc_NewDialogContext_ReturnValue                            (None)
// struct FDialogContext              CallFunc_NewDialogContext_ReturnValue1                           (None)
// struct FDialogConversation         CallFunc_FinishTriggerDialog_Conversation                        (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FinishTriggerDialog_SequenceID                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FinishTriggerDialog_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDialogConversation         CallFunc_FinishTriggerDialog_Conversation1                       (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FinishTriggerDialog_SequenceID1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FinishTriggerDialog_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDialogContext              CallFunc_NewDialogContext_ReturnValue2                           (None)
// struct FDialogContext              CallFunc_NewDialogContext_ReturnValue3                           (None)
// struct FDialogConversation         CallFunc_FinishTriggerDialog_Conversation2                       (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FinishTriggerDialog_SequenceID2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FinishTriggerDialog_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDialogConversation         CallFunc_FinishTriggerDialog_Conversation3                       (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FinishTriggerDialog_SequenceID3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FinishTriggerDialog_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_Event_Actor                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_MultiGate_FirstRun                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_MultiGate_Data                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_MultiGate_ScratchBool                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_MultiGate_ScratchIndex                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDialogContext              CallFunc_NewDialogContext_ReturnValue4                           (None)
// struct FDialogConversation         CallFunc_FinishTriggerDialog_Conversation4                       (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FinishTriggerDialog_SequenceID4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FinishTriggerDialog_ReturnValue4                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_DemiLich_Interact_1_C::ExecuteUbergraph_Action_DemiLich_Interact_1(int32 EntryPoint, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue1, const struct FDialogConversation& CallFunc_FinishTriggerDialog_Conversation, int32 CallFunc_FinishTriggerDialog_SequenceID, bool CallFunc_FinishTriggerDialog_ReturnValue, const struct FDialogConversation& CallFunc_FinishTriggerDialog_Conversation1, int32 CallFunc_FinishTriggerDialog_SequenceID1, bool CallFunc_FinishTriggerDialog_ReturnValue1, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue2, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue3, const struct FDialogConversation& CallFunc_FinishTriggerDialog_Conversation2, int32 CallFunc_FinishTriggerDialog_SequenceID2, bool CallFunc_FinishTriggerDialog_ReturnValue2, const struct FDialogConversation& CallFunc_FinishTriggerDialog_Conversation3, int32 CallFunc_FinishTriggerDialog_SequenceID3, bool CallFunc_FinishTriggerDialog_ReturnValue3, class AActor* K2Node_Event_Actor, class AActor* CallFunc_K2_GetActor_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool K2Node_MultiGate_FirstRun, int32 K2Node_MultiGate_Data, bool K2Node_MultiGate_ScratchBool, int32 K2Node_MultiGate_ScratchIndex, class AActor* CallFunc_K2_GetActor_ReturnValue1, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue4, const struct FDialogConversation& CallFunc_FinishTriggerDialog_Conversation4, int32 CallFunc_FinishTriggerDialog_SequenceID4, bool CallFunc_FinishTriggerDialog_ReturnValue4, class AActor* CallFunc_GetOwner_ReturnValue1, class AActor* CallFunc_K2_GetActor_ReturnValue2, class AActor* CallFunc_GetOwner_ReturnValue2, class AActor* CallFunc_K2_GetActor_ReturnValue3, class AActor* CallFunc_GetOwner_ReturnValue3, class AActor* CallFunc_K2_GetActor_ReturnValue4, class AActor* CallFunc_GetOwner_ReturnValue4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_DemiLich_Interact_1_C", "ExecuteUbergraph_Action_DemiLich_Interact_1");

	Params::UAction_DemiLich_Interact_1_C_ExecuteUbergraph_Action_DemiLich_Interact_1_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_NewDialogContext_ReturnValue = CallFunc_NewDialogContext_ReturnValue;
	Parms.CallFunc_NewDialogContext_ReturnValue1 = CallFunc_NewDialogContext_ReturnValue1;
	Parms.CallFunc_FinishTriggerDialog_Conversation = CallFunc_FinishTriggerDialog_Conversation;
	Parms.CallFunc_FinishTriggerDialog_SequenceID = CallFunc_FinishTriggerDialog_SequenceID;
	Parms.CallFunc_FinishTriggerDialog_ReturnValue = CallFunc_FinishTriggerDialog_ReturnValue;
	Parms.CallFunc_FinishTriggerDialog_Conversation1 = CallFunc_FinishTriggerDialog_Conversation1;
	Parms.CallFunc_FinishTriggerDialog_SequenceID1 = CallFunc_FinishTriggerDialog_SequenceID1;
	Parms.CallFunc_FinishTriggerDialog_ReturnValue1 = CallFunc_FinishTriggerDialog_ReturnValue1;
	Parms.CallFunc_NewDialogContext_ReturnValue2 = CallFunc_NewDialogContext_ReturnValue2;
	Parms.CallFunc_NewDialogContext_ReturnValue3 = CallFunc_NewDialogContext_ReturnValue3;
	Parms.CallFunc_FinishTriggerDialog_Conversation2 = CallFunc_FinishTriggerDialog_Conversation2;
	Parms.CallFunc_FinishTriggerDialog_SequenceID2 = CallFunc_FinishTriggerDialog_SequenceID2;
	Parms.CallFunc_FinishTriggerDialog_ReturnValue2 = CallFunc_FinishTriggerDialog_ReturnValue2;
	Parms.CallFunc_FinishTriggerDialog_Conversation3 = CallFunc_FinishTriggerDialog_Conversation3;
	Parms.CallFunc_FinishTriggerDialog_SequenceID3 = CallFunc_FinishTriggerDialog_SequenceID3;
	Parms.CallFunc_FinishTriggerDialog_ReturnValue3 = CallFunc_FinishTriggerDialog_ReturnValue3;
	Parms.K2Node_Event_Actor = K2Node_Event_Actor;
	Parms.CallFunc_K2_GetActor_ReturnValue = CallFunc_K2_GetActor_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_MultiGate_FirstRun = K2Node_MultiGate_FirstRun;
	Parms.K2Node_MultiGate_Data = K2Node_MultiGate_Data;
	Parms.K2Node_MultiGate_ScratchBool = K2Node_MultiGate_ScratchBool;
	Parms.K2Node_MultiGate_ScratchIndex = K2Node_MultiGate_ScratchIndex;
	Parms.CallFunc_K2_GetActor_ReturnValue1 = CallFunc_K2_GetActor_ReturnValue1;
	Parms.CallFunc_NewDialogContext_ReturnValue4 = CallFunc_NewDialogContext_ReturnValue4;
	Parms.CallFunc_FinishTriggerDialog_Conversation4 = CallFunc_FinishTriggerDialog_Conversation4;
	Parms.CallFunc_FinishTriggerDialog_SequenceID4 = CallFunc_FinishTriggerDialog_SequenceID4;
	Parms.CallFunc_FinishTriggerDialog_ReturnValue4 = CallFunc_FinishTriggerDialog_ReturnValue4;
	Parms.CallFunc_GetOwner_ReturnValue1 = CallFunc_GetOwner_ReturnValue1;
	Parms.CallFunc_K2_GetActor_ReturnValue2 = CallFunc_K2_GetActor_ReturnValue2;
	Parms.CallFunc_GetOwner_ReturnValue2 = CallFunc_GetOwner_ReturnValue2;
	Parms.CallFunc_K2_GetActor_ReturnValue3 = CallFunc_K2_GetActor_ReturnValue3;
	Parms.CallFunc_GetOwner_ReturnValue3 = CallFunc_GetOwner_ReturnValue3;
	Parms.CallFunc_K2_GetActor_ReturnValue4 = CallFunc_K2_GetActor_ReturnValue4;
	Parms.CallFunc_GetOwner_ReturnValue4 = CallFunc_GetOwner_ReturnValue4;

	UObject::ProcessEvent(Func, &Parms);

}

}


