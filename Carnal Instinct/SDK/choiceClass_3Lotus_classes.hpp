#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xAF (0x3D0 - 0x321)
// BlueprintGeneratedClass choiceClass_3Lotus.choiceClass_3Lotus_C
class AChoiceClass_3Lotus_C : public AObject_dlg_condition_parent_C
{
public:
	enum class Enum_dlg_choice_status            Status;                                            // 0x321(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1FE3[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_dlg_branch_reply                   Reply_info;                                        // 0x328(0xA0)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class FName                                  Choice_Line;                                       // 0x3C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AChoiceClass_3Lotus_C* GetDefaultObj();

	void Choice_info_condition(const struct FS_dlg_branch_choice_info& Choice_info, struct FS_dlg_branch_choice_info* Return_value, const struct FS_ItemData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, bool CallFunc_IsValid_ReturnValue, const struct FS_ItemData& CallFunc_Get_Inventory_Item_by_Data_Item, bool CallFunc_Get_Inventory_Item_by_Data_Found, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const struct FS_dlg_branch_choice_info& K2Node_MakeStruct_s_dlg_branch_choice_info, bool CallFunc_BooleanAND_ReturnValue, const struct FS_dlg_branch_choice_info& CallFunc_choice_info_condition_return_value);
};

}


