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

// 0x30 (0x30 - 0x0)
// Function WB_ToolTip_Unlocks.WB_ToolTip_Unlocks_C.GetText_1
struct UWB_ToolTip_Unlocks_C_GetText_1_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x18(0x18)(None)
};

// 0x50 (0x50 - 0x0)
// Function WB_ToolTip_Unlocks.WB_ToolTip_Unlocks_C.GetText_0
struct UWB_ToolTip_Unlocks_C_GetText_0_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x38(0x18)(None)
};

// 0x199 (0x199 - 0x0)
// Function WB_ToolTip_Unlocks.WB_ToolTip_Unlocks_C.Set Image
struct UWB_ToolTip_Unlocks_C_Set_Image_Params
{
public:
	struct FSlateBrush                           ReturnValue;                                       // 0x0(0x88)(Parm, OutParm, ReturnParm)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x88(0x88)(UObjectWrapper)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush_1;                    // 0x110(0x88)(None)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x198(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x51 (0x51 - 0x0)
// Function WB_ToolTip_Unlocks.WB_ToolTip_Unlocks_C.Set Rarity Text Color
struct UWB_ToolTip_Unlocks_C_Set_Rarity_Text_Color_Params
{
public:
	struct FSlateColor                           ReturnValue;                                       // 0x0(0x28)(Parm, OutParm, ReturnParm)
	struct FSlateColor                           CallFunc_Set_Rarity_Color_Color;                   // 0x28(0x28)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function WB_ToolTip_Unlocks.WB_ToolTip_Unlocks_C.Set Rarity
struct UWB_ToolTip_Unlocks_C_Set_Rarity_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
};

// 0x10 (0x10 - 0x0)
// Function WB_ToolTip_Unlocks.WB_ToolTip_Unlocks_C.ExecuteUbergraph_WB_ToolTip_Unlocks
struct UWB_ToolTip_Unlocks_C_ExecuteUbergraph_WB_ToolTip_Unlocks_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_229C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


