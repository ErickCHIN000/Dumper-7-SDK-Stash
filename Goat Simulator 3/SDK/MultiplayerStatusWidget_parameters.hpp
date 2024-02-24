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

// 0x68 (0x68 - 0x0)
// Function MultiplayerStatusWidget.MultiplayerStatusWidget_C.GetEndAnimationDuration
struct UMultiplayerStatusWidget_C_GetEndAnimationDuration_Params
{
public:
	struct FNotification                         Notification;                                      // 0x0(0x60)(BlueprintVisible, BlueprintReadOnly, Parm)
	float                                        ReturnValue;                                       // 0x60(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetEndTime_ReturnValue;                   // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x68 (0x68 - 0x0)
// Function MultiplayerStatusWidget.MultiplayerStatusWidget_C.GetStartAnimationDuration
struct UMultiplayerStatusWidget_C_GetStartAnimationDuration_Params
{
public:
	struct FNotification                         Notification;                                      // 0x0(0x60)(BlueprintVisible, BlueprintReadOnly, Parm)
	float                                        ReturnValue;                                       // 0x60(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetEndTime_ReturnValue;                   // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x64 (0x64 - 0x0)
// Function MultiplayerStatusWidget.MultiplayerStatusWidget_C.GetWidgetDuration
struct UMultiplayerStatusWidget_C_GetWidgetDuration_Params
{
public:
	struct FNotification                         Notification;                                      // 0x0(0x60)(BlueprintVisible, BlueprintReadOnly, Parm)
	float                                        ReturnValue;                                       // 0x60(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x83 (0x83 - 0x0)
// Function MultiplayerStatusWidget.MultiplayerStatusWidget_C.Change Active Widget
struct UMultiplayerStatusWidget_C_Change_Active_Widget_Params
{
public:
	class UWidget*                               ActiveWidget;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0x8(0x18)(None)
	bool                                         CallFunc_NotEqual_TextText_ReturnValue;            // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_B7C[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetText_ReturnValue_1;                    // 0x28(0x18)(None)
	bool                                         CallFunc_NotEqual_TextText_ReturnValue_1;          // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_B83[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetText_ReturnValue_2;                    // 0x50(0x18)(None)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationReverse_ReturnValue;         // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_B96[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetActiveWidget_ReturnValue;              // 0x78(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x82(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function MultiplayerStatusWidget.MultiplayerStatusWidget_C.SetParentNotificationWidget
struct UMultiplayerStatusWidget_C_SetParentNotificationWidget_Params
{
public:
	class UGGNotificationUserWidget*             Parent;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// Function MultiplayerStatusWidget.MultiplayerStatusWidget_C.UpdateLabels
struct UMultiplayerStatusWidget_C_UpdateLabels_Params
{
public:
	struct FNotification                         Notification;                                      // 0x0(0x60)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x60 (0x60 - 0x0)
// Function MultiplayerStatusWidget.MultiplayerStatusWidget_C.UpdateWidget
struct UMultiplayerStatusWidget_C_UpdateWidget_Params
{
public:
	struct FNotification                         Notification;                                      // 0x0(0x60)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x60 (0x60 - 0x0)
// Function MultiplayerStatusWidget.MultiplayerStatusWidget_C.ShowWidget
struct UMultiplayerStatusWidget_C_ShowWidget_Params
{
public:
	struct FNotification                         Notification;                                      // 0x0(0x60)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x1 (0x1 - 0x0)
// Function MultiplayerStatusWidget.MultiplayerStatusWidget_C.PreConstruct
struct UMultiplayerStatusWidget_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x152 (0x152 - 0x0)
// Function MultiplayerStatusWidget.MultiplayerStatusWidget_C.ExecuteUbergraph_MultiplayerStatusWidget
struct UMultiplayerStatusWidget_C_ExecuteUbergraph_MultiplayerStatusWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_C82[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNotification                         K2Node_Event_Notification_1;                       // 0x8(0x60)(None)
	struct FNotification                         K2Node_Event_Notification;                         // 0x68(0x60)(None)
	struct FNotification                         K2Node_CustomEvent_Notification;                   // 0xC8(0x60)(None)
	class UGGNotificationUserWidget*             K2Node_Event_Parent;                               // 0x128(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_MatchesTag_ReturnValue;                   // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_MatchesTag_ReturnValue_1;                 // 0x131(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_MatchesTag_ReturnValue_2;                 // 0x132(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_MatchesTag_ReturnValue_3;                 // 0x133(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_MatchesTag_ReturnValue_4;                 // 0x134(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsGameplayTagValid_ReturnValue;           // 0x135(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C96[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationReverse_ReturnValue;         // 0x138(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsAnimationPlayingForward_ReturnValue;    // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x141(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C9E[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x148(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsMobilePlatform_ReturnValue;             // 0x151(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


