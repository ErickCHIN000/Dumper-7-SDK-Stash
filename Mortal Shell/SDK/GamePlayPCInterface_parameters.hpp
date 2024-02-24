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

// 0x2 (0x2 - 0x0)
// Function GamePlayPCInterface.GamePlayPCInterface_C.IsSkinApplied
struct IGamePlayPCInterface_C_IsSkinApplied_Params
{
public:
	enum class Enum_Skins                        Skin;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function GamePlayPCInterface.GamePlayPCInterface_C.StormMode_HasLoreEntry
struct IGamePlayPCInterface_C_StormMode_HasLoreEntry_Params
{
public:
	class FName                                  ID;                                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function GamePlayPCInterface.GamePlayPCInterface_C.StormMode_UnlockLoreEntry
struct IGamePlayPCInterface_C_StormMode_UnlockLoreEntry_Params
{
public:
	class FName                                  ID;                                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function GamePlayPCInterface.GamePlayPCInterface_C.GetHideUI
struct IGamePlayPCInterface_C_GetHideUI_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function GamePlayPCInterface.GamePlayPCInterface_C.GetMainLevelFromSave_StormMode
struct IGamePlayPCInterface_C_GetMainLevelFromSave_StormMode_Params
{
public:
	class FName                                  Level;                                             // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function GamePlayPCInterface.GamePlayPCInterface_C.GetMainLevelFromSave
struct IGamePlayPCInterface_C_GetMainLevelFromSave_Params
{
public:
	class FName                                  Level;                                             // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function GamePlayPCInterface.GamePlayPCInterface_C.SetInputBlocked
struct IGamePlayPCInterface_C_SetInputBlocked_Params
{
public:
	bool                                         bLock;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function GamePlayPCInterface.GamePlayPCInterface_C.GetIsInputBlocked
struct IGamePlayPCInterface_C_GetIsInputBlocked_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function GamePlayPCInterface.GamePlayPCInterface_C.InventoryUtil_IsTutorialUnlocked?
struct IGamePlayPCInterface_C_InventoryUtil_IsTutorialUnlocked__Params
{
public:
	class FName                                  Tut;                                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Unlocked_;                                         // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function GamePlayPCInterface.GamePlayPCInterface_C.GetIsInBossFight
struct IGamePlayPCInterface_C_GetIsInBossFight_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function GamePlayPCInterface.GamePlayPCInterface_C.GetHadernAbilityTextFromIndex
struct IGamePlayPCInterface_C_GetHadernAbilityTextFromIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         InvalidIndex;                                      // 0x4(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_B97[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Text;                                              // 0x8(0x18)(Parm, OutParm)
};

// 0x20 (0x20 - 0x0)
// Function GamePlayPCInterface.GamePlayPCInterface_C.GetHadernAbilityTextFromSlot
struct IGamePlayPCInterface_C_GetHadernAbilityTextFromSlot_Params
{
public:
	enum class Enum_HadernSkills                 HadernSlot;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BBC[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Text;                                              // 0x8(0x18)(Parm, OutParm)
};

// 0xC (0xC - 0x0)
// Function GamePlayPCInterface.GamePlayPCInterface_C.GetCurrentHadernAbilityForSlot
struct IGamePlayPCInterface_C_GetCurrentHadernAbilityForSlot_Params
{
public:
	enum class Enum_HadernSkills                 HadernSlot;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BE9[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  AbilityID;                                         // 0x4(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function GamePlayPCInterface.GamePlayPCInterface_C.SetNewGamePlusLevel
struct IGamePlayPCInterface_C_SetNewGamePlusLevel_Params
{
public:
	int32                                        Level;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function GamePlayPCInterface.GamePlayPCInterface_C.StormMode_GetCurrentMainLevelFromSave
struct IGamePlayPCInterface_C_StormMode_GetCurrentMainLevelFromSave_Params
{
public:
	class FName                                  Level;                                             // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function GamePlayPCInterface.GamePlayPCInterface_C.GetEquipmentMenuType
struct IGamePlayPCInterface_C_GetEquipmentMenuType_Params
{
public:
	enum class Enum_EquipmentMenuType            Menu;                                              // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function GamePlayPCInterface.GamePlayPCInterface_C.CanOpenPhotoModeFromPauseMenu
struct IGamePlayPCInterface_C_CanOpenPhotoModeFromPauseMenu_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function GamePlayPCInterface.GamePlayPCInterface_C.GetIsInCutscene
struct IGamePlayPCInterface_C_GetIsInCutscene_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function GamePlayPCInterface.GamePlayPCInterface_C.SetShellDyesLockState
struct IGamePlayPCInterface_C_SetShellDyesLockState_Params
{
public:
	struct FStruct_ShellsDyes_LockState          LockState;                                         // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function GamePlayPCInterface.GamePlayPCInterface_C.GetShellDyesLockState
struct IGamePlayPCInterface_C_GetShellDyesLockState_Params
{
public:
	struct FStruct_ShellsDyes_LockState          LockState;                                         // 0x0(0x18)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function GamePlayPCInterface.GamePlayPCInterface_C.GetHasRenouncedShell
struct IGamePlayPCInterface_C_GetHasRenouncedShell_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x6 (0x6 - 0x0)
// Function GamePlayPCInterface.GamePlayPCInterface_C.SetShellDyes
struct IGamePlayPCInterface_C_SetShellDyes_Params
{
public:
	struct FStruct_ShellDyes                     Dyes;                                              // 0x0(0x6)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x6 (0x6 - 0x0)
// Function GamePlayPCInterface.GamePlayPCInterface_C.GetShellDyes
struct IGamePlayPCInterface_C_GetShellDyes_Params
{
public:
	struct FStruct_ShellDyes                     Dyes;                                              // 0x0(0x6)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function GamePlayPCInterface.GamePlayPCInterface_C.GetIsInPhotoMode
struct IGamePlayPCInterface_C_GetIsInPhotoMode_Params
{
public:
	bool                                         PhotoMode_;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function GamePlayPCInterface.GamePlayPCInterface_C.UpdateBallistazookaOpacity
struct IGamePlayPCInterface_C_UpdateBallistazookaOpacity_Params
{
public:
	float                                        Opacity;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function GamePlayPCInterface.GamePlayPCInterface_C.UpdateAspectRationConstraint
struct IGamePlayPCInterface_C_UpdateAspectRationConstraint_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function GamePlayPCInterface.GamePlayPCInterface_C.UI_DebugLineEntry
struct IGamePlayPCInterface_C_UI_DebugLineEntry_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                DebugLine;                                         // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function GamePlayPCInterface.GamePlayPCInterface_C.SetForceFeedback
struct IGamePlayPCInterface_C_SetForceFeedback_Params
{
public:
	float                                        Scale;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function GamePlayPCInterface.GamePlayPCInterface_C.SetCameraShake
struct IGamePlayPCInterface_C_SetCameraShake_Params
{
public:
	float                                        Scale;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function GamePlayPCInterface.GamePlayPCInterface_C.OnWeaponChange
struct IGamePlayPCInterface_C_OnWeaponChange_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsChangingWeaponMode;                              // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function GamePlayPCInterface.GamePlayPCInterface_C.UI_EscapeMenuPressed
struct IGamePlayPCInterface_C_UI_EscapeMenuPressed_Params
{
public:
	bool                                         Closed;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function GamePlayPCInterface.GamePlayPCInterface_C.GameplayPC_IsInTutorial
struct IGamePlayPCInterface_C_GameplayPC_IsInTutorial_Params
{
public:
	bool                                         IsInTutorial;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function GamePlayPCInterface.GamePlayPCInterface_C.InventoryUtil_IsUpgradeUnlocked
struct IGamePlayPCInterface_C_InventoryUtil_IsUpgradeUnlocked_Params
{
public:
	class FName                                  UnlockID;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Unlocked;                                          // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xA (0xA - 0x0)
// Function GamePlayPCInterface.GamePlayPCInterface_C.InventoryUtil_GetCanUseItem
struct IGamePlayPCInterface_C_InventoryUtil_GetCanUseItem_Params
{
public:
	class FName                                  ID;                                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UsableInDarkForm;                                  // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class Enum_InventoryItem_CanUse         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function GamePlayPCInterface.GamePlayPCInterface_C.EquippedShell
struct IGamePlayPCInterface_C_EquippedShell_Params
{
public:
	class FText                                  ShellName;                                         // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  ShellTagline;                                      // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x4 (0x4 - 0x0)
// Function GamePlayPCInterface.GamePlayPCInterface_C.PlayerControllerUtils_SetHadernDefeatCounter
struct IGamePlayPCInterface_C_PlayerControllerUtils_SetHadernDefeatCounter_Params
{
public:
	int32                                        NewCounter;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function GamePlayPCInterface.GamePlayPCInterface_C.PlayerControllerUtils_SetGhostShellDeteriorationCounter
struct IGamePlayPCInterface_C_PlayerControllerUtils_SetGhostShellDeteriorationCounter_Params
{
public:
	int32                                        Count;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function GamePlayPCInterface.GamePlayPCInterface_C.InventoryUtil_LockUpgrade
struct IGamePlayPCInterface_C_InventoryUtil_LockUpgrade_Params
{
public:
	class FName                                  ItemName;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function GamePlayPCInterface.GamePlayPCInterface_C.InventoryUtil_UnlockUpgrade
struct IGamePlayPCInterface_C_InventoryUtil_UnlockUpgrade_Params
{
public:
	class FName                                  ItemName;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function GamePlayPCInterface.GamePlayPCInterface_C.PlayerControllerUtils_SetMaxHP
struct IGamePlayPCInterface_C_PlayerControllerUtils_SetMaxHP_Params
{
public:
	int32                                        SetMaxHP;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function GamePlayPCInterface.GamePlayPCInterface_C.InventoryUtil_SwitchArmor
struct IGamePlayPCInterface_C_InventoryUtil_SwitchArmor_Params
{
public:
	int32                                        ArmorID;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function GamePlayPCInterface.GamePlayPCInterface_C.InventoryUtil_LockWeaponByID
struct IGamePlayPCInterface_C_InventoryUtil_LockWeaponByID_Params
{
public:
	int32                                        ID;                                                // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function GamePlayPCInterface.GamePlayPCInterface_C.InventoryUtil_UnlockWeaponByID
struct IGamePlayPCInterface_C_InventoryUtil_UnlockWeaponByID_Params
{
public:
	int32                                        ID;                                                // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function GamePlayPCInterface.GamePlayPCInterface_C.InventoryUtil_SetInventoryItemByID
struct IGamePlayPCInterface_C_InventoryUtil_SetInventoryItemByID_Params
{
public:
	int32                                        WeaponID;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Slot;                                              // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsChangingWeaponMode;                              // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function GamePlayPCInterface.GamePlayPCInterface_C.Util_SaveGame
struct IGamePlayPCInterface_C_Util_SaveGame_Params
{
public:
	bool                                         bShouldRestorePlayerTransformOnLoad;               // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x140 (0x140 - 0x0)
// Function GamePlayPCInterface.GamePlayPCInterface_C.UI_GetContainerItem
struct IGamePlayPCInterface_C_UI_GetContainerItem_Params
{
public:
	int32                                        ContainerSlot;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1000[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryItem                        InventoryItem;                                     // 0x8(0x132)(Parm, OutParm, HasGetValueTypeHash)
	uint8                                        Pad_1005[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x140 (0x140 - 0x0)
// Function GamePlayPCInterface.GamePlayPCInterface_C.UI_GetInventoryItemFromSlot
struct IGamePlayPCInterface_C_UI_GetInventoryItemFromSlot_Params
{
public:
	int32                                        InventorySlot;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1033[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryItem                        InventoryItem;                                     // 0x8(0x132)(Parm, OutParm, HasGetValueTypeHash)
	uint8                                        Pad_1036[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function GamePlayPCInterface.GamePlayPCInterface_C.UI_GetWasInputKeyJustPressed
struct IGamePlayPCInterface_C_UI_GetWasInputKeyJustPressed_Params
{
public:
	bool                                         WasKeyPressed;                                     // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function GamePlayPCInterface.GamePlayPCInterface_C.UI_GetNumPlayerDeaths
struct IGamePlayPCInterface_C_UI_GetNumPlayerDeaths_Params
{
public:
	int32                                        TotalPlayerDeaths;                                 // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function GamePlayPCInterface.GamePlayPCInterface_C.UI_SetUIMode
struct IGamePlayPCInterface_C_UI_SetUIMode_Params
{
public:
	bool                                         IsUIMode;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function GamePlayPCInterface.GamePlayPCInterface_C.UI_SetDialogMode
struct IGamePlayPCInterface_C_UI_SetDialogMode_Params
{
public:
	bool                                         IsDialogMode;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


