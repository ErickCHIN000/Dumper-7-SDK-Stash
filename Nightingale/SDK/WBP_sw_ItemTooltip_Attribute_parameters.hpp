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
// Function WBP_sw_ItemTooltip_Attribute.WBP_sw_ItemTooltip_Attribute_C.UpdateValue
struct UWBP_sw_ItemTooltip_Attribute_C_UpdateValue_Params
{
public:
	double                                       NewValue;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           LPositiveTint;                                     // 0x8(0x14)(Edit, BlueprintVisible)
	struct FSlateColor                           LNegativeTint;                                     // 0x1C(0x14)(Edit, BlueprintVisible)
	struct FSlateColor                           LNeutralTint;                                      // 0x30(0x14)(Edit, BlueprintVisible)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x45(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x46(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NearlyEqual_FloatFloat_ReturnValue;       // 0x47(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_FormatTextFromType_ResultText;            // 0x48(0x18)(None)
};

// 0x8 (0x8 - 0x0)
// Function WBP_sw_ItemTooltip_Attribute.WBP_sw_ItemTooltip_Attribute_C.Initialize
struct UWBP_sw_ItemTooltip_Attribute_C_Initialize_Params
{
public:
	double                                       CallFunc_UpdateValue_NewValue_ImplicitCast;        // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_sw_ItemTooltip_Attribute.WBP_sw_ItemTooltip_Attribute_C.ExecuteUbergraph_WBP_sw_ItemTooltip_Attribute
struct UWBP_sw_ItemTooltip_Attribute_C_ExecuteUbergraph_WBP_sw_ItemTooltip_Attribute_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


