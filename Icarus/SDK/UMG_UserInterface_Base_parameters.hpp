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
// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.GetMap
struct UUMG_UserInterface_Base_C_GetMap_Params
{
public:
	class UIcarusMapScreenBase*                  Radar;                                             // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.CollapseIcarusLogVisibilty
struct UUMG_UserInterface_Base_C_CollapseIcarusLogVisibilty_Params
{
public:
	class UUMG_ClientLogging_C*                  CallFunc_GetIcarusLogWindow_LogWindow;             // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.GetIcarusLogWindow
struct UUMG_UserInterface_Base_C_GetIcarusLogWindow_Params
{
public:
	class UUMG_ClientLogging_C*                  LogWindow;                                         // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x12 (0x12 - 0x0)
// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.ToggleIcarusLogVisibility
struct UUMG_UserInterface_Base_C_ToggleIcarusLogVisibility_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2AF1[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_ClientLogging_C*                  CallFunc_GetIcarusLogWindow_LogWindow;             // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.RemoveCustomPopup
struct UUMG_UserInterface_Base_C_RemoveCustomPopup_Params
{
public:
	class UUserWidget*                           PopupWidget;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.ShowCustomPopup
struct UUMG_UserInterface_Base_C_ShowCustomPopup_Params
{
public:
	class UUserWidget*                           PopupWidget;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.SetHiddenByUser
struct UUMG_UserInterface_Base_C_SetHiddenByUser_Params
{
public:
	bool                                         NewHiddenByUser;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.SetForceShowCrosshair
struct UUMG_UserInterface_Base_C_SetForceShowCrosshair_Params
{
public:
	bool                                         ForceShowCrosshair;                                // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.GetConfirmationOverlay
struct UUMG_UserInterface_Base_C_GetConfirmationOverlay_Params
{
public:
	class UOverlay*                              Overlay;                                           // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.IsShowingRadialMenu
struct UUMG_UserInterface_Base_C_IsShowingRadialMenu_Params
{
public:
	bool                                         ShowingRadialMenu;                                 // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.RemoveRadialMenu
struct UUMG_UserInterface_Base_C_RemoveRadialMenu_Params
{
public:
	class UUserWidget*                           RadialMenu;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.AddRadialMenu
struct UUMG_UserInterface_Base_C_AddRadialMenu_Params
{
public:
	class UUserWidget*                           RadialMenu;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.GetSize
struct UUMG_UserInterface_Base_C_GetSize_Params
{
public:
	struct FVector2D                             Size;                                              // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.GetConfirmationPopup
struct UUMG_UserInterface_Base_C_GetConfirmationPopup_Params
{
public:
	class UConfirmationPopupBase*                ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_ConfirmationPopup_C*              CallFunc_GetConfirmationWindow_ConfirmationWidget; // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.GetMaxProjectionWidgets
struct UUMG_UserInterface_Base_C_GetMaxProjectionWidgets_Params
{
public:
	int32                                        MaxProjectionWidgetCount;                          // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.SetMaxProjectionWidgets
struct UUMG_UserInterface_Base_C_SetMaxProjectionWidgets_Params
{
public:
	int32                                        NewMaxWidgetCount;                                 // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.GetDialogue
struct UUMG_UserInterface_Base_C_GetDialogue_Params
{
public:
	class UUMG_Dialogue_C*                       Dialogue;                                          // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.GetCheatOverlay
struct UUMG_UserInterface_Base_C_GetCheatOverlay_Params
{
public:
	class UUMG_CheatOverlay_C*                   Overlay;                                           // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x24 (0x24 - 0x0)
// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.Show Game Message
struct UUMG_UserInterface_Base_C_Show_Game_Message_Params
{
public:
	bool                                         Error;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2DC7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Message;                                           // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	float                                        LifeTimeOverride;                                  // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A (0x1A - 0x0)
// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.WidgetFocusGained
struct UUMG_UserInterface_Base_C_WidgetFocusGained_Params
{
public:
	class UIcarusWidget*                         Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsPlayerUsingControllerStatic_ReturnValue; // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetFocusWidget_bValid;                    // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2E36[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetFocusWidget_Widget;                    // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetFocusWidget_bThis;                     // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x42 (0x42 - 0x0)
// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.WidgetFocusLost
struct UUMG_UserInterface_Base_C_WidgetFocusLost_Params
{
public:
	class UIcarusWidget*                         Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsPlayerUsingControllerStatic_ReturnValue; // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetFocusWidget_bValid;                    // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2ED2[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetFocusWidget_Widget;                    // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetFocusWidget_bThis;                     // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsPlayerUsingControllerStatic_ReturnValue_1; // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2EDF[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x1C(0x10)(ZeroConstructor, NoDestructor)
	struct FFocusEvent                           Temp_struct_Variable;                              // 0x2C(0x8)(ConstParm, NoDestructor)
	uint8                                        Pad_2EE5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x38(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsMouseNavigation_ReturnValue;            // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.IsSpace?
struct UUMG_UserInterface_Base_C_IsSpace__Params
{
public:
	bool                                         InSpace;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.ShowLoadingScreen
struct UUMG_UserInterface_Base_C_ShowLoadingScreen_Params
{
public:
	class FText                                  Optional_Message;                                  // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UWidget*                               OptionalWidget;                                    // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.ShowErrorCode
struct UUMG_UserInterface_Base_C_ShowErrorCode_Params
{
public:
	struct FErrorCodesEnum                       ErrorCode;                                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.IsMenuVisible
struct UUMG_UserInterface_Base_C_IsMenuVisible_Params
{
public:
	bool                                         Visible;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.EscapeKeyPressed
struct UUMG_UserInterface_Base_C_EscapeKeyPressed_Params
{
public:
	bool                                         CallFunc_IsMenuVisible_Visible;                    // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.GetCheatContext
struct UUMG_UserInterface_Base_C_GetCheatContext_Params
{
public:
	enum class ECheatContext                     Context;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.ToggleCheatMenu
struct UUMG_UserInterface_Base_C_ToggleCheatMenu_Params
{
public:
	enum class ECheatsEnabled                    CallFunc_IfCheatsEnabled_Paths;                    // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3139[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_CheatOverlay_C*                   CallFunc_GetCheatOverlay_Overlay;                  // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3154[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFMODEventInstance                    CallFunc_PlayEvent2D_ReturnValue;                  // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.GetProjectionInterface
struct UUMG_UserInterface_Base_C_GetProjectionInterface_Params
{
public:
	class UW_ProjectionInterface_C*              ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.GetConfirmationWindow
struct UUMG_UserInterface_Base_C_GetConfirmationWindow_Params
{
public:
	class UUMG_ConfirmationPopup_C*              ConfirmationWidget;                                // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x12 (0x12 - 0x0)
// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.FixFocus
struct UUMG_UserInterface_Base_C_FixFocus_Params
{
public:
	bool                                         CallFunc_GetFocusWidget_bValid;                    // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3227[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetFocusWidget_Widget;                    // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetFocusWidget_bThis;                     // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.GetCursorWidget
struct UUMG_UserInterface_Base_C_GetCursorWidget_Params
{
public:
	class UUMG_CursorWidget_C*                   CursorWidget;                                      // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.FocusStaticWidget
struct UUMG_UserInterface_Base_C_FocusStaticWidget_Params
{
public:
	enum class EStaticUIWidgets                  Panel;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xDC (0xDC - 0x0)
// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.ClearModifierKeys
struct UUMG_UserInterface_Base_C_ClearModifierKeys_Params
{
public:
	enum class EModifierKeys                     Temp_byte_Variable;                                // 0x0(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EModifierKeys                     Temp_byte_Variable_1;                              // 0x1(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EModifierKeys                     Temp_byte_Variable_2;                              // 0x2(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_347E[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x20(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_349C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFModifierKeyValues                   CallFunc_Map_Find_Value;                           // 0x28(0x10)(HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34A7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFModifierKeyValues                   CallFunc_Map_Find_Value_1;                         // 0x40(0x10)(HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_1;                   // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34B3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  CallFunc_Array_Get_Item;                           // 0x58(0x18)(HasGetValueTypeHash)
	struct FKey                                  CallFunc_Array_Get_Item_1;                         // 0x70(0x18)(HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34C3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFModifierKeyValues                   CallFunc_Map_Find_Value_2;                         // 0x98(0x10)(HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_2;                   // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_1;                              // 0xA9(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34E9[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  CallFunc_Array_Get_Item_2;                         // 0xB0(0x18)(HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0xCC(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0xCD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34FB[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0xD4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3502[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0xD8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x48 (0x48 - 0x0)
// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.IsKeyDown
struct UUMG_UserInterface_Base_C_IsKeyDown_Params
{
public:
	enum class EModifierKeys                     Key;                                               // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         KeyHeld;                                           // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35D6[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFModifierKeyValues                   CallFunc_Map_Find_Value;                           // 0x10(0x10)(HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35EF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  CallFunc_Array_Get_Item;                           // 0x28(0x18)(HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_Value_1;                         // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Map_Find_ReturnValue_1;                   // 0x45(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x46(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x47(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2BA (0x2BA - 0x0)
// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.OnKeyDown
struct UUMG_UserInterface_Base_C_OnKeyDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                             InKeyEvent;                                        // 0x38(0x38)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                           ReturnValue;                                       // 0x70(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           CallFunc_Unhandled_ReturnValue;                    // 0x128(0xB8)(None)
	bool                                         Temp_bool_Variable;                                // 0x1E0(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36A5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  CallFunc_GetKey_ReturnValue;                       // 0x1E8(0x18)(HasGetValueTypeHash)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x200(0xB8)(None)
	bool                                         CallFunc_Map_Find_Value;                           // 0x2B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x2B9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2F0 (0x2F0 - 0x0)
// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.OnKeyUp
struct UUMG_UserInterface_Base_C_OnKeyUp_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                             InKeyEvent;                                        // 0x38(0x38)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                           ReturnValue;                                       // 0x70(0xB8)(Parm, OutParm, ReturnParm)
	struct FKey                                  Key;                                               // 0x128(0x18)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x140(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3754[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  CallFunc_GetKey_ReturnValue;                       // 0x148(0x18)(HasGetValueTypeHash)
	struct FKey                                  CallFunc_GetKey_ReturnValue_1;                     // 0x160(0x18)(HasGetValueTypeHash)
	struct FEventReply                           CallFunc_Unhandled_ReturnValue;                    // 0x178(0xB8)(None)
	bool                                         CallFunc_Map_Find_Value;                           // 0x230(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x231(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3776[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x238(0xB8)(None)
};

// 0x1 (0x1 - 0x0)
// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.InputTypeApplied
struct UUMG_UserInterface_Base_C_InputTypeApplied_Params
{
public:
	enum class EInputTypeSetting                 Value;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.ErrorRequested
struct UUMG_UserInterface_Base_C_ErrorRequested_Params
{
public:
	struct FErrorCodesEnum                       ErrorCode;                                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.DisplayIcarusError
struct UUMG_UserInterface_Base_C_DisplayIcarusError_Params
{
public:
	struct FErrorCodesEnum                       OutgoingError;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x221 (0x221 - 0x0)
// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.ExecuteUbergraph_UMG_UserInterface_Base
struct UUMG_UserInterface_Base_C_ExecuteUbergraph_UMG_UserInterface_Base_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_394D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FErrorCodesEnum                       K2Node_Event_OutgoingError;                        // 0x8(0x10)(HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x18(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x28(0x10)(ZeroConstructor, NoDestructor)
	class UIcarusErrorSubsystem*                 CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FKey>                          K2Node_MakeArray_Array;                            // 0x40(0x10)(ReferenceParm)
	TArray<struct FKey>                          K2Node_MakeArray_Array_1;                          // 0x50(0x10)(ReferenceParm)
	struct FFModifierKeyValues                   K2Node_MakeStruct_FModifierKeyValues;              // 0x60(0x10)(HasGetValueTypeHash)
	struct FFModifierKeyValues                   K2Node_MakeStruct_FModifierKeyValues_1;            // 0x70(0x10)(HasGetValueTypeHash)
	TArray<struct FKey>                          K2Node_MakeArray_Array_2;                          // 0x80(0x10)(ReferenceParm)
	TMap<struct FKey, bool>                      K2Node_MakeMap_Map;                                // 0x90(0x50)(None)
	struct FFModifierKeyValues                   K2Node_MakeStruct_FModifierKeyValues_2;            // 0xE0(0x10)(HasGetValueTypeHash)
	TMap<enum class EModifierKeys, struct FFModifierKeyValues> K2Node_MakeMap_Map_1;                              // 0xF0(0x50)(None)
	TMap<struct FKey, struct FStaticWidget>      K2Node_MakeMap_Map_2;                              // 0x140(0x50)(ContainsInstancedReference)
	enum class EInputTypeSetting                 K2Node_CustomEvent_Value;                          // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x191(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_399D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x194(0x10)(ZeroConstructor, NoDestructor)
	enum class ECheatsEnabled                    CallFunc_IfCheatsEnabled_Paths;                    // 0x1A4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x1A5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_39AB[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x1A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECheatContext                     CallFunc_GetCheatContext_Context;                  // 0x1B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_39B7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_CheatOverlay_C*                   CallFunc_Create_ReturnValue;                       // 0x1B8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_39BE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue;              // 0x1C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UIcarusGameInstance*                   K2Node_DynamicCast_AsIcarus_Game_Instance;         // 0x1D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x1D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_39CB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x1DC(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_39D5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue_1;            // 0x1F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FErrorCodesEnum                       K2Node_CustomEvent_ErrorCode;                      // 0x1F8(0x10)(HasGetValueTypeHash)
	class UBP_IcarusGameInstance_C*              K2Node_DynamicCast_AsBP_Icarus_Game_Instance;      // 0x208(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x210(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_39EE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_IcarusGameUserSettings_C*          CallFunc_Get_Icarus_Game_User_Settings_Settings;   // 0x218(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EInputTypeSetting                 CallFunc_GetInputType_ReturnValue;                 // 0x220(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


