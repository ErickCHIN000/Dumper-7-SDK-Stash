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

// 0x10 (0x10 - 0x0)
// Function Heavy_Brigand_Melee_AnimBlueprint.Heavy_Brigand_Melee_AnimBlueprint_C.AnimGraph
struct UHeavy_Brigand_Melee_AnimBlueprint_C_AnimGraph_Params
{
public:
	struct FPoseLink                             AnimGraph;                                         // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x40 (0x40 - 0x0)
// Function Heavy_Brigand_Melee_AnimBlueprint.Heavy_Brigand_Melee_AnimBlueprint_C.UpdateWalkRightWalkForward
struct UHeavy_Brigand_Melee_AnimBlueprint_C_UpdateWalkRightWalkForward_Params
{
public:
	class APawn*                                 CallFunc_TryGetPawnOwner_ReturnValue;              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetVelocity_ReturnValue;                  // 0x8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetActorRightVector_ReturnValue;          // 0x14(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Normal_ReturnValue;                       // 0x20(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetActorForwardVector_ReturnValue;        // 0x2C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Dot_VectorVector_ReturnValue;             // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Dot_VectorVector_ReturnValue_1;           // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function Heavy_Brigand_Melee_AnimBlueprint.Heavy_Brigand_Melee_AnimBlueprint_C.BlueprintUpdateAnimation
struct UHeavy_Brigand_Melee_AnimBlueprint_C_BlueprintUpdateAnimation_Params
{
public:
	float                                        DeltaTimeX;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Heavy_Brigand_Melee_AnimBlueprint.Heavy_Brigand_Melee_AnimBlueprint_C.SetCombatStance
struct UHeavy_Brigand_Melee_AnimBlueprint_C_SetCombatStance_Params
{
public:
	bool                                         CombatStance_;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC (0xC - 0x0)
// Function Heavy_Brigand_Melee_AnimBlueprint.Heavy_Brigand_Melee_AnimBlueprint_C.ExecuteUbergraph_Heavy_Brigand_Melee_AnimBlueprint
struct UHeavy_Brigand_Melee_AnimBlueprint_C_ExecuteUbergraph_Heavy_Brigand_Melee_AnimBlueprint_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_CombatStance_;                  // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_FA7[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Event_DeltaTimeX;                           // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


