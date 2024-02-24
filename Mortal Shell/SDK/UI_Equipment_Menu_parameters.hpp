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

// 0x3 (0x3 - 0x0)
// Function UI_Equipment_Menu.UI_Equipment_Menu_C.OpenRunicFamiliarityTab
struct UUI_Equipment_Menu_C_OpenRunicFamiliarityTab_Params
{
public:
	bool                                         IsSwitchingTab;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Local_IsSwitchingTab;                              // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3 (0x3 - 0x0)
// Function UI_Equipment_Menu.UI_Equipment_Menu_C.OpenCompendiumTab
struct UUI_Equipment_Menu_C_OpenCompendiumTab_Params
{
public:
	bool                                         IsSwitchingTab;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Local_IsSwitchingTab;                              // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3 (0x3 - 0x0)
// Function UI_Equipment_Menu.UI_Equipment_Menu_C.OpenInstinctsTab
struct UUI_Equipment_Menu_C_OpenInstinctsTab_Params
{
public:
	bool                                         IsSwitchingTab;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Local_IsSwitchingTab;                              // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function UI_Equipment_Menu.UI_Equipment_Menu_C.OpenShellsTab
struct UUI_Equipment_Menu_C_OpenShellsTab_Params
{
public:
	bool                                         IsSwitchingTab;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Local_IsSwitchingTab;                              // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3 (0x3 - 0x0)
// Function UI_Equipment_Menu.UI_Equipment_Menu_C.OpenInventoryTab
struct UUI_Equipment_Menu_C_OpenInventoryTab_Params
{
public:
	bool                                         IsSwitchingTab;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Local_IsSwitchingTab;                              // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x22 (0x22 - 0x0)
// Function UI_Equipment_Menu.UI_Equipment_Menu_C.HandleStormMode
struct UUI_Equipment_Menu_C_HandleStormMode_Params
{
public:
	bool                                         CallFunc_RemoveChild_ReturnValue;                  // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_RemoveChild_ReturnValue_1;                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_RemoveChild_ReturnValue_2;                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_FB8[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface;   // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_StormModeIsActive_ReturnValue;            // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function UI_Equipment_Menu.UI_Equipment_Menu_C.GetCurrentKeyboardMode
struct UUI_Equipment_Menu_C_GetCurrentKeyboardMode_Params
{
public:
	class UKeyboardModeNotifierComponent_C*      CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier; // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function UI_Equipment_Menu.UI_Equipment_Menu_C.ResetMousePosition
struct UUI_Equipment_Menu_C_ResetMousePosition_Params
{
public:
	bool                                         KeyboardMode;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsInViewport_ReturnValue;                 // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1003[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function UI_Equipment_Menu.UI_Equipment_Menu_C.NavUpperLeftListen
struct UUI_Equipment_Menu_C_NavUpperLeftListen_Params
{
public:
	FDelegateProperty_                           Event;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function UI_Equipment_Menu.UI_Equipment_Menu_C.NavUpperRightListen
struct UUI_Equipment_Menu_C_NavUpperRightListen_Params
{
public:
	FDelegateProperty_                           Event;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
};

// 0x31 (0x31 - 0x0)
// Function UI_Equipment_Menu.UI_Equipment_Menu_C.Nav Top Click
struct UUI_Equipment_Menu_C_Nav_Top_Click_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_107F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_MainMenu_Button_C*                 Widget;                                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Local_IndexSelected;                               // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1085[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UUI_MainMenu_Button_C*>         CallFunc_GetButtons_Array;                         // 0x18(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1088[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Find_ReturnValue;                   // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x31 (0x31 - 0x0)
// Function UI_Equipment_Menu.UI_Equipment_Menu_C.NavTopUnHover
struct UUI_Equipment_Menu_C_NavTopUnHover_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_10DC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UUI_MainMenu_Button_C*>         CallFunc_GetButtons_Array;                         // 0x10(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_10E1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_MainMenu_Button_C*                 CallFunc_Array_Get_Item;                           // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x59 (0x59 - 0x0)
// Function UI_Equipment_Menu.UI_Equipment_Menu_C.NavTopHover
struct UUI_Equipment_Menu_C_NavTopHover_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1129[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_MainMenu_Button_C*                 Widget;                                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_MainMenu_Button_C*                 Local_Widget;                                      // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_MainMenu_Button_C*                 Local_WidgetSelected;                              // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Local_IndexSelected;                               // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1141[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UUI_MainMenu_Button_C*>         CallFunc_GetButtons_Array;                         // 0x38(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1144[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_MainMenu_Button_C*                 CallFunc_Array_Get_Item;                           // 0x50(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1E (0x1E - 0x0)
// Function UI_Equipment_Menu.UI_Equipment_Menu_C.NavUpper_Left
struct UUI_Equipment_Menu_C_NavUpper_Left_Params
{
public:
	int32                                        Local_Index_Temp;                                  // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1174[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Select_Default;                             // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Clamp_ReturnValue;                        // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function UI_Equipment_Menu.UI_Equipment_Menu_C.NavUpper_Right
struct UUI_Equipment_Menu_C_NavUpper_Right_Params
{
public:
	int32                                        Local_Index_Temp;                                  // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_11DD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable_2;                               // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_3;                               // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_11E4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Select_Default;                             // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Select_Default_1;                           // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x25(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_11E9[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Clamp_ReturnValue;                        // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UI_Equipment_Menu.UI_Equipment_Menu_C.UI_Sound_ChangeTab
struct UUI_Equipment_Menu_C_UI_Sound_ChangeTab_Params
{
public:
	bool                                         PlaySound;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function UI_Equipment_Menu.UI_Equipment_Menu_C.EquipmentMenu_UpdateTab
struct UUI_Equipment_Menu_C_EquipmentMenu_UpdateTab_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsSwitchingTab;                                    // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Local_IsSwitchingTab;                              // 0x5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchInteger_CmpSuccess_1;                 // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function UI_Equipment_Menu.UI_Equipment_Menu_C.BndEvt__UI_Equipment_TopNav_K2Node_ComponentBoundEvent_0_OnTopNavButtonHovered__DelegateSignature
struct UUI_Equipment_Menu_C_BndEvt__UI_Equipment_TopNav_K2Node_ComponentBoundEvent_0_OnTopNavButtonHovered__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1270[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_MainMenu_Button_C*                 Widget;                                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function UI_Equipment_Menu.UI_Equipment_Menu_C.BndEvt__UI_Equipment_TopNav_K2Node_ComponentBoundEvent_2_OnTopNavButtonPressed__DelegateSignature
struct UUI_Equipment_Menu_C_BndEvt__UI_Equipment_TopNav_K2Node_ComponentBoundEvent_2_OnTopNavButtonPressed__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_128E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_MainMenu_Button_C*                 Widget;                                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UI_Equipment_Menu.UI_Equipment_Menu_C.OnKeyboardModeChanged_Set
struct UUI_Equipment_Menu_C_OnKeyboardModeChanged_Set_Params
{
public:
	bool                                         KeyboardMode;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x68 (0x68 - 0x0)
// Function UI_Equipment_Menu.UI_Equipment_Menu_C.ExecuteUbergraph_UI_Equipment_Menu
struct UUI_Equipment_Menu_C_ExecuteUbergraph_UI_Equipment_Menu_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x14(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x24(0x10)(ZeroConstructor, NoDestructor)
	int32                                        K2Node_ComponentBoundEvent_Index_1;                // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_MainMenu_Button_C*                 K2Node_ComponentBoundEvent_Widget_1;               // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_Index;                  // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1336[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_MainMenu_Button_C*                 K2Node_ComponentBoundEvent_Widget;                 // 0x48(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameplayPC_C*                         CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;  // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_KeyboardMode;                   // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1340[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UKeyboardModeNotifierComponent_C*      CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier; // 0x60(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


