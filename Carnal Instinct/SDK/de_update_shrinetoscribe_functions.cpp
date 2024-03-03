#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass de_update_shrinetoscribe.de_update_shrinetoscribe_C
// (Actor)

class UClass* ADe_update_shrinetoscribe_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("de_update_shrinetoscribe_C");

	return Clss;
}


// de_update_shrinetoscribe_C de_update_shrinetoscribe.Default__de_update_shrinetoscribe_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADe_update_shrinetoscribe_C* ADe_update_shrinetoscribe_C::GetDefaultObj()
{
	static class ADe_update_shrinetoscribe_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADe_update_shrinetoscribe_C*>(ADe_update_shrinetoscribe_C::StaticClass()->DefaultObject);

	return Default;
}


// Function de_update_shrinetoscribe.de_update_shrinetoscribe_C.call_event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Abp_dlg_actor_C*             Dlg_actor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_dlg_event_info           Event_data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ADe_update_shrinetoscribe_C::Call_event(class Abp_dlg_actor_C* Dlg_actor, const struct FS_dlg_event_info& Event_data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("de_update_shrinetoscribe_C", "call_event");

	Params::ADe_update_shrinetoscribe_C_Call_event_Params Parms{};

	Parms.Dlg_actor = Dlg_actor;
	Parms.Event_data = Event_data;

	UObject::ProcessEvent(Func, &Parms);

}


// Function de_update_shrinetoscribe.de_update_shrinetoscribe_C.ExecuteUbergraph_de_update_shrinetoscribe
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_dlg_actor_C*             K2Node_Event_dlg_actor                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_dlg_event_info           K2Node_Event_event_data                                          (ZeroConstructor, HasGetValueTypeHash)
// class ANpc_scribe_C*               CallFunc_GetActorOfClass_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_get_dlg_is_valid                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_dlg_found_index                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_dlg_actor_C*             CallFunc_get_dlg_dlg_actor                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_get_dlg_branch_is_valid                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_dlg_branch_found_index                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_dlg_branch_data          CallFunc_get_dlg_branch_branch_data                              (HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ADe_update_shrinetoscribe_C::ExecuteUbergraph_de_update_shrinetoscribe(int32 EntryPoint, class Abp_dlg_actor_C* K2Node_Event_dlg_actor, const struct FS_dlg_event_info& K2Node_Event_event_data, class ANpc_scribe_C* CallFunc_GetActorOfClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_get_dlg_is_valid, int32 CallFunc_get_dlg_found_index, class Abp_dlg_actor_C* CallFunc_get_dlg_dlg_actor, bool CallFunc_get_dlg_branch_is_valid, int32 CallFunc_get_dlg_branch_found_index, const struct FS_dlg_branch_data& CallFunc_get_dlg_branch_branch_data, bool K2Node_SwitchName_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("de_update_shrinetoscribe_C", "ExecuteUbergraph_de_update_shrinetoscribe");

	Params::ADe_update_shrinetoscribe_C_ExecuteUbergraph_de_update_shrinetoscribe_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_dlg_actor = K2Node_Event_dlg_actor;
	Parms.K2Node_Event_event_data = K2Node_Event_event_data;
	Parms.CallFunc_GetActorOfClass_ReturnValue = CallFunc_GetActorOfClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_get_dlg_is_valid = CallFunc_get_dlg_is_valid;
	Parms.CallFunc_get_dlg_found_index = CallFunc_get_dlg_found_index;
	Parms.CallFunc_get_dlg_dlg_actor = CallFunc_get_dlg_dlg_actor;
	Parms.CallFunc_get_dlg_branch_is_valid = CallFunc_get_dlg_branch_is_valid;
	Parms.CallFunc_get_dlg_branch_found_index = CallFunc_get_dlg_branch_found_index;
	Parms.CallFunc_get_dlg_branch_branch_data = CallFunc_get_dlg_branch_branch_data;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}

