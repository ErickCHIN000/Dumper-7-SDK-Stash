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
// Function EnemyCommonInterface.EnemyCommonInterface_C.Enemy_IsInParryableState
struct IEnemyCommonInterface_C_Enemy_IsInParryableState_Params
{
public:
	bool                                         IsParryableState_;                                 // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function EnemyCommonInterface.EnemyCommonInterface_C.BossCrucix_IsSimulatingLittleBro
struct IEnemyCommonInterface_C_BossCrucix_IsSimulatingLittleBro_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function EnemyCommonInterface.EnemyCommonInterface_C.BossCharacterHadern_IsHadern
struct IEnemyCommonInterface_C_BossCharacterHadern_IsHadern_Params
{
public:
	bool                                         IsHadern;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function EnemyCommonInterface.EnemyCommonInterface_C.BossCryptCharacter_GetThrowAttack
struct IEnemyCommonInterface_C_BossCryptCharacter_GetThrowAttack_Params
{
public:
	bool                                         ThrowAttack;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function EnemyCommonInterface.EnemyCommonInterface_C.EnemyCommon_SkipDeathBlowReactionAnimation
struct IEnemyCommonInterface_C_EnemyCommon_SkipDeathBlowReactionAnimation_Params
{
public:
	bool                                         ShouldSkip;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function EnemyCommonInterface.EnemyCommonInterface_C.EnemyCommon_GetHealth
struct IEnemyCommonInterface_C_EnemyCommon_GetHealth_Params
{
public:
	float                                        Health;                                            // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxHealth;                                         // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


