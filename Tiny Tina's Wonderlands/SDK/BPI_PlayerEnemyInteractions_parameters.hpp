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
// Function BPI_PlayerEnemyInteractions.BPI_PlayerEnemyInteractions_C.Enemy_OnPolymorphStop
struct IBPI_PlayerEnemyInteractions_C_Enemy_OnPolymorphStop_Params
{
public:
	bool                                         Res;                                               // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BPI_PlayerEnemyInteractions.BPI_PlayerEnemyInteractions_C.Enemy_OnPolymorphStart
struct IBPI_PlayerEnemyInteractions_C_Enemy_OnPolymorphStart_Params
{
public:
	bool                                         Res;                                               // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BPI_PlayerEnemyInteractions.BPI_PlayerEnemyInteractions_C.CanEnemyBeTeamSwapped
struct IBPI_PlayerEnemyInteractions_C_CanEnemyBeTeamSwapped_Params
{
public:
	bool                                         Res;                                               // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BPI_PlayerEnemyInteractions.BPI_PlayerEnemyInteractions_C.GetCompanionTargetingSocket
struct IBPI_PlayerEnemyInteractions_C_GetCompanionTargetingSocket_Params
{
public:
	class FName                                  Socket;                                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BPI_PlayerEnemyInteractions.BPI_PlayerEnemyInteractions_C.Player_SpawnTransfusionProjectile
struct IBPI_PlayerEnemyInteractions_C_Player_SpawnTransfusionProjectile_Params
{
public:
	class UClass*                                DataBlueprint__Override_;                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                DamageType__Override_;                             // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                SourceActor;                                       // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                TargetActor;                                       // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Damage;                                            // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1080[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                Causer__Override_;                                 // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BPI_PlayerEnemyInteractions.BPI_PlayerEnemyInteractions_C.Player_HealthDepleted
struct IBPI_PlayerEnemyInteractions_C_Player_HealthDepleted_Params
{
public:
	class AOakCharacter*                         Character;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


