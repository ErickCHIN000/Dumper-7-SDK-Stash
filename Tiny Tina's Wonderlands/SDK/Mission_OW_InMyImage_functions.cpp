#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Mission_OW_InMyImage.Mission_OW_InMyImage_C
// (None)

class UClass* UMission_OW_InMyImage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Mission_OW_InMyImage_C");

	return Clss;
}


// Mission_OW_InMyImage_C Mission_OW_InMyImage.Default__Mission_OW_InMyImage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMission_OW_InMyImage_C* UMission_OW_InMyImage_C::GetDefaultObj()
{
	static class UMission_OW_InMyImage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMission_OW_InMyImage_C*>(UMission_OW_InMyImage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Mission_OW_InMyImage.Mission_OW_InMyImage_C.OnRep_VOLineInt
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMission_OW_InMyImage_C::OnRep_VOLineInt()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_OW_InMyImage_C", "OnRep_VOLineInt");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Mission_OW_InMyImage.Mission_OW_InMyImage_C.OnDialogSequenceFinished_6
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMission_OW_InMyImage_C::OnDialogSequenceFinished_6()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_OW_InMyImage_C", "OnDialogSequenceFinished_6");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Mission_OW_InMyImage.Mission_OW_InMyImage_C.OnDialogSequenceFinished_5
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMission_OW_InMyImage_C::OnDialogSequenceFinished_5()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_OW_InMyImage_C", "OnDialogSequenceFinished_5");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Mission_OW_InMyImage.Mission_OW_InMyImage_C.OnDialogSequenceFinished_4
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMission_OW_InMyImage_C::OnDialogSequenceFinished_4()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_OW_InMyImage_C", "OnDialogSequenceFinished_4");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Mission_OW_InMyImage.Mission_OW_InMyImage_C.Set_TalkToInfluencer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveSetEventObjectiveSetEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_OW_InMyImage_C::Set_TalkToInfluencer(enum class EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_OW_InMyImage_C", "Set_TalkToInfluencer");

	Params::UMission_OW_InMyImage_C_Set_TalkToInfluencer_Params Parms{};

	Parms.ObjectiveSetEvent = ObjectiveSetEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_OW_InMyImage.Mission_OW_InMyImage_C.Obj_TalkToInfluencer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveEvent  ObjectiveEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ObjectiveCount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CurrentlyInLoadEvents                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMission_OW_InMyImage_C::Obj_TalkToInfluencer(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_OW_InMyImage_C", "Obj_TalkToInfluencer");

	Params::UMission_OW_InMyImage_C_Obj_TalkToInfluencer_Params Parms{};

	Parms.ObjectiveEvent = ObjectiveEvent;
	Parms.ObjectiveCount = ObjectiveCount;
	Parms.CurrentlyInLoadEvents = CurrentlyInLoadEvents;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_OW_InMyImage.Mission_OW_InMyImage_C.MCE_TalkToInfluencer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_OW_InMyImage_C::MCE_TalkToInfluencer(class UObject* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_OW_InMyImage_C", "MCE_TalkToInfluencer");

	Params::UMission_OW_InMyImage_C_MCE_TalkToInfluencer_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_OW_InMyImage.Mission_OW_InMyImage_C.Obj_CarveStatues
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveEvent  ObjectiveEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ObjectiveCount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CurrentlyInLoadEvents                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMission_OW_InMyImage_C::Obj_CarveStatues(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_OW_InMyImage_C", "Obj_CarveStatues");

	Params::UMission_OW_InMyImage_C_Obj_CarveStatues_Params Parms{};

	Parms.ObjectiveEvent = ObjectiveEvent;
	Parms.ObjectiveCount = ObjectiveCount;
	Parms.CurrentlyInLoadEvents = CurrentlyInLoadEvents;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_OW_InMyImage.Mission_OW_InMyImage_C.MCE_CarveStatues
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_OW_InMyImage_C::MCE_CarveStatues(class UObject* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_OW_InMyImage_C", "MCE_CarveStatues");

	Params::UMission_OW_InMyImage_C_MCE_CarveStatues_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_OW_InMyImage.Mission_OW_InMyImage_C.MissionKickoff
// (Event, Public, BlueprintEvent)
// Parameters:

void UMission_OW_InMyImage_C::MissionKickoff()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_OW_InMyImage_C", "MissionKickoff");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Mission_OW_InMyImage.Mission_OW_InMyImage_C.Set_CarveStatues
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveSetEventObjectiveSetEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_OW_InMyImage_C::Set_CarveStatues(enum class EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_OW_InMyImage_C", "Set_CarveStatues");

	Params::UMission_OW_InMyImage_C_Set_CarveStatues_Params Parms{};

	Parms.ObjectiveSetEvent = ObjectiveSetEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_OW_InMyImage.Mission_OW_InMyImage_C.ExecuteUbergraph_Mission_OW_InMyImage
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDialogContext              CallFunc_NewDialogContext_ReturnValue                            (None)
// struct FDialogContext              CallFunc_NewDialogContext_ReturnValue1                           (None)
// struct FDialogContext              CallFunc_NewDialogContext_ReturnValue2                           (None)
// struct FDialogContext              CallFunc_NewDialogContext_ReturnValue3                           (None)
// struct FDialogConversation         CallFunc_FinishSpeakSequenceEx_Conversation                      (NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs                   (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_FinishSpeakSequenceEx_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDialogConversation         CallFunc_FinishSpeakSequenceEx_Conversation1                     (NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs1                  (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_FinishSpeakSequenceEx_ReturnValue1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDialogConversation         CallFunc_FinishSpeakSequenceEx_Conversation2                     (NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs2                  (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_FinishSpeakSequenceEx_ReturnValue2                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EMissionObjectiveSetEventMissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// enum class EMissionObjectiveEvent  MissionK2Node_ObjectiveEvent_ObjectiveEvent1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MissionK2Node_ObjectiveEvent_ObjectiveCount1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents1              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     MissionK2Node_MissionCustomEvent_Context1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EMissionObjectiveEvent  MissionK2Node_ObjectiveEvent_ObjectiveEvent                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MissionK2Node_ObjectiveEvent_ObjectiveCount                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     MissionK2Node_MissionCustomEvent_Context                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum1_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EMissionObjectiveSetEventMissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// int32                              CallFunc_GetMissionObjectiveCount_CurrentObjectiveCount          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMissionObjectiveCount_TotalObjectiveCount            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDialogContext              CallFunc_NewDialogContext_ReturnValue4                           (None)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDialogConversation         CallFunc_FinishSpeakSequenceEx_Conversation3                     (NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs3                  (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_FinishSpeakSequenceEx_ReturnValue3                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDialogConversation         CallFunc_FinishSpeakSequenceEx_Conversation4                     (NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs4                  (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_FinishSpeakSequenceEx_ReturnValue4                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMission_OW_InMyImage_C::ExecuteUbergraph_Mission_OW_InMyImage(int32 EntryPoint, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue1, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue2, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue3, const struct FDialogConversation& CallFunc_FinishSpeakSequenceEx_Conversation, TArray<int32>& CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs, bool CallFunc_FinishSpeakSequenceEx_ReturnValue, const struct FDialogConversation& CallFunc_FinishSpeakSequenceEx_Conversation1, TArray<int32>& CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs1, bool CallFunc_FinishSpeakSequenceEx_ReturnValue1, const struct FDialogConversation& CallFunc_FinishSpeakSequenceEx_Conversation2, TArray<int32>& CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs2, bool CallFunc_FinishSpeakSequenceEx_ReturnValue2, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent1, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount1, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents1, class UObject* MissionK2Node_MissionCustomEvent_Context1, bool K2Node_SwitchEnum_CmpSuccess, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents, class UObject* MissionK2Node_MissionCustomEvent_Context, bool K2Node_SwitchEnum1_CmpSuccess, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, int32 CallFunc_GetMissionObjectiveCount_CurrentObjectiveCount, int32 CallFunc_GetMissionObjectiveCount_TotalObjectiveCount, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue4, bool K2Node_SwitchInteger_CmpSuccess, const struct FDialogConversation& CallFunc_FinishSpeakSequenceEx_Conversation3, TArray<int32>& CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs3, bool CallFunc_FinishSpeakSequenceEx_ReturnValue3, const struct FDialogConversation& CallFunc_FinishSpeakSequenceEx_Conversation4, TArray<int32>& CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs4, bool CallFunc_FinishSpeakSequenceEx_ReturnValue4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_OW_InMyImage_C", "ExecuteUbergraph_Mission_OW_InMyImage");

	Params::UMission_OW_InMyImage_C_ExecuteUbergraph_Mission_OW_InMyImage_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_NewDialogContext_ReturnValue = CallFunc_NewDialogContext_ReturnValue;
	Parms.CallFunc_NewDialogContext_ReturnValue1 = CallFunc_NewDialogContext_ReturnValue1;
	Parms.CallFunc_NewDialogContext_ReturnValue2 = CallFunc_NewDialogContext_ReturnValue2;
	Parms.CallFunc_NewDialogContext_ReturnValue3 = CallFunc_NewDialogContext_ReturnValue3;
	Parms.CallFunc_FinishSpeakSequenceEx_Conversation = CallFunc_FinishSpeakSequenceEx_Conversation;
	Parms.CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs = CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs;
	Parms.CallFunc_FinishSpeakSequenceEx_ReturnValue = CallFunc_FinishSpeakSequenceEx_ReturnValue;
	Parms.CallFunc_FinishSpeakSequenceEx_Conversation1 = CallFunc_FinishSpeakSequenceEx_Conversation1;
	Parms.CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs1 = CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs1;
	Parms.CallFunc_FinishSpeakSequenceEx_ReturnValue1 = CallFunc_FinishSpeakSequenceEx_ReturnValue1;
	Parms.CallFunc_FinishSpeakSequenceEx_Conversation2 = CallFunc_FinishSpeakSequenceEx_Conversation2;
	Parms.CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs2 = CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs2;
	Parms.CallFunc_FinishSpeakSequenceEx_ReturnValue2 = CallFunc_FinishSpeakSequenceEx_ReturnValue2;
	Parms.MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent1 = MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveEvent1 = MissionK2Node_ObjectiveEvent_ObjectiveEvent1;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveCount1 = MissionK2Node_ObjectiveEvent_ObjectiveCount1;
	Parms.MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents1 = MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents1;
	Parms.MissionK2Node_MissionCustomEvent_Context1 = MissionK2Node_MissionCustomEvent_Context1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveEvent = MissionK2Node_ObjectiveEvent_ObjectiveEvent;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveCount = MissionK2Node_ObjectiveEvent_ObjectiveCount;
	Parms.MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents = MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents;
	Parms.MissionK2Node_MissionCustomEvent_Context = MissionK2Node_MissionCustomEvent_Context;
	Parms.K2Node_SwitchEnum1_CmpSuccess = K2Node_SwitchEnum1_CmpSuccess;
	Parms.MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent = MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_GetMissionObjectiveCount_CurrentObjectiveCount = CallFunc_GetMissionObjectiveCount_CurrentObjectiveCount;
	Parms.CallFunc_GetMissionObjectiveCount_TotalObjectiveCount = CallFunc_GetMissionObjectiveCount_TotalObjectiveCount;
	Parms.CallFunc_NewDialogContext_ReturnValue4 = CallFunc_NewDialogContext_ReturnValue4;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_FinishSpeakSequenceEx_Conversation3 = CallFunc_FinishSpeakSequenceEx_Conversation3;
	Parms.CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs3 = CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs3;
	Parms.CallFunc_FinishSpeakSequenceEx_ReturnValue3 = CallFunc_FinishSpeakSequenceEx_ReturnValue3;
	Parms.CallFunc_FinishSpeakSequenceEx_Conversation4 = CallFunc_FinishSpeakSequenceEx_Conversation4;
	Parms.CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs4 = CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs4;
	Parms.CallFunc_FinishSpeakSequenceEx_ReturnValue4 = CallFunc_FinishSpeakSequenceEx_ReturnValue4;

	UObject::ProcessEvent(Func, &Parms);

}

}


