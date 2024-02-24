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

// 0x321 (0x321 - 0x0)
// Function BP_Gravestone_DBNO.BP_Gravestone_DBNO_C.ServerHandleAssignedPlayer
struct ABP_Gravestone_DBNO_C_ServerHandleAssignedPlayer_Params
{
public:
	class UProspectSubsystem*                    CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FConnectedPlayer                      CallFunc_FindInitialisedConnectedPlayerByPlayerCharacterID_OutConnectedPlayer; // 0x8(0x38)(None)
	bool                                         CallFunc_FindInitialisedConnectedPlayerByPlayerCharacterID_ReturnValue; // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_262A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIcarusProspect                       CallFunc_GetActiveProspectData_ReturnValue;        // 0x48(0x2C8)(ConstParm)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x310(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x311(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2638[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerCharacter*                CallFunc_GetIcarusPlayerCharacter_ReturnValue;     // 0x318(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsAlive_ReturnValue;                      // 0x320(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


