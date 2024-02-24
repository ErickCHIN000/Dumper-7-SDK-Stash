#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Mission_SideTemplate.Mission_SideTemplate_C
// (None)

class UClass* UMission_SideTemplate_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Mission_SideTemplate_C");

	return Clss;
}


// Mission_SideTemplate_C Mission_SideTemplate.Default__Mission_SideTemplate_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMission_SideTemplate_C* UMission_SideTemplate_C::GetDefaultObj()
{
	static class UMission_SideTemplate_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMission_SideTemplate_C*>(UMission_SideTemplate_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Mission_SideTemplate.Mission_SideTemplate_C.Obj_Placeholder
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveEvent  ObjectiveEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ObjectiveCount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CurrentlyInLoadEvents                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMission_SideTemplate_C::Obj_Placeholder(enum class EMissionObjectiveEvent ObjectiveEvent, int32 ObjectiveCount, bool CurrentlyInLoadEvents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_SideTemplate_C", "Obj_Placeholder");

	Params::UMission_SideTemplate_C_Obj_Placeholder_Params Parms{};

	Parms.ObjectiveEvent = ObjectiveEvent;
	Parms.ObjectiveCount = ObjectiveCount;
	Parms.CurrentlyInLoadEvents = CurrentlyInLoadEvents;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_SideTemplate.Mission_SideTemplate_C.Set_Placeholder
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionObjectiveSetEventObjectiveSetEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_SideTemplate_C::Set_Placeholder(enum class EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_SideTemplate_C", "Set_Placeholder");

	Params::UMission_SideTemplate_C_Set_Placeholder_Params Parms{};

	Parms.ObjectiveSetEvent = ObjectiveSetEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Mission_SideTemplate.Mission_SideTemplate_C.ExecuteUbergraph_Mission_SideTemplate
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMissionObjectiveEvent  MissionK2Node_ObjectiveEvent_ObjectiveEvent                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MissionK2Node_ObjectiveEvent_ObjectiveCount                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EMissionObjectiveSetEventMissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMission_SideTemplate_C::ExecuteUbergraph_Mission_SideTemplate(int32 EntryPoint, enum class EMissionObjectiveEvent MissionK2Node_ObjectiveEvent_ObjectiveEvent, int32 MissionK2Node_ObjectiveEvent_ObjectiveCount, bool MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents, enum class EMissionObjectiveSetEvent MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mission_SideTemplate_C", "ExecuteUbergraph_Mission_SideTemplate");

	Params::UMission_SideTemplate_C_ExecuteUbergraph_Mission_SideTemplate_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveEvent = MissionK2Node_ObjectiveEvent_ObjectiveEvent;
	Parms.MissionK2Node_ObjectiveEvent_ObjectiveCount = MissionK2Node_ObjectiveEvent_ObjectiveCount;
	Parms.MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents = MissionK2Node_ObjectiveEvent_CurrentlyInLoadEvents;
	Parms.MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent = MissionK2Node_ObjectiveSetEvent_ObjectiveSetEvent;

	UObject::ProcessEvent(Func, &Parms);

}

}


