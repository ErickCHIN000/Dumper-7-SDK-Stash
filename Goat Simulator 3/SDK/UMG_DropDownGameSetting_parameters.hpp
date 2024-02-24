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

// 0x74 (0x74 - 0x0)
// Function UMG_DropDownGameSetting.UMG_DropDownGameSetting_C.Get Options As Text
struct UUMG_DropDownGameSetting_C_Get_Options_As_Text_Params
{
public:
	TArray<class FText>                          Options;                                           // 0x0(0x10)(Parm, OutParm)
	TArray<class FText>                          Out_Options;                                       // 0x10(0x10)(Edit, BlueprintVisible)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9C7[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGGSettingOption>              CallFunc_GetAvailableOptions_ReturnValue;          // 0x30(0x10)(ReferenceParm)
	struct FGGSettingOption                      CallFunc_Array_Get_Item;                           // 0x40(0x28)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x6C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_9CE[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x270 (0x270 - 0x0)
// Function UMG_DropDownGameSetting.UMG_DropDownGameSetting_C.OnFocusReceived
struct UUMG_DropDownGameSetting_C_OnFocusReceived_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                           InFocusEvent;                                      // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                           ReturnValue;                                       // 0x40(0xB8)(Parm, OutParm, ReturnParm)
	bool                                         CallFunc_IsMobilePlatform_ReturnValue;             // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_A04[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x100(0xB8)(None)
	struct FEventReply                           CallFunc_SetUserFocus_ReturnValue;                 // 0x1B8(0xB8)(None)
};

// 0x4 (0x4 - 0x0)
// Function UMG_DropDownGameSetting.UMG_DropDownGameSetting_C.Get Current Index
struct UUMG_DropDownGameSetting_C_Get_Current_Index_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UMG_DropDownGameSetting.UMG_DropDownGameSetting_C.GetInitialWidgetFocus
struct UUMG_DropDownGameSetting_C_GetInitialWidgetFocus_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UMG_DropDownGameSetting.UMG_DropDownGameSetting_C.OnRemovedFromFocusPath
struct UUMG_DropDownGameSetting_C_OnRemovedFromFocusPath_Params
{
public:
	struct FFocusEvent                           InFocusEvent;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function UMG_DropDownGameSetting.UMG_DropDownGameSetting_C.On Option Index Changed
struct UUMG_DropDownGameSetting_C_On_Option_Index_Changed_Params
{
public:
	int32                                        SelectionIndex;                                    // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UMG_DropDownGameSetting.UMG_DropDownGameSetting_C.OnAddedToFocusPath
struct UUMG_DropDownGameSetting_C_OnAddedToFocusPath_Params
{
public:
	struct FFocusEvent                           InFocusEvent;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function UMG_DropDownGameSetting.UMG_DropDownGameSetting_C.OnSetIsEnabled
struct UUMG_DropDownGameSetting_C_OnSetIsEnabled_Params
{
public:
	bool                                         bInIsEnabled;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x41 (0x41 - 0x0)
// Function UMG_DropDownGameSetting.UMG_DropDownGameSetting_C.ExecuteUbergraph_UMG_DropDownGameSetting
struct UUMG_DropDownGameSetting_C_ExecuteUbergraph_UMG_DropDownGameSetting_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	struct FFocusEvent                           K2Node_Event_InFocusEvent_1;                       // 0x14(0x8)(NoDestructor)
	int32                                        CallFunc_GetOptionIndexForCurrentValue_ReturnValue; // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetOptionIndexForCurrentValue_ReturnValue_1; // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_SelectionIndex;                 // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFocusEvent                           K2Node_Event_InFocusEvent;                         // 0x28(0x8)(NoDestructor)
	TArray<class FText>                          CallFunc_Get_Options_As_Text_Options;              // 0x30(0x10)(ReferenceParm)
	bool                                         K2Node_Event_bInIsEnabled;                         // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


