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
// Function CF_ResetAccolades.CF_ResetAccolades_C.ExecuteUbergraph_CF_ResetAccolades
struct UCF_ResetAccolades_C_ExecuteUbergraph_CF_ResetAccolades_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25BE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAccoladeSubsystem*                    CallFunc_GetWorldSubsystem_ReturnValue;            // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPlayerTrackerSubsystem*               CallFunc_GetWorldSubsystem_ReturnValue_1;          // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


