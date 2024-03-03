#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass w_04_dlg_input_light.w_04_dlg_input_light_C
// (None)

class UClass* UW_04_dlg_input_light_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("w_04_dlg_input_light_C");

	return Clss;
}


// w_04_dlg_input_light_C w_04_dlg_input_light.Default__w_04_dlg_input_light_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_04_dlg_input_light_C* UW_04_dlg_input_light_C::GetDefaultObj()
{
	static class UW_04_dlg_input_light_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_04_dlg_input_light_C*>(UW_04_dlg_input_light_C::StaticClass()->DefaultObject);

	return Default;
}


// Function w_04_dlg_input_light.w_04_dlg_input_light_C.example_stat_condition
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        Input_text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Result_text                                                      (Parm, OutParm)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// class FString                      CallFunc_ParseOption_ReturnValue                                 (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UW_04_dlg_input_light_C::Example_stat_condition(class FText Input_text, class FText* Result_text, class FText CallFunc_MakeLiteralText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, bool K2Node_SwitchName_CmpSuccess, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, const class FString& CallFunc_ParseOption_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, class FText CallFunc_Conv_NameToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_04_dlg_input_light_C", "example_stat_condition");

	Params::UW_04_dlg_input_light_C_Example_stat_condition_Params Parms{};

	Parms.Input_text = Input_text;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.CallFunc_ParseOption_ReturnValue = CallFunc_ParseOption_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result_text != nullptr)
		*Result_text = Parms.Result_text;

}


// Function w_04_dlg_input_light.w_04_dlg_input_light_C.timer_anim
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_get_choice_by_id_is_valid                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_choice_by_id_branch_index                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_get_choice_by_id_choice_index                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_dlg_branch_choice_data   CallFunc_get_choice_by_id_choice_data                            (HasGetValueTypeHash)
// struct FS_dlg_branch_choice_info   CallFunc_get_choice_by_id_choice_info                            (HasGetValueTypeHash)

void UW_04_dlg_input_light_C::Timer_anim(float CallFunc_RandomFloatInRange_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_get_choice_by_id_is_valid, int32 CallFunc_get_choice_by_id_branch_index, int32 CallFunc_get_choice_by_id_choice_index, const struct FS_dlg_branch_choice_data& CallFunc_get_choice_by_id_choice_data, const struct FS_dlg_branch_choice_info& CallFunc_get_choice_by_id_choice_info)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_04_dlg_input_light_C", "timer_anim");

	Params::UW_04_dlg_input_light_C_Timer_anim_Params Parms{};

	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_get_choice_by_id_is_valid = CallFunc_get_choice_by_id_is_valid;
	Parms.CallFunc_get_choice_by_id_branch_index = CallFunc_get_choice_by_id_branch_index;
	Parms.CallFunc_get_choice_by_id_choice_index = CallFunc_get_choice_by_id_choice_index;
	Parms.CallFunc_get_choice_by_id_choice_data = CallFunc_get_choice_by_id_choice_data;
	Parms.CallFunc_get_choice_by_id_choice_info = CallFunc_get_choice_by_id_choice_info;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_04_dlg_input_light.w_04_dlg_input_light_C.refresh_info
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Is_success                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_locked                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_get_storage_choice_is_valid                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_storage_choice_branch_index                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_get_storage_choice_storage_index                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_dlg_choice_storage       CallFunc_get_storage_choice_choice_storage                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_04_dlg_input_light_C::Refresh_info(bool* Is_success, bool Local_locked, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_get_storage_choice_is_valid, int32 CallFunc_get_storage_choice_branch_index, int32 CallFunc_get_storage_choice_storage_index, const struct FS_dlg_choice_storage& CallFunc_get_storage_choice_choice_storage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_04_dlg_input_light_C", "refresh_info");

	Params::UW_04_dlg_input_light_C_Refresh_info_Params Parms{};

	Parms.Local_locked = Local_locked;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_get_storage_choice_is_valid = CallFunc_get_storage_choice_is_valid;
	Parms.CallFunc_get_storage_choice_branch_index = CallFunc_get_storage_choice_branch_index;
	Parms.CallFunc_get_storage_choice_storage_index = CallFunc_get_storage_choice_storage_index;
	Parms.CallFunc_get_storage_choice_choice_storage = CallFunc_get_storage_choice_choice_storage;

	UObject::ProcessEvent(Func, &Parms);

	if (Is_success != nullptr)
		*Is_success = Parms.Is_success;

}


// Function w_04_dlg_input_light.w_04_dlg_input_light_C.find_icon_auto
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_find_key_icon_localized_name                            (None)
// class UTexture2D*                  CallFunc_find_key_icon_platform_icon                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            (None)

void UW_04_dlg_input_light_C::Find_icon_auto(bool CallFunc_Not_PreBool_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class FText CallFunc_find_key_icon_localized_name, class UTexture2D* CallFunc_find_key_icon_platform_icon, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_04_dlg_input_light_C", "find_icon_auto");

	Params::UW_04_dlg_input_light_C_Find_icon_auto_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_find_key_icon_localized_name = CallFunc_find_key_icon_localized_name;
	Parms.CallFunc_find_key_icon_platform_icon = CallFunc_find_key_icon_platform_icon;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_04_dlg_input_light.w_04_dlg_input_light_C.custom_widget_selected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Is_selected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_04_dlg_input_light_C::Custom_widget_selected(bool Is_selected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_04_dlg_input_light_C", "custom_widget_selected");

	Params::UW_04_dlg_input_light_C_Custom_widget_selected_Params Parms{};

	Parms.Is_selected = Is_selected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_04_dlg_input_light.w_04_dlg_input_light_C.custom_widget_accept
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_04_dlg_input_light_C::Custom_widget_accept()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_04_dlg_input_light_C", "custom_widget_accept");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_04_dlg_input_light.w_04_dlg_input_light_C.custom_widget_active
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Is_active                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_04_dlg_input_light_C::Custom_widget_active(bool Is_active)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_04_dlg_input_light_C", "custom_widget_active");

	Params::UW_04_dlg_input_light_C_Custom_widget_active_Params Parms{};

	Parms.Is_active = Is_active;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_04_dlg_input_light.w_04_dlg_input_light_C.custom_widget_tick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delta_seconds                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_04_dlg_input_light_C::Custom_widget_tick(float Delta_seconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_04_dlg_input_light_C", "custom_widget_tick");

	Params::UW_04_dlg_input_light_C_Custom_widget_tick_Params Parms{};

	Parms.Delta_seconds = Delta_seconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_04_dlg_input_light.w_04_dlg_input_light_C.custom_widget_block
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Is_blocked                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_04_dlg_input_light_C::Custom_widget_block(bool Is_blocked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_04_dlg_input_light_C", "custom_widget_block");

	Params::UW_04_dlg_input_light_C_Custom_widget_block_Params Parms{};

	Parms.Is_blocked = Is_blocked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_04_dlg_input_light.w_04_dlg_input_light_C.custom_widget_clear
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_04_dlg_input_light_C::Custom_widget_clear()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_04_dlg_input_light_C", "custom_widget_clear");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_04_dlg_input_light.w_04_dlg_input_light_C.custom_widget_init
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_04_dlg_input_light_C::Custom_widget_init()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_04_dlg_input_light_C", "custom_widget_init");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_04_dlg_input_light.w_04_dlg_input_light_C.ExecuteUbergraph_w_04_dlg_input_light
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_Event_is_selected                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_2                                   (None)
// bool                               CallFunc_refresh_info_is_success                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_is_active                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetRenderOpacity_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundWave*                  CallFunc_get_reply_localization_sound_file                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_get_reply_localization_sound_length                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_get_reply_localization_text_localization                (None)
// float                              CallFunc_GetRenderOpacity_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_example_stat_condition_result_text                      (None)
// float                              CallFunc_FMin_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// float                              K2Node_Event_delta_seconds                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FFontOutlineSettings        K2Node_MakeStruct_FontOutlineSettings                            (NoDestructor, HasGetValueTypeHash)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo                                  (HasGetValueTypeHash)
// bool                               K2Node_Event_is_blocked                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFontOutlineSettings        K2Node_MakeStruct_FontOutlineSettings_1                          (NoDestructor, HasGetValueTypeHash)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo_1                                (HasGetValueTypeHash)

void UW_04_dlg_input_light_C::ExecuteUbergraph_w_04_dlg_input_light(int32 EntryPoint, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, bool K2Node_Event_is_selected, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, bool CallFunc_refresh_info_is_success, float CallFunc_RandomFloatInRange_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool K2Node_Event_is_active, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_GetRenderOpacity_ReturnValue, class USoundWave* CallFunc_get_reply_localization_sound_file, float CallFunc_get_reply_localization_sound_length, class FText CallFunc_get_reply_localization_text_localization, float CallFunc_GetRenderOpacity_ReturnValue_1, class FText CallFunc_example_stat_condition_result_text, float CallFunc_FMin_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, float K2Node_Event_delta_seconds, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFontOutlineSettings& K2Node_MakeStruct_FontOutlineSettings, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, bool K2Node_Event_is_blocked, const struct FFontOutlineSettings& K2Node_MakeStruct_FontOutlineSettings_1, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_04_dlg_input_light_C", "ExecuteUbergraph_w_04_dlg_input_light");

	Params::UW_04_dlg_input_light_C_ExecuteUbergraph_w_04_dlg_input_light_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.K2Node_Event_is_selected = K2Node_Event_is_selected;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor_2 = K2Node_MakeStruct_SlateColor_2;
	Parms.CallFunc_refresh_info_is_success = CallFunc_refresh_info_is_success;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.K2Node_Event_is_active = K2Node_Event_is_active;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_GetRenderOpacity_ReturnValue = CallFunc_GetRenderOpacity_ReturnValue;
	Parms.CallFunc_get_reply_localization_sound_file = CallFunc_get_reply_localization_sound_file;
	Parms.CallFunc_get_reply_localization_sound_length = CallFunc_get_reply_localization_sound_length;
	Parms.CallFunc_get_reply_localization_text_localization = CallFunc_get_reply_localization_text_localization;
	Parms.CallFunc_GetRenderOpacity_ReturnValue_1 = CallFunc_GetRenderOpacity_ReturnValue_1;
	Parms.CallFunc_example_stat_condition_result_text = CallFunc_example_stat_condition_result_text;
	Parms.CallFunc_FMin_ReturnValue = CallFunc_FMin_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.K2Node_Event_delta_seconds = K2Node_Event_delta_seconds;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FontOutlineSettings = K2Node_MakeStruct_FontOutlineSettings;
	Parms.K2Node_MakeStruct_SlateFontInfo = K2Node_MakeStruct_SlateFontInfo;
	Parms.K2Node_Event_is_blocked = K2Node_Event_is_blocked;
	Parms.K2Node_MakeStruct_FontOutlineSettings_1 = K2Node_MakeStruct_FontOutlineSettings_1;
	Parms.K2Node_MakeStruct_SlateFontInfo_1 = K2Node_MakeStruct_SlateFontInfo_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


