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

// 0x20 (0x20 - 0x0)
// Function WBP_DB_POIIgnoreListEntry.WBP_DB_POIIgnoreListEntry_C.SetEntryData
struct UWBP_DB_POIIgnoreListEntry_C_SetEntryData_Params
{
public:
	class UBP_DB_POIIgnoreListEntryData_C*       IgnoreEntry;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x8(0x18)(None)
};

// 0x1 (0x1 - 0x0)
// Function WBP_DB_POIIgnoreListEntry.WBP_DB_POIIgnoreListEntry_C.BP_OnItemExpansionChanged
struct UWBP_DB_POIIgnoreListEntry_C_BP_OnItemExpansionChanged_Params
{
public:
	bool                                         bIsExpanded;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_DB_POIIgnoreListEntry.WBP_DB_POIIgnoreListEntry_C.BP_OnItemSelectionChanged
struct UWBP_DB_POIIgnoreListEntry_C_BP_OnItemSelectionChanged_Params
{
public:
	bool                                         bIsSelected;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_DB_POIIgnoreListEntry.WBP_DB_POIIgnoreListEntry_C.OnListItemObjectSet
struct UWBP_DB_POIIgnoreListEntry_C_OnListItemObjectSet_Params
{
public:
	class UObject*                               ListItemObject;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function WBP_DB_POIIgnoreListEntry.WBP_DB_POIIgnoreListEntry_C.ExecuteUbergraph_WBP_DB_POIIgnoreListEntry
struct UWBP_DB_POIIgnoreListEntry_C_ExecuteUbergraph_WBP_DB_POIIgnoreListEntry_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bIsExpanded;                          // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bIsSelected;                          // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_48FD[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               K2Node_Event_ListItemObject;                       // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_DB_POIIgnoreListEntryData_C*       K2Node_DynamicCast_AsBP_DB_POIIgnore_List_Entry_Data; // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_DB_POIIgnoreListEntry.WBP_DB_POIIgnoreListEntry_C.DeleteEntry__DelegateSignature
struct UWBP_DB_POIIgnoreListEntry_C_DeleteEntry__DelegateSignature_Params
{
public:
	class FString                                EntryToDelete;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

}
}


