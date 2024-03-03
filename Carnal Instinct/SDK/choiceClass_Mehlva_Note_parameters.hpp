#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x558 (0x558 - 0x0)
// Function choiceClass_Mehlva_Note.choiceClass_Mehlva_Note_C.choice_info_condition
struct AChoiceClass_Mehlva_Note_C_Choice_info_condition_Params
{
public:
	struct FS_dlg_branch_choice_info             Choice_info;                                       // 0x0(0x114)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	uint8                                        Pad_1524[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_dlg_branch_choice_info             Return_value;                                      // 0x118(0x114)(Parm, OutParm, HasGetValueTypeHash)
	uint8                                        Pad_152D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAC_Inventory_C*                       CallFunc_Get_AC_Inventory_AC_Inventory;            // 0x230(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_ItemData                           CallFunc_Get_Inventory_Item_by_ID_item;            // 0x238(0xE8)(ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_Get_Inventory_Item_by_ID_Found;           // 0x320(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1539[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_dlg_branch_choice_info             K2Node_MakeStruct_s_dlg_branch_choice_info;        // 0x328(0x114)(HasGetValueTypeHash)
	uint8                                        Pad_1542[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_dlg_branch_choice_info             CallFunc_choice_info_condition_return_value;       // 0x440(0x114)(HasGetValueTypeHash)
	uint8                                        Pad_1547[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}
}


