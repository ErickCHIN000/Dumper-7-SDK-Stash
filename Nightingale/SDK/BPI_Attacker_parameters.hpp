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
// Function BPI_Attacker.BPI_Attacker_C.StopCastEffects
struct IBPI_Attacker_C_StopCastEffects_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BPI_Attacker.BPI_Attacker_C.PlayCastEffects
struct IBPI_Attacker_C_PlayCastEffects_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BPI_Attacker.BPI_Attacker_C.GetEquippedWeapon
struct IBPI_Attacker_C_GetEquippedWeapon_Params
{
public:
	class AEquippableItem*                       CreatureWeapon;                                    // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BPI_Attacker.BPI_Attacker_C.EquipWeapon
struct IBPI_Attacker_C_EquipWeapon_Params
{
public:
	struct FGameplayTag                          GameplayWeaponTag;                                 // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	bool                                         Succeeded;                                         // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BPI_Attacker.BPI_Attacker_C.SelectWeapon
struct IBPI_Attacker_C_SelectWeapon_Params
{
public:
	class AActor*                                AttackTarget;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          GameplayWeaponTag;                                 // 0x8(0x8)(Parm, OutParm, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BPI_Attacker.BPI_Attacker_C.DisableMeleeCollision
struct IBPI_Attacker_C_DisableMeleeCollision_Params
{
public:
	bool                                         bSuccess;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BPI_Attacker.BPI_Attacker_C.EnableMeleeCollision
struct IBPI_Attacker_C_EnableMeleeCollision_Params
{
public:
	bool                                         bSuccess;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BPI_Attacker.BPI_Attacker_C.CanAttack
struct IBPI_Attacker_C_CanAttack_Params
{
public:
	bool                                         bCanAttack;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BPI_Attacker.BPI_Attacker_C.SelectAttack
struct IBPI_Attacker_C_SelectAttack_Params
{
public:
	class AActor*                                AttackTarget;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          GameplayAttackTag;                                 // 0x8(0x8)(Parm, OutParm, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BPI_Attacker.BPI_Attacker_C.Attack
struct IBPI_Attacker_C_Attack_Params
{
public:
	struct FGameplayTag                          GameplayAttackTag;                                 // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	bool                                         Succeeded;                                         // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


