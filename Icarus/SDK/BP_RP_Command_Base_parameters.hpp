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

// 0x11 (0x11 - 0x0)
// Function BP_RP_Command_Base.BP_RP_Command_Base_C.ReadyCheck
struct ABP_RP_Command_Base_C_ReadyCheck_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_46D[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_DropshipSeat_C*                    CallFunc_GetSeat_Dropship_Seat;                    // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function BP_RP_Command_Base.BP_RP_Command_Base_C.GetSeat
struct ABP_RP_Command_Base_C_GetSeat_Params
{
public:
	class ABP_DropshipSeat_C*                    Dropship_Seat;                                     // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_48E[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_DropshipSeat_C*                    K2Node_DynamicCast_AsBP_Dropship_Seat;             // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x29 (0x29 - 0x0)
// Function BP_RP_Command_Base.BP_RP_Command_Base_C.TriggerEvent
struct ABP_RP_Command_Base_C_TriggerEvent_Params
{
public:
	struct FDropShipActionsEnum                  Actions;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                         K2Node_SwitchRowEnum_CmpSuccess;                   // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4B4[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_DropshipSeat_C*                    CallFunc_GetSeat_Dropship_Seat;                    // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_DropshipSeat_C*                    CallFunc_GetSeat_Dropship_Seat_1;                  // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ExitSeat_Success;                         // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function BP_RP_Command_Base.BP_RP_Command_Base_C.ExitSeat
struct ABP_RP_Command_Base_C_ExitSeat_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4D5[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_DropshipSeat_C*                    CallFunc_GetSeat_Dropship_Seat;                    // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LeaveSeat_ReturnValue;                    // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1A (0x1A - 0x0)
// Function BP_RP_Command_Base.BP_RP_Command_Base_C.EnterSeat
struct ABP_RP_Command_Base_C_EnterSeat_Params
{
public:
	class AIcarusPlayerCharacterSurvival*        Character;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E6[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_DropshipSeat_C*                    CallFunc_GetSeat_Dropship_Seat;                    // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EnterSeat_ReturnValue;                    // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BP_RP_Command_Base.BP_RP_Command_Base_C.GetMesh
struct ABP_RP_Command_Base_C_GetMesh_Params
{
public:
	class UPrimitiveComponent*                   Mesh;                                              // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_RP_Command_Base.BP_RP_Command_Base_C.ExecuteUbergraph_BP_RP_Command_Base
struct ABP_RP_Command_Base_C_ExecuteUbergraph_BP_RP_Command_Base_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


