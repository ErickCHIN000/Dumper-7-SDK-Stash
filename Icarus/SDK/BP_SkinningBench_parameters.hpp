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

// 0x31 (0x31 - 0x0)
// Function BP_SkinningBench.BP_SkinningBench_C.GrantBestiaryProgress
struct ABP_SkinningBench_C_GrantBestiaryProgress_Params
{
public:
	struct FProcessingItem                       Item;                                              // 0x0(0x24)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	int32                                        TotalCount;                                        // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPlayerDataComponent*                  PlayerData;                                        // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x16 (0x16 - 0x0)
// Function BP_SkinningBench.BP_SkinningBench_C.ExecuteUbergraph_BP_SkinningBench
struct ABP_SkinningBench_C_ExecuteUbergraph_BP_SkinningBench_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


