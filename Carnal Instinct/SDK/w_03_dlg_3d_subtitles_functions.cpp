#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass w_03_dlg_3d_subtitles.w_03_dlg_3d_subtitles_C
// (None)

class UClass* UW_03_dlg_3d_subtitles_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("w_03_dlg_3d_subtitles_C");

	return Clss;
}


// w_03_dlg_3d_subtitles_C w_03_dlg_3d_subtitles.Default__w_03_dlg_3d_subtitles_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_03_dlg_3d_subtitles_C* UW_03_dlg_3d_subtitles_C::GetDefaultObj()
{
	static class UW_03_dlg_3d_subtitles_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_03_dlg_3d_subtitles_C*>(UW_03_dlg_3d_subtitles_C::StaticClass()->DefaultObject);

	return Default;
}


// Function w_03_dlg_3d_subtitles.w_03_dlg_3d_subtitles_C.set_visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               New_visibility                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_03_dlg_3d_subtitles_C::Set_visibility(bool New_visibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_03_dlg_3d_subtitles_C", "set_visibility");

	Params::UW_03_dlg_3d_subtitles_C_Set_visibility_Params Parms{};

	Parms.New_visibility = New_visibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_03_dlg_3d_subtitles.w_03_dlg_3d_subtitles_C.clear_visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Clear_quick                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_03_dlg_3d_subtitles_C::Clear_visibility(bool Clear_quick)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_03_dlg_3d_subtitles_C", "clear_visibility");

	Params::UW_03_dlg_3d_subtitles_C_Clear_visibility_Params Parms{};

	Parms.Clear_quick = Clear_quick;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_03_dlg_3d_subtitles.w_03_dlg_3d_subtitles_C.tick_visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetRenderOpacity_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_03_dlg_3d_subtitles_C::Tick_visibility(float CallFunc_GetRenderOpacity_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_SelectFloat_ReturnValue, float CallFunc_FInterpTo_ReturnValue, float CallFunc_FClamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_03_dlg_3d_subtitles_C", "tick_visibility");

	Params::UW_03_dlg_3d_subtitles_C_Tick_visibility_Params Parms{};

	Parms.CallFunc_GetRenderOpacity_ReturnValue = CallFunc_GetRenderOpacity_ReturnValue;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_03_dlg_3d_subtitles.w_03_dlg_3d_subtitles_C.init_widget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Abp_dlg_subtitles_widget_3d_C*Dlg_subtitles                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_03_dlg_3d_subtitles_C::Init_widget(class Abp_dlg_subtitles_widget_3d_C* Dlg_subtitles)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_03_dlg_3d_subtitles_C", "init_widget");

	Params::UW_03_dlg_3d_subtitles_C_Init_widget_Params Parms{};

	Parms.Dlg_subtitles = Dlg_subtitles;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_03_dlg_3d_subtitles.w_03_dlg_3d_subtitles_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_03_dlg_3d_subtitles_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_03_dlg_3d_subtitles_C", "Tick");

	Params::UW_03_dlg_3d_subtitles_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_03_dlg_3d_subtitles.w_03_dlg_3d_subtitles_C.update_reply
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_dlg_reply_info           Reply_info                                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class Abp_dlg_actor_C*             Dlg_actor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_03_dlg_3d_subtitles_C::Update_reply(const struct FS_dlg_reply_info& Reply_info, class Abp_dlg_actor_C* Dlg_actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_03_dlg_3d_subtitles_C", "update_reply");

	Params::UW_03_dlg_3d_subtitles_C_Update_reply_Params Parms{};

	Parms.Reply_info = Reply_info;
	Parms.Dlg_actor = Dlg_actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_03_dlg_3d_subtitles.w_03_dlg_3d_subtitles_C.show_name
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Name_id                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_03_dlg_3d_subtitles_C::Show_name(class FName Name_id)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_03_dlg_3d_subtitles_C", "show_name");

	Params::UW_03_dlg_3d_subtitles_C_Show_name_Params Parms{};

	Parms.Name_id = Name_id;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_03_dlg_3d_subtitles.w_03_dlg_3d_subtitles_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_03_dlg_3d_subtitles_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_03_dlg_3d_subtitles_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_03_dlg_3d_subtitles.w_03_dlg_3d_subtitles_C.ExecuteUbergraph_w_03_dlg_3d_subtitles
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_msl_localization_actor_C*CallFunc_msl_get_localization_reference_localization_actor       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDistanceTo_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_dlg_reply_info           K2Node_CustomEvent_reply_info                                    (HasGetValueTypeHash)
// class Abp_dlg_actor_C*             K2Node_CustomEvent_dlg_actor                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_name_id                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_dlg_subtitles_widget_3d_C*K2Node_CustomEvent_dlg_subtitles                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_get_dlg_actor_is_valid                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_get_dlg_actor_is_component_valid                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_dlg_actor_actor_index                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_get_dlg_actor_actor_reference                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Ubp_dlg_component_C*         CallFunc_get_dlg_actor_dlg_component                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_dlg_bind_actor_info      CallFunc_get_dlg_actor_actor_dynamic                             (ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_get_line_localization_is_valid_text                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_get_line_localization_is_valid_audio                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_get_line_localization_line_from_data                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_get_line_localization_line_text                         (None)
// class USoundWave*                  CallFunc_get_line_localization_line_file                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_get_line_localization_line_length                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_get_line_localization_line_scale                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class Abp_msl_localization_actor_C*CallFunc_msl_get_localization_reference_localization_actor_1     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundWave*                  CallFunc_get_reply_localization_sound_file                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_get_reply_localization_sound_length                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_get_reply_localization_text_localization                (None)
// bool                               CallFunc_get_line_localization_is_valid_text_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_get_line_localization_is_valid_audio_1                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_get_line_localization_line_from_data_1                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_get_line_localization_line_text_1                       (None)
// class USoundWave*                  CallFunc_get_line_localization_line_file_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_get_line_localization_line_length_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_get_line_localization_line_scale_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UW_03_dlg_3d_subtitles_C::ExecuteUbergraph_w_03_dlg_3d_subtitles(int32 EntryPoint, class Abp_msl_localization_actor_C* CallFunc_msl_get_localization_reference_localization_actor, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_GetDistanceTo_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FS_dlg_reply_info& K2Node_CustomEvent_reply_info, class Abp_dlg_actor_C* K2Node_CustomEvent_dlg_actor, class FName K2Node_CustomEvent_name_id, class Abp_dlg_subtitles_widget_3d_C* K2Node_CustomEvent_dlg_subtitles, bool CallFunc_get_dlg_actor_is_valid, bool CallFunc_get_dlg_actor_is_component_valid, int32 CallFunc_get_dlg_actor_actor_index, class AActor* CallFunc_get_dlg_actor_actor_reference, class Ubp_dlg_component_C* CallFunc_get_dlg_actor_dlg_component, const struct FS_dlg_bind_actor_info& CallFunc_get_dlg_actor_actor_dynamic, bool CallFunc_get_line_localization_is_valid_text, bool CallFunc_get_line_localization_is_valid_audio, bool CallFunc_get_line_localization_line_from_data, class FText CallFunc_get_line_localization_line_text, class USoundWave* CallFunc_get_line_localization_line_file, float CallFunc_get_line_localization_line_length, int32 CallFunc_get_line_localization_line_scale, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class Abp_msl_localization_actor_C* CallFunc_msl_get_localization_reference_localization_actor_1, class USoundWave* CallFunc_get_reply_localization_sound_file, float CallFunc_get_reply_localization_sound_length, class FText CallFunc_get_reply_localization_text_localization, bool CallFunc_get_line_localization_is_valid_text_1, bool CallFunc_get_line_localization_is_valid_audio_1, bool CallFunc_get_line_localization_line_from_data_1, class FText CallFunc_get_line_localization_line_text_1, class USoundWave* CallFunc_get_line_localization_line_file_1, float CallFunc_get_line_localization_line_length_1, int32 CallFunc_get_line_localization_line_scale_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_03_dlg_3d_subtitles_C", "ExecuteUbergraph_w_03_dlg_3d_subtitles");

	Params::UW_03_dlg_3d_subtitles_C_ExecuteUbergraph_w_03_dlg_3d_subtitles_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_msl_get_localization_reference_localization_actor = CallFunc_msl_get_localization_reference_localization_actor;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_GetDistanceTo_ReturnValue = CallFunc_GetDistanceTo_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.K2Node_CustomEvent_reply_info = K2Node_CustomEvent_reply_info;
	Parms.K2Node_CustomEvent_dlg_actor = K2Node_CustomEvent_dlg_actor;
	Parms.K2Node_CustomEvent_name_id = K2Node_CustomEvent_name_id;
	Parms.K2Node_CustomEvent_dlg_subtitles = K2Node_CustomEvent_dlg_subtitles;
	Parms.CallFunc_get_dlg_actor_is_valid = CallFunc_get_dlg_actor_is_valid;
	Parms.CallFunc_get_dlg_actor_is_component_valid = CallFunc_get_dlg_actor_is_component_valid;
	Parms.CallFunc_get_dlg_actor_actor_index = CallFunc_get_dlg_actor_actor_index;
	Parms.CallFunc_get_dlg_actor_actor_reference = CallFunc_get_dlg_actor_actor_reference;
	Parms.CallFunc_get_dlg_actor_dlg_component = CallFunc_get_dlg_actor_dlg_component;
	Parms.CallFunc_get_dlg_actor_actor_dynamic = CallFunc_get_dlg_actor_actor_dynamic;
	Parms.CallFunc_get_line_localization_is_valid_text = CallFunc_get_line_localization_is_valid_text;
	Parms.CallFunc_get_line_localization_is_valid_audio = CallFunc_get_line_localization_is_valid_audio;
	Parms.CallFunc_get_line_localization_line_from_data = CallFunc_get_line_localization_line_from_data;
	Parms.CallFunc_get_line_localization_line_text = CallFunc_get_line_localization_line_text;
	Parms.CallFunc_get_line_localization_line_file = CallFunc_get_line_localization_line_file;
	Parms.CallFunc_get_line_localization_line_length = CallFunc_get_line_localization_line_length;
	Parms.CallFunc_get_line_localization_line_scale = CallFunc_get_line_localization_line_scale;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_msl_get_localization_reference_localization_actor_1 = CallFunc_msl_get_localization_reference_localization_actor_1;
	Parms.CallFunc_get_reply_localization_sound_file = CallFunc_get_reply_localization_sound_file;
	Parms.CallFunc_get_reply_localization_sound_length = CallFunc_get_reply_localization_sound_length;
	Parms.CallFunc_get_reply_localization_text_localization = CallFunc_get_reply_localization_text_localization;
	Parms.CallFunc_get_line_localization_is_valid_text_1 = CallFunc_get_line_localization_is_valid_text_1;
	Parms.CallFunc_get_line_localization_is_valid_audio_1 = CallFunc_get_line_localization_is_valid_audio_1;
	Parms.CallFunc_get_line_localization_line_from_data_1 = CallFunc_get_line_localization_line_from_data_1;
	Parms.CallFunc_get_line_localization_line_text_1 = CallFunc_get_line_localization_line_text_1;
	Parms.CallFunc_get_line_localization_line_file_1 = CallFunc_get_line_localization_line_file_1;
	Parms.CallFunc_get_line_localization_line_length_1 = CallFunc_get_line_localization_line_length_1;
	Parms.CallFunc_get_line_localization_line_scale_1 = CallFunc_get_line_localization_line_scale_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


