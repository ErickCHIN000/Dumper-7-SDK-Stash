#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x108 (0x368 - 0x260)
// WidgetBlueprintGeneratedClass w_03_dlg_3d_subtitles.w_03_dlg_3d_subtitles_C
class UW_03_dlg_3d_subtitles_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class USizeBox*                              base_size_box;                                     // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_subtitles;                                    // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class Abp_dlg_actor_C*                       Dlg_actor;                                         // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class Abp_dlg_subtitles_widget_3d_C*         Dlg_subtitles;                                     // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Is_visible;                                        // 0x288(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1AE4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_dlg_reply_info                     Latest_reply;                                      // 0x290(0xD4)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	uint8                                        Pad_1AE8[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UW_03_dlg_3d_subtitles_C* GetDefaultObj();

	void Set_visibility(bool New_visibility);
	void Clear_visibility(bool Clear_quick);
	void Tick_visibility(float CallFunc_GetRenderOpacity_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_SelectFloat_ReturnValue, float CallFunc_FInterpTo_ReturnValue, float CallFunc_FClamp_ReturnValue);
	void Init_widget(class Abp_dlg_subtitles_widget_3d_C* Dlg_subtitles);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Update_reply(const struct FS_dlg_reply_info& Reply_info, class Abp_dlg_actor_C* Dlg_actor);
	void Show_name(class FName Name_id);
	void Construct();
	void ExecuteUbergraph_w_03_dlg_3d_subtitles(int32 EntryPoint, class Abp_msl_localization_actor_C* CallFunc_msl_get_localization_reference_localization_actor, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_GetDistanceTo_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FS_dlg_reply_info& K2Node_CustomEvent_reply_info, class Abp_dlg_actor_C* K2Node_CustomEvent_dlg_actor, class FName K2Node_CustomEvent_name_id, class Abp_dlg_subtitles_widget_3d_C* K2Node_CustomEvent_dlg_subtitles, bool CallFunc_get_dlg_actor_is_valid, bool CallFunc_get_dlg_actor_is_component_valid, int32 CallFunc_get_dlg_actor_actor_index, class AActor* CallFunc_get_dlg_actor_actor_reference, class Ubp_dlg_component_C* CallFunc_get_dlg_actor_dlg_component, const struct FS_dlg_bind_actor_info& CallFunc_get_dlg_actor_actor_dynamic, bool CallFunc_get_line_localization_is_valid_text, bool CallFunc_get_line_localization_is_valid_audio, bool CallFunc_get_line_localization_line_from_data, class FText CallFunc_get_line_localization_line_text, class USoundWave* CallFunc_get_line_localization_line_file, float CallFunc_get_line_localization_line_length, int32 CallFunc_get_line_localization_line_scale, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class Abp_msl_localization_actor_C* CallFunc_msl_get_localization_reference_localization_actor_1, class USoundWave* CallFunc_get_reply_localization_sound_file, float CallFunc_get_reply_localization_sound_length, class FText CallFunc_get_reply_localization_text_localization, bool CallFunc_get_line_localization_is_valid_text_1, bool CallFunc_get_line_localization_is_valid_audio_1, bool CallFunc_get_line_localization_line_from_data_1, class FText CallFunc_get_line_localization_line_text_1, class USoundWave* CallFunc_get_line_localization_line_file_1, float CallFunc_get_line_localization_line_length_1, int32 CallFunc_get_line_localization_line_scale_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
};

}


