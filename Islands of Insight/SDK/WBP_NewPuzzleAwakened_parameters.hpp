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
// Function WBP_NewPuzzleAwakened.WBP_NewPuzzleAwakened_C.Init
struct UWBP_NewPuzzleAwakened_C_Init_Params
{
public:
	class UObject*                               BrushImage;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  PuzzleTypeMessage;                                 // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0xC8 (0xC8 - 0x0)
// Function WBP_NewPuzzleAwakened.WBP_NewPuzzleAwakened_C.ExecuteUbergraph_WBP_NewPuzzleAwakened
struct UWBP_NewPuzzleAwakened_C_ExecuteUbergraph_WBP_NewPuzzleAwakened_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_B69[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               K2Node_CustomEvent_BrushImage;                     // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_CustomEvent_PuzzleTypeMessage;              // 0x20(0x18)(None)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x40(0x88)(None)
};

}
}


