#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass w_03_dlg_parent_input.w_03_dlg_parent_input_C
// (None)

class UClass* UW_03_dlg_parent_input_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("w_03_dlg_parent_input_C");

	return Clss;
}


// w_03_dlg_parent_input_C w_03_dlg_parent_input.Default__w_03_dlg_parent_input_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_03_dlg_parent_input_C* UW_03_dlg_parent_input_C::GetDefaultObj()
{
	static class UW_03_dlg_parent_input_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_03_dlg_parent_input_C*>(UW_03_dlg_parent_input_C::StaticClass()->DefaultObject);

	return Default;
}


// Function w_03_dlg_parent_input.w_03_dlg_parent_input_C.set_active
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               New_active                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_03_dlg_parent_input_C::Set_active(bool New_active)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_03_dlg_parent_input_C", "set_active");

	Params::UW_03_dlg_parent_input_C_Set_active_Params Parms{};

	Parms.New_active = New_active;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_03_dlg_parent_input.w_03_dlg_parent_input_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FKey                        CallFunc_PointerEvent_GetEffectingButton_ReturnValue             (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsHovered_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// struct FEventReply                 CallFunc_ReleaseMouseCapture_ReturnValue                         (None)

struct FEventReply UW_03_dlg_parent_input_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FKey& CallFunc_PointerEvent_GetEffectingButton_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_IsHovered_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_ReleaseMouseCapture_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_03_dlg_parent_input_C", "OnMouseButtonUp");

	Params::UW_03_dlg_parent_input_C_OnMouseButtonUp_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_PointerEvent_GetEffectingButton_ReturnValue = CallFunc_PointerEvent_GetEffectingButton_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_IsHovered_ReturnValue = CallFunc_IsHovered_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_ReleaseMouseCapture_ReturnValue = CallFunc_ReleaseMouseCapture_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function w_03_dlg_parent_input.w_03_dlg_parent_input_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FKey                        CallFunc_PointerEvent_GetEffectingButton_ReturnValue             (HasGetValueTypeHash)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_CaptureMouse_ReturnValue                                (None)

struct FEventReply UW_03_dlg_parent_input_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FKey& CallFunc_PointerEvent_GetEffectingButton_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, const struct FEventReply& CallFunc_CaptureMouse_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_03_dlg_parent_input_C", "OnMouseButtonDown");

	Params::UW_03_dlg_parent_input_C_OnMouseButtonDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_PointerEvent_GetEffectingButton_ReturnValue = CallFunc_PointerEvent_GetEffectingButton_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_CaptureMouse_ReturnValue = CallFunc_CaptureMouse_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function w_03_dlg_parent_input.w_03_dlg_parent_input_C.OnMouseMove
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (None)

struct FEventReply UW_03_dlg_parent_input_C::OnMouseMove(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, bool CallFunc_IsValid_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_03_dlg_parent_input_C", "OnMouseMove");

	Params::UW_03_dlg_parent_input_C_OnMouseMove_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function w_03_dlg_parent_input.w_03_dlg_parent_input_C.accept_action
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_03_dlg_parent_input_C::Accept_action(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_03_dlg_parent_input_C", "accept_action");

	Params::UW_03_dlg_parent_input_C_Accept_action_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_03_dlg_parent_input.w_03_dlg_parent_input_C.entry_selection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Is_selected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_03_dlg_parent_input_C::Entry_selection(bool Is_selected, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_03_dlg_parent_input_C", "entry_selection");

	Params::UW_03_dlg_parent_input_C_Entry_selection_Params Parms{};

	Parms.Is_selected = Is_selected;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_03_dlg_parent_input.w_03_dlg_parent_input_C.tick_true_visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Visibility_value                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_03_dlg_parent_input_C::Tick_true_visibility(float Visibility_value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_03_dlg_parent_input_C", "tick_true_visibility");

	Params::UW_03_dlg_parent_input_C_Tick_true_visibility_Params Parms{};

	Parms.Visibility_value = Visibility_value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_03_dlg_parent_input.w_03_dlg_parent_input_C.tick_widget_visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRenderOpacity_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_03_dlg_parent_input_C::Tick_widget_visibility(enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_GetRenderOpacity_ReturnValue, float CallFunc_SelectFloat_ReturnValue, float CallFunc_FInterpTo_ReturnValue, float CallFunc_FClamp_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_03_dlg_parent_input_C", "tick_widget_visibility");

	Params::UW_03_dlg_parent_input_C_Tick_widget_visibility_Params Parms{};

	Parms.CallFunc_GetVisibility_ReturnValue = CallFunc_GetVisibility_ReturnValue;
	Parms.CallFunc_GetVisibility_ReturnValue_1 = CallFunc_GetVisibility_ReturnValue_1;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_1 = CallFunc_NotEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_GetRenderOpacity_ReturnValue = CallFunc_GetRenderOpacity_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_03_dlg_parent_input.w_03_dlg_parent_input_C.set_visible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               New_visibility                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_03_dlg_parent_input_C::Set_visible(bool New_visibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_03_dlg_parent_input_C", "set_visible");

	Params::UW_03_dlg_parent_input_C_Set_visible_Params Parms{};

	Parms.New_visibility = New_visibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_03_dlg_parent_input.w_03_dlg_parent_input_C.set_blocking
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               New_block                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_03_dlg_parent_input_C::Set_blocking(bool New_block)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_03_dlg_parent_input_C", "set_blocking");

	Params::UW_03_dlg_parent_input_C_Set_blocking_Params Parms{};

	Parms.New_block = New_block;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_03_dlg_parent_input.w_03_dlg_parent_input_C.clear_visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Clear_quick                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_03_dlg_parent_input_C::Clear_visibility(bool Clear_quick)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_03_dlg_parent_input_C", "clear_visibility");

	Params::UW_03_dlg_parent_input_C_Clear_visibility_Params Parms{};

	Parms.Clear_quick = Clear_quick;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_03_dlg_parent_input.w_03_dlg_parent_input_C.find_key_icon
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Input_id                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Localized_name                                                   (Parm, OutParm)
// class UTexture2D*                  Platform_icon                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Local_converted_id                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Local_settings                                                   (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Local_input_id                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_msl_settings_actor_C*    CallFunc_msl_get_settings_reference_settings_actor               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_msl_settings_actor_C*    CallFunc_msl_get_settings_reference_settings_actor_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_msl_settings_actor_C*    CallFunc_msl_get_settings_reference_settings_actor_2             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// struct FS_input_data               CallFunc_get_input_data_input_data                               (HasGetValueTypeHash)
// struct FInputChord                 CallFunc_get_input_data_positive_chord                           (HasGetValueTypeHash)
// struct FInputChord                 CallFunc_get_input_data_negative_chord                           (HasGetValueTypeHash)
// class FName                        CallFunc_get_input_data_positive_name                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_get_input_data_negative_name                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_get_input_data_input_category                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_get_input_data_is_axis                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_get_input_data_is_trigger                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_ToLower_ReturnValue                                     (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_get_key_visual_data_localized_name                      (None)
// class UTexture2D*                  CallFunc_get_key_visual_data_platform_icon                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_03_dlg_parent_input_C::Find_key_icon(class FName Input_id, class FText* Localized_name, class UTexture2D** Platform_icon, class FName Local_converted_id, class UObject* Local_settings, class FName Local_input_id, class Abp_msl_settings_actor_C* CallFunc_msl_get_settings_reference_settings_actor, class Abp_msl_settings_actor_C* CallFunc_msl_get_settings_reference_settings_actor_1, class Abp_msl_settings_actor_C* CallFunc_msl_get_settings_reference_settings_actor_2, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const struct FS_input_data& CallFunc_get_input_data_input_data, const struct FInputChord& CallFunc_get_input_data_positive_chord, const struct FInputChord& CallFunc_get_input_data_negative_chord, class FName CallFunc_get_input_data_positive_name, class FName CallFunc_get_input_data_negative_name, class FName CallFunc_get_input_data_input_category, bool CallFunc_get_input_data_is_axis, bool CallFunc_get_input_data_is_trigger, const class FString& CallFunc_ToLower_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_get_key_visual_data_localized_name, class UTexture2D* CallFunc_get_key_visual_data_platform_icon, class FName CallFunc_Conv_StringToName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_03_dlg_parent_input_C", "find_key_icon");

	Params::UW_03_dlg_parent_input_C_Find_key_icon_Params Parms{};

	Parms.Input_id = Input_id;
	Parms.Local_converted_id = Local_converted_id;
	Parms.Local_settings = Local_settings;
	Parms.Local_input_id = Local_input_id;
	Parms.CallFunc_msl_get_settings_reference_settings_actor = CallFunc_msl_get_settings_reference_settings_actor;
	Parms.CallFunc_msl_get_settings_reference_settings_actor_1 = CallFunc_msl_get_settings_reference_settings_actor_1;
	Parms.CallFunc_msl_get_settings_reference_settings_actor_2 = CallFunc_msl_get_settings_reference_settings_actor_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_get_input_data_input_data = CallFunc_get_input_data_input_data;
	Parms.CallFunc_get_input_data_positive_chord = CallFunc_get_input_data_positive_chord;
	Parms.CallFunc_get_input_data_negative_chord = CallFunc_get_input_data_negative_chord;
	Parms.CallFunc_get_input_data_positive_name = CallFunc_get_input_data_positive_name;
	Parms.CallFunc_get_input_data_negative_name = CallFunc_get_input_data_negative_name;
	Parms.CallFunc_get_input_data_input_category = CallFunc_get_input_data_input_category;
	Parms.CallFunc_get_input_data_is_axis = CallFunc_get_input_data_is_axis;
	Parms.CallFunc_get_input_data_is_trigger = CallFunc_get_input_data_is_trigger;
	Parms.CallFunc_ToLower_ReturnValue = CallFunc_ToLower_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_get_key_visual_data_localized_name = CallFunc_get_key_visual_data_localized_name;
	Parms.CallFunc_get_key_visual_data_platform_icon = CallFunc_get_key_visual_data_platform_icon;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Localized_name != nullptr)
		*Localized_name = Parms.Localized_name;

	if (Platform_icon != nullptr)
		*Platform_icon = Parms.Platform_icon;

}


// Function w_03_dlg_parent_input.w_03_dlg_parent_input_C.widget_init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Abp_dlg_layout_widget_3d_C*  Parent_widget                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_01_dlg_3d_layout_C*       Layout_widget                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_dlg_branch_choice_info   Choice_info                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FS_dlg_widget_choice        Widget_info                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Widget_index                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Choice_number                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_03_dlg_parent_input_C::Widget_init(class Abp_dlg_layout_widget_3d_C* Parent_widget, class UW_01_dlg_3d_layout_C* Layout_widget, const struct FS_dlg_branch_choice_info& Choice_info, const struct FS_dlg_widget_choice& Widget_info, int32 Widget_index, int32 Choice_number)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_03_dlg_parent_input_C", "widget_init");

	Params::UW_03_dlg_parent_input_C_Widget_init_Params Parms{};

	Parms.Parent_widget = Parent_widget;
	Parms.Layout_widget = Layout_widget;
	Parms.Choice_info = Choice_info;
	Parms.Widget_info = Widget_info;
	Parms.Widget_index = Widget_index;
	Parms.Choice_number = Choice_number;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_03_dlg_parent_input.w_03_dlg_parent_input_C.widget_clear
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_03_dlg_parent_input_C::Widget_clear()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_03_dlg_parent_input_C", "widget_clear");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_03_dlg_parent_input.w_03_dlg_parent_input_C.custom_widget_init
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_03_dlg_parent_input_C::Custom_widget_init()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_03_dlg_parent_input_C", "custom_widget_init");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_03_dlg_parent_input.w_03_dlg_parent_input_C.custom_widget_clear
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_03_dlg_parent_input_C::Custom_widget_clear()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_03_dlg_parent_input_C", "custom_widget_clear");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_03_dlg_parent_input.w_03_dlg_parent_input_C.custom_widget_block
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Is_blocked                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_03_dlg_parent_input_C::Custom_widget_block(bool Is_blocked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_03_dlg_parent_input_C", "custom_widget_block");

	Params::UW_03_dlg_parent_input_C_Custom_widget_block_Params Parms{};

	Parms.Is_blocked = Is_blocked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_03_dlg_parent_input.w_03_dlg_parent_input_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_03_dlg_parent_input_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_03_dlg_parent_input_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_03_dlg_parent_input.w_03_dlg_parent_input_C.custom_widget_tick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delta_seconds                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_03_dlg_parent_input_C::Custom_widget_tick(float Delta_seconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_03_dlg_parent_input_C", "custom_widget_tick");

	Params::UW_03_dlg_parent_input_C_Custom_widget_tick_Params Parms{};

	Parms.Delta_seconds = Delta_seconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_03_dlg_parent_input.w_03_dlg_parent_input_C.parent_tick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delta_seconds                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_03_dlg_parent_input_C::Parent_tick(float Delta_seconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_03_dlg_parent_input_C", "parent_tick");

	Params::UW_03_dlg_parent_input_C_Parent_tick_Params Parms{};

	Parms.Delta_seconds = Delta_seconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_03_dlg_parent_input.w_03_dlg_parent_input_C.custom_widget_selected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Is_selected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_03_dlg_parent_input_C::Custom_widget_selected(bool Is_selected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_03_dlg_parent_input_C", "custom_widget_selected");

	Params::UW_03_dlg_parent_input_C_Custom_widget_selected_Params Parms{};

	Parms.Is_selected = Is_selected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_03_dlg_parent_input.w_03_dlg_parent_input_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UW_03_dlg_parent_input_C::OnMouseLeave(struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_03_dlg_parent_input_C", "OnMouseLeave");

	Params::UW_03_dlg_parent_input_C_OnMouseLeave_Params Parms{};

	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_03_dlg_parent_input.w_03_dlg_parent_input_C.custom_widget_accept
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_03_dlg_parent_input_C::Custom_widget_accept()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_03_dlg_parent_input_C", "custom_widget_accept");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_03_dlg_parent_input.w_03_dlg_parent_input_C.custom_widget_active
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Is_active                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_03_dlg_parent_input_C::Custom_widget_active(bool Is_active)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_03_dlg_parent_input_C", "custom_widget_active");

	Params::UW_03_dlg_parent_input_C_Custom_widget_active_Params Parms{};

	Parms.Is_active = Is_active;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_03_dlg_parent_input.w_03_dlg_parent_input_C.ExecuteUbergraph_w_03_dlg_parent_input
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_is_blocked                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_delta_seconds_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_delta_seconds                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_is_selected                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPointerEvent               K2Node_Event_MouseEvent                                          (ConstParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_is_active                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Abp_dlg_layout_widget_3d_C*  K2Node_CustomEvent_parent_widget                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_01_dlg_3d_layout_C*       K2Node_CustomEvent_layout_widget                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_dlg_branch_choice_info   K2Node_CustomEvent_choice_info                                   (HasGetValueTypeHash)
// struct FS_dlg_widget_choice        K2Node_CustomEvent_widget_info                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_widget_index                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_choice_number                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_03_dlg_parent_input_C::ExecuteUbergraph_w_03_dlg_parent_input(int32 EntryPoint, bool K2Node_CustomEvent_is_blocked, float K2Node_CustomEvent_delta_seconds_1, float K2Node_CustomEvent_delta_seconds, bool K2Node_CustomEvent_is_selected, const struct FPointerEvent& K2Node_Event_MouseEvent, bool CallFunc_IsValid_ReturnValue, bool K2Node_CustomEvent_is_active, class Abp_dlg_layout_widget_3d_C* K2Node_CustomEvent_parent_widget, class UW_01_dlg_3d_layout_C* K2Node_CustomEvent_layout_widget, const struct FS_dlg_branch_choice_info& K2Node_CustomEvent_choice_info, const struct FS_dlg_widget_choice& K2Node_CustomEvent_widget_info, int32 K2Node_CustomEvent_widget_index, int32 K2Node_CustomEvent_choice_number, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_03_dlg_parent_input_C", "ExecuteUbergraph_w_03_dlg_parent_input");

	Params::UW_03_dlg_parent_input_C_ExecuteUbergraph_w_03_dlg_parent_input_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_is_blocked = K2Node_CustomEvent_is_blocked;
	Parms.K2Node_CustomEvent_delta_seconds_1 = K2Node_CustomEvent_delta_seconds_1;
	Parms.K2Node_CustomEvent_delta_seconds = K2Node_CustomEvent_delta_seconds;
	Parms.K2Node_CustomEvent_is_selected = K2Node_CustomEvent_is_selected;
	Parms.K2Node_Event_MouseEvent = K2Node_Event_MouseEvent;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_is_active = K2Node_CustomEvent_is_active;
	Parms.K2Node_CustomEvent_parent_widget = K2Node_CustomEvent_parent_widget;
	Parms.K2Node_CustomEvent_layout_widget = K2Node_CustomEvent_layout_widget;
	Parms.K2Node_CustomEvent_choice_info = K2Node_CustomEvent_choice_info;
	Parms.K2Node_CustomEvent_widget_info = K2Node_CustomEvent_widget_info;
	Parms.K2Node_CustomEvent_widget_index = K2Node_CustomEvent_widget_index;
	Parms.K2Node_CustomEvent_choice_number = K2Node_CustomEvent_choice_number;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


