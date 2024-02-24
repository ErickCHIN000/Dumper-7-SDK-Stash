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

// 0x8 (0x8 - 0x0)
// Function BPI_TaskTracking.BPI_TaskTracking_C.CallOnInteractedWithPlayer
struct IBPI_TaskTracking_C_CallOnInteractedWithPlayer_Params
{
public:
	class APawn*                                 InteractingPawn;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x90 (0x90 - 0x0)
// Function BPI_TaskTracking.BPI_TaskTracking_C.CallFishCaught
struct IBPI_TaskTracking_C_CallFishCaught_Params
{
public:
	struct FFish                                 CaughtFish;                                        // 0x0(0x90)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0x28 (0x28 - 0x0)
// Function BPI_TaskTracking.BPI_TaskTracking_C.CallOnSpellCast
struct IBPI_TaskTracking_C_CallOnSpellCast_Params
{
public:
	TSoftObjectPtr<class UTechniqueDataAsset>    SpellCast;                                         // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x128 (0x128 - 0x0)
// Function BPI_TaskTracking.BPI_TaskTracking_C.CallWeakpointHit
struct IBPI_TaskTracking_C_CallWeakpointHit_Params
{
public:
	struct FGameplayTagContainer                 WeakpointType;                                     // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGameplayTagContainer                 CreatureTags;                                      // 0x20(0x20)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FHitResult                            HitResult;                                         // 0x40(0xE8)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// 0x8C (0x8C - 0x0)
// Function BPI_TaskTracking.BPI_TaskTracking_C.CallItemDeposited_InWorldContainer
struct IBPI_TaskTracking_C_CallItemDeposited_InWorldContainer_Params
{
public:
	struct FItemDataReference                    ItemRowHandle;                                     // 0x0(0x80)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	int32                                        Quantity;                                          // 0x80(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          ContainerTag;                                      // 0x84(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function BPI_TaskTracking.BPI_TaskTracking_C.CallStructureCompleted
struct IBPI_TaskTracking_C_CallStructureCompleted_Params
{
public:
	class AActor*                                Owning_Actor;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        Piece_ID;                                          // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2F4 (0x2F4 - 0x0)
// Function BPI_TaskTracking.BPI_TaskTracking_C.CallResourceHarvested
struct IBPI_TaskTracking_C_CallResourceHarvested_Params
{
public:
	struct FInventoryEntry                       ItemEntry;                                         // 0x0(0x2F0)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                        Amount;                                            // 0x2F0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BPI_TaskTracking.BPI_TaskTracking_C.CallStructureBlueprintPlaced
struct IBPI_TaskTracking_C_CallStructureBlueprintPlaced_Params
{
public:
	struct FDataTableRowHandle                   StructureDataHandle;                               // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BPI_TaskTracking.BPI_TaskTracking_C.CallGiveTag
struct IBPI_TaskTracking_C_CallGiveTag_Params
{
public:
	struct FGameplayTag                          Gameplay_Tag;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function BPI_TaskTracking.BPI_TaskTracking_C.CallCreatureKilled
struct IBPI_TaskTracking_C_CallCreatureKilled_Params
{
public:
	struct FDataTableRowHandle                   Creature_Information;                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 CreatureTagContainer;                              // 0x10(0x20)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGameplayTagContainer                 KillerTagContainer;                                // 0x30(0x20)(BlueprintVisible, BlueprintReadOnly, Parm)
};

}
}


