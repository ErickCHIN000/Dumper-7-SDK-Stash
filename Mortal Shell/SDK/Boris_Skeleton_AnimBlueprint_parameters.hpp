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
// Function Boris_Skeleton_AnimBlueprint.Boris_Skeleton_AnimBlueprint_C.AnimGraph
struct UBoris_Skeleton_AnimBlueprint_C_AnimGraph_Params
{
public:
	struct FPoseLink                             AnimGraph;                                         // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function Boris_Skeleton_AnimBlueprint.Boris_Skeleton_AnimBlueprint_C.BlueprintUpdateAnimation
struct UBoris_Skeleton_AnimBlueprint_C_BlueprintUpdateAnimation_Params
{
public:
	float                                        DeltaTimeX;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function Boris_Skeleton_AnimBlueprint.Boris_Skeleton_AnimBlueprint_C.ExecuteUbergraph_Boris_Skeleton_AnimBlueprint
struct UBoris_Skeleton_AnimBlueprint_C_ExecuteUbergraph_Boris_Skeleton_AnimBlueprint_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_DeltaTimeX;                           // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F1[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_TryGetPawnOwner_ReturnValue;              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_BorisEnemy_C*                      K2Node_DynamicCast_AsBP_Boris_Enemy;               // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FA[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              CallFunc_RInterpTo_ReturnValue;                    // 0x24(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


