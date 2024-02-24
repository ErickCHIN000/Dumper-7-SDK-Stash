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

// 0x51 (0x51 - 0x0)
// Function BP_Modifier_Lava.BP_Modifier_Lava_C.ModifierApplied
struct UBP_Modifier_Lava_C_ModifierApplied_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5914[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ModifierApplied_ReturnValue;              // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_591A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFlammableTargetIgnite                CallFunc_MakeFlammableTargetIgniteFromActor_ReturnValue; // 0x18(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	class UFlammableInstance*                    CallFunc_TryIgniteFlammableTarget_OutInstance;     // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_TryIgniteFlammableTarget_ReturnValue;     // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


