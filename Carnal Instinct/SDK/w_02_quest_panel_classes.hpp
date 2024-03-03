#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x130 (0x390 - 0x260)
// WidgetBlueprintGeneratedClass w_02_quest_panel.w_02_quest_panel_C
class UW_02_quest_panel_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UBorder*                               bg_empt_desc;                                      // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               bg_empt_ob;                                        // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               bg_empt_qst;                                       // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        Horizontal_tabs;                                   // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            Scroll_description;                                // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            Scroll_objectives;                                 // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            Scroll_quest;                                      // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_empty_descriptions;                           // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_empty_objectives;                             // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_empty_quests;                                 // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_label_descriptions;                           // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_label_objectives;                             // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_label_quest;                                  // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_05_quest_entry_C*                   W_03_quest_entry;                                  // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_05_quest_entry_C*                   W_03_quest_entry_0;                                // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_04_quest_tab_C*                     W_04_quest_tab;                                    // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_04_quest_tab_C*                     W_04_quest_tab_0;                                  // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_04_quest_tab_C*                     W_04_quest_tab_1;                                  // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_04_quest_tab_C*                     W_04_quest_tab_2;                                  // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_08_description_entry_C*             W_05_description_entry;                            // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_08_description_entry_C*             W_05_description_entry_0;                          // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_06_objective_entry_C*               W_06_objective_entry;                              // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_06_objective_entry_C*               W_06_objective_entry_1;                            // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         Is_open;                                           // 0x320(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_101F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class Ubp_quest_component_C*                 Quest_owner;                                       // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Selected_tab;                                      // 0x330(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Selected_quest;                                    // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          Tabs_list;                                         // 0x340(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UW_04_quest_tab_C*>             Tab_widgets;                                       // 0x350(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UW_05_quest_entry_C*>           Quest_widgets;                                     // 0x360(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UW_03_quest_button_parent_C*>   Objective_widgets;                                 // 0x370(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UW_08_description_entry_C*>     Description_widgets;                               // 0x380(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UW_02_quest_panel_C* GetDefaultObj();

	void Find_quests_by_category(TArray<class FName>* Sorted_quest_list, const TArray<class FName>& Local_quest_list, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_SwitchName_CmpSuccess, int32 CallFunc_Array_Length_ReturnValue, class Abp_quest_actor_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_3, bool CallFunc_Array_Contains_ReturnValue);
	void Init_quest(class Ubp_quest_component_C* Quest_component);
	void Refresh_quests();
	void Quest_interaction(class FName Widget_type, int32 Widget_index, bool Is_selected, bool Double_click);
	void Open_journal(bool Close_journal);
	void Clear_journal();
	void Clear_qst();
	void Refresh_objectives();
	void Clear_objectives();
	void Refresh_description();
	void Clear_description();
	void ExecuteUbergraph_w_02_quest_panel(int32 EntryPoint, class UW_06_objective_entry_C* CallFunc_Create_ReturnValue, int32 Temp_int_Array_Index_Variable, class UW_04_quest_tab_C* CallFunc_Create_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class Ubp_quest_component_C* K2Node_CustomEvent_quest_component, class UW_04_quest_tab_C* CallFunc_Array_Get_Item, TArray<class FName>& CallFunc_find_quests_by_category_sorted_quest_list, int32 CallFunc_Array_Length_ReturnValue_1, class FName K2Node_CustomEvent_widget_type, int32 K2Node_CustomEvent_widget_index, bool K2Node_CustomEvent_is_selected, bool K2Node_CustomEvent_double_click, bool K2Node_SwitchName_CmpSuccess, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool K2Node_CustomEvent_close_journal, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_Array_IsValidIndex_ReturnValue, class FName CallFunc_Array_Get_Item_1, int32 Temp_int_Array_Index_Variable_2, bool CallFunc_get_quest_is_valid, int32 CallFunc_get_quest_found_index, class Abp_quest_actor_C* CallFunc_get_quest_quest_actor, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_Array_IsValidIndex_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_3, class FName CallFunc_Array_Get_Item_2, class UW_04_quest_tab_C* CallFunc_Array_Get_Item_3, bool CallFunc_get_quest_is_valid_1, int32 CallFunc_get_quest_found_index_1, class Abp_quest_actor_C* CallFunc_get_quest_quest_actor_1, class UW_05_quest_entry_C* CallFunc_Array_Get_Item_4, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_3, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_3, class UW_05_quest_entry_C* CallFunc_Create_ReturnValue_2, bool CallFunc_get_quest_is_valid_2, int32 CallFunc_get_quest_found_index_2, class Abp_quest_actor_C* CallFunc_get_quest_quest_actor_2, class UPanelSlot* CallFunc_AddChild_ReturnValue_2, class FName CallFunc_Array_Get_Item_5, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_2, int32 Temp_int_Array_Index_Variable_4, const struct FS_quest_objective_data& CallFunc_Array_Get_Item_6, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_4, bool CallFunc_get_quest_active_is_valid, int32 CallFunc_get_quest_active_found_index, bool CallFunc_Less_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_4, bool CallFunc_Array_IsValidIndex_ReturnValue_3, bool CallFunc_get_layout_widget_is_valid, class UW_01_quest_layout_C* CallFunc_get_layout_widget_quest_widget, class UW_08_description_entry_C* CallFunc_Create_ReturnValue_3, class UPanelSlot* CallFunc_AddChild_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue_3, class UW_05_quest_entry_C* CallFunc_Array_Get_Item_7, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_4, bool CallFunc_EqualEqual_NameName_ReturnValue);
};

}


