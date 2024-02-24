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

// 0x2 (0x2 - 0x0)
// Function BP_Interactable_Pickup_CropPlot.BP_Interactable_Pickup_CropPlot_C.Pickup Item
struct UBP_Interactable_Pickup_CropPlot_C_Pickup_Item_Params
{
public:
	bool                                         PickedUp;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Deployable_Pickup_PickedUp;               // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xA2 (0xA2 - 0x0)
// Function BP_Interactable_Pickup_CropPlot.BP_Interactable_Pickup_CropPlot_C.CanInteract
struct UBP_Interactable_Pickup_CropPlot_C_CanInteract_Params
{
public:
	class AActor*                                Instigator;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            HitResult;                                         // 0x8(0x88)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         ReturnValue;                                       // 0x90(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x91(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D56[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_Farming_Plot_Base_C*               K2Node_DynamicCast_AsBP_Farming_Plot_Base;         // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xA1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function BP_Interactable_Pickup_CropPlot.BP_Interactable_Pickup_CropPlot_C.ExecuteUbergraph_BP_Interactable_Pickup_CropPlot
struct UBP_Interactable_Pickup_CropPlot_C_ExecuteUbergraph_BP_Interactable_Pickup_CropPlot_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2DC5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_DeployableBase_C*                  K2Node_DynamicCast_AsBP_Deployable_Base;           // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


