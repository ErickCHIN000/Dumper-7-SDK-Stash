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
// Function BP_WraithSpell_DestructibleIcicle.BP_WraithSpell_DestructibleIcicle_C.Destroy
struct ABP_WraithSpell_DestructibleIcicle_C_Destroy_Params
{
public:
	class UDestructibleMesh*                     Mesh;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1C (0x1C - 0x0)
// Function BP_WraithSpell_DestructibleIcicle.BP_WraithSpell_DestructibleIcicle_C.ExecuteUbergraph_BP_WraithSpell_DestructibleIcicle
struct ABP_WraithSpell_DestructibleIcicle_C_ExecuteUbergraph_BP_WraithSpell_DestructibleIcicle_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_D7D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDestructibleMesh*                     K2Node_CustomEvent_Mesh;                           // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x10(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


