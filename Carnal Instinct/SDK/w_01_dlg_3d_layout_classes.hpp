#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x151 (0x3B1 - 0x260)
// WidgetBlueprintGeneratedClass w_01_dlg_3d_layout.w_01_dlg_3d_layout_C
class UW_01_dlg_3d_layout_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UBorder*                               bg_base;                                           // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          ProgressBar_0;                                     // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             Scale_base;                                        // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            Scroll_base;                                       // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_04_dlg_input_light_C*               W_qte_input_light;                                 // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_04_dlg_input_light_C*               W_qte_input_light_0;                               // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_04_dlg_input_light_C*               W_qte_input_light_1;                               // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_04_dlg_input_light_C*               W_qte_input_light_2;                               // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class Abp_dlg_layout_widget_3d_C*            Parent_widget;                                     // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_dlg_widget_info                    Widget_base;                                       // 0x2B0(0x14)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_236A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          Choice_list;                                       // 0x2C8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UW_03_dlg_parent_input_C*>      Widget_list;                                       // 0x2D8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                        Choice_number;                                     // 0x2E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Select_direction;                                  // 0x2EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Current_selection;                                 // 0x2F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Current_loop;                                      // 0x2F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_dlg_branch_choice_settings         Timer_info;                                        // 0x2F8(0xB0)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	float                                        Timer_progress;                                    // 0x3A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Layout_scaling;                                    // 0x3AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Locked_skip_numbers;                               // 0x3B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UW_01_dlg_3d_layout_C* GetDefaultObj();

	void Find_choice_by_id(class FName Choice_id, bool* Is_valid, int32* Choice_index, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void Find_visible_list(int32 Widget_index, class UW_03_dlg_parent_input_C* Widget_ref, bool* Is_valid, int32* Found_index, class UW_03_dlg_parent_input_C** Found_widget, bool* Is_visible, const TArray<class UW_03_dlg_parent_input_C*>& Local_widget_list, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, class UW_03_dlg_parent_input_C* CallFunc_Array_Get_Item, class UW_03_dlg_parent_input_C* CallFunc_Array_Get_Item_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void Parent_layout_tick(float Delta_seconds, const TArray<float>& Local_widgets_opacity, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_MaxOfFloatArray_IndexOfMaxValue, float CallFunc_MaxOfFloatArray_MaxValue, class UW_03_dlg_parent_input_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Max_ReturnValue);
	void Get_child_widget(int32 Slot_index, bool* Is_valid, class UW_03_dlg_parent_input_C** Widget_reference, bool CallFunc_Array_IsValidIndex_ReturnValue, class UW_03_dlg_parent_input_C* CallFunc_Array_Get_Item);
	void Init_3d_layout(class Abp_dlg_layout_widget_3d_C* bp_widget_parent, const struct FS_dlg_widget_info& Widget_base);
	void Layout_clear_widgets();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Select_child(int32 Select_direction, bool Select_index, bool by_input);
	void Accept_child(bool by_mouse, int32 Mouse_index);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Layout_fade_selections();
	void Select_by_mouse(class UW_03_dlg_parent_input_C* Widget_reference);
	void Init_action(const struct FS_dlg_branch_choice_info& Choice_info, const struct FS_dlg_widget_choice& Widget_info, int32 Last_index);
	void Accept_visual(class FName Choice_id);
	void Choices_loaded();
	void ExecuteUbergraph_w_01_dlg_3d_layout(int32 EntryPoint, int32 Temp_int_Variable, class Abp_dlg_layout_widget_3d_C* K2Node_CustomEvent_bp_widget_parent, const struct FS_dlg_widget_info& K2Node_CustomEvent_widget_base, class UW_04_dlg_input_light_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Max_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, int32 K2Node_CustomEvent_select_direction, bool K2Node_CustomEvent_select_index, bool K2Node_CustomEvent_by_input, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_CustomEvent_by_mouse, int32 K2Node_CustomEvent_mouse_index, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool K2Node_Event_IsDesignTime, int32 CallFunc_Max_ReturnValue_1, class UW_03_dlg_parent_input_C* K2Node_CustomEvent_widget_reference, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_find_visible_list_is_valid, int32 CallFunc_find_visible_list_found_index, class UW_03_dlg_parent_input_C* CallFunc_find_visible_list_found_widget, bool CallFunc_find_visible_list_is_visible, int32 CallFunc_Subtract_IntInt_ReturnValue_2, int32 CallFunc_Max_ReturnValue_2, const struct FS_dlg_branch_choice_info& K2Node_CustomEvent_choice_info, const struct FS_dlg_widget_choice& K2Node_CustomEvent_widget_info, int32 K2Node_CustomEvent_last_index, int32 Temp_int_Variable_1, class FName K2Node_CustomEvent_choice_Id, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_find_choice_by_id_is_valid, int32 CallFunc_find_choice_by_id_choice_index, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_find_visible_list_is_valid_1, int32 CallFunc_find_visible_list_found_index_1, class UW_03_dlg_parent_input_C* CallFunc_find_visible_list_found_widget_1, bool CallFunc_find_visible_list_is_visible_1, bool CallFunc_BooleanOR_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_find_visible_list_is_valid_2, int32 CallFunc_find_visible_list_found_index_2, class UW_03_dlg_parent_input_C* CallFunc_find_visible_list_found_widget_2, bool CallFunc_find_visible_list_is_visible_2, bool CallFunc_get_subtitle_widget_is_valid, class UW_02_dlg_2d_subtitles_C* CallFunc_get_subtitle_widget_subtitles_widget, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_find_visible_list_is_valid_3, int32 CallFunc_find_visible_list_found_index_3, class UW_03_dlg_parent_input_C* CallFunc_find_visible_list_found_widget_3, bool CallFunc_find_visible_list_is_visible_3, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, int32 Temp_int_Variable_2, int32 CallFunc_Subtract_IntInt_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_find_visible_list_is_valid_4, int32 CallFunc_find_visible_list_found_index_4, class UW_03_dlg_parent_input_C* CallFunc_find_visible_list_found_widget_4, bool CallFunc_find_visible_list_is_visible_4, int32 Temp_int_Array_Index_Variable, class UW_03_dlg_parent_input_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_LastIndex_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_SelectInt_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_SelectInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 CallFunc_Array_LastIndex_ReturnValue_3, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, bool CallFunc_find_visible_list_is_valid_5, int32 CallFunc_find_visible_list_found_index_5, class UW_03_dlg_parent_input_C* CallFunc_find_visible_list_found_widget_5, bool CallFunc_find_visible_list_is_visible_5, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue_4, bool CallFunc_GreaterEqual_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class UW_03_dlg_parent_input_C* CallFunc_Array_Get_Item_1, int32 Temp_int_Array_Index_Variable_2, class UW_03_dlg_parent_input_C* CallFunc_Array_Get_Item_2, class UPanelSlot* CallFunc_AddChild_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_GetWorldDeltaSeconds_ReturnValue, bool CallFunc_get_choice_by_id_is_valid, int32 CallFunc_get_choice_by_id_branch_index, int32 CallFunc_get_choice_by_id_choice_index, const struct FS_dlg_branch_choice_data& CallFunc_get_choice_by_id_choice_data, const struct FS_dlg_branch_choice_info& CallFunc_get_choice_by_id_choice_info, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Subtract_IntInt_ReturnValue_5, int32 CallFunc_Subtract_IntInt_ReturnValue_6, bool CallFunc_GreaterEqual_IntInt_ReturnValue_3, bool CallFunc_GreaterEqual_IntInt_ReturnValue_4, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
};

}


