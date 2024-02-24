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
// Function Bell_keeper_Skeleton_AnimBlueprint.Bell_keeper_Skeleton_AnimBlueprint_C.AnimGraph
struct UBell_keeper_Skeleton_AnimBlueprint_C_AnimGraph_Params
{
public:
	struct FPoseLink                             AnimGraph;                                         // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x38 (0x38 - 0x0)
// Function Bell_keeper_Skeleton_AnimBlueprint.Bell_keeper_Skeleton_AnimBlueprint_C.CalcPlayerLookAtStuff
struct UBell_keeper_Skeleton_AnimBlueprint_C_CalcPlayerLookAtStuff_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1903[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwningActor_ReturnValue;               // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_VInterpTo_ReturnValue;                    // 0x10(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1913[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFogCultistNPC_C*                      K2Node_DynamicCast_AsFog_Cultist_NPC;              // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_191D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_GetSocketLocation_ReturnValue;            // 0x2C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function Bell_keeper_Skeleton_AnimBlueprint.Bell_keeper_Skeleton_AnimBlueprint_C.BlueprintUpdateAnimation
struct UBell_keeper_Skeleton_AnimBlueprint_C_BlueprintUpdateAnimation_Params
{
public:
	float                                        DeltaTimeX;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Bell_keeper_Skeleton_AnimBlueprint.Bell_keeper_Skeleton_AnimBlueprint_C.ExecuteUbergraph_Bell_keeper_Skeleton_AnimBlueprint
struct UBell_keeper_Skeleton_AnimBlueprint_C_ExecuteUbergraph_Bell_keeper_Skeleton_AnimBlueprint_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_DeltaTimeX;                           // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


