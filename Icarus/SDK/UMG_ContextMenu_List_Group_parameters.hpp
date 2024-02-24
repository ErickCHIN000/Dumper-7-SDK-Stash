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

// 0x39 (0x39 - 0x0)
// Function UMG_ContextMenu_List_Group.UMG_ContextMenu_List_Group_C.SetGroupInfo
struct UUMG_ContextMenu_List_Group_C_SetGroupInfo_Params
{
public:
	struct FContextMenuGroupType                 GroupType;                                         // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         ShowDivider;                                       // 0x38(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function UMG_ContextMenu_List_Group.UMG_ContextMenu_List_Group_C.AddItem
struct UUMG_ContextMenu_List_Group_C_AddItem_Params
{
public:
	class UUserWidget*                           ItemWidget;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x61 (0x61 - 0x0)
// Function UMG_ContextMenu_List_Group.UMG_ContextMenu_List_Group_C.ExecuteUbergraph_UMG_ContextMenu_List_Group
struct UUMG_ContextMenu_List_Group_C_ExecuteUbergraph_UMG_ContextMenu_List_Group_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4022[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FContextMenuGroupType                 K2Node_CustomEvent_GroupType;                      // 0x8(0x38)(None)
	bool                                         K2Node_CustomEvent_ShowDivider;                    // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_402E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUserWidget*                           K2Node_CustomEvent_ItemWidget;                     // 0x48(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4037[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x58(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


