#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Mission_PLC3_3_2.Mission_PLC3_3_2_C
// (None)

class UClass* UMission_PLC3_3_2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Mission_PLC3_3_2_C");

	return Clss;
}


// Mission_PLC3_3_2_C Mission_PLC3_3_2.Default__Mission_PLC3_3_2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMission_PLC3_3_2_C* UMission_PLC3_3_2_C::GetDefaultObj()
{
	static class UMission_PLC3_3_2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMission_PLC3_3_2_C*>(UMission_PLC3_3_2_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Mission_PLC3_3_2.Mission_PLC3_3_2_C.Set_DestroyHooks
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveSetEventObjectiveSetEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_PLC3_3_2_C::Set_DestroyHooks(enum class EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC3_3_2_C", "Set_DestroyHooks");

	Params::UMission_PLC3_3_2_C_Set_DestroyHooks_Params Parms{};

	Parms.ObjectiveSetEvent = ObjectiveSetEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC3_3_2.Mission_PLC3_3_2_C.Obj_DestroyHooks
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveEvent  ObjectiveEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ObjectiveCount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CurrentlyInLoadEvents                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMission_PLC3_3_2_C::Obj_DestroyHooks(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC3_3_2_C", "Obj_DestroyHooks");

	Params::UMission_PLC3_3_2_C_Obj_DestroyHooks_Params Parms{};

	Parms.ObjectiveEvent = ObjectiveEvent;
	Parms.ObjectiveCount = ObjectiveCount;
	Parms.CurrentlyInLoadEvents = CurrentlyInLoadEvents;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC3_3_2.Mission_PLC3_3_2_C.SET_Portal02
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveSetEventObjectiveSetEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_PLC3_3_2_C::SET_Portal02(enum class EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC3_3_2_C", "SET_Portal02");

	Params::UMission_PLC3_3_2_C_SET_Portal02_Params Parms{};

	Parms.ObjectiveSetEvent = ObjectiveSetEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC3_3_2.Mission_PLC3_3_2_C.OBJ_Portal02Objective
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveEvent  ObjectiveEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ObjectiveCount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CurrentlyInLoadEvents                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMission_PLC3_3_2_C::OBJ_Portal02Objective(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC3_3_2_C", "OBJ_Portal02Objective");

	Params::UMission_PLC3_3_2_C_OBJ_Portal02Objective_Params Parms{};

	Parms.ObjectiveEvent = ObjectiveEvent;
	Parms.ObjectiveCount = ObjectiveCount;
	Parms.CurrentlyInLoadEvents = CurrentlyInLoadEvents;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC3_3_2.Mission_PLC3_3_2_C.Update_PuzzleSolved
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_PLC3_3_2_C::Update_PuzzleSolved(class UObject* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC3_3_2_C", "Update_PuzzleSolved");

	Params::UMission_PLC3_3_2_C_Update_PuzzleSolved_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC3_3_2.Mission_PLC3_3_2_C.UPDATE_ExitSmith02
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_PLC3_3_2_C::UPDATE_ExitSmith02(class UObject* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC3_3_2_C", "UPDATE_ExitSmith02");

	Params::UMission_PLC3_3_2_C_UPDATE_ExitSmith02_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC3_3_2.Mission_PLC3_3_2_C.SET_GuideTheEnergy
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveSetEventObjectiveSetEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_PLC3_3_2_C::SET_GuideTheEnergy(enum class EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC3_3_2_C", "SET_GuideTheEnergy");

	Params::UMission_PLC3_3_2_C_SET_GuideTheEnergy_Params Parms{};

	Parms.ObjectiveSetEvent = ObjectiveSetEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC3_3_2.Mission_PLC3_3_2_C.[Obj_DestroyHooks_Objective] PROXY
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMission_PLC3_3_2_C::_Obj_DestroyHooks_Objective__PROXY()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC3_3_2_C", "[Obj_DestroyHooks_Objective] PROXY");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Mission_PLC3_3_2.Mission_PLC3_3_2_C.OBJ_GuideTheEnergy
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveEvent  ObjectiveEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ObjectiveCount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CurrentlyInLoadEvents                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMission_PLC3_3_2_C::OBJ_GuideTheEnergy(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC3_3_2_C", "OBJ_GuideTheEnergy");

	Params::UMission_PLC3_3_2_C_OBJ_GuideTheEnergy_Params Parms{};

	Parms.ObjectiveEvent = ObjectiveEvent;
	Parms.ObjectiveCount = ObjectiveCount;
	Parms.CurrentlyInLoadEvents = CurrentlyInLoadEvents;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC3_3_2.Mission_PLC3_3_2_C.Update_GuideTheEnergy
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_PLC3_3_2_C::Update_GuideTheEnergy(class UObject* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC3_3_2_C", "Update_GuideTheEnergy");

	Params::UMission_PLC3_3_2_C_Update_GuideTheEnergy_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC3_3_2.Mission_PLC3_3_2_C.MissionKickoff
// (Event, Public, BlueprintEvent)
// Parameters:

void UMission_PLC3_3_2_C::MissionKickoff()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC3_3_2_C", "MissionKickoff");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Mission_PLC3_3_2.Mission_PLC3_3_2_C.Set_EnterSmith02
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveSetEventObjectiveSetEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_PLC3_3_2_C::Set_EnterSmith02(enum class EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC3_3_2_C", "Set_EnterSmith02");

	Params::UMission_PLC3_3_2_C_Set_EnterSmith02_Params Parms{};

	Parms.ObjectiveSetEvent = ObjectiveSetEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC3_3_2.Mission_PLC3_3_2_C.Obj_EnterSmith02
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveEvent  ObjectiveEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ObjectiveCount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CurrentlyInLoadEvents                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMission_PLC3_3_2_C::Obj_EnterSmith02(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC3_3_2_C", "Obj_EnterSmith02");

	Params::UMission_PLC3_3_2_C_Obj_EnterSmith02_Params Parms{};

	Parms.ObjectiveEvent = ObjectiveEvent;
	Parms.ObjectiveCount = ObjectiveCount;
	Parms.CurrentlyInLoadEvents = CurrentlyInLoadEvents;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC3_3_2.Mission_PLC3_3_2_C.UPDATE_EnterSmith02
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_PLC3_3_2_C::UPDATE_EnterSmith02(class UObject* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC3_3_2_C", "UPDATE_EnterSmith02");

	Params::UMission_PLC3_3_2_C_UPDATE_EnterSmith02_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_PLC3_3_2.Mission_PLC3_3_2_C.[Obj_DestroyHooks_Objective] PROXY_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMission_PLC3_3_2_C::_Obj_DestroyHooks_Objective__PROXY_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC3_3_2_C", "[Obj_DestroyHooks_Objective] PROXY_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Mission_PLC3_3_2.Mission_PLC3_3_2_C.MissionComplete
// (Event, Public, BlueprintEvent)
// Parameters:

void UMission_PLC3_3_2_C::MissionComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC3_3_2_C", "MissionComplete");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Mission_PLC3_3_2.Mission_PLC3_3_2_C.ExecuteUbergraph_Mission_PLC3_3_2
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMissionObjectiveSetEventMissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent3               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMissionObjectiveEvent  MissionK2Node_ObjectiveEvent_ObjectiveEvent3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MissionK2Node_ObjectiveEvent_ObjectiveCount3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents3              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EMissionObjectiveSetEventMissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EMissionObjectiveEvent  MissionK2Node_ObjectiveEvent_ObjectiveEvent2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MissionK2Node_ObjectiveEvent_ObjectiveCount2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents2              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum1_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     MissionK2Node_MissionCustomEvent_Context3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     MissionK2Node_MissionCustomEvent_Context2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMissionObjectiveSetEventMissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMissionObjectiveEvent  MissionK2Node_ObjectiveEvent_ObjectiveEvent1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MissionK2Node_ObjectiveEvent_ObjectiveCount1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents1              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     MissionK2Node_MissionCustomEvent_Context1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum2_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EMissionObjectiveSetEventMissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMissionObjectiveEvent  MissionK2Node_ObjectiveEvent_ObjectiveEvent                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MissionK2Node_ObjectiveEvent_ObjectiveCount                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum3_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     MissionK2Node_MissionCustomEvent_Context                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_PLC3_3_2_C::ExecuteUbergraph_Mission_PLC3_3_2(int32 EntryPoint, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent3, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent3, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount3, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents3, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent2, bool K2Node_SwitchEnum_CmpSuccess, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent2, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount2, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents2, bool K2Node_SwitchEnum1_CmpSuccess, class UObject* MissionK2Node_MissionCustomEvent_Context3, class UObject* MissionK2Node_MissionCustomEvent_Context2, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent1, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent1, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount1, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents1, class UObject* MissionK2Node_MissionCustomEvent_Context1, bool K2Node_SwitchEnum2_CmpSuccess, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents, bool K2Node_SwitchEnum3_CmpSuccess, class UObject* MissionK2Node_MissionCustomEvent_Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_PLC3_3_2_C", "ExecuteUbergraph_Mission_PLC3_3_2");

	Params::UMission_PLC3_3_2_C_ExecuteUbergraph_Mission_PLC3_3_2_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent3 = MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent3;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveEvent3 = MissionK2Node_ObjectiveEvent_ObjectiveEvent3;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveCount3 = MissionK2Node_ObjectiveEvent_ObjectiveCount3;
	Parms.MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents3 = MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents3;
	Parms.MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent2 = MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent2;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveEvent2 = MissionK2Node_ObjectiveEvent_ObjectiveEvent2;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveCount2 = MissionK2Node_ObjectiveEvent_ObjectiveCount2;
	Parms.MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents2 = MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents2;
	Parms.K2Node_SwitchEnum1_CmpSuccess = K2Node_SwitchEnum1_CmpSuccess;
	Parms.MissionK2Node_MissionCustomEvent_Context3 = MissionK2Node_MissionCustomEvent_Context3;
	Parms.MissionK2Node_MissionCustomEvent_Context2 = MissionK2Node_MissionCustomEvent_Context2;
	Parms.MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent1 = MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent1;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveEvent1 = MissionK2Node_ObjectiveEvent_ObjectiveEvent1;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveCount1 = MissionK2Node_ObjectiveEvent_ObjectiveCount1;
	Parms.MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents1 = MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents1;
	Parms.MissionK2Node_MissionCustomEvent_Context1 = MissionK2Node_MissionCustomEvent_Context1;
	Parms.K2Node_SwitchEnum2_CmpSuccess = K2Node_SwitchEnum2_CmpSuccess;
	Parms.MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent = MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveEvent = MissionK2Node_ObjectiveEvent_ObjectiveEvent;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveCount = MissionK2Node_ObjectiveEvent_ObjectiveCount;
	Parms.MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents = MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents;
	Parms.K2Node_SwitchEnum3_CmpSuccess = K2Node_SwitchEnum3_CmpSuccess;
	Parms.MissionK2Node_MissionCustomEvent_Context = MissionK2Node_MissionCustomEvent_Context;

	UObject::ProcessEvent(Func, &Parms);

}

}


