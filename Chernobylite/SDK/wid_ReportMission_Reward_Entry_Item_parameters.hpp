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
// Function wid_ReportMission_Reward_Entry_Item.wid_ReportMission_Reward_Entry_Item_C.SetSelected
struct UWid_ReportMission_Reward_Entry_Item_C_SetSelected_Params
{
public:
	bool                                         NewVisibility;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_229F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Color;                                             // 0x4(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  NewLocalVar_0;                                     // 0x14(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_22A6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x18(0x28)(UObjectWrapper)
	class FText                                  CallFunc_Conv_FloatToText_ReturnValue;             // 0x40(0x18)(None)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_1;                    // 0x58(0x28)(UObjectWrapper)
};

// 0x4 (0x4 - 0x0)
// Function wid_ReportMission_Reward_Entry_Item.wid_ReportMission_Reward_Entry_Item_C.ExecuteUbergraph_wid_ReportMission_Reward_Entry_Item
struct UWid_ReportMission_Reward_Entry_Item_C_ExecuteUbergraph_wid_ReportMission_Reward_Entry_Item_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


