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

// 0x31 (0x31 - 0x0)
// Function wid_SelectableList.wid_SelectableList_C.ChangeText
struct UWid_SelectableList_C_ChangeText_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_28B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  InText;                                            // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                            K2Node_DynamicCast_AsText;                         // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function wid_SelectableList.wid_SelectableList_C.Init
struct UWid_SelectableList_C_Init_Params
{
public:
	bool                                         CallFunc_SelectEntry_Result;                       // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function wid_SelectableList.wid_SelectableList_C.GetCurrentIndex
struct UWid_SelectableList_C_GetCurrentIndex_Params
{
public:
	int32                                        CurrentIndex;                                      // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function wid_SelectableList.wid_SelectableList_C.MoveUp
struct UWid_SelectableList_C_MoveUp_Params
{
public:
	bool                                         CallFunc_SelectEntry_Result;                       // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2CB[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetChildrenCount_ReturnValue;             // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_UnSelectEntry_Result;                     // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D1[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Percent_IntInt_ReturnValue;               // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x14 (0x14 - 0x0)
// Function wid_SelectableList.wid_SelectableList_C.MoveDown
struct UWid_SelectableList_C_MoveDown_Params
{
public:
	bool                                         CallFunc_SelectEntry_Result;                       // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2E7[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetChildrenCount_ReturnValue;             // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_UnSelectEntry_Result;                     // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2EB[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Percent_IntInt_ReturnValue;               // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x41 (0x41 - 0x0)
// Function wid_SelectableList.wid_SelectableList_C.UnSelectEntry
struct UWid_SelectableList_C_UnSelectEntry_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Result;                                            // 0x4(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x8(0x28)(None)
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                            K2Node_DynamicCast_AsText;                         // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x41 (0x41 - 0x0)
// Function wid_SelectableList.wid_SelectableList_C.SelectEntry
struct UWid_SelectableList_C_SelectEntry_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Result;                                            // 0x4(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_334[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x8(0x28)(None)
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                            K2Node_DynamicCast_AsText;                         // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x6 (0x6 - 0x0)
// Function wid_SelectableList.wid_SelectableList_C.RemoveEntryByIndex
struct UWid_SelectableList_C_RemoveEntryByIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_RemoveChildAt_ReturnValue;                // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x6B (0x6B - 0x0)
// Function wid_SelectableList.wid_SelectableList_C.RemoveEntry
struct UWid_SelectableList_C_RemoveEntry_Params
{
public:
	class FText                                  EntryToRemove;                                     // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                         Found;                                             // 0x19(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_385[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Index;                                             // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_RemoveChildAt_ReturnValue;                // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38E[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_394[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetChildrenCount_ReturnValue;             // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_397[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTextBlock*                            K2Node_DynamicCast_AsText;                         // 0x40(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_39A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0x50(0x18)(None)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_TextText_ReturnValue;          // 0x69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x6A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x80 (0x80 - 0x0)
// Function wid_SelectableList.wid_SelectableList_C.AddEntry
struct UWid_SelectableList_C_AddEntry_Params
{
public:
	class FText                                  Entry;                                             // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UTextBlock*                            CallFunc_SpawnObject_ReturnValue;                  // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateFontInfo                        K2Node_MakeStruct_SlateFontInfo;                   // 0x28(0x58)(HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function wid_SelectableList.wid_SelectableList_C.ExecuteUbergraph_wid_SelectableList
struct UWid_SelectableList_C_ExecuteUbergraph_wid_SelectableList_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


