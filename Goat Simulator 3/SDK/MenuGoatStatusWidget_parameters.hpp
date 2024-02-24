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

// 0x1F (0x1F - 0x0)
// Function MenuGoatStatusWidget.MenuGoatStatusWidget_C.ShouldShowLeaveButton
struct UMenuGoatStatusWidget_C_ShouldShowLeaveButton_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_B69[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGGLobbyMember>                CallFunc_GetLobbyMembers_ReturnValue;              // 0x8(0x10)(ConstParm, ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsMobilePlatform_ReturnValue;             // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x7 (0x7 - 0x0)
// Function MenuGoatStatusWidget.MenuGoatStatusWidget_C.ShouldShowKickButton
struct UMenuGoatStatusWidget_C_ShouldShowKickButton_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsInLobby_bIsOwner;                       // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsInLobby_ReturnValue;                    // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsMobilePlatform_ReturnValue;             // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xA (0xA - 0x0)
// Function MenuGoatStatusWidget.MenuGoatStatusWidget_C.UpdateMobileButtonsVisibility
struct UMenuGoatStatusWidget_C_UpdateMobileButtonsVisibility_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_3;                              // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ShouldShowLeaveButton_result;             // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ShouldShowKickButton_result;              // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default_1;                           // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x181 (0x181 - 0x0)
// Function MenuGoatStatusWidget.MenuGoatStatusWidget_C.UpdatePlayerSaveStats
struct UMenuGoatStatusWidget_C_UpdatePlayerSaveStats_Params
{
public:
	bool                                         ShowStats;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C84[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGGProgression*                        CallFunc_GetPlayerProgression_ReturnValue;         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGGInventory*                          CallFunc_GetPlayerInventory_ReturnValue;           // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetCollectedTrinketNum_ReturnValue;       // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_C88[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UGGGoatGearInfoDataAsset*>      CallFunc_GetUnlockedGear_ReturnValue;              // 0x20(0x10)(ReferenceParm)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x30(0x40)(HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_C8D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x78(0x10)(ReferenceParm)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x88(0x40)(HasGetValueTypeHash)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0xC8(0x18)(None)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_1;                          // 0xE0(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue_1;                     // 0xF0(0x18)(None)
	class UGGInventory*                          CallFunc_GetPlayerInventory_ReturnValue_1;         // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetTokens_ReturnValue;                    // 0x110(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_C99[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_2;            // 0x118(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_2;                          // 0x158(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue_2;                     // 0x168(0x18)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x180(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2C (0x2C - 0x0)
// Function MenuGoatStatusWidget.MenuGoatStatusWidget_C.GetVisibility_HoldToLeaveText
struct UMenuGoatStatusWidget_C_GetVisibility_HoldToLeaveText_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_CF7[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGGSplitScreenSubsystem*               CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsSplitScreenActive_ReturnValue;          // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CFF[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGGSplitScreenSubsystem*               CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_D06[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetUserHeldLeavingDuration_ReturnValue;   // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_FloatFloat_ReturnValue;        // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x2B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3C (0x3C - 0x0)
// Function MenuGoatStatusWidget.MenuGoatStatusWidget_C.Tick
struct UMenuGoatStatusWidget_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function MenuGoatStatusWidget.MenuGoatStatusWidget_C.OnMenuTabChanged
struct UMenuGoatStatusWidget_C_OnMenuTabChanged_Params
{
public:
	struct FGameplayTag                          TabID;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function MenuGoatStatusWidget.MenuGoatStatusWidget_C.PreConstruct
struct UMenuGoatStatusWidget_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x630 (0x630 - 0x0)
// Function MenuGoatStatusWidget.MenuGoatStatusWidget_C.ExecuteUbergraph_MenuGoatStatusWidget
struct UMenuGoatStatusWidget_C_ExecuteUbergraph_MenuGoatStatusWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F5B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGGSplitScreenSubsystem*               CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_3;                              // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x16(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_3;                              // 0x17(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_4;                              // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_5;                              // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F6A[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x1C(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x2C(0x10)(ZeroConstructor, NoDestructor)
	bool                                         Temp_bool_Variable_4;                              // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_6;                              // 0x3D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_7;                              // 0x3E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_5;                              // 0x3F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FText                                  Temp_text_Variable;                                // 0x40(0x18)(None)
	bool                                         Temp_bool_Variable_6;                              // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFriendPlatform                   Temp_byte_Variable_8;                              // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F7E[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x5C(0x38)(IsPlainOldData, NoDestructor)
	float                                        K2Node_Event_InDeltaTime;                          // 0x94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_9;                              // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F84[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      CallFunc_GetUniqueNetIDRepl_ReturnValue;           // 0xA0(0x28)(HasGetValueTypeHash)
	bool                                         CallFunc_IsInLobby_bIsOwner;                       // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsInLobby_ReturnValue;                    // 0xC9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_10;                             // 0xCA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_7;                              // 0xCB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F8C[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0xD0(0x18)(None)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F94[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class USplitScreenPlayerObject*>      CallFunc_GetSplitScreenPlayerObjects_ReturnValue;  // 0xF0(0x10)(ReferenceParm)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F98[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x104(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGGSplitScreenSubsystem*               CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x110(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x150(0x10)(ReferenceParm)
	enum class ESlateVisibility                  K2Node_Select_Default_1;                           // 0x160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_FA4[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x168(0x18)(None)
	struct FUniqueNetIdRepl                      CallFunc_GetUniqueNetIDRepl_ReturnValue_1;         // 0x180(0x28)(HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      K2Node_Select_Default_2;                           // 0x1A8(0x28)(HasGetValueTypeHash)
	bool                                         CallFunc_IsMainMenuStartingLevel_ReturnValue;      // 0x1D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_FB0[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGGLobbyMember                        CallFunc_IsNetIdMemberOfLobby_FoundMember;         // 0x1D8(0xA8)(None)
	bool                                         CallFunc_IsNetIdMemberOfLobby_ReturnValue;         // 0x280(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_FB5[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x288(0x18)(None)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x2A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetTargetUserIndex_ReturnValue;           // 0x2A4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_FBA[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USplitScreenPlayerObject*              CallFunc_Array_Get_Item;                           // 0x2A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x2B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_FBB[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetPlayerName_ReturnValue;                // 0x2B8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x2C8(0x18)(None)
	class UGGProgression*                        CallFunc_GetPlayerProgression_ReturnValue;         // 0x2E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGPlayerController*                   CallFunc_GetPrimaryGGPlayerController_ReturnValue; // 0x2E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x2F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          K2Node_CustomEvent_TabID;                          // 0x2F8(0x8)(NoDestructor, HasGetValueTypeHash)
	class UGGMenuUserWidget*                     K2Node_DynamicCast_AsGGMenu_User_Widget;           // 0x300(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x308(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x309(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x30A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_FD8[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGGSplitScreenSubsystem*               CallFunc_GetGameInstanceSubsystem_ReturnValue_2;   // 0x310(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsAnimationPlayingForward_ReturnValue;    // 0x318(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsSplitScreenActive_ReturnValue;          // 0x319(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EPlatformFlagsBP                  CallFunc_GetPlatformForUI_ReturnValue;             // 0x31A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x31B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_FEE[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      CallFunc_GetUniqueNetIDRepl_ReturnValue_2;         // 0x320(0x28)(HasGetValueTypeHash)
	class AGGPlayerState*                        CallFunc_GetPlayerStateFromUniqueNetId_ReturnValue; // 0x348(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsLoggedIn_ReturnValue;                   // 0x350(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x351(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_FF6[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetPlayerName_ReturnValue_1;              // 0x358(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetUsername_ReturnValue;                  // 0x368(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_2;          // 0x378(0x18)(None)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_3;          // 0x390(0x18)(None)
	class FText                                  K2Node_Select_Default_3;                           // 0x3A8(0x18)(None)
	bool                                         CallFunc_IsMobilePlatform_ReturnValue;             // 0x3C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_FFE[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCanvasPanelSlot*                      CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x3C8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Check_if_Aspect_Ratio_Is_Lower_IsLowerThanProvided; // 0x3D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Check_if_Aspect_Ratio_Is_Lower_IsLowerThanProvided_1; // 0x3D1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x3D2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsMobilePlatform_ReturnValue_1;           // 0x3D3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_8;                              // 0x3D4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default_4;                           // 0x3D5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1012[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      K2Node_Select_Default_5;                           // 0x3D8(0x28)(HasGetValueTypeHash)
	bool                                         CallFunc_IsNetIdLobbyOwner_ReturnValue;            // 0x400(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1017[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x408(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationReverse_ReturnValue;         // 0x410(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue_1;       // 0x418(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationReverse_ReturnValue_1;       // 0x420(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetUsername_ReturnValue_1;                // 0x428(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_4;          // 0x438(0x18)(None)
	struct FGGOnlineFriend                       CallFunc_GetOnlineFriend_OutFriend;                // 0x450(0xC0)(None)
	bool                                         CallFunc_GetOnlineFriend_ReturnValue;              // 0x510(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFriendPlatform                   K2Node_Select_Default_6;                           // 0x511(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1028[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGGOnlineFriend                       CallFunc_GetOnlineFriendWithUsername_OutFriend;    // 0x518(0xC0)(None)
	bool                                         CallFunc_GetOnlineFriendWithUsername_ReturnValue;  // 0x5D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EPlatformFlagsBP                  CallFunc_GetPlatformForUI_ReturnValue_1;           // 0x5D9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x5DA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_103B[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGGSplitScreenSubsystem*               CallFunc_GetGameInstanceSubsystem_ReturnValue_3;   // 0x5E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasMouseAndKeyboardAvailable_ReturnValue; // 0x5E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_103F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetGamepadClaimedByUser_ReturnValue;      // 0x5EC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x5F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default_7;                           // 0x5F1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default_8;                           // 0x5F2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1046[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGGSplitScreenSubsystem*               CallFunc_GetGameInstanceSubsystem_ReturnValue_4;   // 0x5F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetGamepadClaimedByUser_ReturnValue_1;    // 0x600(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x604(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x608(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_104C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x610(0x18)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x628(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x629(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1051[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x62C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


