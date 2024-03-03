#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass w_04_quest_tab.w_04_quest_tab_C
// (None)

class UClass* UW_04_quest_tab_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("w_04_quest_tab_C");

	return Clss;
}


// w_04_quest_tab_C w_04_quest_tab.Default__w_04_quest_tab_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_04_quest_tab_C* UW_04_quest_tab_C::GetDefaultObj()
{
	static class UW_04_quest_tab_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_04_quest_tab_C*>(UW_04_quest_tab_C::StaticClass()->DefaultObject);

	return Default;
}


// Function w_04_quest_tab.w_04_quest_tab_C.custom_visuals
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Is_selected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Is_hovered                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_04_quest_tab_C::Custom_visuals(bool Is_selected, bool Is_hovered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_04_quest_tab_C", "custom_visuals");

	Params::UW_04_quest_tab_C_Custom_visuals_Params Parms{};

	Parms.Is_selected = Is_selected;
	Parms.Is_hovered = Is_hovered;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_04_quest_tab.w_04_quest_tab_C.init_tab
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Tab_name                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_04_quest_tab_C::Init_tab(class FName Tab_name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_04_quest_tab_C", "init_tab");

	Params::UW_04_quest_tab_C_Init_tab_Params Parms{};

	Parms.Tab_name = Tab_name;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_04_quest_tab.w_04_quest_tab_C.ExecuteUbergraph_w_04_quest_tab
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_msl_localization_actor_C*CallFunc_msl_get_localization_reference_localization_actor       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_is_selected                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_is_hovered                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_tab_name                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_get_line_localization_is_valid_text                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_get_line_localization_is_valid_audio                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_get_line_localization_line_from_data                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_get_line_localization_line_text                         (None)
// class USoundWave*                  CallFunc_get_line_localization_line_file                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_get_line_localization_line_length                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_get_line_localization_line_scale                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_04_quest_tab_C::ExecuteUbergraph_w_04_quest_tab(int32 EntryPoint, class Abp_msl_localization_actor_C* CallFunc_msl_get_localization_reference_localization_actor, bool K2Node_Event_is_selected, bool K2Node_Event_is_hovered, class FName K2Node_CustomEvent_tab_name, bool CallFunc_get_line_localization_is_valid_text, bool CallFunc_get_line_localization_is_valid_audio, bool CallFunc_get_line_localization_line_from_data, class FText CallFunc_get_line_localization_line_text, class USoundWave* CallFunc_get_line_localization_line_file, float CallFunc_get_line_localization_line_length, int32 CallFunc_get_line_localization_line_scale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_04_quest_tab_C", "ExecuteUbergraph_w_04_quest_tab");

	Params::UW_04_quest_tab_C_ExecuteUbergraph_w_04_quest_tab_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_msl_get_localization_reference_localization_actor = CallFunc_msl_get_localization_reference_localization_actor;
	Parms.K2Node_Event_is_selected = K2Node_Event_is_selected;
	Parms.K2Node_Event_is_hovered = K2Node_Event_is_hovered;
	Parms.K2Node_CustomEvent_tab_name = K2Node_CustomEvent_tab_name;
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


