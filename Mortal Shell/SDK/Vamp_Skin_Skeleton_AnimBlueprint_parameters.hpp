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
// Function Vamp_Skin_Skeleton_AnimBlueprint.Vamp_Skin_Skeleton_AnimBlueprint_C.AnimGraph
struct UVamp_Skin_Skeleton_AnimBlueprint_C_AnimGraph_Params
{
public:
	struct FPoseLink                             AnimGraph;                                         // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x38 (0x38 - 0x0)
// Function Vamp_Skin_Skeleton_AnimBlueprint.Vamp_Skin_Skeleton_AnimBlueprint_C.UpdateStrafeWalkRightWalkForward
struct UVamp_Skin_Skeleton_AnimBlueprint_C_UpdateStrafeWalkRightWalkForward_Params
{
public:
	class APawn*                                 CallFunc_TryGetPawnOwner_ReturnValue;              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetActorForwardVector_ReturnValue;        // 0x8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Cross_VectorVector_ReturnValue;           // 0x14(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_VSize_ReturnValue;                        // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A08[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_FloatToString_ReturnValue;           // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function Vamp_Skin_Skeleton_AnimBlueprint.Vamp_Skin_Skeleton_AnimBlueprint_C.UpdateWalkRightWalkForward
struct UVamp_Skin_Skeleton_AnimBlueprint_C_UpdateWalkRightWalkForward_Params
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
// Function Vamp_Skin_Skeleton_AnimBlueprint.Vamp_Skin_Skeleton_AnimBlueprint_C.BlueprintUpdateAnimation
struct UVamp_Skin_Skeleton_AnimBlueprint_C_BlueprintUpdateAnimation_Params
{
public:
	float                                        DeltaTimeX;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1C (0x1C - 0x0)
// Function Vamp_Skin_Skeleton_AnimBlueprint.Vamp_Skin_Skeleton_AnimBlueprint_C.ExecuteUbergraph_Vamp_Skin_Skeleton_AnimBlueprint
struct UVamp_Skin_Skeleton_AnimBlueprint_C_ExecuteUbergraph_Vamp_Skin_Skeleton_AnimBlueprint_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue; // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_B34[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1; // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_DeltaTimeX;                           // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_FloatFloat_ReturnValue_1;       // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_RandomBool_ReturnValue;                   // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_B4F[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


