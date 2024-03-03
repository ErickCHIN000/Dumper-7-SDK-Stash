#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass de_diamond_speak_nesi.de_diamond_speak_nesi_C
// (Actor)

class UClass* ADe_diamond_speak_nesi_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("de_diamond_speak_nesi_C");

	return Clss;
}


// de_diamond_speak_nesi_C de_diamond_speak_nesi.Default__de_diamond_speak_nesi_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADe_diamond_speak_nesi_C* ADe_diamond_speak_nesi_C::GetDefaultObj()
{
	static class ADe_diamond_speak_nesi_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADe_diamond_speak_nesi_C*>(ADe_diamond_speak_nesi_C::StaticClass()->DefaultObject);

	return Default;
}


// Function de_diamond_speak_nesi.de_diamond_speak_nesi_C.call_event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Abp_dlg_actor_C*             Dlg_actor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_dlg_event_info           Event_data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ADe_diamond_speak_nesi_C::Call_event(class Abp_dlg_actor_C* Dlg_actor, const struct FS_dlg_event_info& Event_data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("de_diamond_speak_nesi_C", "call_event");

	Params::ADe_diamond_speak_nesi_C_Call_event_Params Parms{};

	Parms.Dlg_actor = Dlg_actor;
	Parms.Event_data = Event_data;

	UObject::ProcessEvent(Func, &Parms);

}


// Function de_diamond_speak_nesi.de_diamond_speak_nesi_C.ExecuteUbergraph_de_diamond_speak_nesi
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_dlg_actor_C*             K2Node_Event_dlg_actor                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_dlg_event_info           K2Node_Event_event_data                                          (ZeroConstructor, HasGetValueTypeHash)

void ADe_diamond_speak_nesi_C::ExecuteUbergraph_de_diamond_speak_nesi(int32 EntryPoint, class Abp_dlg_actor_C* K2Node_Event_dlg_actor, const struct FS_dlg_event_info& K2Node_Event_event_data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("de_diamond_speak_nesi_C", "ExecuteUbergraph_de_diamond_speak_nesi");

	Params::ADe_diamond_speak_nesi_C_ExecuteUbergraph_de_diamond_speak_nesi_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_dlg_actor = K2Node_Event_dlg_actor;
	Parms.K2Node_Event_event_data = K2Node_Event_event_data;

	UObject::ProcessEvent(Func, &Parms);

}

}


