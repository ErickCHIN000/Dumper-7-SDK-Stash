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

// 0xAB (0xAB - 0x0)
// Function BP_Interactable_Loot_Skinned_Animal.BP_Interactable_Loot_Skinned_Animal_C.CanInteract
struct UBP_Interactable_Loot_Skinned_Animal_C_CanInteract_Params
{
public:
	class AActor*                                Instigator;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            HitResult;                                         // 0x8(0x88)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         ReturnValue;                                       // 0x90(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_59A[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_GOAP_Corpse_C*                     K2Node_DynamicCast_AsBP_GOAP_Corpse;               // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xA9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xAA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x90 (0x90 - 0x0)
// Function BP_Interactable_Loot_Skinned_Animal.BP_Interactable_Loot_Skinned_Animal_C.Interact
struct UBP_Interactable_Loot_Skinned_Animal_C_Interact_Params
{
public:
	class AActor*                                Instigator;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            HitResult;                                         // 0x8(0x88)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// 0xE1 (0xE1 - 0x0)
// Function BP_Interactable_Loot_Skinned_Animal.BP_Interactable_Loot_Skinned_Animal_C.ExecuteUbergraph_BP_Interactable_Loot_Skinned_Animal
struct UBP_Interactable_Loot_Skinned_Animal_C_ExecuteUbergraph_BP_Interactable_Loot_Skinned_Animal_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_609[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_Event_Instigator;                           // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            K2Node_Event_HitResult;                            // 0x10(0x88)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AIcarusPlayerController*               CallFunc_GetIcarusPlayerController_ReturnValue;    // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIcarusPlayerCharacterSurvival*        K2Node_DynamicCast_AsIcarus_Player_Character_Survival; // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_619[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerControllerSurvival*       K2Node_DynamicCast_AsIcarus_Player_Controller_Survival; // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_61C[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_GOAP_Corpse_C*                     K2Node_DynamicCast_AsBP_GOAP_Corpse;               // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xD1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_623[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UInventory*                            CallFunc_GetInventory_ReturnValue;                 // 0xD8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

