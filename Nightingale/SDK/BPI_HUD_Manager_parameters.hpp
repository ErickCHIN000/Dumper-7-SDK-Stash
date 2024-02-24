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
// Function BPI_HUD_Manager.BPI_HUD_Manager_C.IsCardNotificationQueueEmpty
struct IBPI_HUD_Manager_C_IsCardNotificationQueueEmpty_Params
{
public:
	bool                                         bIsEmpty;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BPI_HUD_Manager.BPI_HUD_Manager_C.BuildUX_Feedback_HeightControls
struct IBPI_HUD_Manager_C_BuildUX_Feedback_HeightControls_Params
{
public:
	bool                                         CanAdjustHeight;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4BE7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Height_Current;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Height_Max;                                        // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Height_Min;                                        // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BPI_HUD_Manager.BPI_HUD_Manager_C.BuildUX_Feedback_RotationControls
struct IBPI_HUD_Manager_C_BuildUX_Feedback_RotationControls_Params
{
public:
	bool                                         CanRotate;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4C20[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CurrentRotation;                                   // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB8 (0xB8 - 0x0)
// Function BPI_HUD_Manager.BPI_HUD_Manager_C.BuildUX_Feedback_Invalid
struct IBPI_HUD_Manager_C_BuildUX_Feedback_Invalid_Params
{
public:
	struct FStructurePlacementFeedback           Feedback;                                          // 0x0(0xB8)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
};

// 0x18 (0x18 - 0x0)
// Function BPI_HUD_Manager.BPI_HUD_Manager_C.BuildUX_Feedback_Invalid_Intersecting
struct IBPI_HUD_Manager_C_BuildUX_Feedback_Invalid_Intersecting_Params
{
public:
	struct FStructurePlacementFeedback_Collision Feedback;                                          // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
};

// 0x1 (0x1 - 0x0)
// Function BPI_HUD_Manager.BPI_HUD_Manager_C.FadeToBlack_Manual
struct IBPI_HUD_Manager_C_FadeToBlack_Manual_Params
{
public:
	bool                                         To_Black_true__From_Black__False;                  // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BPI_HUD_Manager.BPI_HUD_Manager_C.FadeToBlack_andBack
struct IBPI_HUD_Manager_C_FadeToBlack_andBack_Params
{
public:
	double                                       TimeToStayBlack;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BPI_HUD_Manager.BPI_HUD_Manager_C.DisplayErrorNotification
struct IBPI_HUD_Manager_C_DisplayErrorNotification_Params
{
public:
	class FText                                  MainText;                                          // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  BodyText;                                          // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x19 (0x19 - 0x0)
// Function BPI_HUD_Manager.BPI_HUD_Manager_C.UI_VFX_CraftingSuccess
struct IBPI_HUD_Manager_C_UI_VFX_CraftingSuccess_Params
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EItemQuality                      Quality;                                           // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD0 (0xD0 - 0x0)
// Function BPI_HUD_Manager.BPI_HUD_Manager_C.HUD_StatusEffect_TextNotificationUpdate
struct IBPI_HUD_Manager_C_HUD_StatusEffect_TextNotificationUpdate_Params
{
public:
	bool                                         ManuallyRemove_;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D96[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       TimeToDisplay;                                     // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_UpdaterNotificatorInfo             Content;                                           // 0x10(0xC0)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0xD0 (0xD0 - 0x0)
// Function BPI_HUD_Manager.BPI_HUD_Manager_C.HUD_GeneralNotification
struct IBPI_HUD_Manager_C_HUD_GeneralNotification_Params
{
public:
	struct FS_UpdaterNotificatorInfo             Content;                                           // 0x0(0xC0)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                         Remove_Manually;                                   // 0xC0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DCA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Time_to_Display;                                   // 0xC8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x61 (0x61 - 0x0)
// Function BPI_HUD_Manager.BPI_HUD_Manager_C.HUD_Encounter_MiniMessage_Pinned
struct IBPI_HUD_Manager_C_HUD_Encounter_MiniMessage_Pinned_Params
{
public:
	struct FNotificationEncounter                MessageContent;                                    // 0x0(0x60)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         Pin_or_Unpin__Pin_true_will_add_;                  // 0x60(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x68 (0x68 - 0x0)
// Function BPI_HUD_Manager.BPI_HUD_Manager_C.HUD_Encounter_MiniMessage_Timed
struct IBPI_HUD_Manager_C_HUD_Encounter_MiniMessage_Timed_Params
{
public:
	struct FNotificationEncounter                Message_Content;                                   // 0x0(0x60)(BlueprintVisible, BlueprintReadOnly, Parm)
	double                                       TimeToDisplay;                                     // 0x60(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function BPI_HUD_Manager.BPI_HUD_Manager_C.ShowContextualControls
struct IBPI_HUD_Manager_C_ShowContextualControls_Params
{
public:
	bool                                         IsVisible;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_ContextualControlsData             ContextualControlsData;                            // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BPI_HUD_Manager.BPI_HUD_Manager_C.Crosshair_UpdateWeaponSpread
struct IBPI_HUD_Manager_C_Crosshair_UpdateWeaponSpread_Params
{
public:
	double                                       Spread;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BPI_HUD_Manager.BPI_HUD_Manager_C.HUD_SetRealmStartTime
struct IBPI_HUD_Manager_C_HUD_SetRealmStartTime_Params
{
public:
	double                                       RealmStartTime;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x70 (0x70 - 0x0)
// Function BPI_HUD_Manager.BPI_HUD_Manager_C.DisplayEncounterUpdate
struct IBPI_HUD_Manager_C_DisplayEncounterUpdate_Params
{
public:
	TScriptInterface<class IEncounterUIDataInterface> EncounterData;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FNotificationEncounter                EncounterMessage;                                  // 0x10(0x60)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x1 (0x1 - 0x0)
// Function BPI_HUD_Manager.BPI_HUD_Manager_C.HUD_ChangeHudMode
struct IBPI_HUD_Manager_C_HUD_ChangeHudMode_Params
{
public:
	enum class E_UI_HUD_Modes                    HUD_Mode;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x58 (0x58 - 0x0)
// Function BPI_HUD_Manager.BPI_HUD_Manager_C.HUD_UpdateActionProgressBar
struct IBPI_HUD_Manager_C_HUD_UpdateActionProgressBar_Params
{
public:
	bool                                         Visible;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4F57[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CurrentProgress;                                   // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Label;                                             // 0x10(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         ShowImage;                                         // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4F65[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             Image;                                             // 0x30(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function BPI_HUD_Manager.BPI_HUD_Manager_C.HUD_Damage_CreateIndicator
struct IBPI_HUD_Manager_C_HUD_Damage_CreateIndicator_Params
{
public:
	struct FDamageEffectContextData              DamageContextData;                                 // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm)
	double                                       Time_to_Display;                                   // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Damage_Intensity__Amount_;                         // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Colour;                                            // 0x40(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BPI_HUD_Manager.BPI_HUD_Manager_C.HUD_RemoveBossBar
struct IBPI_HUD_Manager_C_HUD_RemoveBossBar_Params
{
public:
	class FString                                Label;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x58 (0x58 - 0x0)
// Function BPI_HUD_Manager.BPI_HUD_Manager_C.HUD_AddNewBossBar
struct IBPI_HUD_Manager_C_HUD_AddNewBossBar_Params
{
public:
	struct FLinearColor                          Progress_Bar_Tint;                                 // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EProgressBarFillType              Progress_Bar_Direction;                            // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4FFE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Bar_Label;                                         // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                  Bar_Header;                                        // 0x28(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  Bar_Sub_Header;                                    // 0x40(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x48 (0x48 - 0x0)
// Function BPI_HUD_Manager.BPI_HUD_Manager_C.HUD_UpdateBossBar
struct IBPI_HUD_Manager_C_HUD_UpdateBossBar_Params
{
public:
	class FString                                Bar_Label;                                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                  Whatever_;                                         // 0x10(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	double                                       Health;                                            // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Bar_Header;                                        // 0x30(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x1 (0x1 - 0x0)
// Function BPI_HUD_Manager.BPI_HUD_Manager_C.HUD_DisplayApexCreature_BossBar
struct IBPI_HUD_Manager_C_HUD_DisplayApexCreature_BossBar_Params
{
public:
	bool                                         Display_;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x78 (0x78 - 0x0)
// Function BPI_HUD_Manager.BPI_HUD_Manager_C.HUD_UpdateInteractText
struct IBPI_HUD_Manager_C_HUD_UpdateInteractText_Params
{
public:
	struct FInteractionUIContext                 InteractionContext;                                // 0x0(0x78)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x1 (0x1 - 0x0)
// Function BPI_HUD_Manager.BPI_HUD_Manager_C.ShowSpyglass
struct IBPI_HUD_Manager_C_ShowSpyglass_Params
{
public:
	bool                                         Show_;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BPI_HUD_Manager.BPI_HUD_Manager_C.Crosshair_UpdateReload
struct IBPI_HUD_Manager_C_Crosshair_UpdateReload_Params
{
public:
	double                                       Time;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BPI_HUD_Manager.BPI_HUD_Manager_C.Crosshair_ShowReloadText
struct IBPI_HUD_Manager_C_Crosshair_ShowReloadText_Params
{
public:
	bool                                         Show;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BPI_HUD_Manager.BPI_HUD_Manager_C.Chat_Yell_ReceiveFromServer
struct IBPI_HUD_Manager_C_Chat_Yell_ReceiveFromServer_Params
{
public:
	class FString                                Message;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BPI_HUD_Manager.BPI_HUD_Manager_C.Chat_Yell_SendToServer
struct IBPI_HUD_Manager_C_Chat_Yell_SendToServer_Params
{
public:
	class FString                                Message;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BPI_HUD_Manager.BPI_HUD_Manager_C.Chat_ServerCommand
struct IBPI_HUD_Manager_C_Chat_ServerCommand_Params
{
public:
	class FString                                Message;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BPI_HUD_Manager.BPI_HUD_Manager_C.Chat_SetStatus
struct IBPI_HUD_Manager_C_Chat_SetStatus_Params
{
public:
	bool                                         Away;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BPI_HUD_Manager.BPI_HUD_Manager_C.Chat_PM_ReceiveFromServer
struct IBPI_HUD_Manager_C_Chat_PM_ReceiveFromServer_Params
{
public:
	int32                                        PlayerId;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_524C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Message;                                           // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BPI_HUD_Manager.BPI_HUD_Manager_C.Chat_PM_SendToServer
struct IBPI_HUD_Manager_C_Chat_PM_SendToServer_Params
{
public:
	int32                                        PlayerId;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_526C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Message;                                           // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BPI_HUD_Manager.BPI_HUD_Manager_C.Chat_JoinChannel
struct IBPI_HUD_Manager_C_Chat_JoinChannel_Params
{
public:
	int32                                        ChannelID;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BPI_HUD_Manager.BPI_HUD_Manager_C.Chat_LeaveChannel
struct IBPI_HUD_Manager_C_Chat_LeaveChannel_Params
{
public:
	int32                                        ChannelID;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BPI_HUD_Manager.BPI_HUD_Manager_C.Chat_Message_ReceiveFromServer
struct IBPI_HUD_Manager_C_Chat_Message_ReceiveFromServer_Params
{
public:
	struct FS_ChatMessage                        ChatMessageS;                                      // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BPI_HUD_Manager.BPI_HUD_Manager_C.Chat_Message_SendToServer
struct IBPI_HUD_Manager_C_Chat_Message_SendToServer_Params
{
public:
	class FString                                ChatMessage;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BPI_HUD_Manager.BPI_HUD_Manager_C.CrosshairVisibility
struct IBPI_HUD_Manager_C_CrosshairVisibility_Params
{
public:
	bool                                         bVisible;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function BPI_HUD_Manager.BPI_HUD_Manager_C.DisplayGlobalNotification
struct IBPI_HUD_Manager_C_DisplayGlobalNotification_Params
{
public:
	double                                       DisplayTime;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  TypeText;                                          // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  HeadlineText;                                      // 0x20(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0xB8 (0xB8 - 0x0)
// Function BPI_HUD_Manager.BPI_HUD_Manager_C.DisplayToolTip
struct IBPI_HUD_Manager_C_DisplayToolTip_Params
{
public:
	double                                       DisplayTime;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_IngameTutorial                     Row1;                                              // 0x8(0x58)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FS_IngameTutorial                     Row2;                                              // 0x60(0x58)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0xC0 (0xC0 - 0x0)
// Function BPI_HUD_Manager.BPI_HUD_Manager_C.DisplayBigLootNotification
struct IBPI_HUD_Manager_C_DisplayBigLootNotification_Params
{
public:
	struct FS_BigLootNotificationInfo            Big_Loot_Notify_Info;                              // 0x0(0xC0)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BPI_HUD_Manager.BPI_HUD_Manager_C.DisplayRecoil
struct IBPI_HUD_Manager_C_DisplayRecoil_Params
{
public:
	bool                                         IsRecoil;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function BPI_HUD_Manager.BPI_HUD_Manager_C.DisplayHitIndicator
struct IBPI_HUD_Manager_C_DisplayHitIndicator_Params
{
public:
	double                                       IndicatorTime;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          IndicatorColor;                                    // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_HitType                         Hit_Type;                                          // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x16 (0x16 - 0x0)
// Function BPI_HUD_Manager.BPI_HUD_Manager_C.DisplayCrosshair
struct IBPI_HUD_Manager_C_DisplayCrosshair_Params
{
public:
	enum class E_CrosshairTypes                  Crosshair_Type;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CrosshairVisibility;                               // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5565[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Crosshair_Color;                                   // 0x4(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_HitIndicatorTypes               HitIndicator_Type;                                 // 0x14(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HitIndicatorVisibility;                            // 0x15(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC8 (0xC8 - 0x0)
// Function BPI_HUD_Manager.BPI_HUD_Manager_C.DisplayIngameTutorial
struct IBPI_HUD_Manager_C_DisplayIngameTutorial_Params
{
public:
	double                                       DisplayTime;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_IngameTutorial                     Row1;                                              // 0x8(0x58)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FS_IngameTutorial                     Row2;                                              // 0x60(0x58)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FLinearColor                          BackgroundColor;                                   // 0xB8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD1 (0xD1 - 0x0)
// Function BPI_HUD_Manager.BPI_HUD_Manager_C.DisplayQuestNotification
struct IBPI_HUD_Manager_C_DisplayQuestNotification_Params
{
public:
	double                                       DisplayTime;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_QuestNotificatorInfo               Quest_Notificator_Info;                            // 0x8(0xA0)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                         DisplayToolTip;                                    // 0xA8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_561B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               ToolTipIcon;                                       // 0xB0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  ToolTipText;                                       // 0xB8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         ToolTipOnly;                                       // 0xD0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function BPI_HUD_Manager.BPI_HUD_Manager_C.DisplayCompass
struct IBPI_HUD_Manager_C_DisplayCompass_Params
{
public:
	bool                                         bVisible;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PlayFX;                                            // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x24 (0x24 - 0x0)
// Function BPI_HUD_Manager.BPI_HUD_Manager_C.UpdateMarker
struct IBPI_HUD_Manager_C_UpdateMarker_Params
{
public:
	class AActor*                                ActorToMark;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       MarkerPrecision;                                   // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ParticlesVisible;                                  // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_56BD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          ParticlesColor;                                    // 0x14(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BPI_HUD_Manager.BPI_HUD_Manager_C.RemoveMarker
struct IBPI_HUD_Manager_C_RemoveMarker_Params
{
public:
	class AActor*                                ActorToMark;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function BPI_HUD_Manager.BPI_HUD_Manager_C.CreateMarker
struct IBPI_HUD_Manager_C_CreateMarker_Params
{
public:
	class AActor*                                ActorToMark;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                            PlayerCharacter;                                   // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                      PlayerCamera;                                      // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Colour;                                            // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       IconDistance;                                      // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   Row;                                               // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BPI_HUD_Manager.BPI_HUD_Manager_C.DisplayHUD
struct IBPI_HUD_Manager_C_DisplayHUD_Params
{
public:
	bool                                         ShowingHUD;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


