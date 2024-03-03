#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass w_01_quest_mini.w_01_quest_mini_C
// (None)

class UClass* UW_01_quest_mini_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("w_01_quest_mini_C");

	return Clss;
}


// w_01_quest_mini_C w_01_quest_mini.Default__w_01_quest_mini_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_01_quest_mini_C* UW_01_quest_mini_C::GetDefaultObj()
{
	static class UW_01_quest_mini_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_01_quest_mini_C*>(UW_01_quest_mini_C::StaticClass()->DefaultObject);

	return Default;
}


// Function w_01_quest_mini.w_01_quest_mini_C.init_quest
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Ubp_quest_component_C*       Quest_component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_01_quest_mini_C::Init_quest(class Ubp_quest_component_C* Quest_component)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_01_quest_mini_C", "init_quest");

	Params::UW_01_quest_mini_C_Init_quest_Params Parms{};

	Parms.Quest_component = Quest_component;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_01_quest_mini.w_01_quest_mini_C.refresh_actives
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_01_quest_mini_C::Refresh_actives()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_01_quest_mini_C", "refresh_actives");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_01_quest_mini.w_01_quest_mini_C.clear_actives
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_01_quest_mini_C::Clear_actives()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_01_quest_mini_C", "clear_actives");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_01_quest_mini.w_01_quest_mini_C.ExecuteUbergraph_w_01_quest_mini
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Ubp_quest_component_C*       K2Node_CustomEvent_quest_component                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_02_quest_mini_entry_C*    CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_get_quest_is_valid                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_quest_found_index                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_quest_actor_C*           CallFunc_get_quest_quest_actor                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_01_quest_mini_C::ExecuteUbergraph_w_01_quest_mini(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class Ubp_quest_component_C* K2Node_CustomEvent_quest_component, int32 CallFunc_Add_IntInt_ReturnValue, class UW_02_quest_mini_entry_C* CallFunc_Create_ReturnValue, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_get_quest_is_valid, int32 CallFunc_get_quest_found_index, class Abp_quest_actor_C* CallFunc_get_quest_quest_actor, class UPanelSlot* CallFunc_AddChild_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_01_quest_mini_C", "ExecuteUbergraph_w_01_quest_mini");

	Params::UW_01_quest_mini_C_ExecuteUbergraph_w_01_quest_mini_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_CustomEvent_quest_component = K2Node_CustomEvent_quest_component;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_get_quest_is_valid = CallFunc_get_quest_is_valid;
	Parms.CallFunc_get_quest_found_index = CallFunc_get_quest_found_index;
	Parms.CallFunc_get_quest_quest_actor = CallFunc_get_quest_quest_actor;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


