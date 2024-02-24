#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Mission_Indigo_Epilogue.Mission_Indigo_Epilogue_C
// (None)

class UClass* UMission_Indigo_Epilogue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Mission_Indigo_Epilogue_C");

	return Clss;
}


// Mission_Indigo_Epilogue_C Mission_Indigo_Epilogue.Default__Mission_Indigo_Epilogue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMission_Indigo_Epilogue_C* UMission_Indigo_Epilogue_C::GetDefaultObj()
{
	static class UMission_Indigo_Epilogue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMission_Indigo_Epilogue_C*>(UMission_Indigo_Epilogue_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Mission_Indigo_Epilogue.Mission_Indigo_Epilogue_C.MissionKickoff
// (Event, Public, BlueprintEvent)
// Parameters:

void UMission_Indigo_Epilogue_C::MissionKickoff()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_Indigo_Epilogue_C", "MissionKickoff");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Mission_Indigo_Epilogue.Mission_Indigo_Epilogue_C.Epilogue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveSetEventObjectiveSetEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_Indigo_Epilogue_C::Epilogue(enum class EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_Indigo_Epilogue_C", "Epilogue");

	Params::UMission_Indigo_Epilogue_C_Epilogue_Params Parms{};

	Parms.ObjectiveSetEvent = ObjectiveSetEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_Indigo_Epilogue.Mission_Indigo_Epilogue_C.SpeakToVesper
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveEvent  ObjectiveEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ObjectiveCount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CurrentlyInLoadEvents                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMission_Indigo_Epilogue_C::SpeakToVesper(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_Indigo_Epilogue_C", "SpeakToVesper");

	Params::UMission_Indigo_Epilogue_C_SpeakToVesper_Params Parms{};

	Parms.ObjectiveEvent = ObjectiveEvent;
	Parms.ObjectiveCount = ObjectiveCount;
	Parms.CurrentlyInLoadEvents = CurrentlyInLoadEvents;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_Indigo_Epilogue.Mission_Indigo_Epilogue_C.OnVesperSpeak
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_Indigo_Epilogue_C::OnVesperSpeak(class UObject* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_Indigo_Epilogue_C", "OnVesperSpeak");

	Params::UMission_Indigo_Epilogue_C_OnVesperSpeak_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_Indigo_Epilogue.Mission_Indigo_Epilogue_C.ExecuteUbergraph_Mission_Indigo_Epilogue
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MissionRemoteEvent_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EMissionObjectiveSetEventMissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMissionObjectiveEvent  MissionK2Node_ObjectiveEvent_ObjectiveEvent                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MissionK2Node_ObjectiveEvent_ObjectiveCount                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     MissionK2Node_MissionCustomEvent_Context                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMission_Indigo_Epilogue_C::ExecuteUbergraph_Mission_Indigo_Epilogue(int32 EntryPoint, bool CallFunc_MissionRemoteEvent_ReturnValue, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents, class UObject* MissionK2Node_MissionCustomEvent_Context, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_Indigo_Epilogue_C", "ExecuteUbergraph_Mission_Indigo_Epilogue");

	Params::UMission_Indigo_Epilogue_C_ExecuteUbergraph_Mission_Indigo_Epilogue_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MissionRemoteEvent_ReturnValue = CallFunc_MissionRemoteEvent_ReturnValue;
	Parms.MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent = MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveEvent = MissionK2Node_ObjectiveEvent_ObjectiveEvent;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveCount = MissionK2Node_ObjectiveEvent_ObjectiveCount;
	Parms.MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents = MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents;
	Parms.MissionK2Node_MissionCustomEvent_Context = MissionK2Node_MissionCustomEvent_Context;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


