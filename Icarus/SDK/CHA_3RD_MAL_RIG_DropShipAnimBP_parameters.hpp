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

// 0x20 (0x20 - 0x0)
// Function CHA_3RD_MAL_RIG_DropShipAnimBP.CHA_3RD_MAL_RIG_DropShipAnimBP_C.VehicleLowerBody
struct UCHA_3RD_MAL_RIG_DropShipAnimBP_C_VehicleLowerBody_Params
{
public:
	struct FPoseLink                             LowerInPose;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             VehicleLowerBody;                                  // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function CHA_3RD_MAL_RIG_DropShipAnimBP.CHA_3RD_MAL_RIG_DropShipAnimBP_C.VehicleUpperBody
struct UCHA_3RD_MAL_RIG_DropShipAnimBP_C_VehicleUpperBody_Params
{
public:
	struct FPoseLink                             UpperInPose;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             VehicleUpperBody;                                  // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function CHA_3RD_MAL_RIG_DropShipAnimBP.CHA_3RD_MAL_RIG_DropShipAnimBP_C.AnimGraph
struct UCHA_3RD_MAL_RIG_DropShipAnimBP_C_AnimGraph_Params
{
public:
	struct FPoseLink                             AnimGraph;                                         // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function CHA_3RD_MAL_RIG_DropShipAnimBP.CHA_3RD_MAL_RIG_DropShipAnimBP_C.BlueprintUpdateAnimation
struct UCHA_3RD_MAL_RIG_DropShipAnimBP_C_BlueprintUpdateAnimation_Params
{
public:
	float                                        DeltaTimeX;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function CHA_3RD_MAL_RIG_DropShipAnimBP.CHA_3RD_MAL_RIG_DropShipAnimBP_C.ExecuteUbergraph_CHA_3RD_MAL_RIG_DropShipAnimBP
struct UCHA_3RD_MAL_RIG_DropShipAnimBP_C_ExecuteUbergraph_CHA_3RD_MAL_RIG_DropShipAnimBP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4BC2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_TryGetPawnOwner_ReturnValue;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIcarusPlayerCharacter*                K2Node_DynamicCast_AsIcarus_Player_Character;      // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4BD5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASeatBase*                             CallFunc_GetAttachedToSeat_ReturnValue;            // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FMin_ReturnValue;                         // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4BE9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_DropshipSeat_C*                    K2Node_DynamicCast_AsBP_Dropship_Seat;             // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4BF0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Event_DeltaTimeX;                           // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


