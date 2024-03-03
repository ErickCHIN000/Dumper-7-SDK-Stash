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

// 0x198 (0x198 - 0x0)
// Function WB_CustomizationOption.WB_CustomizationOption_C.Set Selected
struct UWB_CustomizationOption_C_Set_Selected_Params
{
public:
	struct FSlateBrush                           ReturnValue;                                       // 0x0(0x88)(Parm, OutParm, ReturnParm)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x88(0x88)(UObjectWrapper)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush_1;                    // 0x110(0x88)(None)
};

// 0x50 (0x50 - 0x0)
// Function WB_CustomizationOption.WB_CustomizationOption_C.Set Name
struct UWB_CustomizationOption_C_Set_Name_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x38(0x18)(None)
};

// 0x1C0 (0x1C0 - 0x0)
// Function WB_CustomizationOption.WB_CustomizationOption_C.Set Image
struct UWB_CustomizationOption_C_Set_Image_Params
{
public:
	struct FSlateBrush                           ReturnValue;                                       // 0x0(0x88)(Parm, OutParm, ReturnParm)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x88(0x28)(None)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0xB0(0x88)(None)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush_1;                    // 0x138(0x88)(None)
};

// 0x10 (0x10 - 0x0)
// Function WB_CustomizationOption.WB_CustomizationOption_C.ExecuteUbergraph_WB_CustomizationOption
struct UWB_CustomizationOption_C_ExecuteUbergraph_WB_CustomizationOption_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsPackagedForDistribution_ReturnValue;    // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_96C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWB_ToolTip_Unlocks_C*                 CallFunc_Create_ReturnValue;                       // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


