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
// Function PlayerHUDInterface.PlayerHUDInterface_C.GetRestWidget
struct IPlayerHUDInterface_C_GetRestWidget_Params
{
public:
	class URestWidget_C*                         RestWidget;                                        // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function PlayerHUDInterface.PlayerHUDInterface_C.GetTutorialNotifyVisible
struct IPlayerHUDInterface_C_GetTutorialNotifyVisible_Params
{
public:
	bool                                         IsVisible;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function PlayerHUDInterface.PlayerHUDInterface_C.GetQuestZoneWidget
struct IPlayerHUDInterface_C_GetQuestZoneWidget_Params
{
public:
	class UQuestZoneWidget_C*                    QuestZoneWidget;                                   // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function PlayerHUDInterface.PlayerHUDInterface_C.GetSearchBar
struct IPlayerHUDInterface_C_GetSearchBar_Params
{
public:
	class USearchBar_v3_C*                       SearchBarWidget;                                   // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function PlayerHUDInterface.PlayerHUDInterface_C.GetTargetBar
struct IPlayerHUDInterface_C_GetTargetBar_Params
{
public:
	class UTargetBarWidget_v3_C*                 TargetBarWidget;                                   // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function PlayerHUDInterface.PlayerHUDInterface_C.GetTextNotify
struct IPlayerHUDInterface_C_GetTextNotify_Params
{
public:
	class UTextNotify_C*                         TextNotifyWidget;                                  // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function PlayerHUDInterface.PlayerHUDInterface_C.ToggleCharacterUI
struct IPlayerHUDInterface_C_ToggleCharacterUI_Params
{
public:
	enum class ECharacterScreenType              Screen;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function PlayerHUDInterface.PlayerHUDInterface_C.ToggleOnlineList
struct IPlayerHUDInterface_C_ToggleOnlineList_Params
{
public:
	bool                                         bPressed;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function PlayerHUDInterface.PlayerHUDInterface_C.GetAiStealthKillBar
struct IPlayerHUDInterface_C_GetAiStealthKillBar_Params
{
public:
	class UAiStealthKillBar_C*                   AiKillBar;                                         // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function PlayerHUDInterface.PlayerHUDInterface_C.GetSubtitlesBar
struct IPlayerHUDInterface_C_GetSubtitlesBar_Params
{
public:
	class USubtitlesBar_v3_C*                    Bar;                                               // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function PlayerHUDInterface.PlayerHUDInterface_C.GetItemSelectionBar
struct IPlayerHUDInterface_C_GetItemSelectionBar_Params
{
public:
	class UItemSelectionBar_v3_C*                SelectionBar;                                      // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function PlayerHUDInterface.PlayerHUDInterface_C.GetChatWidget
struct IPlayerHUDInterface_C_GetChatWidget_Params
{
public:
	class UChatWidget_v3_C*                      ChatWidget;                                        // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


