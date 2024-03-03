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

// 0x110 (0x110 - 0x0)
// Function WB_ToolTip_ItemInfo.WB_ToolTip_ItemInfo_C.Set Image
struct UWB_ToolTip_ItemInfo_C_Set_Image_Params
{
public:
	struct FSlateBrush                           ReturnValue;                                       // 0x0(0x88)(Parm, OutParm, ReturnParm)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x88(0x88)(None)
};

// 0x58 (0x58 - 0x0)
// Function WB_ToolTip_ItemInfo.WB_ToolTip_ItemInfo_C.Set Rarity Text Color
struct UWB_ToolTip_ItemInfo_C_Set_Rarity_Text_Color_Params
{
public:
	struct FSlateColor                           ReturnValue;                                       // 0x0(0x28)(Parm, OutParm, ReturnParm)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2364[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           CallFunc_Set_Rarity_Color_Color;                   // 0x30(0x28)(None)
};

// 0x40 (0x40 - 0x0)
// Function WB_ToolTip_ItemInfo.WB_ToolTip_ItemInfo_C.Set Rarity
struct UWB_ToolTip_ItemInfo_C_Set_Rarity_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x28(0x18)(None)
};

// 0x40 (0x40 - 0x0)
// Function WB_ToolTip_ItemInfo.WB_ToolTip_ItemInfo_C.Set Type
struct UWB_ToolTip_ItemInfo_C_Set_Type_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x28(0x18)(None)
};

// 0x18 (0x18 - 0x0)
// Function WB_ToolTip_ItemInfo.WB_ToolTip_ItemInfo_C.Set Name
struct UWB_ToolTip_ItemInfo_C_Set_Name_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
};

}
}


