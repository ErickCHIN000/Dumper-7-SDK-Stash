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

// 0x41 (0x41 - 0x0)
// Function object_dlg_condition_parent.object_dlg_condition_parent_C.CheckContentSettings
struct AObject_dlg_condition_parent_C_CheckContentSettings_Params
{
public:
	class FName                                  CLine;                                             // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_dlg_choice_status            Status;                                            // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Content_Warning_Triggered;                         // 0x9(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1EC2[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1ED2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1EDF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAC_Inventory_C*                       CallFunc_Get_AC_Inventory_AC_Inventory;            // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<enum class E_TemplateUI>              CallFunc_Map_Keys_Keys;                            // 0x28(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_TemplateUI                      CallFunc_Array_Get_Item;                           // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x3D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Map_Find_Value;                           // 0x3E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x3F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x360 (0x360 - 0x0)
// Function object_dlg_condition_parent.object_dlg_condition_parent_C.choice_info_condition
struct AObject_dlg_condition_parent_C_Choice_info_condition_Params
{
public:
	struct FS_dlg_branch_choice_info             Choice_info;                                       // 0x0(0x114)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	uint8                                        Pad_1FA5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_dlg_branch_choice_info             Return_value;                                      // 0x118(0x114)(Parm, OutParm, HasGetValueTypeHash)
	uint8                                        Pad_1FAD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class Enum_dlg_choice_status            CStatus;                                           // 0x230(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1FB4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CLine;                                             // 0x234(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_CheckContentSettings_CLine;               // 0x23C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_dlg_choice_status            CallFunc_CheckContentSettings_Status;              // 0x244(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CheckContentSettings_Content_Warning_Triggered; // 0x245(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x246(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1FC0[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_dlg_branch_choice_info             K2Node_MakeStruct_s_dlg_branch_choice_info;        // 0x248(0x114)(HasGetValueTypeHash)
	uint8                                        Pad_1FC5[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0xA0 - 0x0)
// Function object_dlg_condition_parent.object_dlg_condition_parent_C.choice_data_condition
struct AObject_dlg_condition_parent_C_Choice_data_condition_Params
{
public:
	struct FS_dlg_branch_choice                  Choice_data;                                       // 0x0(0x50)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FS_dlg_branch_choice                  Return_value;                                      // 0x50(0x50)(Parm, OutParm, HasGetValueTypeHash)
};

// 0x140 (0x140 - 0x0)
// Function object_dlg_condition_parent.object_dlg_condition_parent_C.reply_info_condition
struct AObject_dlg_condition_parent_C_Reply_info_condition_Params
{
public:
	struct FS_dlg_branch_reply                   Reply_info;                                        // 0x0(0xA0)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FS_dlg_branch_reply                   Return_value;                                      // 0xA0(0xA0)(Parm, OutParm, HasGetValueTypeHash)
};

// 0x3A0 (0x3A0 - 0x0)
// Function object_dlg_condition_parent.object_dlg_condition_parent_C.branch_info_condition
struct AObject_dlg_condition_parent_C_branch_info_condition_Params
{
public:
	struct FS_dlg_branch_data                    branch_info;                                       // 0x0(0x1D0)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FS_dlg_branch_data                    Return_value;                                      // 0x1D0(0x1D0)(Parm, OutParm, HasGetValueTypeHash)
};

// 0x78 (0x78 - 0x0)
// Function object_dlg_condition_parent.object_dlg_condition_parent_C.init_condition_object
struct AObject_dlg_condition_parent_C_Init_condition_object_Params
{
public:
	class Abp_dlg_actor_C*                       Dlg_actor;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Dlg_instigator;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Reply_id;                                          // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Choice_id;                                         // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Choice_data;                                       // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_dlg_condition                      Condition_info;                                    // 0x28(0x48)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class AObject_dlg_condition_parent_C*        Dlg_condition;                                     // 0x70(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function object_dlg_condition_parent.object_dlg_condition_parent_C.ExecuteUbergraph_object_dlg_condition_parent
struct AObject_dlg_condition_parent_C_ExecuteUbergraph_object_dlg_condition_parent_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


