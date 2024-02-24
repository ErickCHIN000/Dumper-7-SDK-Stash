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

// 0x28 (0x28 - 0x0)
// Function WBP_PlayerMapPin.WBP_PlayerMapPin_C.GetOwningPlayersName
struct UWBP_PlayerMapPin_C_GetOwningPlayersName_Params
{
public:
	class FString                                NewParam;                                          // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class APlayerState*                          CallFunc_GetPlayerStateFromId_PlayerState;         // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetPlayerName_ReturnValue;                // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x12B (0x12B - 0x0)
// Function WBP_PlayerMapPin.WBP_PlayerMapPin_C.IsAPartyMemberBeacon
struct UWBP_PlayerMapPin_C_IsAPartyMemberBeacon_Params
{
public:
	bool                                         IsAPartyMembersBeacon;                             // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsOwnedByLocalPlayer_IsOwnedByLocalPlayer; // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_625A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMapWaypointInfo                      CallFunc_GetMapPinInfo_ReturnValue;                // 0x8(0x120)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x129(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x12A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function WBP_PlayerMapPin.WBP_PlayerMapPin_C.IsOwnedByLocalPlayer
struct UWBP_PlayerMapPin_C_IsOwnedByLocalPlayer_Params
{
public:
	bool                                         IsOwnedByLocalPlayer;                              // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_62AA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetLocalPlayerPersistentId_PlayerId;      // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x12A (0x12A - 0x0)
// Function WBP_PlayerMapPin.WBP_PlayerMapPin_C.ShouldTooltipShowEditHint
struct UWBP_PlayerMapPin_C_ShouldTooltipShowEditHint_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMapMarkerType                    Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsOwnedByLocalPlayer_IsOwnedByLocalPlayer; // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6323[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMapWaypointInfo                      CallFunc_GetMapPinInfo_ReturnValue;                // 0x8(0x120)(None)
	bool                                         K2Node_Select_Default;                             // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x129(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x249 (0x249 - 0x0)
// Function WBP_PlayerMapPin.WBP_PlayerMapPin_C.GetMapPinInfo
struct UWBP_PlayerMapPin_C_GetMapPinInfo_Params
{
public:
	struct FMapWaypointInfo                      ReturnValue;                                       // 0x0(0x120)(Parm, OutParm, ReturnParm)
	bool                                         CallFunc_DoesDataTableRowExist_ReturnValue;        // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_639A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMapWaypointInfo                      CallFunc_GetDataTableRowFromName_OutRow;           // 0x128(0x120)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x248(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function WBP_PlayerMapPin.WBP_PlayerMapPin_C.GetTooltipCoordText
struct UWBP_PlayerMapPin_C_GetTooltipCoordText_Params
{
public:
	class FText                                  OutputText;                                        // 0x0(0x18)(Parm, OutParm)
	bool                                         DeathChestRow;                                     // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x138 (0x138 - 0x0)
// Function WBP_PlayerMapPin.WBP_PlayerMapPin_C.GetTooltipBodyText
struct UWBP_PlayerMapPin_C_GetTooltipBodyText_Params
{
public:
	class FText                                  OutputText;                                        // 0x0(0x18)(Parm, OutParm)
	struct FMapWaypointInfo                      CallFunc_GetMapPinInfo_ReturnValue;                // 0x18(0x120)(None)
};

// 0x170 (0x170 - 0x0)
// Function WBP_PlayerMapPin.WBP_PlayerMapPin_C.GetTooltipTitleText
struct UWBP_PlayerMapPin_C_GetTooltipTitleText_Params
{
public:
	class FText                                  OutputText;                                        // 0x0(0x18)(Parm, OutParm)
	struct FMapWaypointInfo                      CallFunc_GetMapPinInfo_ReturnValue;                // 0x18(0x120)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x138(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Replace_ReturnValue;                      // 0x148(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x158(0x18)(None)
};

// 0x7 (0x7 - 0x0)
// Function WBP_PlayerMapPin.WBP_PlayerMapPin_C.IsPlayerEditable
struct UWBP_PlayerMapPin_C_IsPlayerEditable_Params
{
public:
	bool                                         IsPlayerEditable;                                  // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsOwnedByLocalPlayer_IsOwnedByLocalPlayer; // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMapMarkerType                    CallFunc_GetMapPinType_MapPinType;                 // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x129 (0x129 - 0x0)
// Function WBP_PlayerMapPin.WBP_PlayerMapPin_C.GetMapPinType
struct UWBP_PlayerMapPin_C_GetMapPinType_Params
{
public:
	enum class EMapMarkerType                    MapPinType;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6556[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMapWaypointInfo                      CallFunc_GetDataTableRowFromName_OutRow;           // 0x8(0x120)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA8 (0xA8 - 0x0)
// Function WBP_PlayerMapPin.WBP_PlayerMapPin_C.SetMapPinData
struct UWBP_PlayerMapPin_C_SetMapPinData_Params
{
public:
	struct FMapPinData                           NewMapPinData;                                     // 0x0(0xA8)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x38 (0x38 - 0x0)
// Function WBP_PlayerMapPin.WBP_PlayerMapPin_C.RefreshView
struct UWBP_PlayerMapPin_C_RefreshView_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_65FB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_MapUI_WorldLocationToMapPosition_Map_Position; // 0x18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_MakeVector2D_X_ImplicitCast;              // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_MakeVector2D_Y_ImplicitCast;              // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_PlayerMapPin.WBP_PlayerMapPin_C.HandleEditPanelClosed
struct UWBP_PlayerMapPin_C_HandleEditPanelClosed_Params
{
public:
	class UNWXCommonWindowWidget*                Window;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function WBP_PlayerMapPin.WBP_PlayerMapPin_C.HandleRadiusSliderValueChange
struct UWBP_PlayerMapPin_C_HandleRadiusSliderValueChange_Params
{
public:
	double                                       NewRadius;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x44 (0x44 - 0x0)
// Function WBP_PlayerMapPin.WBP_PlayerMapPin_C.HandleEditPanelSavePressed
struct UWBP_PlayerMapPin_C_HandleEditPanelSavePressed_Params
{
public:
	class FText                                  NewNote;                                           // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	double                                       NewRadius;                                         // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ANWXPlayerController*                  CallFunc_GetLocalPlayerController_LocalPlayerController; // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IPlayerMapPinControllerInterface> CallFunc_UpdatePlayerOwnedMapPin_self_CastInput;   // 0x30(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_UpdatePlayerOwnedMapPin_Radius_ImplicitCast; // 0x40(0x4)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2A8 (0x2A8 - 0x0)
// Function WBP_PlayerMapPin.WBP_PlayerMapPin_C.GetTooltipWidget
struct UWBP_PlayerMapPin_C_GetTooltipWidget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   DeathMarkerRow;                                    // 0x8(0x10)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FMapWaypointInfo                      MapInfo;                                           // 0x18(0x120)(Edit, BlueprintVisible)
	class UWBP_Tooltip_MapMarker_C*              CallFunc_Create_ReturnValue;                       // 0x138(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FMapWaypointInfo                      CallFunc_GetMapPinInfo_ReturnValue;                // 0x140(0x120)(None)
	class FText                                  CallFunc_GetTooltipCoordText_OutputText;           // 0x260(0x18)(None)
	class FText                                  CallFunc_GetTooltipBodyText_OutputText;            // 0x278(0x18)(None)
	class FText                                  CallFunc_GetTooltipTitleText_OutputText;           // 0x290(0x18)(None)
};

// 0x170 (0x170 - 0x0)
// Function WBP_PlayerMapPin.WBP_PlayerMapPin_C.OnMouseLeftClick
struct UWBP_PlayerMapPin_C_OnMouseLeftClick_Params
{
public:
	struct FEventReply                           Handled;                                           // 0x0(0xB8)(Parm, OutParm)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0xB8(0xB8)(None)
};

// 0x2F9 (0x2F9 - 0x0)
// Function WBP_PlayerMapPin.WBP_PlayerMapPin_C.OnMouseButtonUp
struct UWBP_PlayerMapPin_C_OnMouseButtonUp_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x78)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                           ReturnValue;                                       // 0xB0(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           CallFunc_OnMouseLeftClick_Handled;                 // 0x168(0xB8)(None)
	struct FKey                                  CallFunc_PointerEvent_GetEffectingButton_ReturnValue; // 0x220(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x238(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6890[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEventReply                           CallFunc_Unhandled_ReturnValue;                    // 0x240(0xB8)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x2F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x260 (0x260 - 0x0)
// Function WBP_PlayerMapPin.WBP_PlayerMapPin_C.OnMouseButtonDown
struct UWBP_PlayerMapPin_C_OnMouseButtonDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x78)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                           ReturnValue;                                       // 0xB0(0xB8)(Parm, OutParm, ReturnParm)
	bool                                         CallFunc_IsPlayerEditable_IsPlayerEditable;        // 0x168(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6967[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  CallFunc_PointerEvent_GetEffectingButton_ReturnValue; // 0x170(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x188(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_696F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ANWXPlayerController*                  CallFunc_GetLocalPlayerController_LocalPlayerController; // 0x190(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IPlayerMapPinControllerInterface> CallFunc_RemovePlayerOwnedMapPin_self_CastInput;   // 0x198(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x1A8(0xB8)(None)
};

// 0x3C (0x3C - 0x0)
// Function WBP_PlayerMapPin.WBP_PlayerMapPin_C.Tick
struct UWBP_PlayerMapPin_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x228 (0x228 - 0x0)
// Function WBP_PlayerMapPin.WBP_PlayerMapPin_C.ExecuteUbergraph_WBP_PlayerMapPin
struct UWBP_PlayerMapPin_C_ExecuteUbergraph_WBP_PlayerMapPin_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6B6A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Temp_real_Variable;                                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_1;                              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_2;                              // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x20(0x38)(IsPlainOldData, NoDestructor)
	float                                        K2Node_Event_InDeltaTime;                          // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6B93[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_MapUI_GetLevelMapRotation_TableRowFound;  // 0x69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6BA0[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_MapUI_GetLevelMapRotation_Rotation;       // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_MapRotation                     CallFunc_MapUI_GetLevelMapRotation_Map_Rotation_Override; // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6BC2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_MapRangeClamped_ReturnValue;              // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMapMarkerType                    Temp_byte_Variable;                                // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6BCB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMapWaypointInfo                      CallFunc_GetDataTableRowFromName_OutRow;           // 0x90(0x120)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x1B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6BD7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x1B4(0x14)(None)
	class UObject*                               CallFunc_LoadAsset_Blocking_ReturnValue;           // 0x1C8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x1D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6BED[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            K2Node_DynamicCast_AsTexture_2D;                   // 0x1D8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x1E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1E1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6BF8[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_1;                    // 0x1E4(0x14)(None)
	double                                       K2Node_Select_Default;                             // 0x1F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x200(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0x208(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsAPartyMemberBeacon_IsAPartyMembersBeacon; // 0x218(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6C14[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_SetScalarParameterValue_Value_ImplicitCast; // 0x21C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast; // 0x220(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast; // 0x224(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA8 (0xA8 - 0x0)
// Function WBP_PlayerMapPin.WBP_PlayerMapPin_C.MapPinClicked__DelegateSignature
struct UWBP_PlayerMapPin_C_MapPinClicked__DelegateSignature_Params
{
public:
	struct FMapPinData                           MapPinData;                                        // 0x0(0xA8)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0xA9 (0xA9 - 0x0)
// Function WBP_PlayerMapPin.WBP_PlayerMapPin_C.MapPinHoverStateChanged__DelegateSignature
struct UWBP_PlayerMapPin_C_MapPinHoverStateChanged__DelegateSignature_Params
{
public:
	struct FMapPinData                           MapPinData;                                        // 0x0(0xA8)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         IsHovered;                                         // 0xA8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


