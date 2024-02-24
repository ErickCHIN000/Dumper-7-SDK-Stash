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

// 0x38 (0x38 - 0x0)
// Function WBP_GameHintModalExtraPuzzles.WBP_GameHintModalExtraPuzzles_C.Setup
struct UWBP_GameHintModalExtraPuzzles_C_Setup_Params
{
public:
	class UObject*                               In_Brush_Image;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  TitleText;                                         // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  BodyText;                                          // 0x20(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0xE0 (0xE0 - 0x0)
// Function WBP_GameHintModalExtraPuzzles.WBP_GameHintModalExtraPuzzles_C.ExecuteUbergraph_WBP_GameHintModalExtraPuzzles
struct UWBP_GameHintModalExtraPuzzles_C_ExecuteUbergraph_WBP_GameHintModalExtraPuzzles_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_1005[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_CustomEvent_In_Brush_Image;                 // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_CustomEvent_TitleText;                      // 0x28(0x18)(None)
	class FText                                  K2Node_CustomEvent_BodyText;                       // 0x40(0x18)(None)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x58(0x88)(None)
};

}
}


