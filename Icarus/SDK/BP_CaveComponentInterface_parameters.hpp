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

// 0x10 (0x10 - 0x0)
// Function BP_CaveComponentInterface.BP_CaveComponentInterface_C.SetCaveState
struct IBP_CaveComponentInterface_C_SetCaveState_Params
{
public:
	bool                                         IsInCave;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1E08[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CaveActor;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


