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
// Function BPI_NPCFriendship.BPI_NPCFriendship_C.GetBestFriend
struct IBPI_NPCFriendship_C_GetBestFriend_Params
{
public:
	class FString                                PlayerId;                                          // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BPI_NPCFriendship.BPI_NPCFriendship_C.GetFriendshipLevel
struct IBPI_NPCFriendship_C_GetFriendshipLevel_Params
{
public:
	class FString                                PlayerId;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	enum class Enum_FriendshipLevel              FriendshipLevel;                                   // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3492[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        FriendshipScore;                                   // 0x14(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BPI_NPCFriendship.BPI_NPCFriendship_C.FriendshipEvent
struct IBPI_NPCFriendship_C_FriendshipEvent_Params
{
public:
	class FString                                PlayerId;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	enum class Enum_NPCFriendshipEvent           EventStrength;                                     // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x11(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34CF[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ScoreAwarded;                                      // 0x14(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


