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

// 0x30 (0x30 - 0x0)
// Function wid_DebugMenu_List_Entry.wid_DebugMenu_List_Entry_C.SetText
struct UWid_DebugMenu_List_Entry_C_SetText_Params
{
public:
	enum class EEventMap                         Enumerator;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1AF6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x18(0x18)(None)
};

// 0x58 (0x58 - 0x0)
// Function wid_DebugMenu_List_Entry.wid_DebugMenu_List_Entry_C.Select
struct UWid_DebugMenu_List_Entry_C_Select_Params
{
public:
	bool                                         Select;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1B10[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x8(0x28)(None)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_1;                    // 0x30(0x28)(None)
};

// 0x8 (0x8 - 0x0)
// Function wid_DebugMenu_List_Entry.wid_DebugMenu_List_Entry_C.OnListItemObjectSet
struct UWid_DebugMenu_List_Entry_C_OnListItemObjectSet_Params
{
public:
	class UObject*                               ListItemObject;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function wid_DebugMenu_List_Entry.wid_DebugMenu_List_Entry_C.BP_OnItemSelectionChanged
struct UWid_DebugMenu_List_Entry_C_BP_OnItemSelectionChanged_Params
{
public:
	bool                                         bIsSelected;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function wid_DebugMenu_List_Entry.wid_DebugMenu_List_Entry_C.PreConstruct
struct UWid_DebugMenu_List_Entry_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function wid_DebugMenu_List_Entry.wid_DebugMenu_List_Entry_C.BP_OnItemExpansionChanged
struct UWid_DebugMenu_List_Entry_C_BP_OnItemExpansionChanged_Params
{
public:
	bool                                         bIsExpanded;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xF2 (0xF2 - 0x0)
// Function wid_DebugMenu_List_Entry.wid_DebugMenu_List_Entry_C.ExecuteUbergraph_wid_DebugMenu_List_Entry
struct UWid_DebugMenu_List_Entry_C_ExecuteUbergraph_wid_DebugMenu_List_Entry_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1C74[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_DebugMenu_List_Entry_C*           K2Node_DynamicCast_AsWid_Debug_Menu_List_Entry;    // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1C7E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x28(0x18)(None)
	class UObject*                               K2Node_Event_ListItemObject;                       // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1; // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x58(0x18)(None)
	bool                                         K2Node_Event_bIsSelected;                          // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1C93[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x78(0x28)(UObjectWrapper)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_1;                    // 0xA0(0x28)(UObjectWrapper)
	struct FSlateColor                           K2Node_Select_Default;                             // 0xC8(0x28)(None)
	bool                                         K2Node_Event_IsDesignTime;                         // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bIsExpanded;                          // 0xF1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


