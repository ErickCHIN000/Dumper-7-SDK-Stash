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

// 0x2C2 (0x2C2 - 0x0)
// Function ComboBoxWidget.ComboBoxWidget_C.OnKeyDown
struct UComboBoxWidget_C_OnKeyDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                             InKeyEvent;                                        // 0x38(0x40)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                           ReturnValue;                                       // 0x78(0xB8)(Parm, OutParm, ReturnParm)
	struct FKey                                  CallFunc_GetKey_ReturnValue;                       // 0x130(0x18)(HasGetValueTypeHash)
	struct FEventReply                           CallFunc_Unhandled_ReturnValue;                    // 0x148(0xB8)(None)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x200(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_1;          // 0x201(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_9C9[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x208(0xB8)(None)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x2C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x2C1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function ComboBoxWidget.ComboBoxWidget_C.Entries List Navigation
struct UComboBoxWidget_C_Entries_List_Navigation_Params
{
public:
	enum class EUINavigation                     Navigation;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9F3[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_NavigateList_ReturnValue;                 // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x290 (0x290 - 0x0)
// Function ComboBoxWidget.ComboBoxWidget_C.OnFocusReceived
struct UComboBoxWidget_C_OnFocusReceived_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                           InFocusEvent;                                      // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                           ReturnValue;                                       // 0x40(0xB8)(Parm, OutParm, ReturnParm)
	bool                                         Temp_bool_Variable;                                // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_A28[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x100(0xB8)(None)
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x1B8(0x10)(ReferenceParm, ContainsInstancedReference)
	class UWidget*                               CallFunc_Array_Get_Item;                           // 0x1C8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               K2Node_Select_Default;                             // 0x1D0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FEventReply                           CallFunc_SetUserFocus_ReturnValue;                 // 0x1D8(0xB8)(None)
};

// 0xA8 (0xA8 - 0x0)
// Function ComboBoxWidget.ComboBoxWidget_C.OnMouseEnter
struct UComboBoxWidget_C_OnMouseEnter_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x70 (0x70 - 0x0)
// Function ComboBoxWidget.ComboBoxWidget_C.OnMouseLeave
struct UComboBoxWidget_C_OnMouseLeave_Params
{
public:
	struct FPointerEvent                         MouseEvent;                                        // 0x0(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x10 (0x10 - 0x0)
// Function ComboBoxWidget.ComboBoxWidget_C.SetOptions
struct UComboBoxWidget_C_SetOptions_Params
{
public:
	TArray<class FText>                          NewOptions;                                        // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x8 (0x8 - 0x0)
// Function ComboBoxWidget.ComboBoxWidget_C.OnRemovedFromFocusPath
struct UComboBoxWidget_C_OnRemovedFromFocusPath_Params
{
public:
	struct FFocusEvent                           InFocusEvent;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function ComboBoxWidget.ComboBoxWidget_C.OnFocusMarkerEnabled
struct UComboBoxWidget_C_OnFocusMarkerEnabled_Params
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bPrevious;                                         // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ComboBoxWidget.ComboBoxWidget_C.PreConstruct
struct UComboBoxWidget_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function ComboBoxWidget.ComboBoxWidget_C.SetSelectedOption
struct UComboBoxWidget_C_SetSelectedOption_Params
{
public:
	int32                                        OptionIndex;                                       // 0x0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB8 (0xB8 - 0x0)
// Function ComboBoxWidget.ComboBoxWidget_C.OnSelection
struct UComboBoxWidget_C_OnSelection_Params
{
public:
	class UGGUserWidget*                         Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPointerEvent                         PointerEvent;                                      // 0x8(0x70)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FKeyEvent                             KeyEvent;                                          // 0x78(0x40)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x1 (0x1 - 0x0)
// Function ComboBoxWidget.ComboBoxWidget_C.OnSetIsEnabled
struct UComboBoxWidget_C_OnSetIsEnabled_Params
{
public:
	bool                                         bInIsEnabled;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2D8 (0x2D8 - 0x0)
// Function ComboBoxWidget.ComboBoxWidget_C.ExecuteUbergraph_ComboBoxWidget
struct UComboBoxWidget_C_ExecuteUbergraph_ComboBoxWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C21[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FText>                          K2Node_CustomEvent_NewOptions;                     // 0x20(0x10)(ConstParm, ReferenceParm)
	struct FFocusEvent                           K2Node_Event_InFocusEvent;                         // 0x30(0x8)(NoDestructor)
	bool                                         K2Node_Event_bEnabled;                             // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bPrevious;                            // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x3A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x3B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                        K2Node_CustomEvent_OptionIndex;                    // 0x3C(0x4)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C2B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C31[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x58(0x10)(ZeroConstructor, NoDestructor)
	class UComboBoxEntryNew_C*                   CallFunc_Create_ReturnValue;                       // 0x68(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGGUserWidget*                         K2Node_CustomEvent_Widget;                         // 0x70(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPointerEvent                         K2Node_CustomEvent_PointerEvent;                   // 0x78(0x70)(None)
	struct FKeyEvent                             K2Node_CustomEvent_KeyEvent;                       // 0xE8(0x40)(None)
	struct FPointerEvent                         K2Node_Event_MouseEvent;                           // 0x128(0x70)(ConstParm)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x198(0x38)(IsPlainOldData, NoDestructor)
	struct FPointerEvent                         K2Node_Event_MouseEvent_1;                         // 0x1D0(0x70)(ConstParm)
	bool                                         K2Node_Event_bInIsEnabled;                         // 0x240(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C4E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x248(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        CallFunc_Array_Find_ReturnValue;                   // 0x258(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_C56[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x260(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x268(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C5E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue_1;             // 0x270(0x10)(ReferenceParm, ContainsInstancedReference)
	class UWidget*                               CallFunc_Array_Get_Item;                           // 0x280(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x288(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_C6B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UComboBoxEntryNew_C*                   K2Node_DynamicCast_AsCombo_Box_Entry_New;          // 0x290(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x298(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x299(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C75[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0x2A0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Array_Get_Item_1;                         // 0x2A8(0x18)(None)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x2C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x2C4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsUsingGamepad_ReturnValue;               // 0x2C5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C91[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x2C8(0x10)(ZeroConstructor, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function ComboBoxWidget.ComboBoxWidget_C.SelectionChanged__DelegateSignature
struct UComboBoxWidget_C_SelectionChanged__DelegateSignature_Params
{
public:
	int32                                        SelectionIndex;                                    // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


