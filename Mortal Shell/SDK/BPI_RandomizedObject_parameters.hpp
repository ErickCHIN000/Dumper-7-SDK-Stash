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

// 0xD0 (0xD0 - 0x0)
// Function BPI_RandomizedObject.BPI_RandomizedObject_C.AskRandomDarkFormUpgrade
struct IBPI_RandomizedObject_C_AskRandomDarkFormUpgrade_Params
{
public:
	struct FStruct_Rune                          Rune;                                              // 0x0(0xD0)(Parm, OutParm, HasGetValueTypeHash)
};

// 0xD8 (0xD8 - 0x0)
// Function BPI_RandomizedObject.BPI_RandomizedObject_C.AskRandomWeaponUpgrade
struct IBPI_RandomizedObject_C_AskRandomWeaponUpgrade_Params
{
public:
	enum class Enum_Rune_Tier                    Tier;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_215C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_Rune                          Upgrade;                                           // 0x8(0xD0)(Parm, OutParm, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BPI_RandomizedObject.BPI_RandomizedObject_C.ReRandomizeEnemy
struct IBPI_RandomizedObject_C_ReRandomizeEnemy_Params
{
public:
	int32                                        NewSeed;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Delay;                                             // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD0 (0xD0 - 0x0)
// Function BPI_RandomizedObject.BPI_RandomizedObject_C.AskRandomUpgrade
struct IBPI_RandomizedObject_C_AskRandomUpgrade_Params
{
public:
	struct FStruct_Rune                          Upgrade;                                           // 0x0(0xD0)(Parm, OutParm, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BPI_RandomizedObject.BPI_RandomizedObject_C.SetPillarType
struct IBPI_RandomizedObject_C_SetPillarType_Params
{
public:
	enum class Enum_PillarType                   Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BPI_RandomizedObject.BPI_RandomizedObject_C.SetObjectMainChance%
struct IBPI_RandomizedObject_C_SetObjectMainChance__Params
{
public:
	float                                        Rune_Chance;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Item_Chance;                                       // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BPI_RandomizedObject.BPI_RandomizedObject_C.InitiliazeSeed
struct IBPI_RandomizedObject_C_InitiliazeSeed_Params
{
public:
	int32                                        SeedID;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        InitialSeed;                                       // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


