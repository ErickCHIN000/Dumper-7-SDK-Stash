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
// Function Challenge_Crew_AncientObelisk_META.Challenge_Crew_AncientObelisk_META_C.CompletedChallenge
struct UChallenge_Crew_AncientObelisk_META_C_CompletedChallenge_Params
{
public:
	class AGbxPlayerController*                  CompletedPlayer;                                   // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A (0x1A - 0x0)
// Function Challenge_Crew_AncientObelisk_META.Challenge_Crew_AncientObelisk_META_C.ExecuteUbergraph_Challenge_Crew_AncientObelisk_META
struct UChallenge_Crew_AncientObelisk_META_C_ExecuteUbergraph_Challenge_Crew_AncientObelisk_META_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1101[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGbxPlayerController*                  K2Node_Event_CompletedPlayer;                      // 0x8(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AOakPlayerController*                  K2Node_DynamicCast_AsOak_Player_Controller;        // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


