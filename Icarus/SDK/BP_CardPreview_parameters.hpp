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

// 0x94 (0x94 - 0x0)
// Function BP_CardPreview.BP_CardPreview_C.SetCardRotation
struct ABP_CardPreview_C_SetCardRotation_Params
{
public:
	struct FRotator                              Rotation;                                          // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                            CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0xC(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// 0x31 (0x31 - 0x0)
// Function BP_CardPreview.BP_CardPreview_C.UpdateCard
struct ABP_CardPreview_C_UpdateCard_Params
{
public:
	class UMaterialInterface*                    Material;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Text;                                              // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UUserWidget*                           CallFunc_GetWidget_ReturnValue;                    // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_CardText_C*                       K2Node_DynamicCast_AsUMG_Card_Text;                // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function BP_CardPreview.BP_CardPreview_C.ExecuteUbergraph_BP_CardPreview
struct ABP_CardPreview_C_ExecuteUbergraph_BP_CardPreview_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


