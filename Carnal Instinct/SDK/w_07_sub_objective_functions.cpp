#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass w_07_sub_objective.w_07_sub_objective_C
// (None)

class UClass* UW_07_sub_objective_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("w_07_sub_objective_C");

	return Clss;
}


// w_07_sub_objective_C w_07_sub_objective.Default__w_07_sub_objective_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_07_sub_objective_C* UW_07_sub_objective_C::GetDefaultObj()
{
	static class UW_07_sub_objective_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_07_sub_objective_C*>(UW_07_sub_objective_C::StaticClass()->DefaultObject);

	return Default;
}


// Function w_07_sub_objective.w_07_sub_objective_C.custom_visuals
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Is_selected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Is_hovered                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_07_sub_objective_C::Custom_visuals(bool Is_selected, bool Is_hovered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_07_sub_objective_C", "custom_visuals");

	Params::UW_07_sub_objective_C_Custom_visuals_Params Parms{};

	Parms.Is_selected = Is_selected;
	Parms.Is_hovered = Is_hovered;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_07_sub_objective.w_07_sub_objective_C.init_sub_objective
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Abp_quest_actor_C*           Quest_actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_quest_sub_objective_data Sub_objective_data                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UW_07_sub_objective_C::Init_sub_objective(class Abp_quest_actor_C* Quest_actor, const struct FS_quest_sub_objective_data& Sub_objective_data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_07_sub_objective_C", "init_sub_objective");

	Params::UW_07_sub_objective_C_Init_sub_objective_Params Parms{};

	Parms.Quest_actor = Quest_actor;
	Parms.Sub_objective_data = Sub_objective_data;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_07_sub_objective.w_07_sub_objective_C.ExecuteUbergraph_w_07_sub_objective
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)
// bool                               K2Node_Event_is_selected                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_is_hovered                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Abp_quest_actor_C*           K2Node_CustomEvent_quest_actor                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_quest_sub_objective_data K2Node_CustomEvent_sub_objective_data                            (HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class Abp_msl_localization_actor_C*CallFunc_msl_get_localization_reference_localization_actor       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_get_line_localization_is_valid_text                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_get_line_localization_is_valid_audio                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_get_line_localization_line_from_data                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_get_line_localization_line_text                         (None)
// class USoundWave*                  CallFunc_get_line_localization_line_file                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_get_line_localization_line_length                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_get_line_localization_line_scale                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_07_sub_objective_C::ExecuteUbergraph_w_07_sub_objective(int32 EntryPoint, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, bool K2Node_Event_is_selected, bool K2Node_Event_is_hovered, class Abp_quest_actor_C* K2Node_CustomEvent_quest_actor, const struct FS_quest_sub_objective_data& K2Node_CustomEvent_sub_objective_data, bool K2Node_SwitchEnum_CmpSuccess, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class Abp_msl_localization_actor_C* CallFunc_msl_get_localization_reference_localization_actor, bool CallFunc_get_line_localization_is_valid_text, bool CallFunc_get_line_localization_is_valid_audio, bool CallFunc_get_line_localization_line_from_data, class FText CallFunc_get_line_localization_line_text, class USoundWave* CallFunc_get_line_localization_line_file, float CallFunc_get_line_localization_line_length, int32 CallFunc_get_line_localization_line_scale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_07_sub_objective_C", "ExecuteUbergraph_w_07_sub_objective");

	Params::UW_07_sub_objective_C_ExecuteUbergraph_w_07_sub_objective_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.K2Node_Event_is_selected = K2Node_Event_is_selected;
	Parms.K2Node_Event_is_hovered = K2Node_Event_is_hovered;
	Parms.K2Node_CustomEvent_quest_actor = K2Node_CustomEvent_quest_actor;
	Parms.K2Node_CustomEvent_sub_objective_data = K2Node_CustomEvent_sub_objective_data;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_msl_get_localization_reference_localization_actor = CallFunc_msl_get_localization_reference_localization_actor;
	Parms.CallFunc_get_line_localization_is_valid_text = CallFunc_get_line_localization_is_valid_text;
	Parms.CallFunc_get_line_localization_is_valid_audio = CallFunc_get_line_localization_is_valid_audio;
	Parms.CallFunc_get_line_localization_line_from_data = CallFunc_get_line_localization_line_from_data;
	Parms.CallFunc_get_line_localization_line_text = CallFunc_get_line_localization_line_text;
	Parms.CallFunc_get_line_localization_line_file = CallFunc_get_line_localization_line_file;
	Parms.CallFunc_get_line_localization_line_length = CallFunc_get_line_localization_line_length;
	Parms.CallFunc_get_line_localization_line_scale = CallFunc_get_line_localization_line_scale;

	UObject::ProcessEvent(Func, &Parms);

}

}


