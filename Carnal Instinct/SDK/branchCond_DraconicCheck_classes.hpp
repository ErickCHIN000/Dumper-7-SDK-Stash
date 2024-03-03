#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF (0x330 - 0x321)
// BlueprintGeneratedClass branchCond_DraconicCheck.branchCond_DraconicCheck_C
class AbranchCond_DraconicCheck_C : public AObject_dlg_condition_parent_C
{
public:
	uint8                                        Pad_1C55[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x328(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class AbranchCond_DraconicCheck_C* GetDefaultObj();

	void Choice_info_condition(const struct FS_dlg_branch_choice_info& Choice_info, struct FS_dlg_branch_choice_info* Return_value, const struct FS_dlg_branch_choice_info& Local_choice_info);
	void Choice_data_condition(const struct FS_dlg_branch_choice& Choice_data, struct FS_dlg_branch_choice* Return_value, const struct FS_dlg_branch_choice& Local_choice_data_info);
	void Reply_info_condition(const struct FS_dlg_branch_reply& Reply_info, struct FS_dlg_branch_reply* Return_value, const struct FS_dlg_branch_reply& Local_reply_info, const struct FS_dlg_lead_info& K2Node_MakeStruct_s_dlg_lead_info, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player, class Ubp_quest_component_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_get_quest_active_is_valid, int32 CallFunc_get_quest_active_found_index, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, const struct FS_ItemData& CallFunc_Get_Equipment_Item_by_ID_item, bool CallFunc_Get_Equipment_Item_by_ID_Found, const struct FS_dlg_lead_info& K2Node_MakeStruct_s_dlg_lead_info_1);
	void branch_info_condition(const struct FS_dlg_branch_data& branch_info, struct FS_dlg_branch_data* Return_value, const struct FS_dlg_branch_data& Local_branch_info);
	void ExecuteUbergraph_branchCond_DraconicCheck(int32 EntryPoint);
};

}


