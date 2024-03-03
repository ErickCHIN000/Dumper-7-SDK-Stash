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

// 0x518 (0x518 - 0x0)
// Function choiceClass_hidden_hasFuckedScribe.choiceClass_hidden_hasFuckedScribe_C.choice_info_condition
struct AChoiceClass_hidden_hasFuckedScribe_C_Choice_info_condition_Params
{
public:
	struct FS_dlg_branch_choice_info             Choice_info;                                       // 0x0(0x114)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	uint8                                        Pad_1EE4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_dlg_branch_choice_info             Return_value;                                      // 0x118(0x114)(Parm, OutParm, HasGetValueTypeHash)
	uint8                                        Pad_1EF0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_dlg_branch_reply                   Reply_info;                                        // 0x230(0xA0)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class ANpc_scribe_C*                         CallFunc_GetActorOfClass_ReturnValue;              // 0x2D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x2D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1EF9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_FTrunc_ReturnValue;                       // 0x2DC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x2E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F09[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_dlg_branch_choice_info             K2Node_MakeStruct_s_dlg_branch_choice_info;        // 0x2E8(0x114)(HasGetValueTypeHash)
	uint8                                        Pad_1F11[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_dlg_branch_choice_info             CallFunc_choice_info_condition_return_value;       // 0x400(0x114)(HasGetValueTypeHash)
	uint8                                        Pad_1F14[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}
}


