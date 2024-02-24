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

// 0x41 (0x41 - 0x0)
// Function CF_TakeScreenshot.CF_TakeScreenshot_C.ExecuteUbergraph_CF_TakeScreenshot
struct UCF_TakeScreenshot_C_ExecuteUbergraph_CF_TakeScreenshot_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class UCheatOverlayBase*                     CallFunc_GetCheatOverlay_ReturnValue;              // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCheatOverlayBase*                     CallFunc_GetCheatOverlay_ReturnValue_1;            // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0x18(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FFallbackStruct                       K2Node_MakeStruct_AutomationScreenshotOptions;     // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


