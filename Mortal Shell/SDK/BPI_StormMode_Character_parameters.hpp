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

// 0x4 (0x4 - 0x0)
// Function BPI_StormMode_Character.BPI_StormMode_Character_C.GetRiposteCathDropItemChance
struct IBPI_StormMode_Character_C_GetRiposteCathDropItemChance_Params
{
public:
	float                                        Chance;                                            // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BPI_StormMode_Character.BPI_StormMode_Character_C.GetBurningMaceDamageBonus
struct IBPI_StormMode_Character_C_GetBurningMaceDamageBonus_Params
{
public:
	float                                        Bonus;                                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BPI_StormMode_Character.BPI_StormMode_Character_C.GetBoltDropChance
struct IBPI_StormMode_Character_C_GetBoltDropChance_Params
{
public:
	float                                        Chance;                                            // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BPI_StormMode_Character.BPI_StormMode_Character_C.GetUnlockedRipostes
struct IBPI_StormMode_Character_C_GetUnlockedRipostes_Params
{
public:
	TArray<enum class ERiposteTypes>             Ripostes;                                          // 0x0(0x10)(Parm, OutParm, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BPI_StormMode_Character.BPI_StormMode_Character_C.StormMode_IsCrawling
struct IBPI_StormMode_Character_C_StormMode_IsCrawling_Params
{
public:
	bool                                         Crawling;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BPI_StormMode_Character.BPI_StormMode_Character_C.AddStartingRiposte
struct IBPI_StormMode_Character_C_AddStartingRiposte_Params
{
public:
	enum class ERiposteTypes                     Riposte;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BPI_StormMode_Character.BPI_StormMode_Character_C.ChangeWeaponUtil
struct IBPI_StormMode_Character_C_ChangeWeaponUtil_Params
{
public:
	enum class EComboTypes                       NewWeapon;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BPI_StormMode_Character.BPI_StormMode_Character_C.ChangeShellUtil
struct IBPI_StormMode_Character_C_ChangeShellUtil_Params
{
public:
	enum class EArmorTypes                       Shell;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BPI_StormMode_Character.BPI_StormMode_Character_C.HasCharacterFullySpawned
struct IBPI_StormMode_Character_C_HasCharacterFullySpawned_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function BPI_StormMode_Character.BPI_StormMode_Character_C.HallowedSwordSuper_LifeSteal
struct IBPI_StormMode_Character_C_HallowedSwordSuper_LifeSteal_Params
{
public:
	float                                        Damage;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2499[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AEnemyCharacter_C*                     Enemy;                                             // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BPI_StormMode_Character.BPI_StormMode_Character_C.KickRune_3
struct IBPI_StormMode_Character_C_KickRune_3_Params
{
public:
	float                                        PoiseReduction;                                    // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BPI_StormMode_Character.BPI_StormMode_Character_C.KickRune_2
struct IBPI_StormMode_Character_C_KickRune_2_Params
{
public:
	float                                        Damage;                                            // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BPI_StormMode_Character.BPI_StormMode_Character_C.KickRune_1
struct IBPI_StormMode_Character_C_KickRune_1_Params
{
public:
	class AActor*                                KickedActor;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Success_;                                          // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BPI_StormMode_Character.BPI_StormMode_Character_C.HandleKickRunes
struct IBPI_StormMode_Character_C_HandleKickRunes_Params
{
public:
	class FName                                  KickRune;                                          // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD0 (0xD0 - 0x0)
// Function BPI_StormMode_Character.BPI_StormMode_Character_C.AddImmediateEffectRune
struct IBPI_StormMode_Character_C_AddImmediateEffectRune_Params
{
public:
	struct FStruct_Rune                          Rune;                                              // 0x0(0xD0)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BPI_StormMode_Character.BPI_StormMode_Character_C.ApplyImmediateRuneEffect
struct IBPI_StormMode_Character_C_ApplyImmediateRuneEffect_Params
{
public:
	class FName                                  ID;                                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BPI_StormMode_Character.BPI_StormMode_Character_C.ApplyRuneHealingEffect
struct IBPI_StormMode_Character_C_ApplyRuneHealingEffect_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Component;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


