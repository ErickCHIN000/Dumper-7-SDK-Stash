#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass de_bells_hscene_oral.de_bells_hscene_oral_C
// (Actor)

class UClass* ADe_bells_hscene_oral_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("de_bells_hscene_oral_C");

	return Clss;
}


// de_bells_hscene_oral_C de_bells_hscene_oral.Default__de_bells_hscene_oral_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADe_bells_hscene_oral_C* ADe_bells_hscene_oral_C::GetDefaultObj()
{
	static class ADe_bells_hscene_oral_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADe_bells_hscene_oral_C*>(ADe_bells_hscene_oral_C::StaticClass()->DefaultObject);

	return Default;
}


// Function de_bells_hscene_oral.de_bells_hscene_oral_C.call_event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Abp_dlg_actor_C*             Dlg_actor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_dlg_event_info           Event_data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ADe_bells_hscene_oral_C::Call_event(class Abp_dlg_actor_C* Dlg_actor, const struct FS_dlg_event_info& Event_data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("de_bells_hscene_oral_C", "call_event");

	Params::ADe_bells_hscene_oral_C_Call_event_Params Parms{};

	Parms.Dlg_actor = Dlg_actor;
	Parms.Event_data = Event_data;

	UObject::ProcessEvent(Func, &Parms);

}


// Function de_bells_hscene_oral.de_bells_hscene_oral_C.ExecuteUbergraph_de_bells_hscene_oral
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_dlg_actor_C*             K2Node_Event_dlg_actor                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_dlg_event_info           K2Node_Event_event_data                                          (ZeroConstructor, HasGetValueTypeHash)
// class ASEQ_MasterHSceneMinusBells_On_Oral_C*CallFunc_GetActorOfClass_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ADe_bells_hscene_oral_C::ExecuteUbergraph_de_bells_hscene_oral(int32 EntryPoint, class Abp_dlg_actor_C* K2Node_Event_dlg_actor, const struct FS_dlg_event_info& K2Node_Event_event_data, class ASEQ_MasterHSceneMinusBells_On_Oral_C* CallFunc_GetActorOfClass_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("de_bells_hscene_oral_C", "ExecuteUbergraph_de_bells_hscene_oral");

	Params::ADe_bells_hscene_oral_C_ExecuteUbergraph_de_bells_hscene_oral_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_dlg_actor = K2Node_Event_dlg_actor;
	Parms.K2Node_Event_event_data = K2Node_Event_event_data;
	Parms.CallFunc_GetActorOfClass_ReturnValue = CallFunc_GetActorOfClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

