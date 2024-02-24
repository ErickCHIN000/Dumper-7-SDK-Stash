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

// 0xE0 (0xE0 - 0x0)
// Function GenericCraftingTool.GenericCraftingTool_C.GetSelectionInfo
struct AGenericCraftingTool_C_GetSelectionInfo_Params
{
public:
	class AActor*                                TargetActor;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_Selection                          Result;                                            // 0x8(0x59)(Parm, OutParm, HasGetValueTypeHash)
	uint8                                        Pad_D24[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x68(0x18)(None)
	struct FS_Selection                          K2Node_MakeStruct_S_Selection;                     // 0x80(0x59)(HasGetValueTypeHash)
	uint8                                        Pad_D27[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

}
}


