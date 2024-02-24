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

// 0x80 (0x80 - 0x0)
// Function WBP_VertCard.WBP_VertCard_C.UpdateDisplayByText
struct UWBP_VertCard_C_UpdateDisplayByText_Params
{
public:
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Len_ReturnValue;                          // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Divide_IntInt_ReturnValue;                // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Sqrt_ReturnValue;                         // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Round_ReturnValue;                        // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Min_ReturnValue;                          // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateFontInfo                        K2Node_MakeStruct_SlateFontInfo;                   // 0x28(0x58)(HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function WBP_VertCard.WBP_VertCard_C.GetText_1
struct UWBP_VertCard_C_GetText_1_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
};

// 0x18 (0x18 - 0x0)
// Function WBP_VertCard.WBP_VertCard_C.GetText_0
struct UWBP_VertCard_C_GetText_0_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
};

// 0x88 (0x88 - 0x0)
// Function WBP_VertCard.WBP_VertCard_C.GetBrush_0
struct UWBP_VertCard_C_GetBrush_0_Params
{
public:
	struct FSlateBrush                           ReturnValue;                                       // 0x0(0x88)(Parm, OutParm, ReturnParm)
};

// 0xB8 (0xB8 - 0x0)
// Function WBP_VertCard.WBP_VertCard_C.Init
struct UWBP_VertCard_C_Init_Params
{
public:
	struct FSlateBrush                           Image;                                             // 0x0(0x88)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  Number;                                            // 0x88(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  Description;                                       // 0xA0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0xC0 (0xC0 - 0x0)
// Function WBP_VertCard.WBP_VertCard_C.ExecuteUbergraph_WBP_VertCard
struct UWBP_VertCard_C_ExecuteUbergraph_WBP_VertCard_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1152[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           K2Node_CustomEvent_Image;                          // 0x8(0x88)(None)
	class FText                                  K2Node_CustomEvent_Number;                         // 0x90(0x18)(None)
	class FText                                  K2Node_CustomEvent_Description;                    // 0xA8(0x18)(None)
};

}
}


