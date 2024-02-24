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

// 0xB8 (0xB8 - 0x0)
// Function BP_EquippableModifier_Saddle.BP_EquippableModifier_Saddle_C.GetEquippableStatsToAdd
struct UBP_EquippableModifier_Saddle_C_GetEquippableStatsToAdd_Params
{
public:
	TMap<struct FStatsEnum, int32>               Stats;                                             // 0x0(0x50)(Parm, OutParm)
	int32                                        Temp_int_Variable;                                 // 0x50(0x4)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5D02[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStatsEnum                            Temp_struct_Variable;                              // 0x58(0x10)(ConstParm, HasGetValueTypeHash)
	TMap<struct FStatsEnum, int32>               CallFunc_GetEquippableStatsToAdd_Stats;            // 0x68(0x50)(None)
};

}
}


