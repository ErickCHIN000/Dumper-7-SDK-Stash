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
// Function WBP_sw_ItemTooltip_CraftingPreviewAttribute.WBP_sw_ItemTooltip_CraftingPreviewAttribute_C.PlayCompareAnimation
struct UWBP_sw_ItemTooltip_CraftingPreviewAttribute_C_PlayCompareAnimation_Params
{
public:
	bool                                         IsBetter;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A6B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue_1;       // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_PlayAnimationForward_PlaybackSpeed_ImplicitCast; // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_PlayAnimationForward_PlaybackSpeed_ImplicitCast_1; // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x14 (0x14 - 0x0)
// Function WBP_sw_ItemTooltip_CraftingPreviewAttribute.WBP_sw_ItemTooltip_CraftingPreviewAttribute_C.SetValueAndImgColor
struct UWBP_sw_ItemTooltip_CraftingPreviewAttribute_C_SetValueAndImgColor_Params
{
public:
	struct FSlateColor                           ColorOverride;                                     // 0x0(0x14)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x58 (0x58 - 0x0)
// Function WBP_sw_ItemTooltip_CraftingPreviewAttribute.WBP_sw_ItemTooltip_CraftingPreviewAttribute_C.Initialize
struct UWBP_sw_ItemTooltip_CraftingPreviewAttribute_C_Initialize_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B17[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_FormatTextFromType_ResultText;            // 0x8(0x18)(None)
	bool                                         CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x23(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Select_Default;                             // 0x24(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Select_Default_1;                           // 0x34(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x44(0x14)(None)
};

// 0x4 (0x4 - 0x0)
// Function WBP_sw_ItemTooltip_CraftingPreviewAttribute.WBP_sw_ItemTooltip_CraftingPreviewAttribute_C.ExecuteUbergraph_WBP_sw_ItemTooltip_CraftingPreviewAttribute
struct UWBP_sw_ItemTooltip_CraftingPreviewAttribute_C_ExecuteUbergraph_WBP_sw_ItemTooltip_CraftingPreviewAttribute_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


