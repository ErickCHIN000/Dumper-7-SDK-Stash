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
// Function BP_Structure_Functional.BP_Structure_Functional_C.GetEntitySupportMesh
struct ABP_Structure_Functional_C_GetEntitySupportMesh_Params
{
public:
	class UStaticMeshComponent*                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_Structure_Functional.BP_Structure_Functional_C.GetIdentifierTag
struct ABP_Structure_Functional_C_GetIdentifierTag_Params
{
public:
	struct FGameplayTag                          ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_Structure_Functional.BP_Structure_Functional_C.GetSupportMesh
struct ABP_Structure_Functional_C_GetSupportMesh_Params
{
public:
	class UStaticMeshComponent*                  SupportMesh;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function BP_Structure_Functional.BP_Structure_Functional_C.GetCacheParameters
struct ABP_Structure_Functional_C_GetCacheParameters_Params
{
public:
	bool                                         bCanCache;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bCanWithdraw;                                      // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_Structure_Functional.BP_Structure_Functional_C.ExecuteUbergraph_BP_Structure_Functional
struct ABP_Structure_Functional_C_ExecuteUbergraph_BP_Structure_Functional_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


