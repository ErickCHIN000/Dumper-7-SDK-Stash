#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x14E (0x3AE - 0x260)
// WidgetBlueprintGeneratedClass w_03_dlg_parent_input.w_03_dlg_parent_input_C
class UW_03_dlg_parent_input_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class Abp_dlg_layout_widget_3d_C*            Parent_widget;                                     // 0x268(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_01_dlg_3d_layout_C*                 Parent_layout;                                     // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_dlg_branch_choice_info             Choice_info;                                       // 0x278(0x114)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	uint8                                        Pad_21B1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_dlg_widget_choice                  Widget_action;                                     // 0x390(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Widget_index;                                      // 0x39C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Widget_number;                                     // 0x3A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Widget_true_visibiltiy;                            // 0x3A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Pc_use_numbers;                                    // 0x3A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Is_active;                                         // 0x3A9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Is_blocked;                                        // 0x3AA(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Is_visible;                                        // 0x3AB(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Is_selected;                                       // 0x3AC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Is_gamepad;                                        // 0x3AD(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UW_03_dlg_parent_input_C* GetDefaultObj();

	void Set_active(bool New_active);
	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FKey& CallFunc_PointerEvent_GetEffectingButton_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_IsHovered_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_ReleaseMouseCapture_ReturnValue);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FKey& CallFunc_PointerEvent_GetEffectingButton_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, const struct FEventReply& CallFunc_CaptureMouse_ReturnValue);
	struct FEventReply OnMouseMove(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, bool CallFunc_IsValid_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue);
	void Accept_action(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void Entry_selection(bool Is_selected, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void Tick_true_visibility(float Visibility_value);
	void Tick_widget_visibility(enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_GetRenderOpacity_ReturnValue, float CallFunc_SelectFloat_ReturnValue, float CallFunc_FInterpTo_ReturnValue, float CallFunc_FClamp_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue);
	void Set_visible(bool New_visibility);
	void Set_blocking(bool New_block);
	void Clear_visibility(bool Clear_quick);
	void Find_key_icon(class FName Input_id, class FText* Localized_name, class UTexture2D** Platform_icon, class FName Local_converted_id, class UObject* Local_settings, class FName Local_input_id, class Abp_msl_settings_actor_C* CallFunc_msl_get_settings_reference_settings_actor, class Abp_msl_settings_actor_C* CallFunc_msl_get_settings_reference_settings_actor_1, class Abp_msl_settings_actor_C* CallFunc_msl_get_settings_reference_settings_actor_2, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const struct FS_input_data& CallFunc_get_input_data_input_data, const struct FInputChord& CallFunc_get_input_data_positive_chord, const struct FInputChord& CallFunc_get_input_data_negative_chord, class FName CallFunc_get_input_data_positive_name, class FName CallFunc_get_input_data_negative_name, class FName CallFunc_get_input_data_input_category, bool CallFunc_get_input_data_is_axis, bool CallFunc_get_input_data_is_trigger, const class FString& CallFunc_ToLower_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_get_key_visual_data_localized_name, class UTexture2D* CallFunc_get_key_visual_data_platform_icon, class FName CallFunc_Conv_StringToName_ReturnValue);
	void Widget_init(class Abp_dlg_layout_widget_3d_C* Parent_widget, class UW_01_dlg_3d_layout_C* Layout_widget, const struct FS_dlg_branch_choice_info& Choice_info, const struct FS_dlg_widget_choice& Widget_info, int32 Widget_index, int32 Choice_number);
	void Widget_clear();
	void Custom_widget_init();
	void Custom_widget_clear();
	void Custom_widget_block(bool Is_blocked);
	void Construct();
	void Custom_widget_tick(float Delta_seconds);
	void Parent_tick(float Delta_seconds);
	void Custom_widget_selected(bool Is_selected);
	void OnMouseLeave(struct FPointerEvent& MouseEvent);
	void Custom_widget_accept();
	void Custom_widget_active(bool Is_active);
	void ExecuteUbergraph_w_03_dlg_parent_input(int32 EntryPoint, bool K2Node_CustomEvent_is_blocked, float K2Node_CustomEvent_delta_seconds_1, float K2Node_CustomEvent_delta_seconds, bool K2Node_CustomEvent_is_selected, const struct FPointerEvent& K2Node_Event_MouseEvent, bool CallFunc_IsValid_ReturnValue, bool K2Node_CustomEvent_is_active, class Abp_dlg_layout_widget_3d_C* K2Node_CustomEvent_parent_widget, class UW_01_dlg_3d_layout_C* K2Node_CustomEvent_layout_widget, const struct FS_dlg_branch_choice_info& K2Node_CustomEvent_choice_info, const struct FS_dlg_widget_choice& K2Node_CustomEvent_widget_info, int32 K2Node_CustomEvent_widget_index, int32 K2Node_CustomEvent_choice_number, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2);
};

}


