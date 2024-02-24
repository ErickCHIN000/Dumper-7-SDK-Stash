#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Mission_ElderWyvern.Mission_ElderWyvern_C
// (None)

class UClass* UMission_ElderWyvern_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Mission_ElderWyvern_C");

	return Clss;
}


// Mission_ElderWyvern_C Mission_ElderWyvern.Default__Mission_ElderWyvern_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMission_ElderWyvern_C* UMission_ElderWyvern_C::GetDefaultObj()
{
	static class UMission_ElderWyvern_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMission_ElderWyvern_C*>(UMission_ElderWyvern_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Mission_ElderWyvern.Mission_ElderWyvern_C.OnDialogSequenceFinished_10
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMission_ElderWyvern_C::OnDialogSequenceFinished_10()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_ElderWyvern_C", "OnDialogSequenceFinished_10");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Mission_ElderWyvern.Mission_ElderWyvern_C.OnDialogSequenceFinished_9
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMission_ElderWyvern_C::OnDialogSequenceFinished_9()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_ElderWyvern_C", "OnDialogSequenceFinished_9");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Mission_ElderWyvern.Mission_ElderWyvern_C.OnDialogSequenceFinished_8
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMission_ElderWyvern_C::OnDialogSequenceFinished_8()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_ElderWyvern_C", "OnDialogSequenceFinished_8");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Mission_ElderWyvern.Mission_ElderWyvern_C.OnDialogSequenceFinished_7
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMission_ElderWyvern_C::OnDialogSequenceFinished_7()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_ElderWyvern_C", "OnDialogSequenceFinished_7");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Mission_ElderWyvern.Mission_ElderWyvern_C.OnDialogSequenceFinished2_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMission_ElderWyvern_C::OnDialogSequenceFinished2_2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_ElderWyvern_C", "OnDialogSequenceFinished2_2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Mission_ElderWyvern.Mission_ElderWyvern_C.OnDialogSequenceFinished_6
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMission_ElderWyvern_C::OnDialogSequenceFinished_6()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_ElderWyvern_C", "OnDialogSequenceFinished_6");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Mission_ElderWyvern.Mission_ElderWyvern_C.[Obj_FindReleaseMechanism_Objective] PROXY
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMission_ElderWyvern_C::_Obj_FindReleaseMechanism_Objective__PROXY()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_ElderWyvern_C", "[Obj_FindReleaseMechanism_Objective] PROXY");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Mission_ElderWyvern.Mission_ElderWyvern_C.Set_Machinery
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveSetEventObjectiveSetEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_ElderWyvern_C::Set_Machinery(enum class EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_ElderWyvern_C", "Set_Machinery");

	Params::UMission_ElderWyvern_C_Set_Machinery_Params Parms{};

	Parms.ObjectiveSetEvent = ObjectiveSetEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_ElderWyvern.Mission_ElderWyvern_C.Obj_TurnOffMachine
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveEvent  ObjectiveEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ObjectiveCount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CurrentlyInLoadEvents                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMission_ElderWyvern_C::Obj_TurnOffMachine(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_ElderWyvern_C", "Obj_TurnOffMachine");

	Params::UMission_ElderWyvern_C_Obj_TurnOffMachine_Params Parms{};

	Parms.ObjectiveEvent = ObjectiveEvent;
	Parms.ObjectiveCount = ObjectiveCount;
	Parms.CurrentlyInLoadEvents = CurrentlyInLoadEvents;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_ElderWyvern.Mission_ElderWyvern_C.MCE_MachineTurnedOff
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_ElderWyvern_C::MCE_MachineTurnedOff(class UObject* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_ElderWyvern_C", "MCE_MachineTurnedOff");

	Params::UMission_ElderWyvern_C_MCE_MachineTurnedOff_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_ElderWyvern.Mission_ElderWyvern_C.Obj_ClearEnemies
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveEvent  ObjectiveEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ObjectiveCount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CurrentlyInLoadEvents                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMission_ElderWyvern_C::Obj_ClearEnemies(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_ElderWyvern_C", "Obj_ClearEnemies");

	Params::UMission_ElderWyvern_C_Obj_ClearEnemies_Params Parms{};

	Parms.ObjectiveEvent = ObjectiveEvent;
	Parms.ObjectiveCount = ObjectiveCount;
	Parms.CurrentlyInLoadEvents = CurrentlyInLoadEvents;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_ElderWyvern.Mission_ElderWyvern_C.Set_LeadFoodToFeeder
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveSetEventObjectiveSetEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_ElderWyvern_C::Set_LeadFoodToFeeder(enum class EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_ElderWyvern_C", "Set_LeadFoodToFeeder");

	Params::UMission_ElderWyvern_C_Set_LeadFoodToFeeder_Params Parms{};

	Parms.ObjectiveSetEvent = ObjectiveSetEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_ElderWyvern.Mission_ElderWyvern_C.[Obj_FindReleaseMechanism_Objective] PROXY_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMission_ElderWyvern_C::_Obj_FindReleaseMechanism_Objective__PROXY_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_ElderWyvern_C", "[Obj_FindReleaseMechanism_Objective] PROXY_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Mission_ElderWyvern.Mission_ElderWyvern_C.Obj_TakeScale
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveEvent  ObjectiveEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ObjectiveCount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CurrentlyInLoadEvents                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMission_ElderWyvern_C::Obj_TakeScale(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_ElderWyvern_C", "Obj_TakeScale");

	Params::UMission_ElderWyvern_C_Obj_TakeScale_Params Parms{};

	Parms.ObjectiveEvent = ObjectiveEvent;
	Parms.ObjectiveCount = ObjectiveCount;
	Parms.CurrentlyInLoadEvents = CurrentlyInLoadEvents;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_ElderWyvern.Mission_ElderWyvern_C.Set_Scale
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveSetEventObjectiveSetEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_ElderWyvern_C::Set_Scale(enum class EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_ElderWyvern_C", "Set_Scale");

	Params::UMission_ElderWyvern_C_Set_Scale_Params Parms{};

	Parms.ObjectiveSetEvent = ObjectiveSetEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_ElderWyvern.Mission_ElderWyvern_C.Update_TalkToWyvern
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_ElderWyvern_C::Update_TalkToWyvern(class UObject* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_ElderWyvern_C", "Update_TalkToWyvern");

	Params::UMission_ElderWyvern_C_Update_TalkToWyvern_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_ElderWyvern.Mission_ElderWyvern_C.Obj_KillSheepsWithSwitch
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveEvent  ObjectiveEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ObjectiveCount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CurrentlyInLoadEvents                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMission_ElderWyvern_C::Obj_KillSheepsWithSwitch(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_ElderWyvern_C", "Obj_KillSheepsWithSwitch");

	Params::UMission_ElderWyvern_C_Obj_KillSheepsWithSwitch_Params Parms{};

	Parms.ObjectiveEvent = ObjectiveEvent;
	Parms.ObjectiveCount = ObjectiveCount;
	Parms.CurrentlyInLoadEvents = CurrentlyInLoadEvents;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_ElderWyvern.Mission_ElderWyvern_C.MCE_PlayerOpenedFeeder
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_ElderWyvern_C::MCE_PlayerOpenedFeeder(class UObject* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_ElderWyvern_C", "MCE_PlayerOpenedFeeder");

	Params::UMission_ElderWyvern_C_MCE_PlayerOpenedFeeder_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_ElderWyvern.Mission_ElderWyvern_C.Set_Gate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveSetEventObjectiveSetEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_ElderWyvern_C::Set_Gate(enum class EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_ElderWyvern_C", "Set_Gate");

	Params::UMission_ElderWyvern_C_Set_Gate_Params Parms{};

	Parms.ObjectiveSetEvent = ObjectiveSetEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_ElderWyvern.Mission_ElderWyvern_C.[Obj_FindReleaseMechanism_Objective] PROXY_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMission_ElderWyvern_C::_Obj_FindReleaseMechanism_Objective__PROXY_1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_ElderWyvern_C", "[Obj_FindReleaseMechanism_Objective] PROXY_1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Mission_ElderWyvern.Mission_ElderWyvern_C.Update_KillWyvern
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_ElderWyvern_C::Update_KillWyvern(class UObject* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_ElderWyvern_C", "Update_KillWyvern");

	Params::UMission_ElderWyvern_C_Update_KillWyvern_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_ElderWyvern.Mission_ElderWyvern_C.Obj_CloseGate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveEvent  ObjectiveEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ObjectiveCount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CurrentlyInLoadEvents                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMission_ElderWyvern_C::Obj_CloseGate(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_ElderWyvern_C", "Obj_CloseGate");

	Params::UMission_ElderWyvern_C_Obj_CloseGate_Params Parms{};

	Parms.ObjectiveEvent = ObjectiveEvent;
	Parms.ObjectiveCount = ObjectiveCount;
	Parms.CurrentlyInLoadEvents = CurrentlyInLoadEvents;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_ElderWyvern.Mission_ElderWyvern_C.MCE_GateUsed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_ElderWyvern_C::MCE_GateUsed(class UObject* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_ElderWyvern_C", "MCE_GateUsed");

	Params::UMission_ElderWyvern_C_MCE_GateUsed_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_ElderWyvern.Mission_ElderWyvern_C.Set_FeedWyvern
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveSetEventObjectiveSetEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_ElderWyvern_C::Set_FeedWyvern(enum class EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_ElderWyvern_C", "Set_FeedWyvern");

	Params::UMission_ElderWyvern_C_Set_FeedWyvern_Params Parms{};

	Parms.ObjectiveSetEvent = ObjectiveSetEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_ElderWyvern.Mission_ElderWyvern_C.[Obj_FindReleaseMechanism_Objective] PROXY_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMission_ElderWyvern_C::_Obj_FindReleaseMechanism_Objective__PROXY_2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_ElderWyvern_C", "[Obj_FindReleaseMechanism_Objective] PROXY_2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Mission_ElderWyvern.Mission_ElderWyvern_C.Update_FindFood
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_ElderWyvern_C::Update_FindFood(class UObject* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_ElderWyvern_C", "Update_FindFood");

	Params::UMission_ElderWyvern_C_Update_FindFood_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_ElderWyvern.Mission_ElderWyvern_C.Advance_FindFood
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_ElderWyvern_C::Advance_FindFood(class UObject* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_ElderWyvern_C", "Advance_FindFood");

	Params::UMission_ElderWyvern_C_Advance_FindFood_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_ElderWyvern.Mission_ElderWyvern_C.MCE_Beckon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_ElderWyvern_C::MCE_Beckon(class UObject* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_ElderWyvern_C", "MCE_Beckon");

	Params::UMission_ElderWyvern_C_MCE_Beckon_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_ElderWyvern.Mission_ElderWyvern_C.Update_ReleaseWyvern
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_ElderWyvern_C::Update_ReleaseWyvern(class UObject* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_ElderWyvern_C", "Update_ReleaseWyvern");

	Params::UMission_ElderWyvern_C_Update_ReleaseWyvern_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_ElderWyvern.Mission_ElderWyvern_C.Update_FindMechanism
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_ElderWyvern_C::Update_FindMechanism(class UObject* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_ElderWyvern_C", "Update_FindMechanism");

	Params::UMission_ElderWyvern_C_Update_FindMechanism_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_ElderWyvern.Mission_ElderWyvern_C.MCE_MoveSkeeps
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_ElderWyvern_C::MCE_MoveSkeeps(class UObject* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_ElderWyvern_C", "MCE_MoveSkeeps");

	Params::UMission_ElderWyvern_C_MCE_MoveSkeeps_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_ElderWyvern.Mission_ElderWyvern_C.Set_WaveOfEnemies
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveSetEventObjectiveSetEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_ElderWyvern_C::Set_WaveOfEnemies(enum class EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_ElderWyvern_C", "Set_WaveOfEnemies");

	Params::UMission_ElderWyvern_C_Set_WaveOfEnemies_Params Parms{};

	Parms.ObjectiveSetEvent = ObjectiveSetEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_ElderWyvern.Mission_ElderWyvern_C.MCE_EnemiesCleared
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_ElderWyvern_C::MCE_EnemiesCleared(class UObject* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_ElderWyvern_C", "MCE_EnemiesCleared");

	Params::UMission_ElderWyvern_C_MCE_EnemiesCleared_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_ElderWyvern.Mission_ElderWyvern_C.Obj_SmackSkeep
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveEvent  ObjectiveEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ObjectiveCount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CurrentlyInLoadEvents                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMission_ElderWyvern_C::Obj_SmackSkeep(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_ElderWyvern_C", "Obj_SmackSkeep");

	Params::UMission_ElderWyvern_C_Obj_SmackSkeep_Params Parms{};

	Parms.ObjectiveEvent = ObjectiveEvent;
	Parms.ObjectiveCount = ObjectiveCount;
	Parms.CurrentlyInLoadEvents = CurrentlyInLoadEvents;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_ElderWyvern.Mission_ElderWyvern_C.Update_SmackedSkeep
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_ElderWyvern_C::Update_SmackedSkeep(class UObject* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_ElderWyvern_C", "Update_SmackedSkeep");

	Params::UMission_ElderWyvern_C_Update_SmackedSkeep_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_ElderWyvern.Mission_ElderWyvern_C.[Obj_FindReleaseMechanism_Objective] PROXY_3
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMission_ElderWyvern_C::_Obj_FindReleaseMechanism_Objective__PROXY_3()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_ElderWyvern_C", "[Obj_FindReleaseMechanism_Objective] PROXY_3");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Mission_ElderWyvern.Mission_ElderWyvern_C.Set_SkeepMoveAgain
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveSetEventObjectiveSetEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_ElderWyvern_C::Set_SkeepMoveAgain(enum class EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_ElderWyvern_C", "Set_SkeepMoveAgain");

	Params::UMission_ElderWyvern_C_Set_SkeepMoveAgain_Params Parms{};

	Parms.ObjectiveSetEvent = ObjectiveSetEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_ElderWyvern.Mission_ElderWyvern_C.Set_SkeepGetIntoPen
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveSetEventObjectiveSetEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_ElderWyvern_C::Set_SkeepGetIntoPen(enum class EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_ElderWyvern_C", "Set_SkeepGetIntoPen");

	Params::UMission_ElderWyvern_C_Set_SkeepGetIntoPen_Params Parms{};

	Parms.ObjectiveSetEvent = ObjectiveSetEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_ElderWyvern.Mission_ElderWyvern_C.Obj_SmackSkeep2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveEvent  ObjectiveEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ObjectiveCount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CurrentlyInLoadEvents                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMission_ElderWyvern_C::Obj_SmackSkeep2(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_ElderWyvern_C", "Obj_SmackSkeep2");

	Params::UMission_ElderWyvern_C_Obj_SmackSkeep2_Params Parms{};

	Parms.ObjectiveEvent = ObjectiveEvent;
	Parms.ObjectiveCount = ObjectiveCount;
	Parms.CurrentlyInLoadEvents = CurrentlyInLoadEvents;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_ElderWyvern.Mission_ElderWyvern_C.Obj_SmackFinal
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveEvent  ObjectiveEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ObjectiveCount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CurrentlyInLoadEvents                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMission_ElderWyvern_C::Obj_SmackFinal(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_ElderWyvern_C", "Obj_SmackFinal");

	Params::UMission_ElderWyvern_C_Obj_SmackFinal_Params Parms{};

	Parms.ObjectiveEvent = ObjectiveEvent;
	Parms.ObjectiveCount = ObjectiveCount;
	Parms.CurrentlyInLoadEvents = CurrentlyInLoadEvents;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_ElderWyvern.Mission_ElderWyvern_C.[Obj_FindReleaseMechanism_Objective] PROXY_4
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMission_ElderWyvern_C::_Obj_FindReleaseMechanism_Objective__PROXY_4()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_ElderWyvern_C", "[Obj_FindReleaseMechanism_Objective] PROXY_4");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Mission_ElderWyvern.Mission_ElderWyvern_C.MCE_SmackedSkeep_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_ElderWyvern_C::MCE_SmackedSkeep_2(class UObject* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_ElderWyvern_C", "MCE_SmackedSkeep_2");

	Params::UMission_ElderWyvern_C_MCE_SmackedSkeep_2_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_ElderWyvern.Mission_ElderWyvern_C.MCE_SmackedSkeep_Final
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_ElderWyvern_C::MCE_SmackedSkeep_Final(class UObject* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_ElderWyvern_C", "MCE_SmackedSkeep_Final");

	Params::UMission_ElderWyvern_C_MCE_SmackedSkeep_Final_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_ElderWyvern.Mission_ElderWyvern_C.[Obj_DeliverFood_Objective] PROXY_5
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMission_ElderWyvern_C::_Obj_DeliverFood_Objective__PROXY_5()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_ElderWyvern_C", "[Obj_DeliverFood_Objective] PROXY_5");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Mission_ElderWyvern.Mission_ElderWyvern_C.[Obj_FindReleaseMechanism_Objective] PROXY_6
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMission_ElderWyvern_C::_Obj_FindReleaseMechanism_Objective__PROXY_6()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_ElderWyvern_C", "[Obj_FindReleaseMechanism_Objective] PROXY_6");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Mission_ElderWyvern.Mission_ElderWyvern_C.[Obj_DeliverFood_Objective] PROXY_7
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMission_ElderWyvern_C::_Obj_DeliverFood_Objective__PROXY_7()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_ElderWyvern_C", "[Obj_DeliverFood_Objective] PROXY_7");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Mission_ElderWyvern.Mission_ElderWyvern_C.Advance_SkeepMove2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_ElderWyvern_C::Advance_SkeepMove2(class UObject* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_ElderWyvern_C", "Advance_SkeepMove2");

	Params::UMission_ElderWyvern_C_Advance_SkeepMove2_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_ElderWyvern.Mission_ElderWyvern_C.Advance_SkeepFinalMove
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_ElderWyvern_C::Advance_SkeepFinalMove(class UObject* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_ElderWyvern_C", "Advance_SkeepFinalMove");

	Params::UMission_ElderWyvern_C_Advance_SkeepFinalMove_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_ElderWyvern.Mission_ElderWyvern_C.Obj_TalkToWyvern
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveEvent  ObjectiveEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ObjectiveCount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CurrentlyInLoadEvents                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMission_ElderWyvern_C::Obj_TalkToWyvern(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_ElderWyvern_C", "Obj_TalkToWyvern");

	Params::UMission_ElderWyvern_C_Obj_TalkToWyvern_Params Parms{};

	Parms.ObjectiveEvent = ObjectiveEvent;
	Parms.ObjectiveCount = ObjectiveCount;
	Parms.CurrentlyInLoadEvents = CurrentlyInLoadEvents;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_ElderWyvern.Mission_ElderWyvern_C.Advance_FinalSkeepPenMoment
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_ElderWyvern_C::Advance_FinalSkeepPenMoment(class UObject* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_ElderWyvern_C", "Advance_FinalSkeepPenMoment");

	Params::UMission_ElderWyvern_C_Advance_FinalSkeepPenMoment_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_ElderWyvern.Mission_ElderWyvern_C.Obj_KillWyvern
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveEvent  ObjectiveEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ObjectiveCount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CurrentlyInLoadEvents                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMission_ElderWyvern_C::Obj_KillWyvern(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_ElderWyvern_C", "Obj_KillWyvern");

	Params::UMission_ElderWyvern_C_Obj_KillWyvern_Params Parms{};

	Parms.ObjectiveEvent = ObjectiveEvent;
	Parms.ObjectiveCount = ObjectiveCount;
	Parms.CurrentlyInLoadEvents = CurrentlyInLoadEvents;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_ElderWyvern.Mission_ElderWyvern_C.Set_TalkToWyvern
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveSetEventObjectiveSetEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_ElderWyvern_C::Set_TalkToWyvern(enum class EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_ElderWyvern_C", "Set_TalkToWyvern");

	Params::UMission_ElderWyvern_C_Set_TalkToWyvern_Params Parms{};

	Parms.ObjectiveSetEvent = ObjectiveSetEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_ElderWyvern.Mission_ElderWyvern_C.Obj_DeliverFood
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveEvent  ObjectiveEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ObjectiveCount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CurrentlyInLoadEvents                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMission_ElderWyvern_C::Obj_DeliverFood(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_ElderWyvern_C", "Obj_DeliverFood");

	Params::UMission_ElderWyvern_C_Obj_DeliverFood_Params Parms{};

	Parms.ObjectiveEvent = ObjectiveEvent;
	Parms.ObjectiveCount = ObjectiveCount;
	Parms.CurrentlyInLoadEvents = CurrentlyInLoadEvents;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_ElderWyvern.Mission_ElderWyvern_C.Obj_FindFood
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveEvent  ObjectiveEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ObjectiveCount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CurrentlyInLoadEvents                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMission_ElderWyvern_C::Obj_FindFood(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_ElderWyvern_C", "Obj_FindFood");

	Params::UMission_ElderWyvern_C_Obj_FindFood_Params Parms{};

	Parms.ObjectiveEvent = ObjectiveEvent;
	Parms.ObjectiveCount = ObjectiveCount;
	Parms.CurrentlyInLoadEvents = CurrentlyInLoadEvents;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_ElderWyvern.Mission_ElderWyvern_C.Set_KillWyvern
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveSetEventObjectiveSetEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_ElderWyvern_C::Set_KillWyvern(enum class EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_ElderWyvern_C", "Set_KillWyvern");

	Params::UMission_ElderWyvern_C_Set_KillWyvern_Params Parms{};

	Parms.ObjectiveSetEvent = ObjectiveSetEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_ElderWyvern.Mission_ElderWyvern_C.Fire_WyvernHostial_Dialog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_ElderWyvern_C::Fire_WyvernHostial_Dialog(class UObject* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_ElderWyvern_C", "Fire_WyvernHostial_Dialog");

	Params::UMission_ElderWyvern_C_Fire_WyvernHostial_Dialog_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_ElderWyvern.Mission_ElderWyvern_C.Fire_WyvernFriendly_Dialog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_ElderWyvern_C::Fire_WyvernFriendly_Dialog(class UObject* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_ElderWyvern_C", "Fire_WyvernFriendly_Dialog");

	Params::UMission_ElderWyvern_C_Fire_WyvernFriendly_Dialog_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_ElderWyvern.Mission_ElderWyvern_C.Obj_ReleaseWyvern
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveEvent  ObjectiveEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ObjectiveCount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CurrentlyInLoadEvents                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMission_ElderWyvern_C::Obj_ReleaseWyvern(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_ElderWyvern_C", "Obj_ReleaseWyvern");

	Params::UMission_ElderWyvern_C_Obj_ReleaseWyvern_Params Parms{};

	Parms.ObjectiveEvent = ObjectiveEvent;
	Parms.ObjectiveCount = ObjectiveCount;
	Parms.CurrentlyInLoadEvents = CurrentlyInLoadEvents;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_ElderWyvern.Mission_ElderWyvern_C.Obj_ClearEnemies2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveEvent  ObjectiveEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ObjectiveCount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CurrentlyInLoadEvents                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMission_ElderWyvern_C::Obj_ClearEnemies2(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_ElderWyvern_C", "Obj_ClearEnemies2");

	Params::UMission_ElderWyvern_C_Obj_ClearEnemies2_Params Parms{};

	Parms.ObjectiveEvent = ObjectiveEvent;
	Parms.ObjectiveCount = ObjectiveCount;
	Parms.CurrentlyInLoadEvents = CurrentlyInLoadEvents;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_ElderWyvern.Mission_ElderWyvern_C.MCE_EnemiesCleared2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_ElderWyvern_C::MCE_EnemiesCleared2(class UObject* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_ElderWyvern_C", "MCE_EnemiesCleared2");

	Params::UMission_ElderWyvern_C_MCE_EnemiesCleared2_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_ElderWyvern.Mission_ElderWyvern_C.Set_OptionalFindFoodBranch
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveSetEventObjectiveSetEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_ElderWyvern_C::Set_OptionalFindFoodBranch(enum class EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_ElderWyvern_C", "Set_OptionalFindFoodBranch");

	Params::UMission_ElderWyvern_C_Set_OptionalFindFoodBranch_Params Parms{};

	Parms.ObjectiveSetEvent = ObjectiveSetEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_ElderWyvern.Mission_ElderWyvern_C.[Obj_DeliverFood_Objective] PROXY_8
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMission_ElderWyvern_C::_Obj_DeliverFood_Objective__PROXY_8()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_ElderWyvern_C", "[Obj_DeliverFood_Objective] PROXY_8");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Mission_ElderWyvern.Mission_ElderWyvern_C.[Obj_FindReleaseMechanism_Objective] PROXY_9
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMission_ElderWyvern_C::_Obj_FindReleaseMechanism_Objective__PROXY_9()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_ElderWyvern_C", "[Obj_FindReleaseMechanism_Objective] PROXY_9");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Mission_ElderWyvern.Mission_ElderWyvern_C.Set_WaveOfEnemies_Part2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveSetEventObjectiveSetEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_ElderWyvern_C::Set_WaveOfEnemies_Part2(enum class EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_ElderWyvern_C", "Set_WaveOfEnemies_Part2");

	Params::UMission_ElderWyvern_C_Set_WaveOfEnemies_Part2_Params Parms{};

	Parms.ObjectiveSetEvent = ObjectiveSetEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_ElderWyvern.Mission_ElderWyvern_C.Obj_Wait_For_Wyvern_to_Feed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveEvent  ObjectiveEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ObjectiveCount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CurrentlyInLoadEvents                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMission_ElderWyvern_C::Obj_Wait_For_Wyvern_to_Feed(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_ElderWyvern_C", "Obj_Wait_For_Wyvern_to_Feed");

	Params::UMission_ElderWyvern_C_Obj_Wait_For_Wyvern_to_Feed_Params Parms{};

	Parms.ObjectiveEvent = ObjectiveEvent;
	Parms.ObjectiveCount = ObjectiveCount;
	Parms.CurrentlyInLoadEvents = CurrentlyInLoadEvents;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_ElderWyvern.Mission_ElderWyvern_C.Set_Wait_For_Wyvern_to_Feed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveSetEventObjectiveSetEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_ElderWyvern_C::Set_Wait_For_Wyvern_to_Feed(enum class EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_ElderWyvern_C", "Set_Wait_For_Wyvern_to_Feed");

	Params::UMission_ElderWyvern_C_Set_Wait_For_Wyvern_to_Feed_Params Parms{};

	Parms.ObjectiveSetEvent = ObjectiveSetEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_ElderWyvern.Mission_ElderWyvern_C.Set_Final_FreeWyvern
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveSetEventObjectiveSetEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_ElderWyvern_C::Set_Final_FreeWyvern(enum class EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_ElderWyvern_C", "Set_Final_FreeWyvern");

	Params::UMission_ElderWyvern_C_Set_Final_FreeWyvern_Params Parms{};

	Parms.ObjectiveSetEvent = ObjectiveSetEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_ElderWyvern.Mission_ElderWyvern_C.[Obj_FindReleaseMechanism_Objective] PROXY_10
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMission_ElderWyvern_C::_Obj_FindReleaseMechanism_Objective__PROXY_10()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_ElderWyvern_C", "[Obj_FindReleaseMechanism_Objective] PROXY_10");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Mission_ElderWyvern.Mission_ElderWyvern_C.Set_TravelTo_Forge
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveSetEventObjectiveSetEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_ElderWyvern_C::Set_TravelTo_Forge(enum class EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_ElderWyvern_C", "Set_TravelTo_Forge");

	Params::UMission_ElderWyvern_C_Set_TravelTo_Forge_Params Parms{};

	Parms.ObjectiveSetEvent = ObjectiveSetEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_ElderWyvern.Mission_ElderWyvern_C.Obj_TravelTo_Forge
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveEvent  ObjectiveEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ObjectiveCount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CurrentlyInLoadEvents                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMission_ElderWyvern_C::Obj_TravelTo_Forge(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_ElderWyvern_C", "Obj_TravelTo_Forge");

	Params::UMission_ElderWyvern_C_Obj_TravelTo_Forge_Params Parms{};

	Parms.ObjectiveEvent = ObjectiveEvent;
	Parms.ObjectiveCount = ObjectiveCount;
	Parms.CurrentlyInLoadEvents = CurrentlyInLoadEvents;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_ElderWyvern.Mission_ElderWyvern_C.MCE_TravelTo_Forge
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_ElderWyvern_C::MCE_TravelTo_Forge(class UObject* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_ElderWyvern_C", "MCE_TravelTo_Forge");

	Params::UMission_ElderWyvern_C_MCE_TravelTo_Forge_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_ElderWyvern.Mission_ElderWyvern_C.MissionKickoff
// (Event, Public, BlueprintEvent)
// Parameters:

void UMission_ElderWyvern_C::MissionKickoff()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_ElderWyvern_C", "MissionKickoff");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Mission_ElderWyvern.Mission_ElderWyvern_C.Set_AcceptQuest_Wyvern
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveSetEventObjectiveSetEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_ElderWyvern_C::Set_AcceptQuest_Wyvern(enum class EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_ElderWyvern_C", "Set_AcceptQuest_Wyvern");

	Params::UMission_ElderWyvern_C_Set_AcceptQuest_Wyvern_Params Parms{};

	Parms.ObjectiveSetEvent = ObjectiveSetEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_ElderWyvern.Mission_ElderWyvern_C.Obj_AcceptQuest_Wyvern
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveEvent  ObjectiveEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ObjectiveCount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CurrentlyInLoadEvents                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMission_ElderWyvern_C::Obj_AcceptQuest_Wyvern(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_ElderWyvern_C", "Obj_AcceptQuest_Wyvern");

	Params::UMission_ElderWyvern_C_Obj_AcceptQuest_Wyvern_Params Parms{};

	Parms.ObjectiveEvent = ObjectiveEvent;
	Parms.ObjectiveCount = ObjectiveCount;
	Parms.CurrentlyInLoadEvents = CurrentlyInLoadEvents;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_ElderWyvern.Mission_ElderWyvern_C.Set_FindReleaseMechanism
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveSetEventObjectiveSetEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_ElderWyvern_C::Set_FindReleaseMechanism(enum class EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_ElderWyvern_C", "Set_FindReleaseMechanism");

	Params::UMission_ElderWyvern_C_Set_FindReleaseMechanism_Params Parms{};

	Parms.ObjectiveSetEvent = ObjectiveSetEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_ElderWyvern.Mission_ElderWyvern_C.Obj_TravelTo_Forge_Breadcrumb1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveEvent  ObjectiveEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ObjectiveCount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CurrentlyInLoadEvents                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMission_ElderWyvern_C::Obj_TravelTo_Forge_Breadcrumb1(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_ElderWyvern_C", "Obj_TravelTo_Forge_Breadcrumb1");

	Params::UMission_ElderWyvern_C_Obj_TravelTo_Forge_Breadcrumb1_Params Parms{};

	Parms.ObjectiveEvent = ObjectiveEvent;
	Parms.ObjectiveCount = ObjectiveCount;
	Parms.CurrentlyInLoadEvents = CurrentlyInLoadEvents;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_ElderWyvern.Mission_ElderWyvern_C.MCE_TravelTo_Forge_Breadcrumb1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_ElderWyvern_C::MCE_TravelTo_Forge_Breadcrumb1(class UObject* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_ElderWyvern_C", "MCE_TravelTo_Forge_Breadcrumb1");

	Params::UMission_ElderWyvern_C_MCE_TravelTo_Forge_Breadcrumb1_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_ElderWyvern.Mission_ElderWyvern_C.Obj_TravelTo_Forge_Breadcrumb2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveEvent  ObjectiveEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ObjectiveCount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CurrentlyInLoadEvents                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMission_ElderWyvern_C::Obj_TravelTo_Forge_Breadcrumb2(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_ElderWyvern_C", "Obj_TravelTo_Forge_Breadcrumb2");

	Params::UMission_ElderWyvern_C_Obj_TravelTo_Forge_Breadcrumb2_Params Parms{};

	Parms.ObjectiveEvent = ObjectiveEvent;
	Parms.ObjectiveCount = ObjectiveCount;
	Parms.CurrentlyInLoadEvents = CurrentlyInLoadEvents;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_ElderWyvern.Mission_ElderWyvern_C.MCE_TravelTo_Forge_Breadcrumb2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_ElderWyvern_C::MCE_TravelTo_Forge_Breadcrumb2(class UObject* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_ElderWyvern_C", "MCE_TravelTo_Forge_Breadcrumb2");

	Params::UMission_ElderWyvern_C_MCE_TravelTo_Forge_Breadcrumb2_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_ElderWyvern.Mission_ElderWyvern_C.Set_TravelTo_Forge_Breadcrumbs
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveSetEventObjectiveSetEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_ElderWyvern_C::Set_TravelTo_Forge_Breadcrumbs(enum class EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_ElderWyvern_C", "Set_TravelTo_Forge_Breadcrumbs");

	Params::UMission_ElderWyvern_C_Set_TravelTo_Forge_Breadcrumbs_Params Parms{};

	Parms.ObjectiveSetEvent = ObjectiveSetEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_ElderWyvern.Mission_ElderWyvern_C.[Obj_TravelTo_Forge_Objective] PROXY_11
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMission_ElderWyvern_C::_Obj_TravelTo_Forge_Objective__PROXY_11()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_ElderWyvern_C", "[Obj_TravelTo_Forge_Objective] PROXY_11");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Mission_ElderWyvern.Mission_ElderWyvern_C.Obj_FindReleaseMechanism
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveEvent  ObjectiveEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ObjectiveCount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CurrentlyInLoadEvents                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMission_ElderWyvern_C::Obj_FindReleaseMechanism(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_ElderWyvern_C", "Obj_FindReleaseMechanism");

	Params::UMission_ElderWyvern_C_Obj_FindReleaseMechanism_Params Parms{};

	Parms.ObjectiveEvent = ObjectiveEvent;
	Parms.ObjectiveCount = ObjectiveCount;
	Parms.CurrentlyInLoadEvents = CurrentlyInLoadEvents;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_ElderWyvern.Mission_ElderWyvern_C.Set_Basement_Breadcrumb
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveSetEventObjectiveSetEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_ElderWyvern_C::Set_Basement_Breadcrumb(enum class EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_ElderWyvern_C", "Set_Basement_Breadcrumb");

	Params::UMission_ElderWyvern_C_Set_Basement_Breadcrumb_Params Parms{};

	Parms.ObjectiveSetEvent = ObjectiveSetEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_ElderWyvern.Mission_ElderWyvern_C.Obj_Basement_Breadcrumb
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveEvent  ObjectiveEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ObjectiveCount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CurrentlyInLoadEvents                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMission_ElderWyvern_C::Obj_Basement_Breadcrumb(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_ElderWyvern_C", "Obj_Basement_Breadcrumb");

	Params::UMission_ElderWyvern_C_Obj_Basement_Breadcrumb_Params Parms{};

	Parms.ObjectiveEvent = ObjectiveEvent;
	Parms.ObjectiveCount = ObjectiveCount;
	Parms.CurrentlyInLoadEvents = CurrentlyInLoadEvents;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_ElderWyvern.Mission_ElderWyvern_C.MCE_Basement_Breadcrumb
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_ElderWyvern_C::MCE_Basement_Breadcrumb(class UObject* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_ElderWyvern_C", "MCE_Basement_Breadcrumb");

	Params::UMission_ElderWyvern_C_MCE_Basement_Breadcrumb_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_ElderWyvern.Mission_ElderWyvern_C.[Obj_TurnOffMachine_Objective] PROXY_12
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMission_ElderWyvern_C::_Obj_TurnOffMachine_Objective__PROXY_12()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_ElderWyvern_C", "[Obj_TurnOffMachine_Objective] PROXY_12");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Mission_ElderWyvern.Mission_ElderWyvern_C.ExecuteUbergraph_Mission_ElderWyvern
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MissionRemoteEvent_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDialogContext              CallFunc_NewDialogContext_ReturnValue                            (None)
// struct FDialogConversation         CallFunc_FinishSpeakSequenceEx_Conversation                      (NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs                   (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_FinishSpeakSequenceEx_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDialogContext              CallFunc_NewDialogContext_ReturnValue1                           (None)
// struct FDialogConversation         CallFunc_FinishSpeakSequenceEx_Conversation1                     (NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs1                  (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_FinishSpeakSequenceEx_ReturnValue1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDialogContext              CallFunc_NewDialogContext_ReturnValue2                           (None)
// struct FDialogContext              CallFunc_NewDialogContext_ReturnValue3                           (None)
// struct FDialogConversation         CallFunc_FinishSpeakSequenceEx_Conversation2                     (NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs2                  (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_FinishSpeakSequenceEx_ReturnValue2                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDialogConversation         CallFunc_FinishSpeakSequenceEx_Conversation3                     (NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs3                  (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_FinishSpeakSequenceEx_ReturnValue3                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDialogContext              CallFunc_NewDialogContext_ReturnValue4                           (None)
// struct FDialogContext              CallFunc_NewDialogContext_ReturnValue5                           (None)
// struct FDialogConversation         CallFunc_FinishSpeakSequenceEx_Conversation4                     (NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs4                  (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_FinishSpeakSequenceEx_ReturnValue4                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDialogConversation         CallFunc_FinishSpeakSequenceEx_Conversation5                     (NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs5                  (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_FinishSpeakSequenceEx_ReturnValue5                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDialogContext              CallFunc_NewDialogContext_ReturnValue6                           (None)
// struct FDialogConversation         CallFunc_FinishSpeakSequenceEx_Conversation6                     (NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs6                  (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_FinishSpeakSequenceEx_ReturnValue6                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDialogContext              CallFunc_NewDialogContext_ReturnValue7                           (None)
// struct FDialogConversation         CallFunc_FinishSpeakSequenceEx_Conversation7                     (NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs7                  (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_FinishSpeakSequenceEx_ReturnValue7                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDialogContext              CallFunc_NewDialogContext_ReturnValue8                           (None)
// struct FDialogConversation         CallFunc_FinishSpeakSequenceEx_Conversation8                     (NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs8                  (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_FinishSpeakSequenceEx_ReturnValue8                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDialogContext              CallFunc_NewDialogContext_ReturnValue9                           (None)
// struct FDialogContext              CallFunc_NewDialogContext_ReturnValue10                          (None)
// struct FDialogConversation         CallFunc_FinishSpeakSequenceEx_Conversation9                     (NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs9                  (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_FinishSpeakSequenceEx_ReturnValue9                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDialogContext              CallFunc_NewDialogContext_ReturnValue11                          (None)
// struct FDialogConversation         CallFunc_FinishSpeakSequenceEx_Conversation10                    (NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs10                 (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_FinishSpeakSequenceEx_ReturnValue10                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EMissionObjectiveStatus CallFunc_GetMissionObjectiveStatusRef_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMissionObjectiveSetEventMissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent18              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EMissionObjectiveEvent  MissionK2Node_ObjectiveEvent_ObjectiveEvent20                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MissionK2Node_ObjectiveEvent_ObjectiveCount20                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents20             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     MissionK2Node_MissionCustomEvent_Context24                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum1_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EMissionObjectiveEvent  MissionK2Node_ObjectiveEvent_ObjectiveEvent19                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MissionK2Node_ObjectiveEvent_ObjectiveCount19                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents19             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EMissionObjectiveSetEventMissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent17              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum2_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_MissionRemoteEvent_ReturnValue1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EMissionObjectiveEvent  MissionK2Node_ObjectiveEvent_ObjectiveEvent18                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MissionK2Node_ObjectiveEvent_ObjectiveCount18                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents18             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EMissionObjectiveSetEventMissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent16              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum3_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     MissionK2Node_MissionCustomEvent_Context23                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMissionObjectiveEvent  MissionK2Node_ObjectiveEvent_ObjectiveEvent17                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MissionK2Node_ObjectiveEvent_ObjectiveCount17                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents17             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum4_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     MissionK2Node_MissionCustomEvent_Context22                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMissionObjectiveSetEventMissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent15              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionCustomEvent_Context21                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMissionObjectiveEvent  MissionK2Node_ObjectiveEvent_ObjectiveEvent16                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MissionK2Node_ObjectiveEvent_ObjectiveCount16                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents16             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum5_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     MissionK2Node_MissionCustomEvent_Context20                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMissionObjectiveSetEventMissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent14              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionCustomEvent_Context19                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MissionRemoteEvent_ReturnValue2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// class UObject*                     MissionK2Node_MissionCustomEvent_Context18                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// class UObject*                     MissionK2Node_MissionCustomEvent_Context17                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionCustomEvent_Context16                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionCustomEvent_Context15                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionCustomEvent_Context14                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMissionObjectiveSetEventMissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent13              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionCustomEvent_Context13                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMissionObjectiveEvent  MissionK2Node_ObjectiveEvent_ObjectiveEvent15                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MissionK2Node_ObjectiveEvent_ObjectiveCount15                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents15             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     MissionK2Node_MissionCustomEvent_Context12                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum6_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_MissionRemoteEvent_ReturnValue3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_MissionRemoteEvent_ReturnValue4                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_MissionRemoteEvent_ReturnValue5                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_MissionRemoteEvent_ReturnValue6                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EMissionObjectiveSetEventMissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent12              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMissionObjectiveSetEventMissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent11              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMissionObjectiveEvent  MissionK2Node_ObjectiveEvent_ObjectiveEvent14                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MissionK2Node_ObjectiveEvent_ObjectiveCount14                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents14             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EMissionObjectiveEvent  MissionK2Node_ObjectiveEvent_ObjectiveEvent13                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MissionK2Node_ObjectiveEvent_ObjectiveCount13                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents13             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum7_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum8_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     MissionK2Node_MissionCustomEvent_Context11                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionCustomEvent_Context10                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionCustomEvent_Context9                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionCustomEvent_Context8                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMissionObjectiveEvent  MissionK2Node_ObjectiveEvent_ObjectiveEvent12                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MissionK2Node_ObjectiveEvent_ObjectiveCount12                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents12             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum9_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     MissionK2Node_MissionCustomEvent_Context7                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMissionObjectiveEvent  MissionK2Node_ObjectiveEvent_ObjectiveEvent11                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MissionK2Node_ObjectiveEvent_ObjectiveCount11                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents11             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum10_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_MissionRemoteEvent_ReturnValue7                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_MissionRemoteEvent_ReturnValue8                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDialogContext              CallFunc_NewDialogContext_ReturnValue12                          (None)
// bool                               CallFunc_MissionRemoteEvent_ReturnValue9                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDialogConversation         CallFunc_FinishSpeakSequenceEx_Conversation11                    (NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs11                 (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_FinishSpeakSequenceEx_ReturnValue11                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDialogContext              CallFunc_NewDialogContext_ReturnValue13                          (None)
// struct FDialogConversation         CallFunc_FinishSpeakSequenceEx_Conversation12                    (NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs12                 (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_FinishSpeakSequenceEx_ReturnValue12                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EMissionObjectiveSetEventMissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent10              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMissionObjectiveEvent  MissionK2Node_ObjectiveEvent_ObjectiveEvent10                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MissionK2Node_ObjectiveEvent_ObjectiveCount10                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents10             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum11_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EMissionObjectiveEvent  MissionK2Node_ObjectiveEvent_ObjectiveEvent9                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MissionK2Node_ObjectiveEvent_ObjectiveCount9                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents9              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EMissionObjectiveSetEventMissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent9               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum12_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     MissionK2Node_MissionCustomEvent_Context6                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionCustomEvent_Context5                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMissionObjectiveEvent  MissionK2Node_ObjectiveEvent_ObjectiveEvent8                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MissionK2Node_ObjectiveEvent_ObjectiveCount8                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents8              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum13_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EMissionObjectiveEvent  MissionK2Node_ObjectiveEvent_ObjectiveEvent7                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MissionK2Node_ObjectiveEvent_ObjectiveCount7                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents7              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     MissionK2Node_MissionCustomEvent_Context4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum14_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EMissionObjectiveSetEventMissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent8               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMissionObjectiveSetEventMissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent7               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMissionObjectiveEvent  MissionK2Node_ObjectiveEvent_ObjectiveEvent6                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MissionK2Node_ObjectiveEvent_ObjectiveCount6                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents6              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EMissionObjectiveSetEventMissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent6               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum15_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EMissionObjectiveSetEventMissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent5               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MissionRemoteEvent_ReturnValue10                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EMissionObjectiveSetEventMissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent4               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDialogConversation         CallFunc_FinishSpeakSequenceEx_Conversation13                    (NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs13                 (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_FinishSpeakSequenceEx_ReturnValue13                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EMissionObjectiveEvent  MissionK2Node_ObjectiveEvent_ObjectiveEvent5                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MissionK2Node_ObjectiveEvent_ObjectiveCount5                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents5              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum16_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     MissionK2Node_MissionCustomEvent_Context3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMissionObjectiveSetEventMissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent3               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMissionObjectiveEvent  MissionK2Node_ObjectiveEvent_ObjectiveEvent4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MissionK2Node_ObjectiveEvent_ObjectiveCount4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents4              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EMissionObjectiveSetEventMissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum17_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate5                            (ZeroConstructor, NoDestructor)
// bool                               CallFunc_MissionRemoteEvent_ReturnValue11                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EMissionObjectiveEvent  MissionK2Node_ObjectiveEvent_ObjectiveEvent3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MissionK2Node_ObjectiveEvent_ObjectiveCount3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents3              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     MissionK2Node_MissionCustomEvent_Context2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMissionObjectiveEvent  MissionK2Node_ObjectiveEvent_ObjectiveEvent2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MissionK2Node_ObjectiveEvent_ObjectiveCount2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents2              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum18_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     MissionK2Node_MissionCustomEvent_Context1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMissionObjectiveSetEventMissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MissionRemoteEvent_ReturnValue12                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EMissionObjectiveEvent  MissionK2Node_ObjectiveEvent_ObjectiveEvent1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MissionK2Node_ObjectiveEvent_ObjectiveCount1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents1              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EMissionObjectiveSetEventMissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum19_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EMissionObjectiveEvent  MissionK2Node_ObjectiveEvent_ObjectiveEvent                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MissionK2Node_ObjectiveEvent_ObjectiveCount                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     MissionK2Node_MissionCustomEvent_Context                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum20_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMission_ElderWyvern_C::ExecuteUbergraph_Mission_ElderWyvern(int32 EntryPoint, bool CallFunc_MissionRemoteEvent_ReturnValue, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue, const struct FDialogConversation& CallFunc_FinishSpeakSequenceEx_Conversation, TArray<int32>& CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs, bool CallFunc_FinishSpeakSequenceEx_ReturnValue, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue1, const struct FDialogConversation& CallFunc_FinishSpeakSequenceEx_Conversation1, TArray<int32>& CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs1, bool CallFunc_FinishSpeakSequenceEx_ReturnValue1, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue2, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue3, const struct FDialogConversation& CallFunc_FinishSpeakSequenceEx_Conversation2, TArray<int32>& CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs2, bool CallFunc_FinishSpeakSequenceEx_ReturnValue2, const struct FDialogConversation& CallFunc_FinishSpeakSequenceEx_Conversation3, TArray<int32>& CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs3, bool CallFunc_FinishSpeakSequenceEx_ReturnValue3, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue4, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue5, const struct FDialogConversation& CallFunc_FinishSpeakSequenceEx_Conversation4, TArray<int32>& CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs4, bool CallFunc_FinishSpeakSequenceEx_ReturnValue4, const struct FDialogConversation& CallFunc_FinishSpeakSequenceEx_Conversation5, TArray<int32>& CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs5, bool CallFunc_FinishSpeakSequenceEx_ReturnValue5, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue6, const struct FDialogConversation& CallFunc_FinishSpeakSequenceEx_Conversation6, TArray<int32>& CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs6, bool CallFunc_FinishSpeakSequenceEx_ReturnValue6, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue7, const struct FDialogConversation& CallFunc_FinishSpeakSequenceEx_Conversation7, TArray<int32>& CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs7, bool CallFunc_FinishSpeakSequenceEx_ReturnValue7, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue8, const struct FDialogConversation& CallFunc_FinishSpeakSequenceEx_Conversation8, TArray<int32>& CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs8, bool CallFunc_FinishSpeakSequenceEx_ReturnValue8, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue9, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue10, const struct FDialogConversation& CallFunc_FinishSpeakSequenceEx_Conversation9, TArray<int32>& CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs9, bool CallFunc_FinishSpeakSequenceEx_ReturnValue9, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue11, const struct FDialogConversation& CallFunc_FinishSpeakSequenceEx_Conversation10, TArray<int32>& CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs10, bool CallFunc_FinishSpeakSequenceEx_ReturnValue10, enum class EMissionObjectiveStatus CallFunc_GetMissionObjectiveStatusRef_ReturnValue, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent18, bool K2Node_SwitchEnum_CmpSuccess, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent20, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount20, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents20, class UObject* MissionK2Node_MissionCustomEvent_Context24, bool K2Node_SwitchEnum1_CmpSuccess, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent19, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount19, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents19, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent17, bool K2Node_SwitchEnum2_CmpSuccess, bool CallFunc_MissionRemoteEvent_ReturnValue1, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent18, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount18, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents18, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent16, bool K2Node_SwitchEnum3_CmpSuccess, class UObject* MissionK2Node_MissionCustomEvent_Context23, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent17, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount17, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents17, bool K2Node_SwitchEnum4_CmpSuccess, class UObject* MissionK2Node_MissionCustomEvent_Context22, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent15, class UObject* MissionK2Node_MissionCustomEvent_Context21, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent16, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount16, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents16, bool K2Node_SwitchEnum5_CmpSuccess, class UObject* MissionK2Node_MissionCustomEvent_Context20, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent14, class UObject* MissionK2Node_MissionCustomEvent_Context19, bool CallFunc_MissionRemoteEvent_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UObject* MissionK2Node_MissionCustomEvent_Context18, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, class UObject* MissionK2Node_MissionCustomEvent_Context17, class UObject* MissionK2Node_MissionCustomEvent_Context16, class UObject* MissionK2Node_MissionCustomEvent_Context15, class UObject* MissionK2Node_MissionCustomEvent_Context14, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent13, class UObject* MissionK2Node_MissionCustomEvent_Context13, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent15, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount15, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents15, class UObject* MissionK2Node_MissionCustomEvent_Context12, bool K2Node_SwitchEnum6_CmpSuccess, bool CallFunc_MissionRemoteEvent_ReturnValue3, bool CallFunc_MissionRemoteEvent_ReturnValue4, bool CallFunc_MissionRemoteEvent_ReturnValue5, bool CallFunc_MissionRemoteEvent_ReturnValue6, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent12, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent11, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent14, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount14, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents14, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent13, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount13, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents13, bool K2Node_SwitchEnum7_CmpSuccess, bool K2Node_SwitchEnum8_CmpSuccess, class UObject* MissionK2Node_MissionCustomEvent_Context11, class UObject* MissionK2Node_MissionCustomEvent_Context10, class UObject* MissionK2Node_MissionCustomEvent_Context9, class UObject* MissionK2Node_MissionCustomEvent_Context8, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent12, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount12, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents12, bool K2Node_SwitchEnum9_CmpSuccess, class UObject* MissionK2Node_MissionCustomEvent_Context7, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent11, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount11, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents11, bool K2Node_SwitchEnum10_CmpSuccess, bool CallFunc_MissionRemoteEvent_ReturnValue7, bool CallFunc_MissionRemoteEvent_ReturnValue8, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue12, bool CallFunc_MissionRemoteEvent_ReturnValue9, const struct FDialogConversation& CallFunc_FinishSpeakSequenceEx_Conversation11, TArray<int32>& CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs11, bool CallFunc_FinishSpeakSequenceEx_ReturnValue11, const struct FDialogContext& CallFunc_NewDialogContext_ReturnValue13, const struct FDialogConversation& CallFunc_FinishSpeakSequenceEx_Conversation12, TArray<int32>& CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs12, bool CallFunc_FinishSpeakSequenceEx_ReturnValue12, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent10, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent10, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount10, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents10, bool K2Node_SwitchEnum11_CmpSuccess, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent9, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount9, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents9, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent9, bool K2Node_SwitchEnum12_CmpSuccess, class UObject* MissionK2Node_MissionCustomEvent_Context6, class UObject* MissionK2Node_MissionCustomEvent_Context5, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent8, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount8, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents8, bool K2Node_SwitchEnum13_CmpSuccess, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent7, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount7, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents7, class UObject* MissionK2Node_MissionCustomEvent_Context4, bool K2Node_SwitchEnum14_CmpSuccess, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent8, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent7, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent6, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount6, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents6, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent6, bool K2Node_SwitchEnum15_CmpSuccess, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent5, bool CallFunc_MissionRemoteEvent_ReturnValue10, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent4, const struct FDialogConversation& CallFunc_FinishSpeakSequenceEx_Conversation13, TArray<int32>& CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs13, bool CallFunc_FinishSpeakSequenceEx_ReturnValue13, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent5, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount5, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents5, bool K2Node_SwitchEnum16_CmpSuccess, class UObject* MissionK2Node_MissionCustomEvent_Context3, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent3, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent4, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount4, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents4, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent2, bool K2Node_SwitchEnum17_CmpSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, bool CallFunc_MissionRemoteEvent_ReturnValue11, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent3, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount3, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents3, class UObject* MissionK2Node_MissionCustomEvent_Context2, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent2, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount2, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents2, bool K2Node_SwitchEnum18_CmpSuccess, class UObject* MissionK2Node_MissionCustomEvent_Context1, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent1, bool CallFunc_MissionRemoteEvent_ReturnValue12, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent1, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount1, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents1, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent, bool K2Node_SwitchEnum19_CmpSuccess, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents, class UObject* MissionK2Node_MissionCustomEvent_Context, bool K2Node_SwitchEnum20_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_ElderWyvern_C", "ExecuteUbergraph_Mission_ElderWyvern");

	Params::UMission_ElderWyvern_C_ExecuteUbergraph_Mission_ElderWyvern_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MissionRemoteEvent_ReturnValue = CallFunc_MissionRemoteEvent_ReturnValue;
	Parms.CallFunc_NewDialogContext_ReturnValue = CallFunc_NewDialogContext_ReturnValue;
	Parms.CallFunc_FinishSpeakSequenceEx_Conversation = CallFunc_FinishSpeakSequenceEx_Conversation;
	Parms.CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs = CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs;
	Parms.CallFunc_FinishSpeakSequenceEx_ReturnValue = CallFunc_FinishSpeakSequenceEx_ReturnValue;
	Parms.CallFunc_NewDialogContext_ReturnValue1 = CallFunc_NewDialogContext_ReturnValue1;
	Parms.CallFunc_FinishSpeakSequenceEx_Conversation1 = CallFunc_FinishSpeakSequenceEx_Conversation1;
	Parms.CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs1 = CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs1;
	Parms.CallFunc_FinishSpeakSequenceEx_ReturnValue1 = CallFunc_FinishSpeakSequenceEx_ReturnValue1;
	Parms.CallFunc_NewDialogContext_ReturnValue2 = CallFunc_NewDialogContext_ReturnValue2;
	Parms.CallFunc_NewDialogContext_ReturnValue3 = CallFunc_NewDialogContext_ReturnValue3;
	Parms.CallFunc_FinishSpeakSequenceEx_Conversation2 = CallFunc_FinishSpeakSequenceEx_Conversation2;
	Parms.CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs2 = CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs2;
	Parms.CallFunc_FinishSpeakSequenceEx_ReturnValue2 = CallFunc_FinishSpeakSequenceEx_ReturnValue2;
	Parms.CallFunc_FinishSpeakSequenceEx_Conversation3 = CallFunc_FinishSpeakSequenceEx_Conversation3;
	Parms.CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs3 = CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs3;
	Parms.CallFunc_FinishSpeakSequenceEx_ReturnValue3 = CallFunc_FinishSpeakSequenceEx_ReturnValue3;
	Parms.CallFunc_NewDialogContext_ReturnValue4 = CallFunc_NewDialogContext_ReturnValue4;
	Parms.CallFunc_NewDialogContext_ReturnValue5 = CallFunc_NewDialogContext_ReturnValue5;
	Parms.CallFunc_FinishSpeakSequenceEx_Conversation4 = CallFunc_FinishSpeakSequenceEx_Conversation4;
	Parms.CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs4 = CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs4;
	Parms.CallFunc_FinishSpeakSequenceEx_ReturnValue4 = CallFunc_FinishSpeakSequenceEx_ReturnValue4;
	Parms.CallFunc_FinishSpeakSequenceEx_Conversation5 = CallFunc_FinishSpeakSequenceEx_Conversation5;
	Parms.CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs5 = CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs5;
	Parms.CallFunc_FinishSpeakSequenceEx_ReturnValue5 = CallFunc_FinishSpeakSequenceEx_ReturnValue5;
	Parms.CallFunc_NewDialogContext_ReturnValue6 = CallFunc_NewDialogContext_ReturnValue6;
	Parms.CallFunc_FinishSpeakSequenceEx_Conversation6 = CallFunc_FinishSpeakSequenceEx_Conversation6;
	Parms.CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs6 = CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs6;
	Parms.CallFunc_FinishSpeakSequenceEx_ReturnValue6 = CallFunc_FinishSpeakSequenceEx_ReturnValue6;
	Parms.CallFunc_NewDialogContext_ReturnValue7 = CallFunc_NewDialogContext_ReturnValue7;
	Parms.CallFunc_FinishSpeakSequenceEx_Conversation7 = CallFunc_FinishSpeakSequenceEx_Conversation7;
	Parms.CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs7 = CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs7;
	Parms.CallFunc_FinishSpeakSequenceEx_ReturnValue7 = CallFunc_FinishSpeakSequenceEx_ReturnValue7;
	Parms.CallFunc_NewDialogContext_ReturnValue8 = CallFunc_NewDialogContext_ReturnValue8;
	Parms.CallFunc_FinishSpeakSequenceEx_Conversation8 = CallFunc_FinishSpeakSequenceEx_Conversation8;
	Parms.CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs8 = CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs8;
	Parms.CallFunc_FinishSpeakSequenceEx_ReturnValue8 = CallFunc_FinishSpeakSequenceEx_ReturnValue8;
	Parms.CallFunc_NewDialogContext_ReturnValue9 = CallFunc_NewDialogContext_ReturnValue9;
	Parms.CallFunc_NewDialogContext_ReturnValue10 = CallFunc_NewDialogContext_ReturnValue10;
	Parms.CallFunc_FinishSpeakSequenceEx_Conversation9 = CallFunc_FinishSpeakSequenceEx_Conversation9;
	Parms.CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs9 = CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs9;
	Parms.CallFunc_FinishSpeakSequenceEx_ReturnValue9 = CallFunc_FinishSpeakSequenceEx_ReturnValue9;
	Parms.CallFunc_NewDialogContext_ReturnValue11 = CallFunc_NewDialogContext_ReturnValue11;
	Parms.CallFunc_FinishSpeakSequenceEx_Conversation10 = CallFunc_FinishSpeakSequenceEx_Conversation10;
	Parms.CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs10 = CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs10;
	Parms.CallFunc_FinishSpeakSequenceEx_ReturnValue10 = CallFunc_FinishSpeakSequenceEx_ReturnValue10;
	Parms.CallFunc_GetMissionObjectiveStatusRef_ReturnValue = CallFunc_GetMissionObjectiveStatusRef_ReturnValue;
	Parms.MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent18 = MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent18;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveEvent20 = MissionK2Node_ObjectiveEvent_ObjectiveEvent20;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveCount20 = MissionK2Node_ObjectiveEvent_ObjectiveCount20;
	Parms.MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents20 = MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents20;
	Parms.MissionK2Node_MissionCustomEvent_Context24 = MissionK2Node_MissionCustomEvent_Context24;
	Parms.K2Node_SwitchEnum1_CmpSuccess = K2Node_SwitchEnum1_CmpSuccess;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveEvent19 = MissionK2Node_ObjectiveEvent_ObjectiveEvent19;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveCount19 = MissionK2Node_ObjectiveEvent_ObjectiveCount19;
	Parms.MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents19 = MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents19;
	Parms.MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent17 = MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent17;
	Parms.K2Node_SwitchEnum2_CmpSuccess = K2Node_SwitchEnum2_CmpSuccess;
	Parms.CallFunc_MissionRemoteEvent_ReturnValue1 = CallFunc_MissionRemoteEvent_ReturnValue1;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveEvent18 = MissionK2Node_ObjectiveEvent_ObjectiveEvent18;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveCount18 = MissionK2Node_ObjectiveEvent_ObjectiveCount18;
	Parms.MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents18 = MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents18;
	Parms.MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent16 = MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent16;
	Parms.K2Node_SwitchEnum3_CmpSuccess = K2Node_SwitchEnum3_CmpSuccess;
	Parms.MissionK2Node_MissionCustomEvent_Context23 = MissionK2Node_MissionCustomEvent_Context23;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveEvent17 = MissionK2Node_ObjectiveEvent_ObjectiveEvent17;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveCount17 = MissionK2Node_ObjectiveEvent_ObjectiveCount17;
	Parms.MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents17 = MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents17;
	Parms.K2Node_SwitchEnum4_CmpSuccess = K2Node_SwitchEnum4_CmpSuccess;
	Parms.MissionK2Node_MissionCustomEvent_Context22 = MissionK2Node_MissionCustomEvent_Context22;
	Parms.MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent15 = MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent15;
	Parms.MissionK2Node_MissionCustomEvent_Context21 = MissionK2Node_MissionCustomEvent_Context21;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveEvent16 = MissionK2Node_ObjectiveEvent_ObjectiveEvent16;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveCount16 = MissionK2Node_ObjectiveEvent_ObjectiveCount16;
	Parms.MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents16 = MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents16;
	Parms.K2Node_SwitchEnum5_CmpSuccess = K2Node_SwitchEnum5_CmpSuccess;
	Parms.MissionK2Node_MissionCustomEvent_Context20 = MissionK2Node_MissionCustomEvent_Context20;
	Parms.MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent14 = MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent14;
	Parms.MissionK2Node_MissionCustomEvent_Context19 = MissionK2Node_MissionCustomEvent_Context19;
	Parms.CallFunc_MissionRemoteEvent_ReturnValue2 = CallFunc_MissionRemoteEvent_ReturnValue2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.MissionK2Node_MissionCustomEvent_Context18 = MissionK2Node_MissionCustomEvent_Context18;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.MissionK2Node_MissionCustomEvent_Context17 = MissionK2Node_MissionCustomEvent_Context17;
	Parms.MissionK2Node_MissionCustomEvent_Context16 = MissionK2Node_MissionCustomEvent_Context16;
	Parms.MissionK2Node_MissionCustomEvent_Context15 = MissionK2Node_MissionCustomEvent_Context15;
	Parms.MissionK2Node_MissionCustomEvent_Context14 = MissionK2Node_MissionCustomEvent_Context14;
	Parms.MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent13 = MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent13;
	Parms.MissionK2Node_MissionCustomEvent_Context13 = MissionK2Node_MissionCustomEvent_Context13;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveEvent15 = MissionK2Node_ObjectiveEvent_ObjectiveEvent15;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveCount15 = MissionK2Node_ObjectiveEvent_ObjectiveCount15;
	Parms.MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents15 = MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents15;
	Parms.MissionK2Node_MissionCustomEvent_Context12 = MissionK2Node_MissionCustomEvent_Context12;
	Parms.K2Node_SwitchEnum6_CmpSuccess = K2Node_SwitchEnum6_CmpSuccess;
	Parms.CallFunc_MissionRemoteEvent_ReturnValue3 = CallFunc_MissionRemoteEvent_ReturnValue3;
	Parms.CallFunc_MissionRemoteEvent_ReturnValue4 = CallFunc_MissionRemoteEvent_ReturnValue4;
	Parms.CallFunc_MissionRemoteEvent_ReturnValue5 = CallFunc_MissionRemoteEvent_ReturnValue5;
	Parms.CallFunc_MissionRemoteEvent_ReturnValue6 = CallFunc_MissionRemoteEvent_ReturnValue6;
	Parms.MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent12 = MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent12;
	Parms.MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent11 = MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent11;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveEvent14 = MissionK2Node_ObjectiveEvent_ObjectiveEvent14;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveCount14 = MissionK2Node_ObjectiveEvent_ObjectiveCount14;
	Parms.MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents14 = MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents14;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveEvent13 = MissionK2Node_ObjectiveEvent_ObjectiveEvent13;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveCount13 = MissionK2Node_ObjectiveEvent_ObjectiveCount13;
	Parms.MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents13 = MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents13;
	Parms.K2Node_SwitchEnum7_CmpSuccess = K2Node_SwitchEnum7_CmpSuccess;
	Parms.K2Node_SwitchEnum8_CmpSuccess = K2Node_SwitchEnum8_CmpSuccess;
	Parms.MissionK2Node_MissionCustomEvent_Context11 = MissionK2Node_MissionCustomEvent_Context11;
	Parms.MissionK2Node_MissionCustomEvent_Context10 = MissionK2Node_MissionCustomEvent_Context10;
	Parms.MissionK2Node_MissionCustomEvent_Context9 = MissionK2Node_MissionCustomEvent_Context9;
	Parms.MissionK2Node_MissionCustomEvent_Context8 = MissionK2Node_MissionCustomEvent_Context8;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveEvent12 = MissionK2Node_ObjectiveEvent_ObjectiveEvent12;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveCount12 = MissionK2Node_ObjectiveEvent_ObjectiveCount12;
	Parms.MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents12 = MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents12;
	Parms.K2Node_SwitchEnum9_CmpSuccess = K2Node_SwitchEnum9_CmpSuccess;
	Parms.MissionK2Node_MissionCustomEvent_Context7 = MissionK2Node_MissionCustomEvent_Context7;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveEvent11 = MissionK2Node_ObjectiveEvent_ObjectiveEvent11;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveCount11 = MissionK2Node_ObjectiveEvent_ObjectiveCount11;
	Parms.MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents11 = MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents11;
	Parms.K2Node_SwitchEnum10_CmpSuccess = K2Node_SwitchEnum10_CmpSuccess;
	Parms.CallFunc_MissionRemoteEvent_ReturnValue7 = CallFunc_MissionRemoteEvent_ReturnValue7;
	Parms.CallFunc_MissionRemoteEvent_ReturnValue8 = CallFunc_MissionRemoteEvent_ReturnValue8;
	Parms.CallFunc_NewDialogContext_ReturnValue12 = CallFunc_NewDialogContext_ReturnValue12;
	Parms.CallFunc_MissionRemoteEvent_ReturnValue9 = CallFunc_MissionRemoteEvent_ReturnValue9;
	Parms.CallFunc_FinishSpeakSequenceEx_Conversation11 = CallFunc_FinishSpeakSequenceEx_Conversation11;
	Parms.CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs11 = CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs11;
	Parms.CallFunc_FinishSpeakSequenceEx_ReturnValue11 = CallFunc_FinishSpeakSequenceEx_ReturnValue11;
	Parms.CallFunc_NewDialogContext_ReturnValue13 = CallFunc_NewDialogContext_ReturnValue13;
	Parms.CallFunc_FinishSpeakSequenceEx_Conversation12 = CallFunc_FinishSpeakSequenceEx_Conversation12;
	Parms.CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs12 = CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs12;
	Parms.CallFunc_FinishSpeakSequenceEx_ReturnValue12 = CallFunc_FinishSpeakSequenceEx_ReturnValue12;
	Parms.MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent10 = MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent10;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveEvent10 = MissionK2Node_ObjectiveEvent_ObjectiveEvent10;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveCount10 = MissionK2Node_ObjectiveEvent_ObjectiveCount10;
	Parms.MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents10 = MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents10;
	Parms.K2Node_SwitchEnum11_CmpSuccess = K2Node_SwitchEnum11_CmpSuccess;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveEvent9 = MissionK2Node_ObjectiveEvent_ObjectiveEvent9;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveCount9 = MissionK2Node_ObjectiveEvent_ObjectiveCount9;
	Parms.MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents9 = MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents9;
	Parms.MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent9 = MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent9;
	Parms.K2Node_SwitchEnum12_CmpSuccess = K2Node_SwitchEnum12_CmpSuccess;
	Parms.MissionK2Node_MissionCustomEvent_Context6 = MissionK2Node_MissionCustomEvent_Context6;
	Parms.MissionK2Node_MissionCustomEvent_Context5 = MissionK2Node_MissionCustomEvent_Context5;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveEvent8 = MissionK2Node_ObjectiveEvent_ObjectiveEvent8;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveCount8 = MissionK2Node_ObjectiveEvent_ObjectiveCount8;
	Parms.MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents8 = MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents8;
	Parms.K2Node_SwitchEnum13_CmpSuccess = K2Node_SwitchEnum13_CmpSuccess;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveEvent7 = MissionK2Node_ObjectiveEvent_ObjectiveEvent7;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveCount7 = MissionK2Node_ObjectiveEvent_ObjectiveCount7;
	Parms.MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents7 = MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents7;
	Parms.MissionK2Node_MissionCustomEvent_Context4 = MissionK2Node_MissionCustomEvent_Context4;
	Parms.K2Node_SwitchEnum14_CmpSuccess = K2Node_SwitchEnum14_CmpSuccess;
	Parms.MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent8 = MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent8;
	Parms.MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent7 = MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent7;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveEvent6 = MissionK2Node_ObjectiveEvent_ObjectiveEvent6;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveCount6 = MissionK2Node_ObjectiveEvent_ObjectiveCount6;
	Parms.MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents6 = MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents6;
	Parms.MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent6 = MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent6;
	Parms.K2Node_SwitchEnum15_CmpSuccess = K2Node_SwitchEnum15_CmpSuccess;
	Parms.MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent5 = MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent5;
	Parms.CallFunc_MissionRemoteEvent_ReturnValue10 = CallFunc_MissionRemoteEvent_ReturnValue10;
	Parms.MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent4 = MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent4;
	Parms.CallFunc_FinishSpeakSequenceEx_Conversation13 = CallFunc_FinishSpeakSequenceEx_Conversation13;
	Parms.CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs13 = CallFunc_FinishSpeakSequenceEx_Out_SequenceIDs13;
	Parms.CallFunc_FinishSpeakSequenceEx_ReturnValue13 = CallFunc_FinishSpeakSequenceEx_ReturnValue13;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveEvent5 = MissionK2Node_ObjectiveEvent_ObjectiveEvent5;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveCount5 = MissionK2Node_ObjectiveEvent_ObjectiveCount5;
	Parms.MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents5 = MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents5;
	Parms.K2Node_SwitchEnum16_CmpSuccess = K2Node_SwitchEnum16_CmpSuccess;
	Parms.MissionK2Node_MissionCustomEvent_Context3 = MissionK2Node_MissionCustomEvent_Context3;
	Parms.MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent3 = MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent3;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveEvent4 = MissionK2Node_ObjectiveEvent_ObjectiveEvent4;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveCount4 = MissionK2Node_ObjectiveEvent_ObjectiveCount4;
	Parms.MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents4 = MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents4;
	Parms.MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent2 = MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent2;
	Parms.K2Node_SwitchEnum17_CmpSuccess = K2Node_SwitchEnum17_CmpSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate5 = K2Node_CreateDelegate_OutputDelegate5;
	Parms.CallFunc_MissionRemoteEvent_ReturnValue11 = CallFunc_MissionRemoteEvent_ReturnValue11;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveEvent3 = MissionK2Node_ObjectiveEvent_ObjectiveEvent3;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveCount3 = MissionK2Node_ObjectiveEvent_ObjectiveCount3;
	Parms.MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents3 = MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents3;
	Parms.MissionK2Node_MissionCustomEvent_Context2 = MissionK2Node_MissionCustomEvent_Context2;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveEvent2 = MissionK2Node_ObjectiveEvent_ObjectiveEvent2;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveCount2 = MissionK2Node_ObjectiveEvent_ObjectiveCount2;
	Parms.MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents2 = MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents2;
	Parms.K2Node_SwitchEnum18_CmpSuccess = K2Node_SwitchEnum18_CmpSuccess;
	Parms.MissionK2Node_MissionCustomEvent_Context1 = MissionK2Node_MissionCustomEvent_Context1;
	Parms.MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent1 = MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent1;
	Parms.CallFunc_MissionRemoteEvent_ReturnValue12 = CallFunc_MissionRemoteEvent_ReturnValue12;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveEvent1 = MissionK2Node_ObjectiveEvent_ObjectiveEvent1;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveCount1 = MissionK2Node_ObjectiveEvent_ObjectiveCount1;
	Parms.MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents1 = MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents1;
	Parms.MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent = MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent;
	Parms.K2Node_SwitchEnum19_CmpSuccess = K2Node_SwitchEnum19_CmpSuccess;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveEvent = MissionK2Node_ObjectiveEvent_ObjectiveEvent;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveCount = MissionK2Node_ObjectiveEvent_ObjectiveCount;
	Parms.MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents = MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents;
	Parms.MissionK2Node_MissionCustomEvent_Context = MissionK2Node_MissionCustomEvent_Context;
	Parms.K2Node_SwitchEnum20_CmpSuccess = K2Node_SwitchEnum20_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


