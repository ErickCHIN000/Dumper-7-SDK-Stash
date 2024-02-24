#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Mission_AncientPowersCombat1.Mission_AncientPowersCombat1_C
// (None)

class UClass* UMission_AncientPowersCombat1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Mission_AncientPowersCombat1_C");

	return Clss;
}


// Mission_AncientPowersCombat1_C Mission_AncientPowersCombat1.Default__Mission_AncientPowersCombat1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMission_AncientPowersCombat1_C* UMission_AncientPowersCombat1_C::GetDefaultObj()
{
	static class UMission_AncientPowersCombat1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMission_AncientPowersCombat1_C*>(UMission_AncientPowersCombat1_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Mission_AncientPowersCombat1.Mission_AncientPowersCombat1_C.OnDialogSequenceFinished2_8
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMission_AncientPowersCombat1_C::OnDialogSequenceFinished2_8()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_AncientPowersCombat1_C", "OnDialogSequenceFinished2_8");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Mission_AncientPowersCombat1.Mission_AncientPowersCombat1_C.OnDialogSequenceFinished2_7
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMission_AncientPowersCombat1_C::OnDialogSequenceFinished2_7()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_AncientPowersCombat1_C", "OnDialogSequenceFinished2_7");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Mission_AncientPowersCombat1.Mission_AncientPowersCombat1_C.OnDialogSequenceFinished2_6
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMission_AncientPowersCombat1_C::OnDialogSequenceFinished2_6()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_AncientPowersCombat1_C", "OnDialogSequenceFinished2_6");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Mission_AncientPowersCombat1.Mission_AncientPowersCombat1_C.OnDialogSequenceFinished2_5
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMission_AncientPowersCombat1_C::OnDialogSequenceFinished2_5()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_AncientPowersCombat1_C", "OnDialogSequenceFinished2_5");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Mission_AncientPowersCombat1.Mission_AncientPowersCombat1_C.Update_StartedRitualArena1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_AncientPowersCombat1_C::Update_StartedRitualArena1(class UObject* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_AncientPowersCombat1_C", "Update_StartedRitualArena1");

	Params::UMission_AncientPowersCombat1_C_Update_StartedRitualArena1_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_AncientPowersCombat1.Mission_AncientPowersCombat1_C.Obj_DefeatEnemies
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveEvent  ObjectiveEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ObjectiveCount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CurrentlyInLoadEvents                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMission_AncientPowersCombat1_C::Obj_DefeatEnemies(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_AncientPowersCombat1_C", "Obj_DefeatEnemies");

	Params::UMission_AncientPowersCombat1_C_Obj_DefeatEnemies_Params Parms{};

	Parms.ObjectiveEvent = ObjectiveEvent;
	Parms.ObjectiveCount = ObjectiveCount;
	Parms.CurrentlyInLoadEvents = CurrentlyInLoadEvents;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_AncientPowersCombat1.Mission_AncientPowersCombat1_C.Set_DefeatEnemies
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveSetEventObjectiveSetEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_AncientPowersCombat1_C::Set_DefeatEnemies(enum class EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_AncientPowersCombat1_C", "Set_DefeatEnemies");

	Params::UMission_AncientPowersCombat1_C_Set_DefeatEnemies_Params Parms{};

	Parms.ObjectiveSetEvent = ObjectiveSetEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_AncientPowersCombat1.Mission_AncientPowersCombat1_C.Update_DefeatedCombat1Enemies
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_AncientPowersCombat1_C::Update_DefeatedCombat1Enemies(class UObject* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_AncientPowersCombat1_C", "Update_DefeatedCombat1Enemies");

	Params::UMission_AncientPowersCombat1_C_Update_DefeatedCombat1Enemies_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_AncientPowersCombat1.Mission_AncientPowersCombat1_C.Set_TakeSpell
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveSetEventObjectiveSetEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_AncientPowersCombat1_C::Set_TakeSpell(enum class EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_AncientPowersCombat1_C", "Set_TakeSpell");

	Params::UMission_AncientPowersCombat1_C_Set_TakeSpell_Params Parms{};

	Parms.ObjectiveSetEvent = ObjectiveSetEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_AncientPowersCombat1.Mission_AncientPowersCombat1_C.Obj_TakeSpell
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveEvent  ObjectiveEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ObjectiveCount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CurrentlyInLoadEvents                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMission_AncientPowersCombat1_C::Obj_TakeSpell(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_AncientPowersCombat1_C", "Obj_TakeSpell");

	Params::UMission_AncientPowersCombat1_C_Obj_TakeSpell_Params Parms{};

	Parms.ObjectiveEvent = ObjectiveEvent;
	Parms.ObjectiveCount = ObjectiveCount;
	Parms.CurrentlyInLoadEvents = CurrentlyInLoadEvents;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_AncientPowersCombat1.Mission_AncientPowersCombat1_C.Obj_StartRitualAdv
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveEvent  ObjectiveEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ObjectiveCount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CurrentlyInLoadEvents                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMission_AncientPowersCombat1_C::Obj_StartRitualAdv(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_AncientPowersCombat1_C", "Obj_StartRitualAdv");

	Params::UMission_AncientPowersCombat1_C_Obj_StartRitualAdv_Params Parms{};

	Parms.ObjectiveEvent = ObjectiveEvent;
	Parms.ObjectiveCount = ObjectiveCount;
	Parms.CurrentlyInLoadEvents = CurrentlyInLoadEvents;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_AncientPowersCombat1.Mission_AncientPowersCombat1_C.Advance_StartRitual
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_AncientPowersCombat1_C::Advance_StartRitual(class UObject* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_AncientPowersCombat1_C", "Advance_StartRitual");

	Params::UMission_AncientPowersCombat1_C_Advance_StartRitual_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_AncientPowersCombat1.Mission_AncientPowersCombat1_C.Obj_StartRitual
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveEvent  ObjectiveEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ObjectiveCount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CurrentlyInLoadEvents                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMission_AncientPowersCombat1_C::Obj_StartRitual(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_AncientPowersCombat1_C", "Obj_StartRitual");

	Params::UMission_AncientPowersCombat1_C_Obj_StartRitual_Params Parms{};

	Parms.ObjectiveEvent = ObjectiveEvent;
	Parms.ObjectiveCount = ObjectiveCount;
	Parms.CurrentlyInLoadEvents = CurrentlyInLoadEvents;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_AncientPowersCombat1.Mission_AncientPowersCombat1_C.Set_StartRitual
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveSetEventObjectiveSetEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_AncientPowersCombat1_C::Set_StartRitual(enum class EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_AncientPowersCombat1_C", "Set_StartRitual");

	Params::UMission_AncientPowersCombat1_C_Set_StartRitual_Params Parms{};

	Parms.ObjectiveSetEvent = ObjectiveSetEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_AncientPowersCombat1.Mission_AncientPowersCombat1_C.MissionKickoff
// (Event, Public, BlueprintEvent)
// Parameters:

void UMission_AncientPowersCombat1_C::MissionKickoff()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_AncientPowersCombat1_C", "MissionKickoff");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Mission_AncientPowersCombat1.Mission_AncientPowersCombat1_C.Set_CompleteRitual
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveSetEventObjectiveSetEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_AncientPowersCombat1_C::Set_CompleteRitual(enum class EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_AncientPowersCombat1_C", "Set_CompleteRitual");

	Params::UMission_AncientPowersCombat1_C_Set_CompleteRitual_Params Parms{};

	Parms.ObjectiveSetEvent = ObjectiveSetEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_AncientPowersCombat1.Mission_AncientPowersCombat1_C.Obj_CompleteRitual
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveEvent  ObjectiveEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ObjectiveCount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CurrentlyInLoadEvents                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMission_AncientPowersCombat1_C::Obj_CompleteRitual(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_AncientPowersCombat1_C", "Obj_CompleteRitual");

	Params::UMission_AncientPowersCombat1_C_Obj_CompleteRitual_Params Parms{};

	Parms.ObjectiveEvent = ObjectiveEvent;
	Parms.ObjectiveCount = ObjectiveCount;
	Parms.CurrentlyInLoadEvents = CurrentlyInLoadEvents;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_AncientPowersCombat1.Mission_AncientPowersCombat1_C.Update_CompletedCombat1Ritual
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_AncientPowersCombat1_C::Update_CompletedCombat1Ritual(class UObject* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_AncientPowersCombat1_C", "Update_CompletedCombat1Ritual");

	Params::UMission_AncientPowersCombat1_C_Update_CompletedCombat1Ritual_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_AncientPowersCombat1.Mission_AncientPowersCombat1_C.Obj_DiasSpellComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveEvent  ObjectiveEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ObjectiveCount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CurrentlyInLoadEvents                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMission_AncientPowersCombat1_C::Obj_DiasSpellComplete(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_AncientPowersCombat1_C", "Obj_DiasSpellComplete");

	Params::UMission_AncientPowersCombat1_C_Obj_DiasSpellComplete_Params Parms{};

	Parms.ObjectiveEvent = ObjectiveEvent;
	Parms.ObjectiveCount = ObjectiveCount;
	Parms.CurrentlyInLoadEvents = CurrentlyInLoadEvents;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_AncientPowersCombat1.Mission_AncientPowersCombat1_C.Update_Combat1DiasSpell
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_AncientPowersCombat1_C::Update_Combat1DiasSpell(class UObject* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_AncientPowersCombat1_C", "Update_Combat1DiasSpell");

	Params::UMission_AncientPowersCombat1_C_Update_Combat1DiasSpell_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_AncientPowersCombat1.Mission_AncientPowersCombat1_C.ExecuteUbergraph_Mission_AncientPowersCombat1
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDialogContext              CallFunc_NewDialogContext_ReturnValue                            (None)
// struct FDialogConversation         CallFunc_FinishSpeakSequenceEx_Conversation                      (NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs                   (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_FinishSpeakSequenceEx_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDialogContext              CallFunc_NewDialogContext_ReturnValue1                           (None)
// struct FDialogConversation         CallFunc_FinishSpeakSequenceEx_Conversation1                     (NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs1                  (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_FinishSpeakSequenceEx_ReturnValue1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDialogContext              CallFunc_NewDialogContext_ReturnValue2                           (None)
// struct FDialogConversation         CallFunc_FinishSpeakSequenceEx_Conversation2                     (NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs2                  (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_FinishSpeakSequenceEx_ReturnValue2                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// class UObject*                     MissionK2Node_MissionCustomEvent_Context4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMissionObjectiveEvent  MissionK2Node_ObjectiveEvent_ObjectiveEvent5                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MissionK2Node_ObjectiveEvent_ObjectiveCount5                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents5              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EMissionObjectiveSetEventMissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent3               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MissionRemoteEvent_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     MissionK2Node_MissionCustomEvent_Context3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMissionObjectiveSetEventMissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMissionObjectiveEvent  MissionK2Node_ObjectiveEvent_ObjectiveEvent4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MissionK2Node_ObjectiveEvent_ObjectiveCount4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents4              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum1_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_MissionRemoteEvent_ReturnValue1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EMissionObjectiveEvent  MissionK2Node_ObjectiveEvent_ObjectiveEvent3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MissionK2Node_ObjectiveEvent_ObjectiveCount3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents3              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     MissionK2Node_MissionCustomEvent_Context2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum2_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EMissionObjectiveEvent  MissionK2Node_ObjectiveEvent_ObjectiveEvent2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MissionK2Node_ObjectiveEvent_ObjectiveCount2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents2              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EMissionObjectiveSetEventMissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum3_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDialogContext              CallFunc_NewDialogContext_ReturnValue3                           (None)
// struct FDialogConversation         CallFunc_FinishSpeakSequenceEx_Conversation3                     (NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs3                  (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_FinishSpeakSequenceEx_ReturnValue3                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EMissionObjectiveSetEventMissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMissionObjectiveEvent  MissionK2Node_ObjectiveEvent_ObjectiveEvent1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MissionK2Node_ObjectiveEvent_ObjectiveCount1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents1              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum4_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDialogContext              CallFunc_NewDialogContext_ReturnValue4                           (None)
// class UObject*                     MissionK2Node_MissionCustomEvent_Context1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDialogConversation         CallFunc_FinishSpeakSequenceEx_Conversation4                     (NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs4                  (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_FinishSpeakSequenceEx_ReturnValue4                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// enum class EMissionObjectiveEvent  MissionK2Node_ObjectiveEvent_ObjectiveEvent                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MissionK2Node_ObjectiveEvent_ObjectiveCount                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     MissionK2Node_MissionCustomEvent_Context                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MissionRemoteEvent_ReturnValue2                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMission_AncientPowersCombat1_C::ExecuteUbergraph_Mission_AncientPowersCombat1(int32 EntryPoint, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue, const struct FDialogConversation& CallFunc_FinishSpeakSequenceEx_Conversation, TArray<int32>& CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs, bool CallFunc_FinishSpeakSequenceEx_ReturnValue, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue1, const struct FDialogConversation& CallFunc_FinishSpeakSequenceEx_Conversation1, TArray<int32>& CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs1, bool CallFunc_FinishSpeakSequenceEx_ReturnValue1, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue2, const struct FDialogConversation& CallFunc_FinishSpeakSequenceEx_Conversation2, TArray<int32>& CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs2, bool CallFunc_FinishSpeakSequenceEx_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UObject* MissionK2Node_MissionCustomEvent_Context4, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent5, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount5, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents5, bool K2Node_SwitchEnum_CmpSuccess, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent3, bool CallFunc_MissionRemoteEvent_ReturnValue, class UObject* MissionK2Node_MissionCustomEvent_Context3, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent2, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent4, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount4, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents4, bool K2Node_SwitchEnum1_CmpSuccess, bool CallFunc_MissionRemoteEvent_ReturnValue1, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent3, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount3, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents3, class UObject* MissionK2Node_MissionCustomEvent_Context2, bool K2Node_SwitchEnum2_CmpSuccess, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent2, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount2, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents2, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent1, bool K2Node_SwitchEnum3_CmpSuccess, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue3, const struct FDialogConversation& CallFunc_FinishSpeakSequenceEx_Conversation3, TArray<int32>& CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs3, bool CallFunc_FinishSpeakSequenceEx_ReturnValue3, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent1, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount1, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents1, bool K2Node_SwitchEnum4_CmpSuccess, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue4, class UObject* MissionK2Node_MissionCustomEvent_Context1, const struct FDialogConversation& CallFunc_FinishSpeakSequenceEx_Conversation4, TArray<int32>& CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs4, bool CallFunc_FinishSpeakSequenceEx_ReturnValue4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents, class UObject* MissionK2Node_MissionCustomEvent_Context, bool CallFunc_MissionRemoteEvent_ReturnValue2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_AncientPowersCombat1_C", "ExecuteUbergraph_Mission_AncientPowersCombat1");

	Params::UMission_AncientPowersCombat1_C_ExecuteUbergraph_Mission_AncientPowersCombat1_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_NewDialogContext_ReturnValue = CallFunc_NewDialogContext_ReturnValue;
	Parms.CallFunc_FinishSpeakSequenceEx_Conversation = CallFunc_FinishSpeakSequenceEx_Conversation;
	Parms.CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs = CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs;
	Parms.CallFunc_FinishSpeakSequenceEx_ReturnValue = CallFunc_FinishSpeakSequenceEx_ReturnValue;
	Parms.CallFunc_NewDialogContext_ReturnValue1 = CallFunc_NewDialogContext_ReturnValue1;
	Parms.CallFunc_FinishSpeakSequenceEx_Conversation1 = CallFunc_FinishSpeakSequenceEx_Conversation1;
	Parms.CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs1 = CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs1;
	Parms.CallFunc_FinishSpeakSequenceEx_ReturnValue1 = CallFunc_FinishSpeakSequenceEx_ReturnValue1;
	Parms.CallFunc_NewDialogContext_ReturnValue2 = CallFunc_NewDialogContext_ReturnValue2;
	Parms.CallFunc_FinishSpeakSequenceEx_Conversation2 = CallFunc_FinishSpeakSequenceEx_Conversation2;
	Parms.CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs2 = CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs2;
	Parms.CallFunc_FinishSpeakSequenceEx_ReturnValue2 = CallFunc_FinishSpeakSequenceEx_ReturnValue2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.MissionK2Node_MissionCustomEvent_Context4 = MissionK2Node_MissionCustomEvent_Context4;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveEvent5 = MissionK2Node_ObjectiveEvent_ObjectiveEvent5;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveCount5 = MissionK2Node_ObjectiveEvent_ObjectiveCount5;
	Parms.MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents5 = MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents5;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent3 = MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent3;
	Parms.CallFunc_MissionRemoteEvent_ReturnValue = CallFunc_MissionRemoteEvent_ReturnValue;
	Parms.MissionK2Node_MissionCustomEvent_Context3 = MissionK2Node_MissionCustomEvent_Context3;
	Parms.MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent2 = MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent2;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveEvent4 = MissionK2Node_ObjectiveEvent_ObjectiveEvent4;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveCount4 = MissionK2Node_ObjectiveEvent_ObjectiveCount4;
	Parms.MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents4 = MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents4;
	Parms.K2Node_SwitchEnum1_CmpSuccess = K2Node_SwitchEnum1_CmpSuccess;
	Parms.CallFunc_MissionRemoteEvent_ReturnValue1 = CallFunc_MissionRemoteEvent_ReturnValue1;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveEvent3 = MissionK2Node_ObjectiveEvent_ObjectiveEvent3;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveCount3 = MissionK2Node_ObjectiveEvent_ObjectiveCount3;
	Parms.MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents3 = MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents3;
	Parms.MissionK2Node_MissionCustomEvent_Context2 = MissionK2Node_MissionCustomEvent_Context2;
	Parms.K2Node_SwitchEnum2_CmpSuccess = K2Node_SwitchEnum2_CmpSuccess;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveEvent2 = MissionK2Node_ObjectiveEvent_ObjectiveEvent2;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveCount2 = MissionK2Node_ObjectiveEvent_ObjectiveCount2;
	Parms.MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents2 = MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents2;
	Parms.MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent1 = MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent1;
	Parms.K2Node_SwitchEnum3_CmpSuccess = K2Node_SwitchEnum3_CmpSuccess;
	Parms.CallFunc_NewDialogContext_ReturnValue3 = CallFunc_NewDialogContext_ReturnValue3;
	Parms.CallFunc_FinishSpeakSequenceEx_Conversation3 = CallFunc_FinishSpeakSequenceEx_Conversation3;
	Parms.CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs3 = CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs3;
	Parms.CallFunc_FinishSpeakSequenceEx_ReturnValue3 = CallFunc_FinishSpeakSequenceEx_ReturnValue3;
	Parms.MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent = MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveEvent1 = MissionK2Node_ObjectiveEvent_ObjectiveEvent1;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveCount1 = MissionK2Node_ObjectiveEvent_ObjectiveCount1;
	Parms.MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents1 = MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents1;
	Parms.K2Node_SwitchEnum4_CmpSuccess = K2Node_SwitchEnum4_CmpSuccess;
	Parms.CallFunc_NewDialogContext_ReturnValue4 = CallFunc_NewDialogContext_ReturnValue4;
	Parms.MissionK2Node_MissionCustomEvent_Context1 = MissionK2Node_MissionCustomEvent_Context1;
	Parms.CallFunc_FinishSpeakSequenceEx_Conversation4 = CallFunc_FinishSpeakSequenceEx_Conversation4;
	Parms.CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs4 = CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs4;
	Parms.CallFunc_FinishSpeakSequenceEx_ReturnValue4 = CallFunc_FinishSpeakSequenceEx_ReturnValue4;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveEvent = MissionK2Node_ObjectiveEvent_ObjectiveEvent;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveCount = MissionK2Node_ObjectiveEvent_ObjectiveCount;
	Parms.MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents = MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents;
	Parms.MissionK2Node_MissionCustomEvent_Context = MissionK2Node_MissionCustomEvent_Context;
	Parms.CallFunc_MissionRemoteEvent_ReturnValue2 = CallFunc_MissionRemoteEvent_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}

}


