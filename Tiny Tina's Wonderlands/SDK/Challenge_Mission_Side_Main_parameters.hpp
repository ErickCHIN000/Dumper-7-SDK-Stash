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
// Function Challenge_Mission_Side_Main.Challenge_Mission_Side_Main_C.CompletedChallenge
struct UChallenge_Mission_Side_Main_C_CompletedChallenge_Params
{
public:
	class AGbxPlayerController*                  CompletedPlayer;                                   // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function Challenge_Mission_Side_Main.Challenge_Mission_Side_Main_C.ExecuteUbergraph_Challenge_Mission_Side_Main
struct UChallenge_Mission_Side_Main_C_ExecuteUbergraph_Challenge_Mission_Side_Main_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B90[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGbxPlayerController*                  K2Node_Event_CompletedPlayer;                      // 0x8(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


