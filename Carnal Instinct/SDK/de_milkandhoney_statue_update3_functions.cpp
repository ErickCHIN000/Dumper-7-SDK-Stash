#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass de_milkandhoney_statue_update3.de_milkandhoney_statue_update3_C
// (Actor)

class UClass* ADe_milkandhoney_statue_update3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("de_milkandhoney_statue_update3_C");

	return Clss;
}


// de_milkandhoney_statue_update3_C de_milkandhoney_statue_update3.Default__de_milkandhoney_statue_update3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADe_milkandhoney_statue_update3_C* ADe_milkandhoney_statue_update3_C::GetDefaultObj()
{
	static class ADe_milkandhoney_statue_update3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADe_milkandhoney_statue_update3_C*>(ADe_milkandhoney_statue_update3_C::StaticClass()->DefaultObject);

	return Default;
}


// Function de_milkandhoney_statue_update3.de_milkandhoney_statue_update3_C.call_event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Abp_dlg_actor_C*             Dlg_actor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_dlg_event_info           Event_data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ADe_milkandhoney_statue_update3_C::Call_event(class Abp_dlg_actor_C* Dlg_actor, const struct FS_dlg_event_info& Event_data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("de_milkandhoney_statue_update3_C", "call_event");

	Params::ADe_milkandhoney_statue_update3_C_Call_event_Params Parms{};

	Parms.Dlg_actor = Dlg_actor;
	Parms.Event_data = Event_data;

	UObject::ProcessEvent(Func, &Parms);

}


// Function de_milkandhoney_statue_update3.de_milkandhoney_statue_update3_C.ExecuteUbergraph_de_milkandhoney_statue_update3
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANpc_statue_C*               CallFunc_GetActorOfClass_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_dlg_actor_C*             K2Node_Event_dlg_actor                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_dlg_event_info           K2Node_Event_event_data                                          (ZeroConstructor, HasGetValueTypeHash)
// class UAC_Inventory_C*             CallFunc_Get_AC_Inventory_AC_Inventory                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemData                 CallFunc_Get_Inventory_Item_by_ID_item                           (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Get_Inventory_Item_by_ID_Found                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void ADe_milkandhoney_statue_update3_C::ExecuteUbergraph_de_milkandhoney_statue_update3(int32 EntryPoint, class ANpc_statue_C* CallFunc_GetActorOfClass_ReturnValue, class Abp_dlg_actor_C* K2Node_Event_dlg_actor, const struct FS_dlg_event_info& K2Node_Event_event_data, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, const struct FS_ItemData& CallFunc_Get_Inventory_Item_by_ID_item, bool CallFunc_Get_Inventory_Item_by_ID_Found)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("de_milkandhoney_statue_update3_C", "ExecuteUbergraph_de_milkandhoney_statue_update3");

	Params::ADe_milkandhoney_statue_update3_C_ExecuteUbergraph_de_milkandhoney_statue_update3_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetActorOfClass_ReturnValue = CallFunc_GetActorOfClass_ReturnValue;
	Parms.K2Node_Event_dlg_actor = K2Node_Event_dlg_actor;
	Parms.K2Node_Event_event_data = K2Node_Event_event_data;
	Parms.CallFunc_Get_AC_Inventory_AC_Inventory = CallFunc_Get_AC_Inventory_AC_Inventory;
	Parms.CallFunc_Get_Inventory_Item_by_ID_item = CallFunc_Get_Inventory_Item_by_ID_item;
	Parms.CallFunc_Get_Inventory_Item_by_ID_Found = CallFunc_Get_Inventory_Item_by_ID_Found;

	UObject::ProcessEvent(Func, &Parms);

}

}


