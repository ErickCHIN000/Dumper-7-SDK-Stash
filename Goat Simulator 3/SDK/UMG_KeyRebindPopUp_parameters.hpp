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

// 0x2C8 (0x2C8 - 0x0)
// Function UMG_KeyRebindPopUp.UMG_KeyRebindPopUp_C.CreateButtonUserWidget
struct UUMG_KeyRebindPopUp_C_CreateButtonUserWidget_Params
{
public:
	struct FPopupButton                          Button;                                            // 0x0(0x2B0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UGGButtonUserWidget*                   ReturnValue;                                       // 0x2B0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x2B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPopupButtonUserWidget_C*              CallFunc_Create_ReturnValue;                       // 0x2C0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3D9 (0x3D9 - 0x0)
// Function UMG_KeyRebindPopUp.UMG_KeyRebindPopUp_C.OnFocusReceived
struct UUMG_KeyRebindPopUp_C_OnFocusReceived_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                           InFocusEvent;                                      // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                           ReturnValue;                                       // 0x40(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0xF8(0xB8)(None)
	struct FEventReply                           CallFunc_SetUserFocus_ReturnValue;                 // 0x1B0(0xB8)(None)
	struct FEventReply                           CallFunc_Handled_ReturnValue_1;                    // 0x268(0xB8)(None)
	struct FEventReply                           CallFunc_SetUserFocus_ReturnValue_1;               // 0x320(0xB8)(None)
	bool                                         CallFunc_HasAnyChildren_ReturnValue;               // 0x3D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function UMG_KeyRebindPopUp.UMG_KeyRebindPopUp_C.OnSetLabels
struct UUMG_KeyRebindPopUp_C_OnSetLabels_Params
{
public:
	class FText                                  Title;                                             // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FText                                  Body;                                              // 0x18(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x8 (0x8 - 0x0)
// Function UMG_KeyRebindPopUp.UMG_KeyRebindPopUp_C.OnRemovedFromFocusPath
struct UUMG_KeyRebindPopUp_C_OnRemovedFromFocusPath_Params
{
public:
	struct FFocusEvent                           InFocusEvent;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// 0xB8 (0xB8 - 0x0)
// Function UMG_KeyRebindPopUp.UMG_KeyRebindPopUp_C.OnButtonInteracted
struct UUMG_KeyRebindPopUp_C_OnButtonInteracted_Params
{
public:
	class UGGUserWidget*                         InWidget;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPointerEvent                         InPointerEvent;                                    // 0x8(0x70)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FKeyEvent                             InKeyEvent;                                        // 0x78(0x40)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x109 (0x109 - 0x0)
// Function UMG_KeyRebindPopUp.UMG_KeyRebindPopUp_C.ExecuteUbergraph_UMG_KeyRebindPopUp
struct UUMG_KeyRebindPopUp_C_ExecuteUbergraph_UMG_KeyRebindPopUp_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A68[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Event_Title;                                // 0x8(0x18)(ConstParm)
	class FText                                  K2Node_Event_Body;                                 // 0x20(0x18)(ConstParm)
	struct FFocusEvent                           K2Node_Event_InFocusEvent;                         // 0x38(0x8)(NoDestructor)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGGUserWidget*                         K2Node_Event_InWidget;                             // 0x48(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPointerEvent                         K2Node_Event_InPointerEvent;                       // 0x50(0x70)(None)
	struct FKeyEvent                             K2Node_Event_InKeyEvent;                           // 0xC0(0x40)(None)
	class UPopupButtonUserWidget_C*              K2Node_DynamicCast_AsPopup_Button_User_Widget;     // 0x100(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


