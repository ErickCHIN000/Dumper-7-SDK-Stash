#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF (0x330 - 0x321)
// BlueprintGeneratedClass branchCond_Harness.branchCond_Harness_C
class AbranchCond_Harness_C : public AObject_dlg_condition_parent_C
{
public:
	uint8                                        Pad_2091[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x328(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class AbranchCond_Harness_C* GetDefaultObj();

	void Choice_info_condition(const struct FS_dlg_branch_choice_info& Choice_info, struct FS_dlg_branch_choice_info* Return_value, const struct FS_dlg_branch_choice_info& Local_choice_info);
	void Choice_data_condition(const struct FS_dlg_branch_choice& Choice_data, struct FS_dlg_branch_choice* Return_value, const struct FS_dlg_branch_choice& Local_choice_data_info);
	void Reply_info_condition(const struct FS_dlg_branch_reply& Reply_info, struct FS_dlg_branch_reply* Return_value, const struct FS_dlg_branch_reply& Local_reply_info, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, const struct FS_ItemData& CallFunc_Get_Inventory_Item_by_ID_item, bool CallFunc_Get_Inventory_Item_by_ID_Found, const struct FS_dlg_lead_info& K2Node_MakeStruct_s_dlg_lead_info);
	void branch_info_condition(const struct FS_dlg_branch_data& branch_info, struct FS_dlg_branch_data* Return_value, const struct FS_dlg_branch_data& Local_branch_info);
	void ExecuteUbergraph_branchCond_Harness(int32 EntryPoint);
};

}


