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
// Function BPI_StormMode_PC.BPI_StormMode_PC_C.StormMode_GetEquippedLute
struct IBPI_StormMode_PC_C_StormMode_GetEquippedLute_Params
{
public:
	class FName                                  Lute;                                              // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BPI_StormMode_PC.BPI_StormMode_PC_C.StormMode_UpdateEquippedLute
struct IBPI_StormMode_PC_C_StormMode_UpdateEquippedLute_Params
{
public:
	class FName                                  Lute;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function BPI_StormMode_PC.BPI_StormMode_PC_C.StormMode_GetCurrentUpgradeForSlot
struct IBPI_StormMode_PC_C_StormMode_GetCurrentUpgradeForSlot_Params
{
public:
	enum class Enum_RuneSlots_IDs                Slot;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1849[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ID;                                                // 0x4(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function BPI_StormMode_PC.BPI_StormMode_PC_C.StormMode_GetEndingProgress
struct IBPI_StormMode_PC_C_StormMode_GetEndingProgress_Params
{
public:
	class FName                                  ID;                                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Progress;                                          // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BPI_StormMode_PC.BPI_StormMode_PC_C.StormMode_UpdateSelectedWeapon
struct IBPI_StormMode_PC_C_StormMode_UpdateSelectedWeapon_Params
{
public:
	enum class EComboTypes                       Weapon;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function BPI_StormMode_PC.BPI_StormMode_PC_C.StormMode_GetInitialProgress
struct IBPI_StormMode_PC_C_StormMode_GetInitialProgress_Params
{
public:
	class FName                                  ID;                                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Progress;                                          // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BPI_StormMode_PC.BPI_StormMode_PC_C.StormMode_IsSisterDialogue
struct IBPI_StormMode_PC_C_StormMode_IsSisterDialogue_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BPI_StormMode_PC.BPI_StormMode_PC_C.StormMode_DebugDialogues
struct IBPI_StormMode_PC_C_StormMode_DebugDialogues_Params
{
public:
	bool                                         Debug_;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function BPI_StormMode_PC.BPI_StormMode_PC_C.StormMode_PlaySister3ChoiceWindowAudio
struct IBPI_StormMode_PC_C_StormMode_PlaySister3ChoiceWindowAudio_Params
{
public:
	class USoundBase*                            Sound;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       Audio;                                             // 0x8(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BPI_StormMode_PC.BPI_StormMode_PC_C.StormMode_DebugConcurrentEnemy
struct IBPI_StormMode_PC_C_StormMode_DebugConcurrentEnemy_Params
{
public:
	bool                                         Remove;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function BPI_StormMode_PC.BPI_StormMode_PC_C.StormMode_GetCurrentShadeForCharacter
struct IBPI_StormMode_PC_C_StormMode_GetCurrentShadeForCharacter_Params
{
public:
	enum class EArmorTypes                       Character;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_ShellDye                     Shade;                                             // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD8 (0xD8 - 0x0)
// Function BPI_StormMode_PC.BPI_StormMode_PC_C.StormMode_AskForRandomWeaponUpgrade
struct IBPI_StormMode_PC_C_StormMode_AskForRandomWeaponUpgrade_Params
{
public:
	bool                                         GrantUpgrade_;                                     // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_199B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_Rune                          Upgrade;                                           // 0x8(0xD0)(Parm, OutParm, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BPI_StormMode_PC.BPI_StormMode_PC_C.StormMode_GetUnlockedItems
struct IBPI_StormMode_PC_C_StormMode_GetUnlockedItems_Params
{
public:
	TArray<class FName>                          UnlockedItems;                                     // 0x0(0x10)(Parm, OutParm, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function BPI_StormMode_PC.BPI_StormMode_PC_C.SetMilestoneProgressIfLess
struct IBPI_StormMode_PC_C_SetMilestoneProgressIfLess_Params
{
public:
	class FName                                  ID;                                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NewMinVal;                                         // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BPI_StormMode_PC.BPI_StormMode_PC_C.IncreaseMilestoneProgress
struct IBPI_StormMode_PC_C_IncreaseMilestoneProgress_Params
{
public:
	class FName                                  ID;                                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x29 (0x29 - 0x0)
// Function BPI_StormMode_PC.BPI_StormMode_PC_C.IsMilestoneUnlocked
struct IBPI_StormMode_PC_C_IsMilestoneUnlocked_Params
{
public:
	class FName                                  ID;                                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bUnlocked;                                         // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1A59[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Current;                                           // 0xC(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Percent;                                           // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Tier;                                              // 0x14(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                TiersX;                                            // 0x18(0x10)(Parm, OutParm, HasGetValueTypeHash)
	bool                                         HasTier;                                           // 0x28(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC (0xC - 0x0)
// Function BPI_StormMode_PC.BPI_StormMode_PC_C.StormMode_RemoveItemWithNotify
struct IBPI_StormMode_PC_C_StormMode_RemoveItemWithNotify_Params
{
public:
	class FName                                  ID;                                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        AmountToRemove;                                    // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function BPI_StormMode_PC.BPI_StormMode_PC_C.StormMode_UIVisibility
struct IBPI_StormMode_PC_C_StormMode_UIVisibility_Params
{
public:
	bool                                         Show;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Instant;                                           // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BPI_StormMode_PC.BPI_StormMode_PC_C.StormMode_TeleportToNewArea
struct IBPI_StormMode_PC_C_StormMode_TeleportToNewArea_Params
{
public:
	class FName                                  ID;                                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function BPI_StormMode_PC.BPI_StormMode_PC_C.StormMode_StartingRiposteNotDefault?
struct IBPI_StormMode_PC_C_StormMode_StartingRiposteNotDefault__Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1B39[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  StartingRiposte;                                   // 0x4(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function BPI_StormMode_PC.BPI_StormMode_PC_C.StormMode_GetNamedInts
struct IBPI_StormMode_PC_C_StormMode_GetNamedInts_Params
{
public:
	TMap<class FName, int32>                     NamedInts;                                         // 0x0(0x50)(Parm, OutParm)
};

// 0xD0 (0xD0 - 0x0)
// Function BPI_StormMode_PC.BPI_StormMode_PC_C.StormMode_AskRandomDarkFormUpgrade
struct IBPI_StormMode_PC_C_StormMode_AskRandomDarkFormUpgrade_Params
{
public:
	struct FStruct_Rune                          Rune;                                              // 0x0(0xD0)(Parm, OutParm, HasGetValueTypeHash)
};

// 0xD0 (0xD0 - 0x0)
// Function BPI_StormMode_PC.BPI_StormMode_PC_C.StormMode_AskRandomUpgrade
struct IBPI_StormMode_PC_C_StormMode_AskRandomUpgrade_Params
{
public:
	struct FStruct_Rune                          Upgrade;                                           // 0x0(0xD0)(Parm, OutParm, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BPI_StormMode_PC.BPI_StormMode_PC_C.StormMode_UpdateCheckpointTransform
struct IBPI_StormMode_PC_C_StormMode_UpdateCheckpointTransform_Params
{
public:
	struct FTransform                            Checkpoint;                                        // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BPI_StormMode_PC.BPI_StormMode_PC_C.StormMode_CheckForGlands
struct IBPI_StormMode_PC_C_StormMode_CheckForGlands_Params
{
public:
	bool                                         HasAny_;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BPI_StormMode_PC.BPI_StormMode_PC_C.StormMode_GetRunPlaytime
struct IBPI_StormMode_PC_C_StormMode_GetRunPlaytime_Params
{
public:
	struct FDateTime                             RunPlaytime;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0xD1 (0xD1 - 0x0)
// Function BPI_StormMode_PC.BPI_StormMode_PC_C.StormMode_ShowRuneNotify
struct IBPI_StormMode_PC_C_StormMode_ShowRuneNotify_Params
{
public:
	struct FStruct_Rune                          Rune;                                              // 0x0(0xD0)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                         IsBonusRune;                                       // 0xD0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function BPI_StormMode_PC.BPI_StormMode_PC_C.StormMode_AskForASeed
struct IBPI_StormMode_PC_C_StormMode_AskForASeed_Params
{
public:
	int32                                        Seed;                                              // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function BPI_StormMode_PC.BPI_StormMode_PC_C.StormMode_GetSelectedShell
struct IBPI_StormMode_PC_C_StormMode_GetSelectedShell_Params
{
public:
	bool                                         HasSelected;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EArmorTypes                       Shell;                                             // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BPI_StormMode_PC.BPI_StormMode_PC_C.StormMode_SetSelectedShell
struct IBPI_StormMode_PC_C_StormMode_SetSelectedShell_Params
{
public:
	enum class EArmorTypes                       Shell;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function BPI_StormMode_PC.BPI_StormMode_PC_C.StormMode_SetSeeds
struct IBPI_StormMode_PC_C_StormMode_SetSeeds_Params
{
public:
	struct FStruct_StormModeSeeds                Seeds;                                             // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function BPI_StormMode_PC.BPI_StormMode_PC_C.StormMode_GetSeeds
struct IBPI_StormMode_PC_C_StormMode_GetSeeds_Params
{
public:
	struct FStruct_StormModeSeeds                Seeds;                                             // 0x0(0x28)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function BPI_StormMode_PC.BPI_StormMode_PC_C.StormMode_SetGlandData
struct IBPI_StormMode_PC_C_StormMode_SetGlandData_Params
{
public:
	enum class Enum_StormModeProgress            Progress;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_StormModeGlandData           GlandData;                                         // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function BPI_StormMode_PC.BPI_StormMode_PC_C.StormMode_GetCurrentGlandData
struct IBPI_StormMode_PC_C_StormMode_GetCurrentGlandData_Params
{
public:
	enum class Enum_StormModeProgress            Progress;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_StormModeGlandData           Gland;                                             // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function BPI_StormMode_PC.BPI_StormMode_PC_C.SetStormModeEntranceState
struct IBPI_StormMode_PC_C_SetStormModeEntranceState_Params
{
public:
	enum class Enum_StormModeArea                Area;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_StormModeAreaState           EntranceState;                                     // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BPI_StormMode_PC.BPI_StormMode_PC_C.StormMode_ShouldUnlockChalice?
struct IBPI_StormMode_PC_C_StormMode_ShouldUnlockChalice__Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BPI_StormMode_PC.BPI_StormMode_PC_C.GetStormMode_ShouldOpenArea?
struct IBPI_StormMode_PC_C_GetStormMode_ShouldOpenArea__Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function BPI_StormMode_PC.BPI_StormMode_PC_C.GetStormModeAreaState
struct IBPI_StormMode_PC_C_GetStormModeAreaState_Params
{
public:
	enum class Enum_StormModeArea                Area;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_StormModeAreaState           CurrentState;                                      // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function BPI_StormMode_PC.BPI_StormMode_PC_C.GetStormModeAllAreasState
struct IBPI_StormMode_PC_C_GetStormModeAllAreasState_Params
{
public:
	TMap<enum class Enum_StormModeArea, enum class Enum_StormModeAreaState> AreasState;                                        // 0x0(0x50)(Parm, OutParm)
};

// 0x1 (0x1 - 0x0)
// Function BPI_StormMode_PC.BPI_StormMode_PC_C.SetStormModeProgress
struct IBPI_StormMode_PC_C_SetStormModeProgress_Params
{
public:
	enum class Enum_StormModeProgress            Progress;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BPI_StormMode_PC.BPI_StormMode_PC_C.GetStormModeProgress
struct IBPI_StormMode_PC_C_GetStormModeProgress_Params
{
public:
	enum class Enum_StormModeProgress            Progress;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD3 (0xD3 - 0x0)
// Function BPI_StormMode_PC.BPI_StormMode_PC_C.AddNewRune
struct IBPI_StormMode_PC_C_AddNewRune_Params
{
public:
	struct FStruct_Rune                          Rune;                                              // 0x0(0xD0)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                         ShowNotify_;                                       // 0xD0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsBonusRune_;                                      // 0xD1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ForceHealEffect_;                                  // 0xD2(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


