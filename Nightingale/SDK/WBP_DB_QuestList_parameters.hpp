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

// 0x9A (0x9A - 0x0)
// Function WBP_DB_QuestList.WBP_DB_QuestList_C.GetSelectedQuest
struct UWBP_DB_QuestList_C_GetSelectedQuest_Params
{
public:
	bool                                         HasSelectedQuest;                                  // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_22B2[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuestAssetReference                  SelectedQuest;                                     // 0x10(0x70)(Parm, OutParm)
	class UObject*                               CallFunc_BP_GetSelectedItem_ReturnValue;           // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BP_GetNumItemsSelected_ReturnValue;       // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_22BB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_DB_QuestListEntryData_C*           K2Node_DynamicCast_AsBP_DB_Quest_List_Entry_Data;  // 0x90(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x99(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB4 (0xB4 - 0x0)
// Function WBP_DB_QuestList.WBP_DB_QuestList_C.SetListItems
struct UWBP_DB_QuestList_C_SetListItems_Params
{
public:
	TArray<struct FQuestAssetReference>          QuestAssetReferences;                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UBP_DB_QuestListEntryData_C*>   QuestDataObjects;                                  // 0x10(0x10)(Edit, BlueprintVisible)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2301[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuestAssetReference                  CallFunc_Array_Get_Item;                           // 0x30(0x70)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2306[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_DB_QuestListEntryData_C*           CallFunc_SpawnObject_ReturnValue;                  // 0xA8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function WBP_DB_QuestList.WBP_DB_QuestList_C.BndEvt__WBP_DB_QuestList_QuestsList_K2Node_ComponentBoundEvent_1_OnListItemSelectionChangedDynamic__DelegateSignature
struct UWBP_DB_QuestList_C_BndEvt__WBP_DB_QuestList_QuestsList_K2Node_ComponentBoundEvent_1_OnListItemSelectionChangedDynamic__DelegateSignature_Params
{
public:
	class UObject*                               Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsSelected;                                       // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function WBP_DB_QuestList.WBP_DB_QuestList_C.ExecuteUbergraph_WBP_DB_QuestList
struct UWBP_DB_QuestList_C_ExecuteUbergraph_WBP_DB_QuestList_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2369[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               K2Node_ComponentBoundEvent_Item;                   // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_bIsSelected;            // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2370[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_DB_QuestListEntryData_C*           K2Node_DynamicCast_AsBP_DB_Quest_List_Entry_Data;  // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x70 (0x70 - 0x0)
// Function WBP_DB_QuestList.WBP_DB_QuestList_C.OnQuestSelected__DelegateSignature
struct UWBP_DB_QuestList_C_OnQuestSelected__DelegateSignature_Params
{
public:
	struct FQuestAssetReference                  QuestAssetReference;                               // 0x0(0x70)(BlueprintVisible, BlueprintReadOnly, Parm)
};

}
}


