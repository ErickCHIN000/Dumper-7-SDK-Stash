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
// Function Challenge_Crew_ShrinePiece.Challenge_Crew_ShrinePiece_C.CompletedChallenge
struct UChallenge_Crew_ShrinePiece_C_CompletedChallenge_Params
{
public:
	class AGbxPlayerController*                  CompletedPlayer;                                   // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function Challenge_Crew_ShrinePiece.Challenge_Crew_ShrinePiece_C.ExecuteUbergraph_Challenge_Crew_ShrinePiece
struct UChallenge_Crew_ShrinePiece_C_ExecuteUbergraph_Challenge_Crew_ShrinePiece_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_17E5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGbxPlayerController*                  K2Node_Event_CompletedPlayer;                      // 0x8(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


