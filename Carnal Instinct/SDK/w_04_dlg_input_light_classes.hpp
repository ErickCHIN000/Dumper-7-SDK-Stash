#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x42 (0x3F0 - 0x3AE)
// WidgetBlueprintGeneratedClass w_04_dlg_input_light.w_04_dlg_input_light_C
class UW_04_dlg_input_light_C : public UW_03_dlg_parent_input_C
{
public:
	uint8                                        Pad_1F44[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3B0(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetAnimation*                      W_idle;                                            // 0x3B8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      W_timer;                                           // 0x3C0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      W_progress;                                        // 0x3C8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      W_fail;                                            // 0x3D0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                            Action_text;                                       // 0x3D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               bg_base;                                           // 0x3E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_02_dlg_input_icon_C*                W_dlg_icon;                                        // 0x3E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_04_dlg_input_light_C* GetDefaultObj();

	void Example_stat_condition(class FText Input_text, class FText* Result_text, class FText CallFunc_MakeLiteralText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, bool K2Node_SwitchName_CmpSuccess, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, const class FString& CallFunc_ParseOption_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, class FText CallFunc_Conv_NameToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void Timer_anim(float CallFunc_RandomFloatInRange_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_get_choice_by_id_is_valid, int32 CallFunc_get_choice_by_id_branch_index, int32 CallFunc_get_choice_by_id_choice_index, const struct FS_dlg_branch_choice_data& CallFunc_get_choice_by_id_choice_data, const struct FS_dlg_branch_choice_info& CallFunc_get_choice_by_id_choice_info);
	void Refresh_info(bool* Is_success, bool Local_locked, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_get_storage_choice_is_valid, int32 CallFunc_get_storage_choice_branch_index, int32 CallFunc_get_storage_choice_storage_index, const struct FS_dlg_choice_storage& CallFunc_get_storage_choice_choice_storage);
	void Find_icon_auto(bool CallFunc_Not_PreBool_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class FText CallFunc_find_key_icon_localized_name, class UTexture2D* CallFunc_find_key_icon_platform_icon, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, class FText K2Node_Select_Default);
	void Custom_widget_selected(bool Is_selected);
	void Custom_widget_accept();
	void Custom_widget_active(bool Is_active);
	void Custom_widget_tick(float Delta_seconds);
	void Custom_widget_block(bool Is_blocked);
	void Custom_widget_clear();
	void Custom_widget_init();
	void ExecuteUbergraph_w_04_dlg_input_light(int32 EntryPoint, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, bool K2Node_Event_is_selected, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, bool CallFunc_refresh_info_is_success, float CallFunc_RandomFloatInRange_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool K2Node_Event_is_active, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_GetRenderOpacity_ReturnValue, class USoundWave* CallFunc_get_reply_localization_sound_file, float CallFunc_get_reply_localization_sound_length, class FText CallFunc_get_reply_localization_text_localization, float CallFunc_GetRenderOpacity_ReturnValue_1, class FText CallFunc_example_stat_condition_result_text, float CallFunc_FMin_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, float K2Node_Event_delta_seconds, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFontOutlineSettings& K2Node_MakeStruct_FontOutlineSettings, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, bool K2Node_Event_is_blocked, const struct FFontOutlineSettings& K2Node_MakeStruct_FontOutlineSettings_1, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo_1);
};

}


