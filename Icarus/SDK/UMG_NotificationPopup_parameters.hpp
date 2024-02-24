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
// Function UMG_NotificationPopup.UMG_NotificationPopup_C.GetLoadingWidget
struct UUMG_NotificationPopup_C_GetLoadingWidget_Params
{
public:
	class UWidget*                               Loading;                                           // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x108 (0x108 - 0x0)
// Function UMG_NotificationPopup.UMG_NotificationPopup_C.OnFail_5E3F90A94463A9573E2CEFBB8066B33B
struct UUMG_NotificationPopup_C_OnFail_5E3F90A94463A9573E2CEFBB8066B33B_Params
{
public:
	struct FResGetProspectSummary                Response;                                          // 0x0(0x108)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x108 (0x108 - 0x0)
// Function UMG_NotificationPopup.UMG_NotificationPopup_C.OnSuccess_5E3F90A94463A9573E2CEFBB8066B33B
struct UUMG_NotificationPopup_C_OnSuccess_5E3F90A94463A9573E2CEFBB8066B33B_Params
{
public:
	struct FResGetProspectSummary                Response;                                          // 0x0(0x108)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x78 (0x78 - 0x0)
// Function UMG_NotificationPopup.UMG_NotificationPopup_C.Show
struct UUMG_NotificationPopup_C_Show_Params
{
public:
	struct FNotification                         Notification;                                      // 0x0(0x78)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x4F4 (0x4F4 - 0x0)
// Function UMG_NotificationPopup.UMG_NotificationPopup_C.ExecuteUbergraph_UMG_NotificationPopup
struct UUMG_NotificationPopup_C_ExecuteUbergraph_UMG_NotificationPopup_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_51F9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FResGetProspectSummary                K2Node_CustomEvent_Response_1;                     // 0x8(0x108)(ConstParm)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x110(0x10)(ZeroConstructor, NoDestructor)
	struct FResGetProspectSummary                K2Node_CustomEvent_Response;                       // 0x120(0x108)(ConstParm)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x228(0x10)(ZeroConstructor, NoDestructor)
	struct FResGetProspectSummary                Temp_struct_Variable;                              // 0x238(0x108)(None)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x340(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIcarusPlayerState*                    K2Node_DynamicCast_AsIcarus_Player_State;          // 0x348(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x350(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_522F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetUserID_ReturnValue;                    // 0x358(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FOnlineProfileCharacter               CallFunc_GetActiveCharacter_ReturnValue;           // 0x368(0xA0)(ConstParm)
	class UWidget*                               CallFunc_GetLoadingWidget_Loading;                 // 0x408(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_GetLoadingWidget_Loading_1;               // 0x410(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBackendProxyComponent*                CallFunc_GetBackendProxyComponent_BackendProxyComponent; // 0x418(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetBackendProxyComponent_bSuccess;        // 0x420(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5250[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBackendProxyComponent*                CallFunc_GetBackendProxyComponent_BackendProxyComponent_1; // 0x428(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetBackendProxyComponent_bSuccess_1;      // 0x430(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_525D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNotification                         K2Node_CustomEvent_Notification;                   // 0x438(0x78)(None)
	class UWidget*                               CallFunc_GetLoadingWidget_Loading_2;               // 0x4B0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_GetLoadingWidget_Loading_3;               // 0x4B8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FReqGetProspectSummary                K2Node_MakeStruct_ReqGetProspectSummary;           // 0x4C0(0x28)(None)
	class UGetProspectSummaryCallbackProxyGen*   CallFunc_GetProspectSummary_ReturnValue;           // 0x4E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x4F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x4F1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x4F2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4F3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


