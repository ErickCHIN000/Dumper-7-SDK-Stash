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

// 0x510 (0x510 - 0x0)
// Function choiceClass_50gCent.choiceClass_50gCent_C.choice_info_condition
struct AChoiceClass_50gCent_C_Choice_info_condition_Params
{
public:
	struct FS_dlg_branch_choice_info             Choice_info;                                       // 0x0(0x114)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	uint8                                        Pad_1F89[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_dlg_branch_choice_info             Return_value;                                      // 0x118(0x114)(Parm, OutParm, HasGetValueTypeHash)
	uint8                                        Pad_1F8F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_dlg_branch_reply                   Reply_info;                                        // 0x230(0xA0)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class UAC_Inventory_C*                       CallFunc_Get_AC_Inventory_AC_Inventory;            // 0x2D0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_dlg_convert_dlg_condition_return_condition; // 0x2D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0x2D9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1FA0[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_dlg_branch_choice_info             K2Node_MakeStruct_s_dlg_branch_choice_info;        // 0x2E0(0x114)(HasGetValueTypeHash)
	uint8                                        Pad_1FAB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_dlg_branch_choice_info             CallFunc_choice_info_condition_return_value;       // 0x3F8(0x114)(HasGetValueTypeHash)
	uint8                                        Pad_1FB1[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}
}


