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

// 0x329 (0x329 - 0x0)
// Function UMG_ClientLoggingEntry.UMG_ClientLoggingEntry_C.Initialize
struct UUMG_ClientLoggingEntry_C_Initialize_Params
{
public:
	class FText                                  LogCategory;                                       // 0x0(0x18)(Edit, BlueprintVisible)
	enum class ELevel                            Temp_byte_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1940[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Temp_struct_Variable;                              // 0x1C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Temp_struct_Variable_1;                            // 0x2C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Temp_struct_Variable_2;                            // 0x3C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Temp_struct_Variable_3;                            // 0x4C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_194A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateFontInfo                        K2Node_MakeStruct_SlateFontInfo;                   // 0x60(0x58)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0xB8(0x40)(HasGetValueTypeHash)
	struct FSlateFontInfo                        K2Node_MakeStruct_SlateFontInfo_1;                 // 0xF8(0x58)(HasGetValueTypeHash)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x150(0x28)(None)
	class FString                                CallFunc_LogTimestampToString_ReturnValue;         // 0x178(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x188(0x18)(None)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x1A0(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x1B8(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_2;            // 0x1F8(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x238(0x10)(ReferenceParm)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_1;                          // 0x248(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x258(0x18)(None)
	class FText                                  CallFunc_Format_ReturnValue_1;                     // 0x270(0x18)(None)
	struct FLogCategoriesRowHandle               CallFunc_StructToRowHandle_ReturnValue;            // 0x288(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Select_Default;                             // 0x2A0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FIcarusLogCategory                    CallFunc_GetLogCategoriesStruct_LogCategories;     // 0x2B0(0x48)(None)
	enum class EValid                            CallFunc_GetLogCategoriesStruct_Paths;             // 0x2F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1980[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_1;                    // 0x300(0x28)(None)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x328(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function UMG_ClientLoggingEntry.UMG_ClientLoggingEntry_C.BP_OnItemExpansionChanged
struct UUMG_ClientLoggingEntry_C_BP_OnItemExpansionChanged_Params
{
public:
	bool                                         bIsExpanded;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function UMG_ClientLoggingEntry.UMG_ClientLoggingEntry_C.BP_OnItemSelectionChanged
struct UUMG_ClientLoggingEntry_C_BP_OnItemSelectionChanged_Params
{
public:
	bool                                         bIsSelected;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function UMG_ClientLoggingEntry.UMG_ClientLoggingEntry_C.OnListItemObjectSet
struct UUMG_ClientLoggingEntry_C_OnListItemObjectSet_Params
{
public:
	class UObject*                               ListItemObject;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function UMG_ClientLoggingEntry.UMG_ClientLoggingEntry_C.ExecuteUbergraph_UMG_ClientLoggingEntry
struct UUMG_ClientLoggingEntry_C_ExecuteUbergraph_UMG_ClientLoggingEntry_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bIsExpanded;                          // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bIsSelected;                          // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1A6E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               K2Node_Event_ListItemObject;                       // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_ClientLogItem_C*                   K2Node_DynamicCast_AsBP_Client_Log_Item;           // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


