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

// 0x1 (0x1 - 0x0)
// Function PlayerAbility_Crouch.PlayerAbility_Crouch_C.FlushCrouchInput
struct UPlayerAbility_Crouch_C_FlushCrouchInput_Params
{
public:
	bool                                         CallFunc_IsCrouchToggle_Res;                       // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function PlayerAbility_Crouch.PlayerAbility_Crouch_C.IsCrouchToggle
struct UPlayerAbility_Crouch_C_IsCrouchToggle_Params
{
public:
	bool                                         Res;                                               // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1361[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxProfile*                           CallFunc_GetPlayerProfile_ReturnValue;             // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function PlayerAbility_Crouch.PlayerAbility_Crouch_C.GbxInpActEvt_crouch_K2Node_GbxInputActionEvent_Discrete_3
struct UPlayerAbility_Crouch_C_GbxInpActEvt_crouch_K2Node_GbxInputActionEvent_Discrete_3_Params
{
public:
	class FName                                  Action;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function PlayerAbility_Crouch.PlayerAbility_Crouch_C.GbxInpActEvt_crouch_K2Node_GbxInputActionEvent_Discrete_2
struct UPlayerAbility_Crouch_C_GbxInpActEvt_crouch_K2Node_GbxInputActionEvent_Discrete_2_Params
{
public:
	class FName                                  Action;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x31 (0x31 - 0x0)
// Function PlayerAbility_Crouch.PlayerAbility_Crouch_C.ExecuteUbergraph_PlayerAbility_Crouch
struct UPlayerAbility_Crouch_C_ExecuteUbergraph_PlayerAbility_Crouch_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_13B4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_GbxInputActionEvent_Discrete_Action;        // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_AttemptGroundSlam_ReturnValue;            // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_13B6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Temp_name_Variable;                                // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsMovingOnLadder_ReturnValue;             // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsCrouchToggle_Res;                       // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsCrouchToggle_Res1;                      // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x23(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetWantsToCrouch_ReturnValue;             // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x25(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_13C2[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_GbxInputActionEvent_Discrete_Action1;       // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsMovingOnLadder_ReturnValue1;            // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


