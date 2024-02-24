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

// 0xD0 (0xD0 - 0x0)
// Function BP_StructurePlacerObject.BP_StructurePlacerObject_C.GetPlacementMaterial
struct UBP_StructurePlacerObject_C_GetPlacementMaterial_Params
{
public:
	class UObject*                               Structure;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FStructurePlacementFeedback           PlacementData;                                     // 0x8(0xB8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	class UMaterialInstance*                     ReturnValue;                                       // 0xC0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                     CallFunc_GetPlacementMaterial_ReturnValue;         // 0xC8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}


