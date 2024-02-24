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

// 0x18 (0x18 - 0x0)
// Function UMG_JoiningGame.UMG_JoiningGame_C.SetDescription
struct UUMG_JoiningGame_C_SetDescription_Params
{
public:
	class FText                                  Description;                                       // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x20 (0x20 - 0x0)
// Function UMG_JoiningGame.UMG_JoiningGame_C.ExecuteUbergraph_UMG_JoiningGame
struct UUMG_JoiningGame_C_ExecuteUbergraph_UMG_JoiningGame_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4CCE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_CustomEvent_Description;                    // 0x8(0x18)(None)
};

}
}


