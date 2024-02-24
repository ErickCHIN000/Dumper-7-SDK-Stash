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

// 0x268 (0x268 - 0x0)
// Function UMG_MultipleOptionsGameSetting.UMG_MultipleOptionsGameSetting_C.OnFocusReceived
struct UUMG_MultipleOptionsGameSetting_C_OnFocusReceived_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                           InFocusEvent;                                      // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                           ReturnValue;                                       // 0x40(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0xF8(0xB8)(None)
	struct FEventReply                           CallFunc_SetUserFocus_ReturnValue;                 // 0x1B0(0xB8)(None)
};

// 0x4 (0x4 - 0x0)
// Function UMG_MultipleOptionsGameSetting.UMG_MultipleOptionsGameSetting_C.Get Current Index
struct UUMG_MultipleOptionsGameSetting_C_Get_Current_Index_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UMG_MultipleOptionsGameSetting.UMG_MultipleOptionsGameSetting_C.GetInitialWidgetFocus
struct UUMG_MultipleOptionsGameSetting_C_GetInitialWidgetFocus_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UMG_MultipleOptionsGameSetting.UMG_MultipleOptionsGameSetting_C.OnRemovedFromFocusPath
struct UUMG_MultipleOptionsGameSetting_C_OnRemovedFromFocusPath_Params
{
public:
	struct FFocusEvent                           InFocusEvent;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function UMG_MultipleOptionsGameSetting.UMG_MultipleOptionsGameSetting_C.On Option Index Changed
struct UUMG_MultipleOptionsGameSetting_C_On_Option_Index_Changed_Params
{
public:
	int32                                        NewIndex;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UMG_MultipleOptionsGameSetting.UMG_MultipleOptionsGameSetting_C.OnAddedToFocusPath
struct UUMG_MultipleOptionsGameSetting_C_OnAddedToFocusPath_Params
{
public:
	struct FFocusEvent                           InFocusEvent;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function UMG_MultipleOptionsGameSetting.UMG_MultipleOptionsGameSetting_C.OnSetIsEnabled
struct UUMG_MultipleOptionsGameSetting_C_OnSetIsEnabled_Params
{
public:
	bool                                         bInIsEnabled;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x59 (0x59 - 0x0)
// Function UMG_MultipleOptionsGameSetting.UMG_MultipleOptionsGameSetting_C.ExecuteUbergraph_UMG_MultipleOptionsGameSetting
struct UUMG_MultipleOptionsGameSetting_C_ExecuteUbergraph_UMG_MultipleOptionsGameSetting_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	struct FFocusEvent                           K2Node_Event_InFocusEvent_1;                       // 0x14(0x8)(NoDestructor)
	int32                                        CallFunc_GetOptionIndexForCurrentValue_ReturnValue; // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetOptionIndexForCurrentValue_ReturnValue_1; // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_368[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGGSettingOption>              CallFunc_GetAvailableOptions_ReturnValue;          // 0x28(0x10)(ReferenceParm)
	int32                                        K2Node_CustomEvent_NewIndex;                       // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFocusEvent                           K2Node_Event_InFocusEvent;                         // 0x3C(0x8)(NoDestructor)
	uint8                                        Pad_36F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGGSettingOption>              CallFunc_GetAvailableOptions_ReturnValue_1;        // 0x48(0x10)(ReferenceParm)
	bool                                         K2Node_Event_bInIsEnabled;                         // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


