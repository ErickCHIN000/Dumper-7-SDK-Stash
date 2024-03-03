#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass w_02_dlg_2d_subtitles.w_02_dlg_2d_subtitles_C
// (None)

class UClass* UW_02_dlg_2d_subtitles_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("w_02_dlg_2d_subtitles_C");

	return Clss;
}


// w_02_dlg_2d_subtitles_C w_02_dlg_2d_subtitles.Default__w_02_dlg_2d_subtitles_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_02_dlg_2d_subtitles_C* UW_02_dlg_2d_subtitles_C::GetDefaultObj()
{
	static class UW_02_dlg_2d_subtitles_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_02_dlg_2d_subtitles_C*>(UW_02_dlg_2d_subtitles_C::StaticClass()->DefaultObject);

	return Default;
}


// Function w_02_dlg_2d_subtitles.w_02_dlg_2d_subtitles_C.find_subtitles_opacity
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Max_opacity                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<float>                      Local_opacity                                                    (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MaxOfFloatArray_IndexOfMaxValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MaxOfFloatArray_MaxValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_02_dlg_2d_subtitle_entry_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRenderOpacity_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_02_dlg_2d_subtitles_C::Find_subtitles_opacity(float* Max_opacity, const TArray<float>& Local_opacity, int32 Temp_int_Array_Index_Variable, int32 CallFunc_MaxOfFloatArray_IndexOfMaxValue, float CallFunc_MaxOfFloatArray_MaxValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UW_02_dlg_2d_subtitle_entry_C* CallFunc_Array_Get_Item, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Max_ReturnValue, float CallFunc_GetRenderOpacity_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_02_dlg_2d_subtitles_C", "find_subtitles_opacity");

	Params::UW_02_dlg_2d_subtitles_C_Find_subtitles_opacity_Params Parms{};

	Parms.Local_opacity = Local_opacity;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_MaxOfFloatArray_IndexOfMaxValue = CallFunc_MaxOfFloatArray_IndexOfMaxValue;
	Parms.CallFunc_MaxOfFloatArray_MaxValue = CallFunc_MaxOfFloatArray_MaxValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.CallFunc_GetRenderOpacity_ReturnValue = CallFunc_GetRenderOpacity_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Max_opacity != nullptr)
		*Max_opacity = Parms.Max_opacity;

}


// Function w_02_dlg_2d_subtitles.w_02_dlg_2d_subtitles_C.init_widget
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_02_dlg_2d_subtitles_C::Init_widget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_02_dlg_2d_subtitles_C", "init_widget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_02_dlg_2d_subtitles.w_02_dlg_2d_subtitles_C.reply_subtitles
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Abp_dlg_actor_C*             Dlg_actor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_dlg_reply_info           Reply_info                                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UW_02_dlg_2d_subtitles_C::Reply_subtitles(class Abp_dlg_actor_C* Dlg_actor, const struct FS_dlg_reply_info& Reply_info)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_02_dlg_2d_subtitles_C", "reply_subtitles");

	Params::UW_02_dlg_2d_subtitles_C_Reply_subtitles_Params Parms{};

	Parms.Dlg_actor = Dlg_actor;
	Parms.Reply_info = Reply_info;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_02_dlg_2d_subtitles.w_02_dlg_2d_subtitles_C.reply_clear
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Abp_dlg_actor_C*             Dlg_actor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Remove_quick                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Clear_All                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Last_reply                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_02_dlg_2d_subtitles_C::Reply_clear(class Abp_dlg_actor_C* Dlg_actor, bool Remove_quick, bool Clear_All, bool Last_reply)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_02_dlg_2d_subtitles_C", "reply_clear");

	Params::UW_02_dlg_2d_subtitles_C_Reply_clear_Params Parms{};

	Parms.Dlg_actor = Dlg_actor;
	Parms.Remove_quick = Remove_quick;
	Parms.Clear_All = Clear_All;
	Parms.Last_reply = Last_reply;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_02_dlg_2d_subtitles.w_02_dlg_2d_subtitles_C.update_reminder
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_02_dlg_2d_subtitles_C::Update_reminder()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_02_dlg_2d_subtitles_C", "update_reminder");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_02_dlg_2d_subtitles.w_02_dlg_2d_subtitles_C.event_timer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_02_dlg_2d_subtitles_C::Event_timer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_02_dlg_2d_subtitles_C", "event_timer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_02_dlg_2d_subtitles.w_02_dlg_2d_subtitles_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_02_dlg_2d_subtitles_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_02_dlg_2d_subtitles_C", "Tick");

	Params::UW_02_dlg_2d_subtitles_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_02_dlg_2d_subtitles.w_02_dlg_2d_subtitles_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_02_dlg_2d_subtitles_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_02_dlg_2d_subtitles_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_02_dlg_2d_subtitles.w_02_dlg_2d_subtitles_C.ExecuteUbergraph_w_02_dlg_2d_subtitles
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_dlg_actor_C*             K2Node_CustomEvent_dlg_actor_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_dlg_reply_info           K2Node_CustomEvent_reply_info                                    (HasGetValueTypeHash)
// class Abp_dlg_actor_C*             K2Node_CustomEvent_dlg_actor                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_remove_quick                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_clear_all                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_last_reply                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Abp_msl_localization_actor_C*CallFunc_msl_get_localization_reference_localization_actor       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_get_dlg_actor_is_valid                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_get_dlg_actor_is_component_valid                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_dlg_actor_actor_index                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_get_dlg_actor_actor_reference                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Ubp_dlg_component_C*         CallFunc_get_dlg_actor_dlg_component                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_dlg_bind_actor_info      CallFunc_get_dlg_actor_actor_dynamic                             (ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_get_line_localization_is_valid_text                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_get_line_localization_is_valid_audio                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_get_line_localization_line_from_data                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_get_line_localization_line_text                         (None)
// class USoundWave*                  CallFunc_get_line_localization_line_file                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_get_line_localization_line_length                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_get_line_localization_line_scale                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_find_subtitles_opacity_max_opacity                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_02_dlg_2d_subtitle_entry_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_02_dlg_2d_subtitle_entry_C*CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_02_dlg_2d_subtitle_entry_C*Temp_object_Variable                                             (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundWave*                  CallFunc_get_reply_localization_sound_file                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_get_reply_localization_sound_length                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_get_reply_localization_text_localization                (None)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class UW_02_dlg_2d_subtitle_entry_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (None)
// class Abp_msl_localization_actor_C*CallFunc_msl_get_localization_reference_localization_actor_1     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_get_line_localization_is_valid_text_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_get_line_localization_is_valid_audio_1                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_get_line_localization_line_from_data_1                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_get_line_localization_line_text_1                       (None)
// class USoundWave*                  CallFunc_get_line_localization_line_file_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_get_line_localization_line_length_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_get_line_localization_line_scale_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TextIsEmpty_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_TextToLower_ReturnValue                                 (None)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRenderOpacity_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)

void UW_02_dlg_2d_subtitles_C::ExecuteUbergraph_w_02_dlg_2d_subtitles(int32 EntryPoint, class FText CallFunc_MakeLiteralText_ReturnValue, int32 Temp_int_Array_Index_Variable, class Abp_dlg_actor_C* K2Node_CustomEvent_dlg_actor_1, const struct FS_dlg_reply_info& K2Node_CustomEvent_reply_info, class Abp_dlg_actor_C* K2Node_CustomEvent_dlg_actor, bool K2Node_CustomEvent_remove_quick, bool K2Node_CustomEvent_clear_all, bool K2Node_CustomEvent_last_reply, bool CallFunc_Array_IsValidIndex_ReturnValue, class Abp_msl_localization_actor_C* CallFunc_msl_get_localization_reference_localization_actor, bool CallFunc_get_dlg_actor_is_valid, bool CallFunc_get_dlg_actor_is_component_valid, int32 CallFunc_get_dlg_actor_actor_index, class AActor* CallFunc_get_dlg_actor_actor_reference, class Ubp_dlg_component_C* CallFunc_get_dlg_actor_dlg_component, const struct FS_dlg_bind_actor_info& CallFunc_get_dlg_actor_actor_dynamic, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_get_line_localization_is_valid_text, bool CallFunc_get_line_localization_is_valid_audio, bool CallFunc_get_line_localization_line_from_data, class FText CallFunc_get_line_localization_line_text, class USoundWave* CallFunc_get_line_localization_line_file, float CallFunc_get_line_localization_line_length, int32 CallFunc_get_line_localization_line_scale, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_find_subtitles_opacity_max_opacity, float CallFunc_GetWorldDeltaSeconds_ReturnValue, class UW_02_dlg_2d_subtitle_entry_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Max_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UW_02_dlg_2d_subtitle_entry_C* CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, float CallFunc_MapRangeClamped_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue_1, class UW_02_dlg_2d_subtitle_entry_C* Temp_object_Variable, class USoundWave* CallFunc_get_reply_localization_sound_file, float CallFunc_get_reply_localization_sound_length, class FText CallFunc_get_reply_localization_text_localization, int32 CallFunc_Array_Add_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, bool CallFunc_TextIsEmpty_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class UW_02_dlg_2d_subtitle_entry_C* CallFunc_Create_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, class Abp_msl_localization_actor_C* CallFunc_msl_get_localization_reference_localization_actor_1, bool CallFunc_get_line_localization_is_valid_text_1, bool CallFunc_get_line_localization_is_valid_audio_1, bool CallFunc_get_line_localization_line_from_data_1, class FText CallFunc_get_line_localization_line_text_1, class USoundWave* CallFunc_get_line_localization_line_file_1, float CallFunc_get_line_localization_line_length_1, int32 CallFunc_get_line_localization_line_scale_1, bool CallFunc_TextIsEmpty_ReturnValue_1, class FText CallFunc_TextToLower_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, class UPanelSlot* CallFunc_AddChild_ReturnValue, float CallFunc_GetRenderOpacity_ReturnValue, float CallFunc_FInterpTo_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_02_dlg_2d_subtitles_C", "ExecuteUbergraph_w_02_dlg_2d_subtitles");

	Params::UW_02_dlg_2d_subtitles_C_ExecuteUbergraph_w_02_dlg_2d_subtitles_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_CustomEvent_dlg_actor_1 = K2Node_CustomEvent_dlg_actor_1;
	Parms.K2Node_CustomEvent_reply_info = K2Node_CustomEvent_reply_info;
	Parms.K2Node_CustomEvent_dlg_actor = K2Node_CustomEvent_dlg_actor;
	Parms.K2Node_CustomEvent_remove_quick = K2Node_CustomEvent_remove_quick;
	Parms.K2Node_CustomEvent_clear_all = K2Node_CustomEvent_clear_all;
	Parms.K2Node_CustomEvent_last_reply = K2Node_CustomEvent_last_reply;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_msl_get_localization_reference_localization_actor = CallFunc_msl_get_localization_reference_localization_actor;
	Parms.CallFunc_get_dlg_actor_is_valid = CallFunc_get_dlg_actor_is_valid;
	Parms.CallFunc_get_dlg_actor_is_component_valid = CallFunc_get_dlg_actor_is_component_valid;
	Parms.CallFunc_get_dlg_actor_actor_index = CallFunc_get_dlg_actor_actor_index;
	Parms.CallFunc_get_dlg_actor_actor_reference = CallFunc_get_dlg_actor_actor_reference;
	Parms.CallFunc_get_dlg_actor_dlg_component = CallFunc_get_dlg_actor_dlg_component;
	Parms.CallFunc_get_dlg_actor_actor_dynamic = CallFunc_get_dlg_actor_actor_dynamic;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_get_line_localization_is_valid_text = CallFunc_get_line_localization_is_valid_text;
	Parms.CallFunc_get_line_localization_is_valid_audio = CallFunc_get_line_localization_is_valid_audio;
	Parms.CallFunc_get_line_localization_line_from_data = CallFunc_get_line_localization_line_from_data;
	Parms.CallFunc_get_line_localization_line_text = CallFunc_get_line_localization_line_text;
	Parms.CallFunc_get_line_localization_line_file = CallFunc_get_line_localization_line_file;
	Parms.CallFunc_get_line_localization_line_length = CallFunc_get_line_localization_line_length;
	Parms.CallFunc_get_line_localization_line_scale = CallFunc_get_line_localization_line_scale;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_find_subtitles_opacity_max_opacity = CallFunc_find_subtitles_opacity_max_opacity;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_get_reply_localization_sound_file = CallFunc_get_reply_localization_sound_file;
	Parms.CallFunc_get_reply_localization_sound_length = CallFunc_get_reply_localization_sound_length;
	Parms.CallFunc_get_reply_localization_text_localization = CallFunc_get_reply_localization_text_localization;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.CallFunc_msl_get_localization_reference_localization_actor_1 = CallFunc_msl_get_localization_reference_localization_actor_1;
	Parms.CallFunc_get_line_localization_is_valid_text_1 = CallFunc_get_line_localization_is_valid_text_1;
	Parms.CallFunc_get_line_localization_is_valid_audio_1 = CallFunc_get_line_localization_is_valid_audio_1;
	Parms.CallFunc_get_line_localization_line_from_data_1 = CallFunc_get_line_localization_line_from_data_1;
	Parms.CallFunc_get_line_localization_line_text_1 = CallFunc_get_line_localization_line_text_1;
	Parms.CallFunc_get_line_localization_line_file_1 = CallFunc_get_line_localization_line_file_1;
	Parms.CallFunc_get_line_localization_line_length_1 = CallFunc_get_line_localization_line_length_1;
	Parms.CallFunc_get_line_localization_line_scale_1 = CallFunc_get_line_localization_line_scale_1;
	Parms.CallFunc_TextIsEmpty_ReturnValue_1 = CallFunc_TextIsEmpty_ReturnValue_1;
	Parms.CallFunc_TextToLower_ReturnValue = CallFunc_TextToLower_ReturnValue;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue = CallFunc_EqualEqual_TextText_ReturnValue;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue_1 = CallFunc_EqualEqual_TextText_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_GetRenderOpacity_ReturnValue = CallFunc_GetRenderOpacity_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


