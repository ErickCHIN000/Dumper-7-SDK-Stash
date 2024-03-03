#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass object_quest_event_parent.object_quest_event_parent_C
// (Actor)

class UClass* AObject_quest_event_parent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("object_quest_event_parent_C");

	return Clss;
}


// object_quest_event_parent_C object_quest_event_parent.Default__object_quest_event_parent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AObject_quest_event_parent_C* AObject_quest_event_parent_C::GetDefaultObj()
{
	static class AObject_quest_event_parent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AObject_quest_event_parent_C*>(AObject_quest_event_parent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function object_quest_event_parent.object_quest_event_parent_C.init_event_object
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Abp_quest_actor_C*           Quest_actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_quest_event              Event_data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void AObject_quest_event_parent_C::Init_event_object(class Abp_quest_actor_C* Quest_actor, const struct FS_quest_event& Event_data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("object_quest_event_parent_C", "init_event_object");

	Params::AObject_quest_event_parent_C_Init_event_object_Params Parms{};

	Parms.Quest_actor = Quest_actor;
	Parms.Event_data = Event_data;

	UObject::ProcessEvent(Func, &Parms);

}


// Function object_quest_event_parent.object_quest_event_parent_C.call_event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Abp_quest_actor_C*           Quest_actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_quest_event              Event_data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void AObject_quest_event_parent_C::Call_event(class Abp_quest_actor_C* Quest_actor, const struct FS_quest_event& Event_data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("object_quest_event_parent_C", "call_event");

	Params::AObject_quest_event_parent_C_Call_event_Params Parms{};

	Parms.Quest_actor = Quest_actor;
	Parms.Event_data = Event_data;

	UObject::ProcessEvent(Func, &Parms);

}


// Function object_quest_event_parent.object_quest_event_parent_C.ExecuteUbergraph_object_quest_event_parent
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_quest_actor_C*           K2Node_CustomEvent_quest_actor                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_quest_event              K2Node_CustomEvent_event_data                                    (ZeroConstructor, HasGetValueTypeHash)

void AObject_quest_event_parent_C::ExecuteUbergraph_object_quest_event_parent(int32 EntryPoint, class Abp_quest_actor_C* K2Node_CustomEvent_quest_actor, const struct FS_quest_event& K2Node_CustomEvent_event_data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("object_quest_event_parent_C", "ExecuteUbergraph_object_quest_event_parent");

	Params::AObject_quest_event_parent_C_ExecuteUbergraph_object_quest_event_parent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_quest_actor = K2Node_CustomEvent_quest_actor;
	Parms.K2Node_CustomEvent_event_data = K2Node_CustomEvent_event_data;

	UObject::ProcessEvent(Func, &Parms);

}

}


