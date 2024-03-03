#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass bp_quest_marker.bp_quest_marker_C
// (Actor)

class UClass* Abp_quest_marker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("bp_quest_marker_C");

	return Clss;
}


// bp_quest_marker_C bp_quest_marker.Default__bp_quest_marker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Abp_quest_marker_C* Abp_quest_marker_C::GetDefaultObj()
{
	static class Abp_quest_marker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Abp_quest_marker_C*>(Abp_quest_marker_C::StaticClass()->DefaultObject);

	return Default;
}


// Function bp_quest_marker.bp_quest_marker_C.init_quest_icon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Abp_quest_actor_C*           Quest_actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Objective_id                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Sub_objective                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_quest_icon         Icon_type                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_quest_marker_C::Init_quest_icon(class Abp_quest_actor_C* Quest_actor, class FName Objective_id, bool Sub_objective, enum class Enum_quest_icon Icon_type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_quest_marker_C", "init_quest_icon");

	Params::Abp_quest_marker_C_Init_quest_icon_Params Parms{};

	Parms.Quest_actor = Quest_actor;
	Parms.Objective_id = Objective_id;
	Parms.Sub_objective = Sub_objective;
	Parms.Icon_type = Icon_type;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_quest_marker.bp_quest_marker_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:

void Abp_quest_marker_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_quest_marker_C", "ReceiveDestroyed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_quest_marker.bp_quest_marker_C.ExecuteUbergraph_bp_quest_marker
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_get_quest_active_is_valid                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_quest_active_found_index                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Abp_quest_actor_C*           K2Node_CustomEvent_quest_actor                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_objective_id                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_sub_objective                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_quest_icon         K2Node_CustomEvent_icon_type                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IMap_BPI_C> K2Node_DynamicCast_AsMap_BPI                                     (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_quest_marker_C::ExecuteUbergraph_bp_quest_marker(int32 EntryPoint, bool CallFunc_get_quest_active_is_valid, int32 CallFunc_get_quest_active_found_index, bool K2Node_SwitchInteger_CmpSuccess, class Abp_quest_actor_C* K2Node_CustomEvent_quest_actor, class FName K2Node_CustomEvent_objective_id, bool K2Node_CustomEvent_sub_objective, enum class Enum_quest_icon K2Node_CustomEvent_icon_type, bool K2Node_SwitchEnum_CmpSuccess, TScriptInterface<class IMap_BPI_C> K2Node_DynamicCast_AsMap_BPI, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_quest_marker_C", "ExecuteUbergraph_bp_quest_marker");

	Params::Abp_quest_marker_C_ExecuteUbergraph_bp_quest_marker_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_get_quest_active_is_valid = CallFunc_get_quest_active_is_valid;
	Parms.CallFunc_get_quest_active_found_index = CallFunc_get_quest_active_found_index;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.K2Node_CustomEvent_quest_actor = K2Node_CustomEvent_quest_actor;
	Parms.K2Node_CustomEvent_objective_id = K2Node_CustomEvent_objective_id;
	Parms.K2Node_CustomEvent_sub_objective = K2Node_CustomEvent_sub_objective;
	Parms.K2Node_CustomEvent_icon_type = K2Node_CustomEvent_icon_type;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_DynamicCast_AsMap_BPI = K2Node_DynamicCast_AsMap_BPI;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


