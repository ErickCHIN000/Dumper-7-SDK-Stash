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

// 0x28 (0x28 - 0x0)
// Function BP_TooltipWidgetInterface.BP_TooltipWidgetInterface_C.GetTooltipClassOverride
struct IBP_TooltipWidgetInterface_C_GetTooltipClassOverride_Params
{
public:
	TSoftClassPtr<class UHuntingWidget>          ClassOverride;                                     // 0x0(0x28)(Parm, OutParm, HasGetValueTypeHash)
};

// 0x94 (0x94 - 0x0)
// Function BP_TooltipWidgetInterface.BP_TooltipWidgetInterface_C.GetTooltipRenderLocation
struct IBP_TooltipWidgetInterface_C_GetTooltipRenderLocation_Params
{
public:
	struct FHitResult                            InteractableHit;                                   // 0x0(0x88)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                               WorldLocation;                                     // 0x88(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


