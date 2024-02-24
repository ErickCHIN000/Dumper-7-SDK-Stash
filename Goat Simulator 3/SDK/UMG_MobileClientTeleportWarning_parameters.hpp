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

// 0x64 (0x64 - 0x0)
// Function UMG_MobileClientTeleportWarning.UMG_MobileClientTeleportWarning_C.GetEndAnimationDuration
struct UUMG_MobileClientTeleportWarning_C_GetEndAnimationDuration_Params
{
public:
	struct FNotification                         Notification;                                      // 0x0(0x60)(BlueprintVisible, BlueprintReadOnly, Parm)
	float                                        ReturnValue;                                       // 0x60(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x64 (0x64 - 0x0)
// Function UMG_MobileClientTeleportWarning.UMG_MobileClientTeleportWarning_C.GetStartAnimationDuration
struct UUMG_MobileClientTeleportWarning_C_GetStartAnimationDuration_Params
{
public:
	struct FNotification                         Notification;                                      // 0x0(0x60)(BlueprintVisible, BlueprintReadOnly, Parm)
	float                                        ReturnValue;                                       // 0x60(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x64 (0x64 - 0x0)
// Function UMG_MobileClientTeleportWarning.UMG_MobileClientTeleportWarning_C.GetWidgetDuration
struct UUMG_MobileClientTeleportWarning_C_GetWidgetDuration_Params
{
public:
	struct FNotification                         Notification;                                      // 0x0(0x60)(BlueprintVisible, BlueprintReadOnly, Parm)
	float                                        ReturnValue;                                       // 0x60(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UMG_MobileClientTeleportWarning.UMG_MobileClientTeleportWarning_C.SetParentNotificationWidget
struct UUMG_MobileClientTeleportWarning_C_SetParentNotificationWidget_Params
{
public:
	class UGGNotificationUserWidget*             Parent;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// Function UMG_MobileClientTeleportWarning.UMG_MobileClientTeleportWarning_C.ShowWidget
struct UUMG_MobileClientTeleportWarning_C_ShowWidget_Params
{
public:
	struct FNotification                         Notification;                                      // 0x0(0x60)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x60 (0x60 - 0x0)
// Function UMG_MobileClientTeleportWarning.UMG_MobileClientTeleportWarning_C.UpdateWidget
struct UUMG_MobileClientTeleportWarning_C_UpdateWidget_Params
{
public:
	struct FNotification                         Notification;                                      // 0x0(0x60)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0xE1 (0xE1 - 0x0)
// Function UMG_MobileClientTeleportWarning.UMG_MobileClientTeleportWarning_C.ExecuteUbergraph_UMG_MobileClientTeleportWarning
struct UUMG_MobileClientTeleportWarning_C_ExecuteUbergraph_UMG_MobileClientTeleportWarning_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_C0E[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGGNotificationUserWidget*             K2Node_Event_Parent;                               // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FNotification                         K2Node_Event_Notification_1;                       // 0x10(0x60)(None)
	struct FNotification                         K2Node_Event_Notification;                         // 0x70(0x60)(None)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue_1;       // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Check_if_Aspect_Ratio_Is_Lower_IsLowerThanProvided; // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


