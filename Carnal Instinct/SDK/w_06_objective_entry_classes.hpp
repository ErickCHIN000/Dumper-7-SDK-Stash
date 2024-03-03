#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1D8 (0x459 - 0x281)
// WidgetBlueprintGeneratedClass w_06_objective_entry.w_06_objective_entry_C
class UW_06_objective_entry_C : public UW_03_quest_button_parent_C
{
public:
	uint8                                        Pad_AA4[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x288(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UBorder*                               bg_color;                                          // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_status;                                        // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_info;                                         // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          Vertical_sub;                                      // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_07_sub_objective_C*                 W_07_sub_objective;                                // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class Abp_quest_actor_C*                     Quest_actor;                                       // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UW_07_sub_objective_C*>         Sub_objective_widgets;                             // 0x2C0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FS_quest_objective_data               Objective_data;                                    // 0x2D0(0x188)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         Is_current;                                        // 0x458(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UW_06_objective_entry_C* GetDefaultObj();

	void Custom_visuals(bool Is_selected, bool Is_hovered);
	void Init_objective(class Abp_quest_actor_C* Quest_actor, const struct FS_quest_objective_data& Objective_data, bool Is_last);
	void ExecuteUbergraph_w_06_objective_entry(int32 EntryPoint, class Abp_msl_localization_actor_C* CallFunc_msl_get_localization_reference_localization_actor, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_Event_is_selected, bool K2Node_Event_is_hovered, class Abp_quest_actor_C* K2Node_CustomEvent_quest_actor, const struct FS_quest_objective_data& K2Node_CustomEvent_objective_data, bool K2Node_CustomEvent_is_last, bool CallFunc_get_line_localization_is_valid_text, bool CallFunc_get_line_localization_is_valid_audio, bool CallFunc_get_line_localization_line_from_data, class FText CallFunc_get_line_localization_line_text, class USoundWave* CallFunc_get_line_localization_line_file, float CallFunc_get_line_localization_line_length, int32 CallFunc_get_line_localization_line_scale, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UW_07_sub_objective_C* CallFunc_Create_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FS_quest_sub_objective_data& CallFunc_Array_Get_Item, int32 CallFunc_Array_Add_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UPanelSlot* CallFunc_AddChild_ReturnValue);
};

}


