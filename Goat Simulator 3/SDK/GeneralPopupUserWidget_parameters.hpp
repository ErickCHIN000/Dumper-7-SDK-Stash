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
// Function GeneralPopupUserWidget.GeneralPopupUserWidget_C.OnKeyDown
struct UGeneralPopupUserWidget_C_OnKeyDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                             InKeyEvent;                                        // 0x38(0x40)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                           ReturnValue;                                       // 0x78(0xB8)(Parm, OutParm, ReturnParm)
	struct FKey                                  CallFunc_GetKey_ReturnValue;                       // 0x130(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x148(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x149(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_1;          // 0x14A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x14B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C32[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEventReply                           CallFunc_Unhandled_ReturnValue;                    // 0x150(0xB8)(None)
	bool                                         CallFunc_RequiresUserInputToCancel_ReturnValue;    // 0x208(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x209(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C38[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x210(0xB8)(None)
};

// 0x59E (0x59E - 0x0)
// Function GeneralPopupUserWidget.GeneralPopupUserWidget_C.OnFocusReceived
struct UGeneralPopupUserWidget_C_OnFocusReceived_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                           InFocusEvent;                                      // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                           ReturnValue;                                       // 0x40(0xB8)(Parm, OutParm, ReturnParm)
	int32                                        Temp_int_Array_Index_Variable;                     // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_CBC[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x100(0xB8)(None)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x1B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_CC3[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEventReply                           CallFunc_SetUserFocus_ReturnValue;                 // 0x1C0(0xB8)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x278(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_CC7[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEventReply                           CallFunc_Handled_ReturnValue_1;                    // 0x280(0xB8)(None)
	struct FEventReply                           CallFunc_Handled_ReturnValue_2;                    // 0x338(0xB8)(None)
	bool                                         CallFunc_HasAnyChildren_ReturnValue;               // 0x3F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CCA[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x3F8(0x10)(ReferenceParm, ContainsInstancedReference)
	class UWidget*                               CallFunc_Array_Get_Item;                           // 0x408(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_Array_Get_Item_1;                         // 0x410(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPopupButtonUserWidget_C*              K2Node_DynamicCast_AsPopup_Button_User_Widget;     // 0x418(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x420(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CDE[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEventReply                           CallFunc_SetUserFocus_ReturnValue_1;               // 0x428(0xB8)(None)
	struct FEventReply                           CallFunc_SetUserFocus_ReturnValue_2;               // 0x4E0(0xB8)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x598(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x59C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x59D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x80 (0x80 - 0x0)
// Function GeneralPopupUserWidget.GeneralPopupUserWidget_C.GetInitialWidgetFocus
struct UGeneralPopupUserWidget_C_GetInitialWidgetFocus_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x10(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_D7A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_Array_Get_Item;                           // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPopupButtonUserWidget_C*              K2Node_DynamicCast_AsPopup_Button_User_Widget;     // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_D89[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_Array_Get_Item_1;                         // 0x40(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_GetInitialWidgetFocus_ReturnValue;        // 0x48(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPopupButtonUserWidget_C*              K2Node_DynamicCast_AsPopup_Button_User_Widget_1;   // 0x50(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_D97[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetInitialWidgetFocus_ReturnValue_1;      // 0x60(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_D9E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x74(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x75(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_DAA[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetInitialWidgetFocus_ReturnValue_2;      // 0x78(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function GeneralPopupUserWidget.GeneralPopupUserWidget_C.OnFail_A3E57448463014044E667FAE57A172D3
struct UGeneralPopupUserWidget_C_OnFail_A3E57448463014044E667FAE57A172D3_Params
{
public:
	class UTexture2DDynamic*                     Texture;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function GeneralPopupUserWidget.GeneralPopupUserWidget_C.OnSuccess_A3E57448463014044E667FAE57A172D3
struct UGeneralPopupUserWidget_C_OnSuccess_A3E57448463014044E667FAE57A172D3_Params
{
public:
	class UTexture2DDynamic*                     Texture;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function GeneralPopupUserWidget.GeneralPopupUserWidget_C.OnSetLabels
struct UGeneralPopupUserWidget_C_OnSetLabels_Params
{
public:
	class FText                                  Title;                                             // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FText                                  Body;                                              // 0x18(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x2B0 (0x2B0 - 0x0)
// Function GeneralPopupUserWidget.GeneralPopupUserWidget_C.OnCreatedButton
struct UGeneralPopupUserWidget_C_OnCreatedButton_Params
{
public:
	struct FPopupButton                          Button;                                            // 0x0(0x2B0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0xB8 (0xB8 - 0x0)
// Function GeneralPopupUserWidget.GeneralPopupUserWidget_C.OnPopupButtonInteracted
struct UGeneralPopupUserWidget_C_OnPopupButtonInteracted_Params
{
public:
	class UGGUserWidget*                         Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPointerEvent                         PointerEvent;                                      // 0x8(0x70)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FKeyEvent                             KeyEvent;                                          // 0x78(0x40)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x8 (0x8 - 0x0)
// Function GeneralPopupUserWidget.GeneralPopupUserWidget_C.OnRemovedFromFocusPath
struct UGeneralPopupUserWidget_C_OnRemovedFromFocusPath_Params
{
public:
	struct FFocusEvent                           InFocusEvent;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// 0x88 (0x88 - 0x0)
// Function GeneralPopupUserWidget.GeneralPopupUserWidget_C.OnSetImage
struct UGeneralPopupUserWidget_C_OnSetImage_Params
{
public:
	struct FSlateBrush                           Brush;                                             // 0x0(0x88)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x10 (0x10 - 0x0)
// Function GeneralPopupUserWidget.GeneralPopupUserWidget_C.OnSetImageURL
struct UGeneralPopupUserWidget_C_OnSetImageURL_Params
{
public:
	class FString                                ImageURL;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function GeneralPopupUserWidget.GeneralPopupUserWidget_C.PreConstruct
struct UGeneralPopupUserWidget_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x52A (0x52A - 0x0)
// Function GeneralPopupUserWidget.GeneralPopupUserWidget_C.ExecuteUbergraph_GeneralPopupUserWidget
struct UGeneralPopupUserWidget_C_ExecuteUbergraph_GeneralPopupUserWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_FA6[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2DDynamic*                     K2Node_CustomEvent_Texture;                        // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor)
	class UTexture2DDynamic*                     Temp_object_Variable;                              // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_Event_Title;                                // 0x28(0x18)(ConstParm)
	class FText                                  K2Node_Event_Body;                                 // 0x40(0x18)(ConstParm)
	struct FPopupButton                          K2Node_Event_Button;                               // 0x58(0x2B0)(ConstParm)
	class UGGUserWidget*                         K2Node_CustomEvent_Widget;                         // 0x308(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPointerEvent                         K2Node_CustomEvent_PointerEvent;                   // 0x310(0x70)(None)
	struct FKeyEvent                             K2Node_CustomEvent_KeyEvent;                       // 0x380(0x40)(None)
	class UPopupButtonUserWidget_C*              K2Node_DynamicCast_AsPopup_Button_User_Widget;     // 0x3C0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x3C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_FBD[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2DDynamic*                     K2Node_CustomEvent_Texture_1;                      // 0x3D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x3D8(0x10)(ZeroConstructor, NoDestructor)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x3E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_RequiresUserInputToDismiss_ReturnValue;   // 0x3F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_FCA[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               K2Node_MakeStruct_Margin;                          // 0x3F4(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FFocusEvent                           K2Node_Event_InFocusEvent;                         // 0x404(0x8)(NoDestructor)
	int32                                        CallFunc_GetChildrenCount_ReturnValue;             // 0x40C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Percent_IntInt_ReturnValue;               // 0x410(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_IntToBool_ReturnValue;               // 0x414(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_FDB[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           K2Node_Event_Brush;                                // 0x418(0x88)(ConstParm)
	bool                                         CallFunc_IsTopMostPopup_ReturnValue;               // 0x4A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_FDF[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_Event_ImageURL;                             // 0x4A8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x4B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_FE5[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAsyncTaskDownloadImage*               CallFunc_DownloadImage_ReturnValue;                // 0x4C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_FEC[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGGOnlineManager*                      CallFunc_GetOnlineManager_ReturnValue;             // 0x4D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture*                              CallFunc_GetImage_ReturnValue;                     // 0x4D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x4E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x4E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_FF7[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x4EC(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_FFC[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPopupButtonUserWidget_C*              CallFunc_Create_ReturnValue;                       // 0x500(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x508(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                    K2Node_DynamicCast_AsHorizontal_Box_Slot;          // 0x510(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x518(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SetImageFromIconSet_ReturnValue;          // 0x519(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_100C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGGOnlineManager*                      CallFunc_GetOnlineManager_ReturnValue_1;           // 0x520(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x528(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsMobilePlatform_ReturnValue;             // 0x529(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


