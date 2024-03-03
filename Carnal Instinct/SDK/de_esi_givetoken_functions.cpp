#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass de_esi_givetoken.de_esi_givetoken_C
// (Actor)

class UClass* ADe_esi_givetoken_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("de_esi_givetoken_C");

	return Clss;
}


// de_esi_givetoken_C de_esi_givetoken.Default__de_esi_givetoken_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADe_esi_givetoken_C* ADe_esi_givetoken_C::GetDefaultObj()
{
	static class ADe_esi_givetoken_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADe_esi_givetoken_C*>(ADe_esi_givetoken_C::StaticClass()->DefaultObject);

	return Default;
}


// Function de_esi_givetoken.de_esi_givetoken_C.call_event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Abp_dlg_actor_C*             Dlg_actor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_dlg_event_info           Event_data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ADe_esi_givetoken_C::Call_event(class Abp_dlg_actor_C* Dlg_actor, const struct FS_dlg_event_info& Event_data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("de_esi_givetoken_C", "call_event");

	Params::ADe_esi_givetoken_C_Call_event_Params Parms{};

	Parms.Dlg_actor = Dlg_actor;
	Parms.Event_data = Event_data;

	UObject::ProcessEvent(Func, &Parms);

}


// Function de_esi_givetoken.de_esi_givetoken_C.ExecuteUbergraph_de_esi_givetoken
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAC_Inventory_C*             CallFunc_Get_AC_Inventory_AC_Inventory                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemData                 CallFunc_GetDataTableRowFromName_OutRow                          (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_ItemData                 CallFunc_Get_Inventory_Item_by_ID_item                           (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Get_Inventory_Item_by_ID_Found                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Add_Item_to_Inventory_Inventory_Full_                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_Item_to_Inventory_Added_Slot_Index                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_dlg_actor_C*             K2Node_Event_dlg_actor                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_dlg_event_info           K2Node_Event_event_data                                          (ZeroConstructor, HasGetValueTypeHash)

void ADe_esi_givetoken_C::ExecuteUbergraph_de_esi_givetoken(int32 EntryPoint, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, const struct FS_ItemData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FS_ItemData& CallFunc_Get_Inventory_Item_by_ID_item, bool CallFunc_Get_Inventory_Item_by_ID_Found, bool CallFunc_Add_Item_to_Inventory_Inventory_Full_, int32 CallFunc_Add_Item_to_Inventory_Added_Slot_Index, class Abp_dlg_actor_C* K2Node_Event_dlg_actor, const struct FS_dlg_event_info& K2Node_Event_event_data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("de_esi_givetoken_C", "ExecuteUbergraph_de_esi_givetoken");

	Params::ADe_esi_givetoken_C_ExecuteUbergraph_de_esi_givetoken_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Get_AC_Inventory_AC_Inventory = CallFunc_Get_AC_Inventory_AC_Inventory;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Get_Inventory_Item_by_ID_item = CallFunc_Get_Inventory_Item_by_ID_item;
	Parms.CallFunc_Get_Inventory_Item_by_ID_Found = CallFunc_Get_Inventory_Item_by_ID_Found;
	Parms.CallFunc_Add_Item_to_Inventory_Inventory_Full_ = CallFunc_Add_Item_to_Inventory_Inventory_Full_;
	Parms.CallFunc_Add_Item_to_Inventory_Added_Slot_Index = CallFunc_Add_Item_to_Inventory_Added_Slot_Index;
	Parms.K2Node_Event_dlg_actor = K2Node_Event_dlg_actor;
	Parms.K2Node_Event_event_data = K2Node_Event_event_data;

	UObject::ProcessEvent(Func, &Parms);

}

}


