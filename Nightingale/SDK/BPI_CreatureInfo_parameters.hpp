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

// 0x9 (0x9 - 0x0)
// Function BPI_CreatureInfo.BPI_CreatureInfo_C.RemoveFromEnemies
struct IBPI_CreatureInfo_C_RemoveFromEnemies_Params
{
public:
	struct FGameplayTag                          EnemyTag;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	bool                                         bSuccess;                                          // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BPI_CreatureInfo.BPI_CreatureInfo_C.AddToEnemies
struct IBPI_CreatureInfo_C_AddToEnemies_Params
{
public:
	struct FGameplayTag                          EnemyTag;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	bool                                         bSuccess;                                          // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BPI_CreatureInfo.BPI_CreatureInfo_C.RemoveFromFriends
struct IBPI_CreatureInfo_C_RemoveFromFriends_Params
{
public:
	struct FGameplayTag                          FriendTag;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	bool                                         bSuccess;                                          // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BPI_CreatureInfo.BPI_CreatureInfo_C.AddToFriends
struct IBPI_CreatureInfo_C_AddToFriends_Params
{
public:
	struct FGameplayTag                          FriendTag;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	bool                                         bSuccess;                                          // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC8 (0xC8 - 0x0)
// Function BPI_CreatureInfo.BPI_CreatureInfo_C.GetCreatureInfo
struct IBPI_CreatureInfo_C_GetCreatureInfo_Params
{
public:
	struct FS_CreatureInfo                       Info;                                              // 0x0(0xC8)(Parm, OutParm, HasGetValueTypeHash)
};

}
}


