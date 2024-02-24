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

// 0x1A8 (0x1A8 - 0x0)
// Function TrackerGoatWidget.TrackerGoatWidget_C.MobileAppendDistance
struct UTrackerGoatWidget_C_MobileAppendDistance_Params
{
public:
	struct FRadarCoordinateData                  CallFunc_GetCachedData_ReturnValue;                // 0x0(0x58)(None)
	class AGGPlayerController*                   CallFunc_GetOwningGGPlayer_ReturnValue;            // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGPlayerState*                        K2Node_DynamicCast_AsGGPlayer_State;               // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CBB[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGGoat*                               CallFunc_GetPlayerGoat_ReturnValue;                // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0x78(0x18)(None)
	struct FRadarCoordinateData                  K2Node_MakeStruct_RadarCoordinateData;             // 0x90(0x58)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0xE8(0x40)(HasGetValueTypeHash)
	class FText                                  CallFunc_GetStylizedDistanceTextToRadarPoint_ReturnValue; // 0x128(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x140(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x180(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x190(0x18)(None)
};

// 0x11 (0x11 - 0x0)
// Function TrackerGoatWidget.TrackerGoatWidget_C.SetTalking
struct UTrackerGoatWidget_C_SetTalking_Params
{
public:
	bool                                         InTalking;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_D04[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xD3 (0xD3 - 0x0)
// Function TrackerGoatWidget.TrackerGoatWidget_C.UpdateVoiceChatData
struct UTrackerGoatWidget_C_UpdateVoiceChatData_Params
{
public:
	class AActor*                                DataActor;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGPlayerState*                        CallFunc_GetPlayerStateFromActor_ReturnValue;      // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGGOnlineFriend                       CallFunc_GetOnlineFriendFromPlayerState_OutFriend; // 0x10(0xC0)(None)
	bool                                         CallFunc_GetOnlineFriendFromPlayerState_ReturnValue; // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xD1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsHost_ReturnValue;                       // 0xD2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x7C (0x7C - 0x0)
// Function TrackerGoatWidget.TrackerGoatWidget_C.UpdatePlayerColor
struct UTrackerGoatWidget_C_UpdatePlayerColor_Params
{
public:
	struct FRadarCoordinateData                  Data;                                              // 0x0(0x58)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_D95[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGPlayerState*                        CallFunc_GetPlayerStateFromActor_ReturnValue;      // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_D9B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          CallFunc_GetPlayerColor_ReturnValue;               // 0x6C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x120 (0x120 - 0x0)
// Function TrackerGoatWidget.TrackerGoatWidget_C.UpdatePlayerName
struct UTrackerGoatWidget_C_UpdatePlayerName_Params
{
public:
	struct FRadarCoordinateData                  Data;                                              // 0x0(0x58)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                        NewMaxNameLength;                                  // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x5C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_1;                              // 0x5D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E1B[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IGGRadarInterface>    K2Node_DynamicCast_AsGGRadar_Interface;            // 0x60(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E21[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetRadarDisplayName_ReturnValue;          // 0x78(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x90(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Len_ReturnValue;                          // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsMobilePlatform_ReturnValue;             // 0xA4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E2A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Len_ReturnValue_1;                        // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E2D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Left_ReturnValue;                         // 0xB0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E31[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_TrimTrailing_ReturnValue;                 // 0xC8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E38[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0xE0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        K2Node_Select_Default;                             // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E3B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_Select_Default_1;                           // 0xF8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x108(0x18)(None)
};

// 0x29 (0x29 - 0x0)
// Function TrackerGoatWidget.TrackerGoatWidget_C.OnPlayerTalkingStateChanged
struct UTrackerGoatWidget_C_OnPlayerTalkingStateChanged_Params
{
public:
	struct FUniqueNetIdRepl                      TalkerId;                                          // 0x0(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	bool                                         bIsTalking;                                        // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x58 (0x58 - 0x0)
// Function TrackerGoatWidget.TrackerGoatWidget_C.OnAddedWidget
struct UTrackerGoatWidget_C_OnAddedWidget_Params
{
public:
	struct FRadarCoordinateData                  Data;                                              // 0x0(0x58)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x58 (0x58 - 0x0)
// Function TrackerGoatWidget.TrackerGoatWidget_C.OnUpdatedWidget
struct UTrackerGoatWidget_C_OnUpdatedWidget_Params
{
public:
	struct FRadarCoordinateData                  Data;                                              // 0x0(0x58)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x3C (0x3C - 0x0)
// Function TrackerGoatWidget.TrackerGoatWidget_C.Tick
struct UTrackerGoatWidget_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x141 (0x141 - 0x0)
// Function TrackerGoatWidget.TrackerGoatWidget_C.ExecuteUbergraph_TrackerGoatWidget
struct UTrackerGoatWidget_C_ExecuteUbergraph_TrackerGoatWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F2A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x8(0x18)(None)
	struct FUniqueNetIdRepl                      K2Node_CustomEvent_TalkerId;                       // 0x20(0x28)(ConstParm, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bIsTalking;                     // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F37[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRadarCoordinateData                  K2Node_Event_Data_1;                               // 0x50(0x58)(ConstParm)
	struct FRadarCoordinateData                  K2Node_Event_Data;                                 // 0xA8(0x58)(ConstParm)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x101(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CompareUniqueNetIdRepls_ReturnValue;      // 0x102(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F4B[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x104(0x38)(IsPlainOldData, NoDestructor)
	float                                        K2Node_Event_InDeltaTime;                          // 0x13C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsMobilePlatform_ReturnValue;             // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


