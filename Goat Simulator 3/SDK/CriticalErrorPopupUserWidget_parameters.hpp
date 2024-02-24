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

// 0x1E8 (0x1E8 - 0x0)
// Function CriticalErrorPopupUserWidget.CriticalErrorPopupUserWidget_C.OnKeyDown
struct UCriticalErrorPopupUserWidget_C_OnKeyDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                             InKeyEvent;                                        // 0x38(0x40)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                           ReturnValue;                                       // 0x78(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           CallFunc_Unhandled_ReturnValue;                    // 0x130(0xB8)(None)
};

// 0x59E (0x59E - 0x0)
// Function CriticalErrorPopupUserWidget.CriticalErrorPopupUserWidget_C.OnFocusReceived
struct UCriticalErrorPopupUserWidget_C_OnFocusReceived_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                           InFocusEvent;                                      // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                           ReturnValue;                                       // 0x40(0xB8)(Parm, OutParm, ReturnParm)
	int32                                        Temp_int_Array_Index_Variable;                     // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_C6C[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x100(0xB8)(None)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x1B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_C71[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEventReply                           CallFunc_SetUserFocus_ReturnValue;                 // 0x1C0(0xB8)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x278(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_C79[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEventReply                           CallFunc_Handled_ReturnValue_1;                    // 0x280(0xB8)(None)
	struct FEventReply                           CallFunc_Handled_ReturnValue_2;                    // 0x338(0xB8)(None)
	bool                                         CallFunc_HasAnyChildren_ReturnValue;               // 0x3F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C7F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x3F8(0x10)(ReferenceParm, ContainsInstancedReference)
	class UWidget*                               CallFunc_Array_Get_Item;                           // 0x408(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_Array_Get_Item_1;                         // 0x410(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPopupButtonUserWidget_C*              K2Node_DynamicCast_AsPopup_Button_User_Widget;     // 0x418(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x420(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C85[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEventReply                           CallFunc_SetUserFocus_ReturnValue_1;               // 0x428(0xB8)(None)
	struct FEventReply                           CallFunc_SetUserFocus_ReturnValue_2;               // 0x4E0(0xB8)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x598(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x59C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x59D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x80 (0x80 - 0x0)
// Function CriticalErrorPopupUserWidget.CriticalErrorPopupUserWidget_C.GetInitialWidgetFocus
struct UCriticalErrorPopupUserWidget_C_GetInitialWidgetFocus_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x10(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_CD8[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_Array_Get_Item;                           // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPopupTimedButtonUserWidget_C*         K2Node_DynamicCast_AsPopup_Timed_Button_User_Widget; // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CDF[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_Array_Get_Item_1;                         // 0x40(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_GetInitialWidgetFocus_ReturnValue;        // 0x48(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPopupTimedButtonUserWidget_C*         K2Node_DynamicCast_AsPopup_Timed_Button_User_Widget_1; // 0x50(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CE8[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetInitialWidgetFocus_ReturnValue_1;      // 0x60(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CED[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x74(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x75(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CF5[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetInitialWidgetFocus_ReturnValue_2;      // 0x78(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function CriticalErrorPopupUserWidget.CriticalErrorPopupUserWidget_C.OnSetLabels
struct UCriticalErrorPopupUserWidget_C_OnSetLabels_Params
{
public:
	class FText                                  Title;                                             // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FText                                  Body;                                              // 0x18(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x2B0 (0x2B0 - 0x0)
// Function CriticalErrorPopupUserWidget.CriticalErrorPopupUserWidget_C.OnCreatedButton
struct UCriticalErrorPopupUserWidget_C_OnCreatedButton_Params
{
public:
	struct FPopupButton                          Button;                                            // 0x0(0x2B0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0xB8 (0xB8 - 0x0)
// Function CriticalErrorPopupUserWidget.CriticalErrorPopupUserWidget_C.OnPopupButtonInteracted
struct UCriticalErrorPopupUserWidget_C_OnPopupButtonInteracted_Params
{
public:
	class UGGUserWidget*                         Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPointerEvent                         PointerEvent;                                      // 0x8(0x70)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FKeyEvent                             KeyEvent;                                          // 0x78(0x40)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x8 (0x8 - 0x0)
// Function CriticalErrorPopupUserWidget.CriticalErrorPopupUserWidget_C.OnRemovedFromFocusPath
struct UCriticalErrorPopupUserWidget_C_OnRemovedFromFocusPath_Params
{
public:
	struct FFocusEvent                           InFocusEvent;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// 0x3C (0x3C - 0x0)
// Function CriticalErrorPopupUserWidget.CriticalErrorPopupUserWidget_C.Tick
struct UCriticalErrorPopupUserWidget_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x452 (0x452 - 0x0)
// Function CriticalErrorPopupUserWidget.CriticalErrorPopupUserWidget_C.ExecuteUbergraph_CriticalErrorPopupUserWidget
struct UCriticalErrorPopupUserWidget_C_ExecuteUbergraph_CriticalErrorPopupUserWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_DE0[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Event_Title;                                // 0x8(0x18)(ConstParm)
	class FText                                  K2Node_Event_Body;                                 // 0x20(0x18)(ConstParm)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_DE8[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPopupButton                          K2Node_Event_Button;                               // 0x40(0x2B0)(ConstParm)
	class UGGUserWidget*                         K2Node_CustomEvent_Widget;                         // 0x2F0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPointerEvent                         K2Node_CustomEvent_PointerEvent;                   // 0x2F8(0x70)(None)
	struct FKeyEvent                             K2Node_CustomEvent_KeyEvent;                       // 0x368(0x40)(None)
	class UPopupTimedButtonUserWidget_C*         K2Node_DynamicCast_AsPopup_Timed_Button_User_Widget; // 0x3A8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x3B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_DFC[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x3B4(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_E02[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPopupTimedButtonUserWidget_C*         CallFunc_Create_ReturnValue;                       // 0x3C8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x3D0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                    K2Node_DynamicCast_AsHorizontal_Box_Slot;          // 0x3D8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x3E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E0B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               K2Node_MakeStruct_Margin;                          // 0x3E4(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E10[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x3F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFocusEvent                           K2Node_Event_InFocusEvent;                         // 0x400(0x8)(NoDestructor)
	int32                                        CallFunc_GetChildrenCount_ReturnValue;             // 0x408(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Percent_IntInt_ReturnValue;               // 0x40C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_IntToBool_ReturnValue;               // 0x410(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsTopMostPopup_ReturnValue;               // 0x411(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E1E[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x414(0x38)(IsPlainOldData, NoDestructor)
	float                                        K2Node_Event_InDeltaTime;                          // 0x44C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x450(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsTopMostPopup_ReturnValue_1;             // 0x451(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


