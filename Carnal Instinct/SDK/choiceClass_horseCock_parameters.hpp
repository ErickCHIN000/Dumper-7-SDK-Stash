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

// 0x46B (0x46B - 0x0)
// Function choiceClass_horseCock.choiceClass_horseCock_C.choice_info_condition
struct AChoiceClass_horseCock_C_Choice_info_condition_Params
{
public:
	struct FS_dlg_branch_choice_info             Choice_info;                                       // 0x0(0x114)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	uint8                                        Pad_2030[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_dlg_branch_choice_info             Return_value;                                      // 0x118(0x114)(Parm, OutParm, HasGetValueTypeHash)
	uint8                                        Pad_2035[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAC_Inventory_C*                       CallFunc_Get_AC_Inventory_AC_Inventory;            // 0x230(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_dlg_branch_choice_info             K2Node_MakeStruct_s_dlg_branch_choice_info;        // 0x238(0x114)(HasGetValueTypeHash)
	uint8                                        Pad_203C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_dlg_branch_choice_info             CallFunc_choice_info_condition_return_value;       // 0x350(0x114)(HasGetValueTypeHash)
	uint8                                        Pad_2042[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x468(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_ClassClass_ReturnValue;          // 0x469(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x46A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

