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

// 0x60 (0x60 - 0x0)
// Function WBP_Shop_sw_AttributeRow.WBP_Shop_sw_AttributeRow_C.UpdateValue
struct UWBP_Shop_sw_AttributeRow_C_UpdateValue_Params
{
public:
	double                                       NewValue;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           LPositiveTint;                                     // 0x8(0x14)(Edit, BlueprintVisible)
	struct FSlateColor                           LNegativeTint;                                     // 0x1C(0x14)(Edit, BlueprintVisible)
	struct FSlateColor                           LNeutralTint;                                      // 0x30(0x14)(Edit, BlueprintVisible)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NearlyEqual_FloatFloat_ReturnValue;       // 0x45(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DAC[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_FormatTextFromType_ResultText;            // 0x48(0x18)(None)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Shop_sw_AttributeRow.WBP_Shop_sw_AttributeRow_C.Initialize
struct UWBP_Shop_sw_AttributeRow_C_Initialize_Params
{
public:
	double                                       CallFunc_UpdateValue_NewValue_ImplicitCast;        // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_Shop_sw_AttributeRow.WBP_Shop_sw_AttributeRow_C.ExecuteUbergraph_WBP_Shop_sw_AttributeRow
struct UWBP_Shop_sw_AttributeRow_C_ExecuteUbergraph_WBP_Shop_sw_AttributeRow_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


