#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass w_06_objective_entry.w_06_objective_entry_C
// (None)

class UClass* UW_06_objective_entry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("w_06_objective_entry_C");

	return Clss;
}


// w_06_objective_entry_C w_06_objective_entry.Default__w_06_objective_entry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_06_objective_entry_C* UW_06_objective_entry_C::GetDefaultObj()
{
	static class UW_06_objective_entry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_06_objective_entry_C*>(UW_06_objective_entry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function w_06_objective_entry.w_06_objective_entry_C.custom_visuals
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Is_selected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Is_hovered                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_06_objective_entry_C::Custom_visuals(bool Is_selected, bool Is_hovered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_06_objective_entry_C", "custom_visuals");

	Params::UW_06_objective_entry_C_Custom_visuals_Params Parms{};

	Parms.Is_selected = Is_selected;
	Parms.Is_hovered = Is_hovered;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_06_objective_entry.w_06_objective_entry_C.init_objective
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Abp_quest_actor_C*           Quest_actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_quest_objective_data     Objective_data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               Is_last                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_06_objective_entry_C::Init_objective(class Abp_quest_actor_C* Quest_actor, const struct FS_quest_objective_data& Objective_data, bool Is_last)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_06_objective_entry_C", "init_objective");

	Params::UW_06_objective_entry_C_Init_objective_Params Parms{};

	Parms.Quest_actor = Quest_actor;
	Parms.Objective_data = Objective_data;
	Parms.Is_last = Is_last;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_06_objective_entry.w_06_objective_entry_C.ExecuteUbergraph_w_06_objective_entry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_msl_localization_actor_C*CallFunc_msl_get_localization_reference_localization_actor       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_is_selected                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_is_hovered                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Abp_quest_actor_C*           K2Node_CustomEvent_quest_actor                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_quest_objective_data     K2Node_CustomEvent_objective_data                                (HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_is_last                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_get_line_localization_is_valid_text                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_get_line_localization_is_valid_audio                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_get_line_localization_line_from_data                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_get_line_localization_line_text                         (None)
// class USoundWave*                  CallFunc_get_line_localization_line_file                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_get_line_localization_line_length                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_get_line_localization_line_scale                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_07_sub_objective_C*       CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_quest_sub_objective_data CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_06_objective_entry_C::ExecuteUbergraph_w_06_objective_entry(int32 EntryPoint, class Abp_msl_localization_actor_C* CallFunc_msl_get_localization_reference_localization_actor, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_Event_is_selected, bool K2Node_Event_is_hovered, class Abp_quest_actor_C* K2Node_CustomEvent_quest_actor, const struct FS_quest_objective_data& K2Node_CustomEvent_objective_data, bool K2Node_CustomEvent_is_last, bool CallFunc_get_line_localization_is_valid_text, bool CallFunc_get_line_localization_is_valid_audio, bool CallFunc_get_line_localization_line_from_data, class FText CallFunc_get_line_localization_line_text, class USoundWave* CallFunc_get_line_localization_line_file, float CallFunc_get_line_localization_line_length, int32 CallFunc_get_line_localization_line_scale, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UW_07_sub_objective_C* CallFunc_Create_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FS_quest_sub_objective_data& CallFunc_Array_Get_Item, int32 CallFunc_Array_Add_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UPanelSlot* CallFunc_AddChild_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_06_objective_entry_C", "ExecuteUbergraph_w_06_objective_entry");

	Params::UW_06_objective_entry_C_ExecuteUbergraph_w_06_objective_entry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_msl_get_localization_reference_localization_actor = CallFunc_msl_get_localization_reference_localization_actor;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_Event_is_selected = K2Node_Event_is_selected;
	Parms.K2Node_Event_is_hovered = K2Node_Event_is_hovered;
	Parms.K2Node_CustomEvent_quest_actor = K2Node_CustomEvent_quest_actor;
	Parms.K2Node_CustomEvent_objective_data = K2Node_CustomEvent_objective_data;
	Parms.K2Node_CustomEvent_is_last = K2Node_CustomEvent_is_last;
	Parms.CallFunc_get_line_localization_is_valid_text = CallFunc_get_line_localization_is_valid_text;
	Parms.CallFunc_get_line_localization_is_valid_audio = CallFunc_get_line_localization_is_valid_audio;
	Parms.CallFunc_get_line_localization_line_from_data = CallFunc_get_line_localization_line_from_data;
	Parms.CallFunc_get_line_localization_line_text = CallFunc_get_line_localization_line_text;
	Parms.CallFunc_get_line_localization_line_file = CallFunc_get_line_localization_line_file;
	Parms.CallFunc_get_line_localization_line_length = CallFunc_get_line_localization_line_length;
	Parms.CallFunc_get_line_localization_line_scale = CallFunc_get_line_localization_line_scale;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


