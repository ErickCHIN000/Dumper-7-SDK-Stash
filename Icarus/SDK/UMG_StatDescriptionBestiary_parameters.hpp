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

// 0x4A (0x4A - 0x0)
// Function UMG_StatDescriptionBestiary.UMG_StatDescriptionBestiary_C.Initialise
struct UUMG_StatDescriptionBestiary_C_Initialise_Params
{
public:
	struct FStatsEnum                            Stat;                                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	int32                                        Value;                                             // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_363C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  RetrievedDescription;                              // 0x18(0x18)(Edit, BlueprintVisible)
	class FText                                  CallFunc_GetStatDescriptionBP_Description;         // 0x30(0x18)(None)
	enum class EFunctionOutcome                  CallFunc_GetStatDescriptionBP_Outcome;             // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function UMG_StatDescriptionBestiary.UMG_StatDescriptionBestiary_C.BP_OnItemExpansionChanged
struct UUMG_StatDescriptionBestiary_C_BP_OnItemExpansionChanged_Params
{
public:
	bool                                         bIsExpanded;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function UMG_StatDescriptionBestiary.UMG_StatDescriptionBestiary_C.BP_OnItemSelectionChanged
struct UUMG_StatDescriptionBestiary_C_BP_OnItemSelectionChanged_Params
{
public:
	bool                                         bIsSelected;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function UMG_StatDescriptionBestiary.UMG_StatDescriptionBestiary_C.Set Active State
struct UUMG_StatDescriptionBestiary_C_Set_Active_State_Params
{
public:
	bool                                         Active;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function UMG_StatDescriptionBestiary.UMG_StatDescriptionBestiary_C.PreConstruct
struct UUMG_StatDescriptionBestiary_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x88 (0x88 - 0x0)
// Function UMG_StatDescriptionBestiary.UMG_StatDescriptionBestiary_C.ExecuteUbergraph_UMG_StatDescriptionBestiary
struct UUMG_StatDescriptionBestiary_C_ExecuteUbergraph_UMG_StatDescriptionBestiary_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bIsExpanded;                          // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bIsSelected;                          // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3768[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x8(0x28)(None)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_1;                    // 0x30(0x28)(None)
	bool                                         K2Node_CustomEvent_Active;                         // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_377E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_2;                    // 0x60(0x28)(None)
};

}
}


