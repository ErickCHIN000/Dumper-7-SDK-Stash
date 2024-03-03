#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass w_08_description_entry.w_08_description_entry_C
// (None)

class UClass* UW_08_description_entry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("w_08_description_entry_C");

	return Clss;
}


// w_08_description_entry_C w_08_description_entry.Default__w_08_description_entry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_08_description_entry_C* UW_08_description_entry_C::GetDefaultObj()
{
	static class UW_08_description_entry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_08_description_entry_C*>(UW_08_description_entry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function w_08_description_entry.w_08_description_entry_C.custom_visuals
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Is_selected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Is_hovered                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_08_description_entry_C::Custom_visuals(bool Is_selected, bool Is_hovered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_08_description_entry_C", "custom_visuals");

	Params::UW_08_description_entry_C_Custom_visuals_Params Parms{};

	Parms.Is_selected = Is_selected;
	Parms.Is_hovered = Is_hovered;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_08_description_entry.w_08_description_entry_C.init_description
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Description_name                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_08_description_entry_C::Init_description(class FName Description_name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_08_description_entry_C", "init_description");

	Params::UW_08_description_entry_C_Init_description_Params Parms{};

	Parms.Description_name = Description_name;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_08_description_entry.w_08_description_entry_C.ExecuteUbergraph_w_08_description_entry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_msl_localization_actor_C*CallFunc_msl_get_localization_reference_localization_actor       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_is_selected                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_is_hovered                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_description_name                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_get_line_localization_is_valid_text                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_get_line_localization_is_valid_audio                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_get_line_localization_line_from_data                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_get_line_localization_line_text                         (None)
// class USoundWave*                  CallFunc_get_line_localization_line_file                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_get_line_localization_line_length                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_get_line_localization_line_scale                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_08_description_entry_C::ExecuteUbergraph_w_08_description_entry(int32 EntryPoint, class Abp_msl_localization_actor_C* CallFunc_msl_get_localization_reference_localization_actor, bool K2Node_Event_is_selected, bool K2Node_Event_is_hovered, class FName K2Node_CustomEvent_description_name, bool CallFunc_get_line_localization_is_valid_text, bool CallFunc_get_line_localization_is_valid_audio, bool CallFunc_get_line_localization_line_from_data, class FText CallFunc_get_line_localization_line_text, class USoundWave* CallFunc_get_line_localization_line_file, float CallFunc_get_line_localization_line_length, int32 CallFunc_get_line_localization_line_scale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_08_description_entry_C", "ExecuteUbergraph_w_08_description_entry");

	Params::UW_08_description_entry_C_ExecuteUbergraph_w_08_description_entry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_msl_get_localization_reference_localization_actor = CallFunc_msl_get_localization_reference_localization_actor;
	Parms.K2Node_Event_is_selected = K2Node_Event_is_selected;
	Parms.K2Node_Event_is_hovered = K2Node_Event_is_hovered;
	Parms.K2Node_CustomEvent_description_name = K2Node_CustomEvent_description_name;
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


