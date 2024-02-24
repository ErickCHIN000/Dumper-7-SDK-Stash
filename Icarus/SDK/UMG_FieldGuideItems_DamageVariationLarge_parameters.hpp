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

// 0x120 (0x120 - 0x0)
// Function UMG_FieldGuideItems_DamageVariationLarge.UMG_FieldGuideItems_DamageVariationLarge_C.Initialise
struct UUMG_FieldGuideItems_DamageVariationLarge_C_Initialise_Params
{
public:
	int32                                        Min;                                               // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Max;                                               // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Type;                                              // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  RetrievedDescription;                              // 0x20(0x18)(Edit, BlueprintVisible)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x38(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x78(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_2;            // 0xB8(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0xF8(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x108(0x18)(None)
};

// 0x1 (0x1 - 0x0)
// Function UMG_FieldGuideItems_DamageVariationLarge.UMG_FieldGuideItems_DamageVariationLarge_C.BP_OnItemExpansionChanged
struct UUMG_FieldGuideItems_DamageVariationLarge_C_BP_OnItemExpansionChanged_Params
{
public:
	bool                                         bIsExpanded;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function UMG_FieldGuideItems_DamageVariationLarge.UMG_FieldGuideItems_DamageVariationLarge_C.BP_OnItemSelectionChanged
struct UUMG_FieldGuideItems_DamageVariationLarge_C_BP_OnItemSelectionChanged_Params
{
public:
	bool                                         bIsSelected;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x6 (0x6 - 0x0)
// Function UMG_FieldGuideItems_DamageVariationLarge.UMG_FieldGuideItems_DamageVariationLarge_C.ExecuteUbergraph_UMG_FieldGuideItems_DamageVariationLarge
struct UUMG_FieldGuideItems_DamageVariationLarge_C_ExecuteUbergraph_UMG_FieldGuideItems_DamageVariationLarge_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bIsExpanded;                          // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bIsSelected;                          // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


