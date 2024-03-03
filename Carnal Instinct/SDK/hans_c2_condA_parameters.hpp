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

// 0x470 (0x470 - 0x0)
// Function hans_c2_condA.hans_c2_condA_C.choice_info_condition
struct AHans_c2_condA_C_Choice_info_condition_Params
{
public:
	struct FS_dlg_branch_choice_info             Choice_info;                                       // 0x0(0x114)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	uint8                                        Pad_14D2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_dlg_branch_choice_info             Return_value;                                      // 0x118(0x114)(Parm, OutParm, HasGetValueTypeHash)
	uint8                                        Pad_14D6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_dlg_branch_choice_info             Local_choice_info;                                 // 0x230(0x114)(Edit, BlueprintVisible, HasGetValueTypeHash)
	uint8                                        Pad_14D8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_get_storage_choice_is_valid;              // 0x348(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_14D9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_get_storage_choice_branch_index;          // 0x34C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_get_storage_choice_storage_index;         // 0x350(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_dlg_choice_storage                 CallFunc_get_storage_choice_choice_storage;        // 0x354(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_14E1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_dlg_branch_choice_info             K2Node_MakeStruct_s_dlg_branch_choice_info;        // 0x358(0x114)(HasGetValueTypeHash)
	uint8                                        Pad_14E3[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xF0 (0xF0 - 0x0)
// Function hans_c2_condA.hans_c2_condA_C.choice_data_condition
struct AHans_c2_condA_C_Choice_data_condition_Params
{
public:
	struct FS_dlg_branch_choice                  Choice_data;                                       // 0x0(0x50)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FS_dlg_branch_choice                  Return_value;                                      // 0x50(0x50)(Parm, OutParm, HasGetValueTypeHash)
	struct FS_dlg_branch_choice                  Local_choice_data_info;                            // 0xA0(0x50)(Edit, BlueprintVisible, HasGetValueTypeHash)
};

// 0x1E0 (0x1E0 - 0x0)
// Function hans_c2_condA.hans_c2_condA_C.reply_info_condition
struct AHans_c2_condA_C_Reply_info_condition_Params
{
public:
	struct FS_dlg_branch_reply                   Reply_info;                                        // 0x0(0xA0)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FS_dlg_branch_reply                   Return_value;                                      // 0xA0(0xA0)(Parm, OutParm, HasGetValueTypeHash)
	struct FS_dlg_branch_reply                   Local_reply_info;                                  // 0x140(0xA0)(Edit, BlueprintVisible, HasGetValueTypeHash)
};

// 0x570 (0x570 - 0x0)
// Function hans_c2_condA.hans_c2_condA_C.branch_info_condition
struct AHans_c2_condA_C_branch_info_condition_Params
{
public:
	struct FS_dlg_branch_data                    branch_info;                                       // 0x0(0x1D0)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FS_dlg_branch_data                    Return_value;                                      // 0x1D0(0x1D0)(Parm, OutParm, HasGetValueTypeHash)
	struct FS_dlg_branch_data                    Local_branch_info;                                 // 0x3A0(0x1D0)(Edit, BlueprintVisible, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function hans_c2_condA.hans_c2_condA_C.ExecuteUbergraph_hans_c2_condA
struct AHans_c2_condA_C_ExecuteUbergraph_hans_c2_condA_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


