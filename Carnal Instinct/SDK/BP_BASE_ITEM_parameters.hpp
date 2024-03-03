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

// 0x20 (0x20 - 0x0)
// Function BP_BASE_ITEM.BP_BASE_ITEM_C.Get_Materials
struct ABP_BASE_ITEM_C_Get_Materials_Params
{
public:
	TArray<class UMaterialInterface*>            ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm)
	TArray<class UMaterialInterface*>            CallFunc_GetMaterials_ReturnValue;                 // 0x10(0x10)(ReferenceParm)
};

// 0x10 (0x10 - 0x0)
// Function BP_BASE_ITEM.BP_BASE_ITEM_C.GetMaterial
struct ABP_BASE_ITEM_C_GetMaterial_Params
{
public:
	class UMaterialInterface*                    ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    CallFunc_GetMaterial_ReturnValue;                  // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_BASE_ITEM.BP_BASE_ITEM_C.ExecuteUbergraph_BP_BASE_ITEM
struct ABP_BASE_ITEM_C_ExecuteUbergraph_BP_BASE_ITEM_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


