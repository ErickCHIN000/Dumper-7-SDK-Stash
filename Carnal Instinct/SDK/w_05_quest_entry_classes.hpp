#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3F (0x2C0 - 0x281)
// WidgetBlueprintGeneratedClass w_05_quest_entry.w_05_quest_entry_C
class UW_05_quest_entry_C : public UW_03_quest_button_parent_C
{
public:
	uint8                                        Pad_21E0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x288(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UBorder*                               bg_color;                                          // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               bg_text_hover;                                     // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_status;                                        // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_info;                                         // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class Abp_quest_actor_C*                     Quest_actor;                                       // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Quest_id;                                          // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_05_quest_entry_C* GetDefaultObj();

	void Custom_visuals(bool Is_selected, bool Is_hovered);
	void Init_quest(class Abp_quest_actor_C* Quest_actor, class FName Quest_id);
	void ExecuteUbergraph_w_05_quest_entry(int32 EntryPoint, class Abp_msl_localization_actor_C* CallFunc_msl_get_localization_reference_localization_actor, bool K2Node_Event_is_selected, bool K2Node_Event_is_hovered, class Abp_quest_actor_C* K2Node_CustomEvent_quest_actor, class FName K2Node_CustomEvent_quest_id, bool CallFunc_get_line_localization_is_valid_text, bool CallFunc_get_line_localization_is_valid_audio, bool CallFunc_get_line_localization_line_from_data, class FText CallFunc_get_line_localization_line_text, class USoundWave* CallFunc_get_line_localization_line_file, float CallFunc_get_line_localization_line_length, int32 CallFunc_get_line_localization_line_scale, bool K2Node_SwitchEnum_CmpSuccess);
};

}


