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

// 0x8 (0x8 - 0x0)
// Function WBP_Debug_QA_CustomCommandButton.WBP_Debug_QA_CustomCommandButton_C.ExecuteCommand
struct UWBP_Debug_QA_CustomCommandButton_C_ExecuteCommand_Params
{
public:
	class ANWXPlayerController*                  CallFunc_GetLocalPlayerController_LocalPlayerController; // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function WBP_Debug_QA_CustomCommandButton.WBP_Debug_QA_CustomCommandButton_C.ExecuteUbergraph_WBP_Debug_QA_CustomCommandButton
struct UWBP_Debug_QA_CustomCommandButton_C_ExecuteUbergraph_WBP_Debug_QA_CustomCommandButton_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_640C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x8(0x18)(None)
};

// 0x4 (0x4 - 0x0)
// Function WBP_Debug_QA_CustomCommandButton.WBP_Debug_QA_CustomCommandButton_C.DebugCommandRemoved__DelegateSignature
struct UWBP_Debug_QA_CustomCommandButton_C_DebugCommandRemoved__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


