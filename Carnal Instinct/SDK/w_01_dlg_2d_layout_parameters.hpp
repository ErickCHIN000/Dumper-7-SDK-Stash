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

// 0x10 (0x10 - 0x0)
// Function w_01_dlg_2d_layout.w_01_dlg_2d_layout_C.set_child_layout
struct UW_01_dlg_2d_layout_C_Set_child_layout_Params
{
public:
	TArray<class UW_01_dlg_3d_layout_C*>         Child_widgets;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0x20 (0x20 - 0x0)
// Function w_01_dlg_2d_layout.w_01_dlg_2d_layout_C.get_child_layout
struct UW_01_dlg_2d_layout_C_Get_child_layout_Params
{
public:
	int32                                        Widget_index;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Is_valid;                                          // 0x4(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_574[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_01_dlg_3d_layout_C*                 Widget_reference;                                  // 0x8(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_57D[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_01_dlg_3d_layout_C*                 CallFunc_Array_Get_Item;                           // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function w_01_dlg_2d_layout.w_01_dlg_2d_layout_C.ExecuteUbergraph_w_01_dlg_2d_layout
struct UW_01_dlg_2d_layout_C_ExecuteUbergraph_w_01_dlg_2d_layout_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5B4[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UW_01_dlg_3d_layout_C*>         K2Node_MakeArray_Array;                            // 0x8(0x10)(ReferenceParm, ContainsInstancedReference)
};

}
}


