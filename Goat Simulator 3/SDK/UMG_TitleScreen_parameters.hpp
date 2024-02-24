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
// Function UMG_TitleScreen.UMG_TitleScreen_C.GetGearInfoPanelContainer
struct UUMG_TitleScreen_C_GetGearInfoPanelContainer_Params
{
public:
	class UPanelWidget*                          Panel;                                             // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1D9 (0x1D9 - 0x0)
// Function UMG_TitleScreen.UMG_TitleScreen_C.CheckOwnership
struct UUMG_TitleScreen_C_CheckOwnership_Params
{
public:
	struct FDLCLevelData                         LevelData;                                         // 0x0(0x50)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         EveryoneHasOwnership;                              // 0x50(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_DA1[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPopupDataRow                         CallFunc_MakePopupDataRow_ReturnValue;             // 0x58(0x90)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xE8(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_DoesEveryoneOwn_ReturnValue;              // 0xF9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_DA6[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0xFC(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_DA8[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGPlayerController*                   CallFunc_GetPrimaryGGPlayerController_ReturnValue; // 0x110(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGPlayerController*                   CallFunc_GetPrimaryGGPlayerController_ReturnValue_1; // 0x118(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGGPopupUserWidget*                    CallFunc_CreatePopupCustom_OutWidget;              // 0x120(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CreatePopupCustom_ReturnValue;            // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_DAF[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPopupDataRow                         CallFunc_MakePopupDataRow_ReturnValue_1;           // 0x130(0x90)(None)
	class UGGPopupUserWidget*                    CallFunc_CreatePopupCustom_OutWidget_1;            // 0x1C0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CreatePopupCustom_ReturnValue_1;          // 0x1C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsInLobby_bIsOwner;                       // 0x1C9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsInLobby_ReturnValue;                    // 0x1CA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_DB7[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGGDLCHandler*                         CallFunc_GetDLCHandler_ReturnValue;                // 0x1D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDLCAvailable_ReturnValue;               // 0x1D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function UMG_TitleScreen.UMG_TitleScreen_C.GetInitialWidgetFocus
struct UUMG_TitleScreen_C_GetInitialWidgetFocus_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x280 (0x280 - 0x0)
// Function UMG_TitleScreen.UMG_TitleScreen_C.OnFocusReceived
struct UUMG_TitleScreen_C_OnFocusReceived_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                           InFocusEvent;                                      // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                           ReturnValue;                                       // 0x40(0xB8)(Parm, OutParm, ReturnParm)
	bool                                         Temp_bool_Variable;                                // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsDesktopPlatform_ReturnValue;            // 0xF9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsConsolePlatform_ReturnValue;            // 0xFA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0xFB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E23[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x100(0xB8)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E26[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               K2Node_Select_Default;                             // 0x1C0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FEventReply                           CallFunc_SetUserFocus_ReturnValue;                 // 0x1C8(0xB8)(None)
};

// 0x50 (0x50 - 0x0)
// Function UMG_TitleScreen.UMG_TitleScreen_C.AttemptToStartLevel
struct UUMG_TitleScreen_C_AttemptToStartLevel_Params
{
public:
	struct FDLCLevelData                         LevelData;                                         // 0x0(0x50)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x58 (0x58 - 0x0)
// Function UMG_TitleScreen.UMG_TitleScreen_C.FadeOutAndStart
struct UUMG_TitleScreen_C_FadeOutAndStart_Params
{
public:
	bool                                         Offline;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E54[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDLCLevelData                         Level_Data;                                        // 0x8(0x50)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x20 (0x20 - 0x0)
// Function UMG_TitleScreen.UMG_TitleScreen_C.OnReceivedLobbyInvite
struct UUMG_TitleScreen_C_OnReceivedLobbyInvite_Params
{
public:
	class FString                                InviterName;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                InviteId;                                          // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x29 (0x29 - 0x0)
// Function UMG_TitleScreen.UMG_TitleScreen_C.InvitePopupResponse
struct UUMG_TitleScreen_C_InvitePopupResponse_Params
{
public:
	class FString                                ID;                                                // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                               Object;                                            // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                Button_ID;                                         // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	enum class EPopupResponse                    Response;                                          // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UMG_TitleScreen.UMG_TitleScreen_C.OnLobbyUpdated
struct UUMG_TitleScreen_C_OnLobbyUpdated_Params
{
public:
	enum class ELobbyUpdateType                  LobbyUpdateType;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function UMG_TitleScreen.UMG_TitleScreen_C.OnLoginStateChanged
struct UUMG_TitleScreen_C_OnLoginStateChanged_Params
{
public:
	enum class ELoginState                       OldState;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ELoginState                       NewState;                                          // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UMG_TitleScreen.UMG_TitleScreen_C.PreConstruct
struct UUMG_TitleScreen_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function UMG_TitleScreen.UMG_TitleScreen_C.UpdateOnInitialLoginState
struct UUMG_TitleScreen_C_UpdateOnInitialLoginState_Params
{
public:
	enum class ELoginState                       Current_State;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function UMG_TitleScreen.UMG_TitleScreen_C.OnMenuEntered
struct UUMG_TitleScreen_C_OnMenuEntered_Params
{
public:
	struct FGameplayTag                          InTag;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FMenuNavigationContext                Context;                                           // 0x8(0x28)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x8 (0x8 - 0x0)
// Function UMG_TitleScreen.UMG_TitleScreen_C.SetPlayerGameData
struct UUMG_TitleScreen_C_SetPlayerGameData_Params
{
public:
	class UGGPlayerGameDataAsset*                PlayerGameData;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x29 (0x29 - 0x0)
// Function UMG_TitleScreen.UMG_TitleScreen_C.DLCNotOwnedPopupResponse
struct UUMG_TitleScreen_C_DLCNotOwnedPopupResponse_Params
{
public:
	class FString                                ID;                                                // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                               Object;                                            // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                ButtonID;                                          // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	enum class EPopupResponse                    Response;                                          // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x559 (0x559 - 0x0)
// Function UMG_TitleScreen.UMG_TitleScreen_C.ExecuteUbergraph_UMG_TitleScreen
struct UUMG_TitleScreen_C_ExecuteUbergraph_UMG_TitleScreen_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_108C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGGDLCHandler*                         CallFunc_GetDLCHandler_ReturnValue;                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInLobby_bIsOwner;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsInLobby_ReturnValue;                    // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsLoggedIn_ReturnValue;                   // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1093[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGPlayerController*                   K2Node_DynamicCast_AsGGPlayer_Controller;          // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_Offline;                        // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_109A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDLCLevelData                         K2Node_CustomEvent_Level_Data;                     // 0x30(0x50)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_10A3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUserWidget*                           CallFunc_RequestMenuNavigation_OutWidget;          // 0x88(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_RequestMenuNavigation_ReturnValue;        // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_10A7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x94(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0xA4(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_10B0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0xC0(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0xD0(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0xE0(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0xF0(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0x100(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_7;            // 0x110(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_8;            // 0x120(0x10)(ZeroConstructor, NoDestructor)
	class UGGOnlineManager*                      CallFunc_GetOnlineManager_ReturnValue;             // 0x130(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGGOnlineManager*                      CallFunc_GetOnlineManager_ReturnValue_1;           // 0x138(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGGLobbyMember>                CallFunc_GetLobbyMembers_ReturnValue;              // 0x140(0x10)(ConstParm, ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x150(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x154(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsInLobby_bIsOwner_1;                     // 0x155(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsInLobby_ReturnValue_1;                  // 0x156(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ELoginState                       CallFunc_GetLoginState_ReturnValue;                // 0x157(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x158(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_10C9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_9;            // 0x15C(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_10CF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_CustomEvent_InviterName;                    // 0x170(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_InviteId;                       // 0x180(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue_1;         // 0x190(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x198(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x1B0(0x40)(HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_ID_1;                           // 0x1F0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UObject*                               K2Node_CustomEvent_Object_1;                       // 0x200(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_Button_ID;                      // 0x208(0x10)(ZeroConstructor, HasGetValueTypeHash)
	enum class EPopupResponse                    K2Node_CustomEvent_Response_1;                     // 0x218(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_10E1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x220(0x10)(ReferenceParm)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x230(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_10E5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x238(0x18)(None)
	struct FPopupDataRow                         CallFunc_MakePopupDataRow_ReturnValue;             // 0x250(0x90)(None)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x2E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsInLobby_bIsOwner_2;                     // 0x2E1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsInLobby_ReturnValue_2;                  // 0x2E2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_10EB[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_10;           // 0x2E4(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x2F4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x2F5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_10F2[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGPlayerController*                   CallFunc_GetOwningGGPlayer_ReturnValue;            // 0x2F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x300(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_10F8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGPlayerController*                   CallFunc_GetOwningGGPlayer_ReturnValue_1;          // 0x308(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGGPopupUserWidget*                    CallFunc_CreatePopupCustom_OutWidget;              // 0x310(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CreatePopupCustom_ReturnValue;            // 0x318(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_10FF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNotificationProperties               CallFunc_MakeNotificationProperties_ReturnValue;   // 0x31C(0x14)(NoDestructor)
	enum class ELobbyUpdateType                  K2Node_CustomEvent_LobbyUpdateType;                // 0x330(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ELoginState                       K2Node_CustomEvent_OldState;                       // 0x331(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ELoginState                       K2Node_CustomEvent_NewState;                       // 0x332(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x333(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x334(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsHostStartingServer_ReturnValue;         // 0x335(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1110[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGGSplitScreenSubsystem*               CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x338(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGPlayerController*                   CallFunc_GetOwningGGPlayer_ReturnValue_2;          // 0x340(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsSplitScreenActive_ReturnValue;          // 0x348(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1115[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGPlayerController*                   CallFunc_GetOwningGGPlayer_ReturnValue_3;          // 0x350(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDLCLevelData                         K2Node_CustomEvent_LevelData;                      // 0x358(0x50)(None)
	bool                                         CallFunc_CheckOwnership_EveryoneHasOwnership;      // 0x3A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsForcedAlwaysOnline_ReturnValue;         // 0x3A9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1119[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNotificationProperties               CallFunc_MakeNotificationProperties_ReturnValue_1; // 0x3AC(0x14)(NoDestructor)
	class AGGPlayerController*                   CallFunc_GetOwningGGPlayer_ReturnValue_4;          // 0x3C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ELoginState                       K2Node_CustomEvent_Current_State;                  // 0x3C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x3C9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsForcedAlwaysOnline_ReturnValue_1;       // 0x3CA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_3;                // 0x3CB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_4;                // 0x3CC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1121[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGPlayerController*                   CallFunc_GetOwningGGPlayer_ReturnValue_5;          // 0x3D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasLoginTimedOut_ReturnValue;             // 0x3D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1123[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGPlayerController*                   CallFunc_GetOwningGGPlayer_ReturnValue_6;          // 0x3E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FNotificationProperties               CallFunc_MakeNotificationProperties_ReturnValue_2; // 0x3E8(0x14)(NoDestructor)
	bool                                         CallFunc_IsLoggedIn_ReturnValue_1;                 // 0x3FC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_3;                 // 0x3FD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsOnlineManagerBusy_ReturnValue;          // 0x3FE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x3FF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_5;                // 0x400(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_112B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x408(0x18)(None)
	class FText                                  Temp_text_Variable_1;                              // 0x420(0x18)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_11;           // 0x438(0x10)(ZeroConstructor, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x448(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1135[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_12;           // 0x44C(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_1137[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGGUserWidget*                         CallFunc_SpawnAdditionalWidget_ReturnValue;        // 0x460(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          K2Node_Event_InTag;                                // 0x468(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FMenuNavigationContext                K2Node_Event_Context;                              // 0x470(0x28)(None)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x498(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGGPlayerGameDataAsset*                K2Node_Event_PlayerGameData;                       // 0x4A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGGOnlineManager*                      CallFunc_GetOnlineManager_ReturnValue_2;           // 0x4A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGGOnlineManager*                      CallFunc_GetOnlineManager_ReturnValue_3;           // 0x4B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasClientStartedTravel_ReturnValue;       // 0x4B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasClientStartedTravel_ReturnValue_1;     // 0x4B9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_2;                  // 0x4BA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1142[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default;                             // 0x4C0(0x18)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_13;           // 0x4D8(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_14;           // 0x4E8(0x10)(ZeroConstructor, NoDestructor)
	class UGGProgression*                        CallFunc_GetPlayerProgression_ReturnValue;         // 0x4F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue;              // 0x500(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetSelectedWorldCollectionSlot_ReturnValue; // 0x508(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_114B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_GGGameInstance_C*                  K2Node_DynamicCast_AsBP_GGGame_Instance;           // 0x510(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x518(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_UpdateLastLoadedLevel_ReturnValue;        // 0x519(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1150[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGGSplitScreenSubsystem*               CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0x520(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x528(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsSplitScreenActive_ReturnValue_1;        // 0x529(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_6;                // 0x52A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_2;                              // 0x52B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Select_Default_1;                           // 0x52C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1159[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_CustomEvent_ID;                             // 0x530(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UObject*                               K2Node_CustomEvent_Object;                         // 0x540(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_ButtonID;                       // 0x548(0x10)(ZeroConstructor, HasGetValueTypeHash)
	enum class EPopupResponse                    K2Node_CustomEvent_Response;                       // 0x558(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


