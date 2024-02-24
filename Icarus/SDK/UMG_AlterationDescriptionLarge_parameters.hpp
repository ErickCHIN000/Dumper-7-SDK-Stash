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

// 0x155 (0x155 - 0x0)
// Function UMG_AlterationDescriptionLarge.UMG_AlterationDescriptionLarge_C.Initialise
struct UUMG_AlterationDescriptionLarge_C_Initialise_Params
{
public:
	class FText                                  RetrievedDescription;                              // 0x0(0x18)(Edit, BlueprintVisible)
	class UUMG_StatDescriptionLarge_C*           CallFunc_Create_ReturnValue;                       // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1921[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAlterationsRowHandle                 CallFunc_StructToRowHandle_ReturnValue;            // 0x38(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FAlteration                           CallFunc_GetAlterationsStruct_Alterations;         // 0x50(0xD0)(None)
	enum class EValid                            CallFunc_GetAlterationsStruct_Paths;               // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x121(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_192B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FStatsEnum>                    CallFunc_Map_Keys_Keys;                            // 0x128(0x10)(ReferenceParm)
	struct FStatsEnum                            CallFunc_Array_Get_Item;                           // 0x138(0x10)(HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x148(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x14C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1933[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Map_Find_Value;                           // 0x150(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x154(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function UMG_AlterationDescriptionLarge.UMG_AlterationDescriptionLarge_C.BP_OnItemExpansionChanged
struct UUMG_AlterationDescriptionLarge_C_BP_OnItemExpansionChanged_Params
{
public:
	bool                                         bIsExpanded;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function UMG_AlterationDescriptionLarge.UMG_AlterationDescriptionLarge_C.BP_OnItemSelectionChanged
struct UUMG_AlterationDescriptionLarge_C_BP_OnItemSelectionChanged_Params
{
public:
	bool                                         bIsSelected;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function UMG_AlterationDescriptionLarge.UMG_AlterationDescriptionLarge_C.Reinitalise
struct UUMG_AlterationDescriptionLarge_C_Reinitalise_Params
{
public:
	struct FAlterationsEnum                      Alteration;                                        // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function UMG_AlterationDescriptionLarge.UMG_AlterationDescriptionLarge_C.ExecuteUbergraph_UMG_AlterationDescriptionLarge
struct UUMG_AlterationDescriptionLarge_C_ExecuteUbergraph_UMG_AlterationDescriptionLarge_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bIsExpanded;                          // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bIsSelected;                          // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_19EE[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAlterationsEnum                      K2Node_CustomEvent_Alteration;                     // 0x8(0x10)(HasGetValueTypeHash)
};

}
}


