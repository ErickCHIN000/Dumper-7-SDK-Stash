#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF (0x330 - 0x321)
// BlueprintGeneratedClass hans_c2_condA.hans_c2_condA_C
class AHans_c2_condA_C : public AObject_dlg_condition_parent_C
{
public:
	uint8                                        Pad_15D7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x328(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class AHans_c2_condA_C* GetDefaultObj();

	void Choice_info_condition(const struct FS_dlg_branch_choice_info& Choice_info, struct FS_dlg_branch_choice_info* Return_value, const struct FS_dlg_branch_choice_info& Local_choice_info, bool CallFunc_get_storage_choice_is_valid, int32 CallFunc_get_storage_choice_branch_index, int32 CallFunc_get_storage_choice_storage_index, const struct FS_dlg_choice_storage& CallFunc_get_storage_choice_choice_storage, const struct FS_dlg_branch_choice_info& K2Node_MakeStruct_s_dlg_branch_choice_info);
	void Choice_data_condition(const struct FS_dlg_branch_choice& Choice_data, struct FS_dlg_branch_choice* Return_value, const struct FS_dlg_branch_choice& Local_choice_data_info);
	void Reply_info_condition(const struct FS_dlg_branch_reply& Reply_info, struct FS_dlg_branch_reply* Return_value, const struct FS_dlg_branch_reply& Local_reply_info);
	void branch_info_condition(const struct FS_dlg_branch_data& branch_info, struct FS_dlg_branch_data* Return_value, const struct FS_dlg_branch_data& Local_branch_info);
	void ExecuteUbergraph_hans_c2_condA(int32 EntryPoint);
};

}


