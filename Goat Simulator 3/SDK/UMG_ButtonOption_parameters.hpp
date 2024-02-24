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

// 0x270 (0x270 - 0x0)
// Function UMG_ButtonOption.UMG_ButtonOption_C.OnFocusReceived
struct UUMG_ButtonOption_C_OnFocusReceived_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                           InFocusEvent;                                      // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                           ReturnValue;                                       // 0x40(0xB8)(Parm, OutParm, ReturnParm)
	bool                                         CallFunc_IsMobilePlatform_ReturnValue;             // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_9DA[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x100(0xB8)(None)
	struct FEventReply                           CallFunc_SetUserFocus_ReturnValue;                 // 0x1B8(0xB8)(None)
};

// 0xB8 (0xB8 - 0x0)
// Function UMG_ButtonOption.UMG_ButtonOption_C.BndEvt__UMG_ButtonOption_ListEmbeddedButton_K2Node_ComponentBoundEvent_0_OnWidgetInteracted__DelegateSignature
struct UUMG_ButtonOption_C_BndEvt__UMG_ButtonOption_ListEmbeddedButton_K2Node_ComponentBoundEvent_0_OnWidgetInteracted__DelegateSignature_Params
{
public:
	class UGGUserWidget*                         Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPointerEvent                         PointerEvent;                                      // 0x8(0x70)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FKeyEvent                             KeyEvent;                                          // 0x78(0x40)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x20 (0x20 - 0x0)
// Function UMG_ButtonOption.UMG_ButtonOption_C.Setup
struct UUMG_ButtonOption_C_Setup_Params
{
public:
	struct FGGGameSettingHandle                  InSettingHandle;                                   // 0x0(0x14)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A19[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGGSettingsTabMenuUserWidget*          InParentSettingTab;                                // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xF7 (0xF7 - 0x0)
// Function UMG_ButtonOption.UMG_ButtonOption_C.ExecuteUbergraph_UMG_ButtonOption
struct UUMG_ButtonOption_C_ExecuteUbergraph_UMG_ButtonOption_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A55[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGGUserWidget*                         K2Node_ComponentBoundEvent_Widget;                 // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPointerEvent                         K2Node_ComponentBoundEvent_PointerEvent;           // 0x10(0x70)(None)
	struct FKeyEvent                             K2Node_ComponentBoundEvent_KeyEvent;               // 0x80(0x40)(None)
	struct FGGGameSettingHandle                  K2Node_Event_InSettingHandle;                      // 0xC0(0x14)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A5D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGGSettingsTabMenuUserWidget*          K2Node_Event_InParentSettingTab;                   // 0xD8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGGSettingOption>              CallFunc_GetAvailableOptions_ReturnValue;          // 0xE0(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0xF4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Check_if_Aspect_Ratio_Is_Lower_IsLowerThanProvided; // 0xF5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsMobilePlatform_ReturnValue;             // 0xF6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


