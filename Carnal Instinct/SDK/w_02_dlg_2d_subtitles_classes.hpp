#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x16C (0x3CC - 0x260)
// WidgetBlueprintGeneratedClass w_02_dlg_2d_subtitles.w_02_dlg_2d_subtitles_C
class UW_02_dlg_2d_subtitles_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UBorder*                               bg_base;                                           // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              bg_overlay;                                        // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          ProgressBar_0;                                     // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_420;                                          // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_subtitles_0;                                  // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_subtitles_1;                                  // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_subtitles_2;                                  // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_subtitles_3;                                  // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          Vertical_box;                                      // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class Abp_dlg_actor_C*                       Dlg_actor;                                         // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_02_dlg_2d_subtitle_entry_C*         Latest_subtitle;                                   // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UW_02_dlg_2d_subtitle_entry_C*> Subtitles_list;                                    // 0x2C0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<struct FS_dlg_reply_info>             Reply_stack;                                       // 0x2D0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         Is_last_reply;                                     // 0x2E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3AF[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_dlg_reply_info                     Latest_reply;                                      // 0x2E8(0xD4)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	uint8                                        Pad_3B2[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          Reminder_timer;                                    // 0x3C0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        Progress_value;                                    // 0x3C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_02_dlg_2d_subtitles_C* GetDefaultObj();

	void Find_subtitles_opacity(float* Max_opacity, const TArray<float>& Local_opacity, int32 Temp_int_Array_Index_Variable, int32 CallFunc_MaxOfFloatArray_IndexOfMaxValue, float CallFunc_MaxOfFloatArray_MaxValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UW_02_dlg_2d_subtitle_entry_C* CallFunc_Array_Get_Item, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Max_ReturnValue, float CallFunc_GetRenderOpacity_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void Init_widget();
	void Reply_subtitles(class Abp_dlg_actor_C* Dlg_actor, const struct FS_dlg_reply_info& Reply_info);
	void Reply_clear(class Abp_dlg_actor_C* Dlg_actor, bool Remove_quick, bool Clear_All, bool Last_reply);
	void Update_reminder();
	void Event_timer();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void ExecuteUbergraph_w_02_dlg_2d_subtitles(int32 EntryPoint, class FText CallFunc_MakeLiteralText_ReturnValue, int32 Temp_int_Array_Index_Variable, class Abp_dlg_actor_C* K2Node_CustomEvent_dlg_actor_1, const struct FS_dlg_reply_info& K2Node_CustomEvent_reply_info, class Abp_dlg_actor_C* K2Node_CustomEvent_dlg_actor, bool K2Node_CustomEvent_remove_quick, bool K2Node_CustomEvent_clear_all, bool K2Node_CustomEvent_last_reply, bool CallFunc_Array_IsValidIndex_ReturnValue, class Abp_msl_localization_actor_C* CallFunc_msl_get_localization_reference_localization_actor, bool CallFunc_get_dlg_actor_is_valid, bool CallFunc_get_dlg_actor_is_component_valid, int32 CallFunc_get_dlg_actor_actor_index, class AActor* CallFunc_get_dlg_actor_actor_reference, class Ubp_dlg_component_C* CallFunc_get_dlg_actor_dlg_component, const struct FS_dlg_bind_actor_info& CallFunc_get_dlg_actor_actor_dynamic, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_get_line_localization_is_valid_text, bool CallFunc_get_line_localization_is_valid_audio, bool CallFunc_get_line_localization_line_from_data, class FText CallFunc_get_line_localization_line_text, class USoundWave* CallFunc_get_line_localization_line_file, float CallFunc_get_line_localization_line_length, int32 CallFunc_get_line_localization_line_scale, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_find_subtitles_opacity_max_opacity, float CallFunc_GetWorldDeltaSeconds_ReturnValue, class UW_02_dlg_2d_subtitle_entry_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Max_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UW_02_dlg_2d_subtitle_entry_C* CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, float CallFunc_MapRangeClamped_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue_1, class UW_02_dlg_2d_subtitle_entry_C* Temp_object_Variable, class USoundWave* CallFunc_get_reply_localization_sound_file, float CallFunc_get_reply_localization_sound_length, class FText CallFunc_get_reply_localization_text_localization, int32 CallFunc_Array_Add_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, bool CallFunc_TextIsEmpty_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class UW_02_dlg_2d_subtitle_entry_C* CallFunc_Create_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, class Abp_msl_localization_actor_C* CallFunc_msl_get_localization_reference_localization_actor_1, bool CallFunc_get_line_localization_is_valid_text_1, bool CallFunc_get_line_localization_is_valid_audio_1, bool CallFunc_get_line_localization_line_from_data_1, class FText CallFunc_get_line_localization_line_text_1, class USoundWave* CallFunc_get_line_localization_line_file_1, float CallFunc_get_line_localization_line_length_1, int32 CallFunc_get_line_localization_line_scale_1, bool CallFunc_TextIsEmpty_ReturnValue_1, class FText CallFunc_TextToLower_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, class UPanelSlot* CallFunc_AddChild_ReturnValue, float CallFunc_GetRenderOpacity_ReturnValue, float CallFunc_FInterpTo_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
};

}


