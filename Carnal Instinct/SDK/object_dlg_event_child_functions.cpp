#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass object_dlg_event_child.object_dlg_event_child_C
// (Actor)

class UClass* AObject_dlg_event_child_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("object_dlg_event_child_C");

	return Clss;
}


// object_dlg_event_child_C object_dlg_event_child.Default__object_dlg_event_child_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AObject_dlg_event_child_C* AObject_dlg_event_child_C::GetDefaultObj()
{
	static class AObject_dlg_event_child_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AObject_dlg_event_child_C*>(AObject_dlg_event_child_C::StaticClass()->DefaultObject);

	return Default;
}


// Function object_dlg_event_child.object_dlg_event_child_C.call_event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Abp_dlg_actor_C*             Dlg_actor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_dlg_event_info           Event_data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void AObject_dlg_event_child_C::Call_event(class Abp_dlg_actor_C* Dlg_actor, const struct FS_dlg_event_info& Event_data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("object_dlg_event_child_C", "call_event");

	Params::AObject_dlg_event_child_C_Call_event_Params Parms{};

	Parms.Dlg_actor = Dlg_actor;
	Parms.Event_data = Event_data;

	UObject::ProcessEvent(Func, &Parms);

}


// Function object_dlg_event_child.object_dlg_event_child_C.ExecuteUbergraph_object_dlg_event_child
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_dlg_actor_C*             K2Node_Event_dlg_actor                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_dlg_event_info           K2Node_Event_event_data                                          (ZeroConstructor, HasGetValueTypeHash)

void AObject_dlg_event_child_C::ExecuteUbergraph_object_dlg_event_child(int32 EntryPoint, class Abp_dlg_actor_C* K2Node_Event_dlg_actor, const struct FS_dlg_event_info& K2Node_Event_event_data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("object_dlg_event_child_C", "ExecuteUbergraph_object_dlg_event_child");

	Params::AObject_dlg_event_child_C_ExecuteUbergraph_object_dlg_event_child_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_dlg_actor = K2Node_Event_dlg_actor;
	Parms.K2Node_Event_event_data = K2Node_Event_event_data;

	UObject::ProcessEvent(Func, &Parms);

}

}


