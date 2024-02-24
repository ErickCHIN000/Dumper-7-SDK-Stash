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

// 0xA3 (0xA3 - 0x0)
// Function BP_Interactable_Pickup_Deployable_LandingPad_Cargo.BP_Interactable_Pickup_Deployable_LandingPad_Cargo_C.CanInteract
struct UBP_Interactable_Pickup_Deployable_LandingPad_Cargo_C_CanInteract_Params
{
public:
	class AActor*                                Instigator;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            HitResult;                                         // 0x8(0x88)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         ReturnValue;                                       // 0x90(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CanInteract_ReturnValue;                  // 0x91(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C3A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCargoLandingPadComponent*             CallFunc_GetComponentByClass_ReturnValue;          // 0x98(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasAssignedSlot_ReturnValue;              // 0xA1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xA2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x22 (0x22 - 0x0)
// Function BP_Interactable_Pickup_Deployable_LandingPad_Cargo.BP_Interactable_Pickup_Deployable_LandingPad_Cargo_C.Pickup Item
struct UBP_Interactable_Pickup_Deployable_LandingPad_Cargo_C_Pickup_Item_Params
{
public:
	bool                                         PickedUp;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C82[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               DeployPos;                                         // 0x4(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         FoundAssigned;                                     // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Deployable_Pickup_PickedUp;               // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C8B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCargoLandingPadComponent*             CallFunc_GetComponentByClass_ReturnValue;          // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasAssignedSlot_ReturnValue;              // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


