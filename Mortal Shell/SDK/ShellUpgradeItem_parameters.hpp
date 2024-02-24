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

// 0x8 (0x8 - 0x0)
// Function ShellUpgradeItem.ShellUpgradeItem_C.Initialize
struct UShellUpgradeItem_C_Initialize_Params
{
public:
	class FName                                  UpgradeID;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ShellUpgradeItem.ShellUpgradeItem_C.SetHighlighted
struct UShellUpgradeItem_C_SetHighlighted_Params
{
public:
	bool                                         Highlighted;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1B8 (0x1B8 - 0x0)
// Function ShellUpgradeItem.ShellUpgradeItem_C.ExecuteUbergraph_ShellUpgradeItem
struct UShellUpgradeItem_C_ExecuteUbergraph_ShellUpgradeItem_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_1;                              // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_2;                              // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_19BF[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_CustomEvent_UpgradeID;                      // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FShellUpgradeData                     CallFunc_GetShellUpgradeRow_Out_Row;               // 0x10(0x88)(HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Highlighted;                    // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_19C7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0xA0(0x18)(None)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue_1;             // 0xB8(0x18)(None)
	struct FSlateBrush                           K2Node_Select_Default;                             // 0xD0(0x88)(None)
	enum class EArmorTypes                       CallFunc_GetShell_CurrentArmor;                    // 0x158(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_19D5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetNamedPCInt_Value;                      // 0x15C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetShellBondingPoints_Points;             // 0x160(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x164(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x165(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_19E5[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_Select_Default_1;                           // 0x168(0x28)(None)
	struct FSlateColor                           K2Node_Select_Default_2;                           // 0x190(0x28)(None)
};

// 0x8 (0x8 - 0x0)
// Function ShellUpgradeItem.ShellUpgradeItem_C.OnBGClicked__DelegateSignature
struct UShellUpgradeItem_C_OnBGClicked__DelegateSignature_Params
{
public:
	class UShellUpgradeItem_C*                   Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ShellUpgradeItem.ShellUpgradeItem_C.OnBGHoverEnd__DelegateSignature
struct UShellUpgradeItem_C_OnBGHoverEnd__DelegateSignature_Params
{
public:
	class UShellUpgradeItem_C*                   Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ShellUpgradeItem.ShellUpgradeItem_C.OnBGHoverStart__DelegateSignature
struct UShellUpgradeItem_C_OnBGHoverStart__DelegateSignature_Params
{
public:
	class UShellUpgradeItem_C*                   Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


