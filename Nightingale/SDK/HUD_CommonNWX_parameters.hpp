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
// Function HUD_CommonNWX.HUD_CommonNWX_C.IsCardNotificationQueueEmpty
struct AHUD_CommonNWX_C_IsCardNotificationQueueEmpty_Params
{
public:
	bool                                         bIsEmpty;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Is_Card_Notification_Queue_Empty_bIsEmpty; // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function HUD_CommonNWX.HUD_CommonNWX_C.OnActiveWindowClosed
struct AHUD_CommonNWX_C_OnActiveWindowClosed_Params
{
public:
	class UNWXCommonWindowWidget*                Window;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function HUD_CommonNWX.HUD_CommonNWX_C.InitializeHUD
struct AHUD_CommonNWX_C_InitializeHUD_Params
{
public:
	class UNWXCommonWindowWidget*                LActiveWindow;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayerController_ReturnValue;    // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_31B[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UNWXCommonWindowWidget*                CallFunc_GetActiveWindowInLayer_ReturnValue;       // 0x28(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function HUD_CommonNWX.HUD_CommonNWX_C.ActivateSubtitles
struct AHUD_CommonNWX_C_ActivateSubtitles_Params
{
public:
	class APlayerController*                     CallFunc_GetOwningPlayerController_ReturnValue;    // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ULocalPlayer*                          CallFunc_GetLocalPlayerFromController_ReturnValue; // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_Subtitle_Window_C*                CallFunc_CreateWidgetInstanceFromLayer_ReturnValue; // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function HUD_CommonNWX.HUD_CommonNWX_C.DeactivateInteract
struct AHUD_CommonNWX_C_DeactivateInteract_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function HUD_CommonNWX.HUD_CommonNWX_C.ActivateInteract
struct AHUD_CommonNWX_C_ActivateInteract_Params
{
public:
	class ANWXPlayerController*                  CallFunc_GetLocalPlayerController_LocalPlayerController; // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ULocalPlayer*                          CallFunc_GetLocalPlayerFromController_ReturnValue; // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_HUD_InteractionLayer_C*           CallFunc_CreateWidgetInstanceFromLayer_ReturnValue; // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x468 (0x468 - 0x0)
// Function HUD_CommonNWX.HUD_CommonNWX_C.OnSkillUnlocked
struct AHUD_CommonNWX_C_OnSkillUnlocked_Params
{
public:
	struct FSkillDataReference                   UnlockedSkill;                                     // 0x0(0xE0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	struct FSkillPresentationData                LCurrentUnlockedSkill;                             // 0xE0(0x58)(Edit, BlueprintVisible)
	bool                                         CallFunc_AreNotificationsEnabled_Enabled;          // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_352[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSkillPresentationData                CallFunc_GetSkillPresentationData_ReturnValue;     // 0x140(0x58)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x198(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_355[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSkillReferenceContainer              CallFunc_GetSkillUnlockables_OutSkillUnlockables;  // 0x1A0(0x10)(None)
	bool                                         CallFunc_GetSkillUnlockables_ReturnValue;          // 0x1B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1B1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_359[0xE];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSkillDataReference                   CallFunc_Array_Get_Item;                           // 0x1C0(0xE0)(HasGetValueTypeHash)
	struct FSkillPresentationData                CallFunc_GetSkillPresentationData_ReturnValue_1;   // 0x2A0(0x58)(None)
	bool                                         CallFunc_Array_IsNotEmpty_ReturnValue;             // 0x2F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35B[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_LoadAsset_Blocking_ReturnValue;           // 0x300(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x308(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Contains_ReturnValue;                     // 0x318(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35C[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_QuestNotificatorInfo               K2Node_MakeStruct_S_QuestNotificatorInfo;          // 0x320(0xA0)(HasGetValueTypeHash)
	class UObject*                               CallFunc_LoadAsset_Blocking_ReturnValue_1;         // 0x3C0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FS_QuestNotificatorInfo               K2Node_MakeStruct_S_QuestNotificatorInfo_1;        // 0x3C8(0xA0)(HasGetValueTypeHash)
};

// 0x39 (0x39 - 0x0)
// Function HUD_CommonNWX.HUD_CommonNWX_C.ToggleHUDVisibility
struct AHUD_CommonNWX_C_ToggleHUDVisibility_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_366[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_368[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UNWXPrimaryGameLayout*>         CallFunc_GetAllWidgetsOfClass_FoundWidgets;        // 0x18(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UNWXPrimaryGameLayout*                 CallFunc_Array_Get_Item;                           // 0x30(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function HUD_CommonNWX.HUD_CommonNWX_C.DeactivateSpectatorHUD
struct AHUD_CommonNWX_C_DeactivateSpectatorHUD_Params
{
public:
	class APlayerController*                     CallFunc_GetOwningPlayerController_ReturnValue;    // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGameplayTag>                  CallFunc_GetAllLayerTags_ReturnValue;              // 0x8(0x10)(ReferenceParm)
	class UNWXCommonWindowWidget*                CallFunc_FindWindowInLayers_ReturnValue;           // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function HUD_CommonNWX.HUD_CommonNWX_C.ActivateSpectatorHUD
struct AHUD_CommonNWX_C_ActivateSpectatorHUD_Params
{
public:
	class APlayerController*                     CallFunc_GetOwningPlayerController_ReturnValue;    // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ULocalPlayer*                          CallFunc_GetLocalPlayerFromController_ReturnValue; // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_DB_FlyCamOverlay_C*               CallFunc_CreateWidgetInstanceFromLayer_ReturnValue; // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x1A (0x1A - 0x0)
// Function HUD_CommonNWX.HUD_CommonNWX_C.AreNotificationsEnabled
struct AHUD_CommonNWX_C_AreNotificationsEnabled_Params
{
public:
	bool                                         Enabled;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_384[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerState*                          CallFunc_GetPlayerState_ReturnValue;               // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_UI_PersistenceComponent_C*         CallFunc_GetComponentByClass_ReturnValue;          // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function HUD_CommonNWX.HUD_CommonNWX_C.DeactivateChat
struct AHUD_CommonNWX_C_DeactivateChat_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function HUD_CommonNWX.HUD_CommonNWX_C.ActivateChat
struct AHUD_CommonNWX_C_ActivateChat_Params
{
public:
	class APlayerController*                     CallFunc_GetOwningPlayerController_ReturnValue;    // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ULocalPlayer*                          CallFunc_GetLocalPlayerFromController_ReturnValue; // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_HUD_ChatLayer_C*                  CallFunc_CreateWidgetInstanceFromLayer_ReturnValue; // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function HUD_CommonNWX.HUD_CommonNWX_C.DeactivateNotifications
struct AHUD_CommonNWX_C_DeactivateNotifications_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function HUD_CommonNWX.HUD_CommonNWX_C.ActivateNotifications
struct AHUD_CommonNWX_C_ActivateNotifications_Params
{
public:
	class APlayerController*                     CallFunc_GetOwningPlayerController_ReturnValue;    // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ULocalPlayer*                          CallFunc_GetLocalPlayerFromController_ReturnValue; // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_HUD_NotificationLayer_C*          CallFunc_CreateWidgetInstanceFromLayer_ReturnValue; // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function HUD_CommonNWX.HUD_CommonNWX_C.DisplayHUD
struct AHUD_CommonNWX_C_DisplayHUD_Params
{
public:
	bool                                         ShowingHUD;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function HUD_CommonNWX.HUD_CommonNWX_C.CreateMarker
struct AHUD_CommonNWX_C_CreateMarker_Params
{
public:
	class AActor*                                ActorToMark;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                            PlayerCharacter;                                   // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                      PlayerCamera;                                      // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Colour;                                            // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       IconDistance;                                      // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   Row;                                               // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function HUD_CommonNWX.HUD_CommonNWX_C.RemoveMarker
struct AHUD_CommonNWX_C_RemoveMarker_Params
{
public:
	class AActor*                                ActorToMark;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x24 (0x24 - 0x0)
// Function HUD_CommonNWX.HUD_CommonNWX_C.UpdateMarker
struct AHUD_CommonNWX_C_UpdateMarker_Params
{
public:
	class AActor*                                ActorToMark;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       MarkerPrecision;                                   // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ParticlesVisible;                                  // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_41E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          ParticlesColor;                                    // 0x14(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function HUD_CommonNWX.HUD_CommonNWX_C.DisplayCompass
struct AHUD_CommonNWX_C_DisplayCompass_Params
{
public:
	bool                                         bVisible;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PlayFX;                                            // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC8 (0xC8 - 0x0)
// Function HUD_CommonNWX.HUD_CommonNWX_C.DisplayIngameTutorial
struct AHUD_CommonNWX_C_DisplayIngameTutorial_Params
{
public:
	double                                       DisplayTime;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_IngameTutorial                     Row1;                                              // 0x8(0x58)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FS_IngameTutorial                     Row2;                                              // 0x60(0x58)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FLinearColor                          BackgroundColor;                                   // 0xB8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x16 (0x16 - 0x0)
// Function HUD_CommonNWX.HUD_CommonNWX_C.DisplayCrosshair
struct AHUD_CommonNWX_C_DisplayCrosshair_Params
{
public:
	enum class E_CrosshairTypes                  Crosshair_Type;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CrosshairVisibility;                               // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_484[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Crosshair_Color;                                   // 0x4(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_HitIndicatorTypes               HitIndicator_Type;                                 // 0x14(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HitIndicatorVisibility;                            // 0x15(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function HUD_CommonNWX.HUD_CommonNWX_C.DisplayHitIndicator
struct AHUD_CommonNWX_C_DisplayHitIndicator_Params
{
public:
	double                                       IndicatorTime;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          IndicatorColor;                                    // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_HitType                         Hit_Type;                                          // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function HUD_CommonNWX.HUD_CommonNWX_C.DisplayRecoil
struct AHUD_CommonNWX_C_DisplayRecoil_Params
{
public:
	bool                                         IsRecoil;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC0 (0xC0 - 0x0)
// Function HUD_CommonNWX.HUD_CommonNWX_C.DisplayBigLootNotification
struct AHUD_CommonNWX_C_DisplayBigLootNotification_Params
{
public:
	struct FS_BigLootNotificationInfo            Big_Loot_Notify_Info;                              // 0x0(0xC0)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function HUD_CommonNWX.HUD_CommonNWX_C.Chat_Message_SendToServer
struct AHUD_CommonNWX_C_Chat_Message_SendToServer_Params
{
public:
	class FString                                ChatMessage;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function HUD_CommonNWX.HUD_CommonNWX_C.Chat_Message_ReceiveFromServer
struct AHUD_CommonNWX_C_Chat_Message_ReceiveFromServer_Params
{
public:
	struct FS_ChatMessage                        ChatMessageS;                                      // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function HUD_CommonNWX.HUD_CommonNWX_C.Chat_LeaveChannel
struct AHUD_CommonNWX_C_Chat_LeaveChannel_Params
{
public:
	int32                                        ChannelID;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function HUD_CommonNWX.HUD_CommonNWX_C.Chat_JoinChannel
struct AHUD_CommonNWX_C_Chat_JoinChannel_Params
{
public:
	int32                                        ChannelID;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function HUD_CommonNWX.HUD_CommonNWX_C.Chat_PM_SendToServer
struct AHUD_CommonNWX_C_Chat_PM_SendToServer_Params
{
public:
	int32                                        PlayerId;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_519[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Message;                                           // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function HUD_CommonNWX.HUD_CommonNWX_C.Chat_PM_ReceiveFromServer
struct AHUD_CommonNWX_C_Chat_PM_ReceiveFromServer_Params
{
public:
	int32                                        PlayerId;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_530[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Message;                                           // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function HUD_CommonNWX.HUD_CommonNWX_C.Chat_SetStatus
struct AHUD_CommonNWX_C_Chat_SetStatus_Params
{
public:
	bool                                         Away;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function HUD_CommonNWX.HUD_CommonNWX_C.Chat_ServerCommand
struct AHUD_CommonNWX_C_Chat_ServerCommand_Params
{
public:
	class FString                                Message;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function HUD_CommonNWX.HUD_CommonNWX_C.Chat_Yell_SendToServer
struct AHUD_CommonNWX_C_Chat_Yell_SendToServer_Params
{
public:
	class FString                                Message;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function HUD_CommonNWX.HUD_CommonNWX_C.Chat_Yell_ReceiveFromServer
struct AHUD_CommonNWX_C_Chat_Yell_ReceiveFromServer_Params
{
public:
	class FString                                Message;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function HUD_CommonNWX.HUD_CommonNWX_C.Crosshair_ShowReloadText
struct AHUD_CommonNWX_C_Crosshair_ShowReloadText_Params
{
public:
	bool                                         Show;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function HUD_CommonNWX.HUD_CommonNWX_C.Crosshair_UpdateReload
struct AHUD_CommonNWX_C_Crosshair_UpdateReload_Params
{
public:
	double                                       Time;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function HUD_CommonNWX.HUD_CommonNWX_C.ShowSpyglass
struct AHUD_CommonNWX_C_ShowSpyglass_Params
{
public:
	bool                                         Show_;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function HUD_CommonNWX.HUD_CommonNWX_C.HUD_DisplayApexCreature_BossBar
struct AHUD_CommonNWX_C_HUD_DisplayApexCreature_BossBar_Params
{
public:
	bool                                         Display_;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x48 (0x48 - 0x0)
// Function HUD_CommonNWX.HUD_CommonNWX_C.HUD_UpdateBossBar
struct AHUD_CommonNWX_C_HUD_UpdateBossBar_Params
{
public:
	class FString                                Bar_Label;                                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                  Whatever_;                                         // 0x10(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	double                                       Health;                                            // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Bar_Header;                                        // 0x30(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x58 (0x58 - 0x0)
// Function HUD_CommonNWX.HUD_CommonNWX_C.HUD_AddNewBossBar
struct AHUD_CommonNWX_C_HUD_AddNewBossBar_Params
{
public:
	struct FLinearColor                          Progress_Bar_Tint;                                 // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EProgressBarFillType              Progress_Bar_Direction;                            // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5FD[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Bar_Label;                                         // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                  Bar_Header;                                        // 0x28(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  Bar_Sub_Header;                                    // 0x40(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x10 (0x10 - 0x0)
// Function HUD_CommonNWX.HUD_CommonNWX_C.HUD_RemoveBossBar
struct AHUD_CommonNWX_C_HUD_RemoveBossBar_Params
{
public:
	class FString                                Label;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function HUD_CommonNWX.HUD_CommonNWX_C.HUD_ChangeHudMode
struct AHUD_CommonNWX_C_HUD_ChangeHudMode_Params
{
public:
	enum class E_UI_HUD_Modes                    HUD_Mode;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function HUD_CommonNWX.HUD_CommonNWX_C.HUD_SetRealmStartTime
struct AHUD_CommonNWX_C_HUD_SetRealmStartTime_Params
{
public:
	double                                       RealmStartTime;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function HUD_CommonNWX.HUD_CommonNWX_C.Crosshair_UpdateWeaponSpread
struct AHUD_CommonNWX_C_Crosshair_UpdateWeaponSpread_Params
{
public:
	double                                       Spread;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function HUD_CommonNWX.HUD_CommonNWX_C.ShowContextualControls
struct AHUD_CommonNWX_C_ShowContextualControls_Params
{
public:
	bool                                         IsVisible;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_ContextualControlsData             ContextualControlsData;                            // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD0 (0xD0 - 0x0)
// Function HUD_CommonNWX.HUD_CommonNWX_C.HUD_StatusEffect_TextNotificationUpdate
struct AHUD_CommonNWX_C_HUD_StatusEffect_TextNotificationUpdate_Params
{
public:
	bool                                         ManuallyRemove_;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_677[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       TimeToDisplay;                                     // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_UpdaterNotificatorInfo             Content;                                           // 0x10(0xC0)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function HUD_CommonNWX.HUD_CommonNWX_C.UI_VFX_CraftingSuccess
struct AHUD_CommonNWX_C_UI_VFX_CraftingSuccess_Params
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EItemQuality                      Quality;                                           // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function HUD_CommonNWX.HUD_CommonNWX_C.FadeToBlack_andBack
struct AHUD_CommonNWX_C_FadeToBlack_andBack_Params
{
public:
	double                                       TimeToStayBlack;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function HUD_CommonNWX.HUD_CommonNWX_C.FadeToBlack_Manual
struct AHUD_CommonNWX_C_FadeToBlack_Manual_Params
{
public:
	bool                                         To_Black_true__From_Black__False;                  // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function HUD_CommonNWX.HUD_CommonNWX_C.BuildUX_Feedback_Invalid_Intersecting
struct AHUD_CommonNWX_C_BuildUX_Feedback_Invalid_Intersecting_Params
{
public:
	struct FStructurePlacementFeedback_Collision Feedback;                                          // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
};

// 0xB8 (0xB8 - 0x0)
// Function HUD_CommonNWX.HUD_CommonNWX_C.BuildUX_Feedback_Invalid
struct AHUD_CommonNWX_C_BuildUX_Feedback_Invalid_Params
{
public:
	struct FStructurePlacementFeedback           Feedback;                                          // 0x0(0xB8)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
};

// 0x10 (0x10 - 0x0)
// Function HUD_CommonNWX.HUD_CommonNWX_C.BuildUX_Feedback_RotationControls
struct AHUD_CommonNWX_C_BuildUX_Feedback_RotationControls_Params
{
public:
	bool                                         CanRotate;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6FE[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CurrentRotation;                                   // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function HUD_CommonNWX.HUD_CommonNWX_C.BuildUX_Feedback_HeightControls
struct AHUD_CommonNWX_C_BuildUX_Feedback_HeightControls_Params
{
public:
	bool                                         CanAdjustHeight;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_726[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Height_Current;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Height_Max;                                        // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Height_Min;                                        // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD1 (0xD1 - 0x0)
// Function HUD_CommonNWX.HUD_CommonNWX_C.DisplayQuestNotification
struct AHUD_CommonNWX_C_DisplayQuestNotification_Params
{
public:
	double                                       DisplayTime;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_QuestNotificatorInfo               Quest_Notificator_Info;                            // 0x8(0xA0)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                         DisplayToolTip;                                    // 0xA8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_790[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               ToolTipIcon;                                       // 0xB0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  ToolTipText;                                       // 0xB8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         ToolTipOnly;                                       // 0xD0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB8 (0xB8 - 0x0)
// Function HUD_CommonNWX.HUD_CommonNWX_C.DisplayToolTip
struct AHUD_CommonNWX_C_DisplayToolTip_Params
{
public:
	double                                       DisplayTime;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_IngameTutorial                     Row1;                                              // 0x8(0x58)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FS_IngameTutorial                     Row2;                                              // 0x60(0x58)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function HUD_CommonNWX.HUD_CommonNWX_C.DisplayGlobalNotification
struct AHUD_CommonNWX_C_DisplayGlobalNotification_Params
{
public:
	double                                       DisplayTime;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  TypeText;                                          // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  HeadlineText;                                      // 0x20(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x70 (0x70 - 0x0)
// Function HUD_CommonNWX.HUD_CommonNWX_C.DisplayEncounterUpdate
struct AHUD_CommonNWX_C_DisplayEncounterUpdate_Params
{
public:
	TScriptInterface<class IEncounterUIDataInterface> EncounterData;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FNotificationEncounter                EncounterMessage;                                  // 0x10(0x60)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x61 (0x61 - 0x0)
// Function HUD_CommonNWX.HUD_CommonNWX_C.HUD_Encounter_MiniMessage_Pinned
struct AHUD_CommonNWX_C_HUD_Encounter_MiniMessage_Pinned_Params
{
public:
	struct FNotificationEncounter                MessageContent;                                    // 0x0(0x60)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         Pin_or_Unpin__Pin_true_will_add_;                  // 0x60(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x68 (0x68 - 0x0)
// Function HUD_CommonNWX.HUD_CommonNWX_C.HUD_Encounter_MiniMessage_Timed
struct AHUD_CommonNWX_C_HUD_Encounter_MiniMessage_Timed_Params
{
public:
	struct FNotificationEncounter                Message_Content;                                   // 0x0(0x60)(BlueprintVisible, BlueprintReadOnly, Parm)
	double                                       TimeToDisplay;                                     // 0x60(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD0 (0xD0 - 0x0)
// Function HUD_CommonNWX.HUD_CommonNWX_C.HUD_GeneralNotification
struct AHUD_CommonNWX_C_HUD_GeneralNotification_Params
{
public:
	struct FS_UpdaterNotificatorInfo             Content;                                           // 0x0(0xC0)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                         Remove_Manually;                                   // 0xC0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_83A[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Time_to_Display;                                   // 0xC8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function HUD_CommonNWX.HUD_CommonNWX_C.DisplayErrorNotification
struct AHUD_CommonNWX_C_DisplayErrorNotification_Params
{
public:
	class FText                                  MainText;                                          // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  BodyText;                                          // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x78 (0x78 - 0x0)
// Function HUD_CommonNWX.HUD_CommonNWX_C.HUD_UpdateInteractText
struct AHUD_CommonNWX_C_HUD_UpdateInteractText_Params
{
public:
	struct FInteractionUIContext                 InteractionContext;                                // 0x0(0x78)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x58 (0x58 - 0x0)
// Function HUD_CommonNWX.HUD_CommonNWX_C.HUD_UpdateActionProgressBar
struct AHUD_CommonNWX_C_HUD_UpdateActionProgressBar_Params
{
public:
	bool                                         Visible;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_886[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CurrentProgress;                                   // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Label;                                             // 0x10(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         ShowImage;                                         // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_890[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             Image;                                             // 0x30(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function HUD_CommonNWX.HUD_CommonNWX_C.HUD_Damage_CreateIndicator
struct AHUD_CommonNWX_C_HUD_Damage_CreateIndicator_Params
{
public:
	struct FDamageEffectContextData              DamageContextData;                                 // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm)
	double                                       Time_to_Display;                                   // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Damage_Intensity__Amount_;                         // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Colour;                                            // 0x40(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function HUD_CommonNWX.HUD_CommonNWX_C.OnClientReady
struct AHUD_CommonNWX_C_OnClientReady_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function HUD_CommonNWX.HUD_CommonNWX_C.CrosshairVisibility
struct AHUD_CommonNWX_C_CrosshairVisibility_Params
{
public:
	bool                                         bVisible;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function HUD_CommonNWX.HUD_CommonNWX_C.OnPlayerPawnPossessed
struct AHUD_CommonNWX_C_OnPlayerPawnPossessed_Params
{
public:
	class APawn*                                 NewPawn;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function HUD_CommonNWX.HUD_CommonNWX_C.OnPlayerPawnUnPossessed
struct AHUD_CommonNWX_C_OnPlayerPawnUnPossessed_Params
{
public:
	class APawn*                                 OldPawn;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function HUD_CommonNWX.HUD_CommonNWX_C.OnPlayerSpectatorPawnPossessed
struct AHUD_CommonNWX_C_OnPlayerSpectatorPawnPossessed_Params
{
public:
	class ASpectatorPawn*                        NewSpectatorPawn;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function HUD_CommonNWX.HUD_CommonNWX_C.ReceiveEndPlay
struct AHUD_CommonNWX_C_ReceiveEndPlay_Params
{
public:
	enum class EEndPlayReason                    EndPlayReason;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xBC1 (0xBC1 - 0x0)
// Function HUD_CommonNWX.HUD_CommonNWX_C.ExecuteUbergraph_HUD_CommonNWX
struct AHUD_CommonNWX_C_ExecuteUbergraph_HUD_CommonNWX_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_UI_HUD_Modes                    K2Node_Event_HUD_Mode;                             // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B51[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       K2Node_Event_RealmStartTime;                       // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Event_Spread;                               // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsVisible;                            // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_ContextualControlsData             K2Node_Event_ContextualControlsData;               // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_ManuallyRemove_;                      // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B59[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       K2Node_Event_TimeToDisplay_1;                      // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_UpdaterNotificatorInfo             K2Node_Event_Content_1;                            // 0x28(0xC0)(HasGetValueTypeHash)
	struct FVector                               K2Node_Event_Location;                             // 0xE8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EItemQuality                      K2Node_Event_Quality;                              // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B5E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       K2Node_Event_TimeToStayBlack;                      // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_To_Black_true__From_Black__False;     // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B60[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStructurePlacementFeedback_Collision K2Node_Event_Feedback_1;                           // 0x118(0x18)(ContainsInstancedReference)
	struct FStructurePlacementFeedback           K2Node_Event_Feedback;                             // 0x130(0xB8)(ContainsInstancedReference)
	bool                                         K2Node_Event_CanRotate;                            // 0x1E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B62[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       K2Node_Event_CurrentRotation;                      // 0x1F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_CanAdjustHeight;                      // 0x1F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B64[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       K2Node_Event_Height_Current;                       // 0x200(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Event_Height_Max;                           // 0x208(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Event_Height_Min;                           // 0x210(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x218(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x219(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B67[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       K2Node_Event_DisplayTime_2;                        // 0x220(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_QuestNotificatorInfo               K2Node_Event_Quest_Notificator_Info;               // 0x228(0xA0)(HasGetValueTypeHash)
	bool                                         K2Node_Event_DisplayToolTip;                       // 0x2C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B69[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               K2Node_Event_ToolTipIcon;                          // 0x2D0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_Event_ToolTipText;                          // 0x2D8(0x18)(None)
	bool                                         K2Node_Event_ToolTipOnly;                          // 0x2F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B6E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       K2Node_Event_DisplayTime_1;                        // 0x2F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_IngameTutorial                     K2Node_Event_Row1;                                 // 0x300(0x58)(HasGetValueTypeHash)
	struct FS_IngameTutorial                     K2Node_Event_Row2;                                 // 0x358(0x58)(HasGetValueTypeHash)
	double                                       K2Node_Event_DisplayTime;                          // 0x3B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_Event_TypeText;                             // 0x3B8(0x18)(None)
	class FText                                  K2Node_Event_HeadlineText;                         // 0x3D0(0x18)(None)
	TScriptInterface<class IEncounterUIDataInterface> K2Node_Event_EncounterData;                        // 0x3E8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FNotificationEncounter                K2Node_Event_EncounterMessage;                     // 0x3F8(0x60)(None)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x458(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x459(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B79[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNotificationEncounter                K2Node_Event_MessageContent;                       // 0x460(0x60)(None)
	bool                                         K2Node_Event_Pin_or_Unpin__Pin_true_will_add_;     // 0x4C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x4C1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B7C[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNotificationEncounter                K2Node_Event_Message_Content;                      // 0x4C8(0x60)(None)
	double                                       K2Node_Event_TimeToDisplay;                        // 0x528(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_UpdaterNotificatorInfo             K2Node_Event_Content;                              // 0x530(0xC0)(HasGetValueTypeHash)
	bool                                         K2Node_Event_Remove_Manually;                      // 0x5F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B82[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       K2Node_Event_Time_to_Display_1;                    // 0x5F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_5;                    // 0x600(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B84[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Event_MainText;                             // 0x608(0x18)(None)
	class FText                                  K2Node_Event_BodyText;                             // 0x620(0x18)(None)
	bool                                         CallFunc_IsValid_ReturnValue_6;                    // 0x638(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_AreNotificationsEnabled_Enabled;          // 0x639(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_AreNotificationsEnabled_Enabled_1;        // 0x63A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_AreNotificationsEnabled_Enabled_2;        // 0x63B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_AreNotificationsEnabled_Enabled_3;        // 0x63C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_AreNotificationsEnabled_Enabled_4;        // 0x63D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_AreNotificationsEnabled_Enabled_5;        // 0x63E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_AreNotificationsEnabled_Enabled_6;        // 0x63F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_Event_Label_1;                              // 0x640(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Event_Progress_Bar_Tint;                    // 0x650(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EProgressBarFillType              K2Node_Event_Progress_Bar_Direction;               // 0x660(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B92[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_Event_Bar_Label;                            // 0x668(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  K2Node_Event_Bar_Header;                           // 0x678(0x18)(None)
	class FText                                  K2Node_Event_Bar_Sub_Header;                       // 0x690(0x18)(None)
	class FString                                K2Node_Event_Bar_Label_1;                          // 0x6A8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  K2Node_Event_Sub_Text__Status_Creature_Type_Whatever_; // 0x6B8(0x18)(None)
	double                                       K2Node_Event_Health;                               // 0x6D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_Event_Bar_Header_1;                         // 0x6D8(0x18)(None)
	bool                                         K2Node_Event_Display_;                             // 0x6F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_Show_;                                // 0x6F1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B9E[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       K2Node_Event_Time;                                 // 0x6F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_Show;                                 // 0x700(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BA1[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_Event_message;                              // 0x708(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                K2Node_Event_message_1;                            // 0x718(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                K2Node_Event_message_2;                            // 0x728(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_Away;                                 // 0x738(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BA6[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Event_PlayerID;                             // 0x73C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_Event_message_3;                            // 0x740(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_PlayerID_1;                           // 0x750(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BAB[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_Event_message_4;                            // 0x758(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_ChannelID;                            // 0x768(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_ChannelID_1;                          // 0x76C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_ChatMessage                        K2Node_Event_ChatMessageS;                         // 0x770(0x20)(HasGetValueTypeHash)
	class FString                                K2Node_Event_ChatMessage;                          // 0x790(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FS_BigLootNotificationInfo            K2Node_Event_Big_Loot_Notify_Info;                 // 0x7A0(0xC0)(HasGetValueTypeHash)
	bool                                         K2Node_Event_IsRecoil;                             // 0x860(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BB2[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       K2Node_Event_IndicatorTime;                        // 0x868(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Event_IndicatorColor;                       // 0x870(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_HitType                         K2Node_Event_Hit_Type;                             // 0x880(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_CrosshairTypes                  K2Node_Event_Crosshair_Type;                       // 0x881(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_CrosshairVisibility;                  // 0x882(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BBA[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          K2Node_Event_Crosshair_Color;                      // 0x884(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_HitIndicatorTypes               K2Node_Event_HitIndicator_Type;                    // 0x894(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_HitIndicatorVisibility;               // 0x895(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BCB[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       K2Node_Event_DisplayTime_3;                        // 0x898(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_IngameTutorial                     K2Node_Event_Row1_1;                               // 0x8A0(0x58)(HasGetValueTypeHash)
	struct FS_IngameTutorial                     K2Node_Event_Row2_1;                               // 0x8F8(0x58)(HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Event_BackgroundColor;                      // 0x950(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bVisible_1;                           // 0x960(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_PlayFX;                               // 0x961(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BD9[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_Event_ActorToMark;                          // 0x968(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Event_MarkerPrecision;                      // 0x970(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_ParticlesVisible;                     // 0x978(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BE1[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          K2Node_Event_ParticlesColor;                       // 0x97C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BE8[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_Event_ActorToMark_1;                        // 0x990(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_Event_ActorToMark_2;                        // 0x998(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                            K2Node_Event_PlayerCharacter;                      // 0x9A0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                      K2Node_Event_PlayerCamera;                         // 0x9A8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Event_Colour_1;                             // 0x9B0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Event_IconDistance;                         // 0x9C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   K2Node_Event_Row;                                  // 0x9C8(0x10)(NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_ShowingHUD;                           // 0x9D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_C04[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInteractionUIContext                 K2Node_Event_InteractionContext;                   // 0x9E0(0x78)(ConstParm)
	bool                                         CallFunc_IsValid_ReturnValue_7;                    // 0xA58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_8;                    // 0xA59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_Visible;                              // 0xA5A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_C0E[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       K2Node_Event_CurrentProgress;                      // 0xA60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_Event_Label;                                // 0xA68(0x18)(None)
	bool                                         K2Node_Event_ShowImage;                            // 0xA80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_C16[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             K2Node_Event_Image;                                // 0xA88(0x28)(HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xAB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_C1E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayerController_ReturnValue;    // 0xAB8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UNWXCommonWindowWidget*                CallFunc_GetActiveWindowInLayer_ReturnValue;       // 0xAC0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_HUD_Screen_C*                     K2Node_DynamicCast_AsWBP_HUD_Screen;               // 0xAC8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xAD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_9;                    // 0xAD1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_10;                   // 0xAD2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_11;                   // 0xAD3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_C29[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDamageEffectContextData              K2Node_Event_DamageContextData;                    // 0xAD8(0x30)(None)
	double                                       K2Node_Event_Time_to_Display;                      // 0xB08(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Event_Damage_Intensity__Amount_;            // 0xB10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Event_Colour;                               // 0xB18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_12;                   // 0xB28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_13;                   // 0xB29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_14;                   // 0xB2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_15;                   // 0xB2B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_16;                   // 0xB2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_17;                   // 0xB2D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_C45[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_GameState_C*                       CallFunc_GetCoreGameState_GameState;               // 0xB30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_18;                   // 0xB38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_Success;                              // 0xB39(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bVisible;                             // 0xB3A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_C76[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonActivatableWidget*              CallFunc_GetHUDScreen_ReturnValue;                 // 0xB40(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_HUD_Screen_C*                     K2Node_DynamicCast_AsWBP_HUD_Screen_1;             // 0xB48(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xB50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_19;                   // 0xB51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_C8A[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonActivatableWidget*              CallFunc_GetHUDScreen_ReturnValue_1;               // 0xB58(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 K2Node_Event_NewPawn;                              // 0xB60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_HUD_Screen_C*                     K2Node_DynamicCast_AsWBP_HUD_Screen_2;             // 0xB68(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0xB70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_C92[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 K2Node_Event_OldPawn;                              // 0xB78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ASpectatorPawn*                        K2Node_Event_NewSpectatorPawn;                     // 0xB80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_PlayerState_C*                     CallFunc_GetLocalPlayerState_PlayerState;          // 0xB88(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xB90(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EEndPlayReason                    K2Node_Event_EndPlayReason;                        // 0xBA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_CA4[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_PlayerState_C*                     CallFunc_GetLocalPlayerState_PlayerState_1;        // 0xBA8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0xBB0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0xBC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


