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

// 0x18 (0x18 - 0x0)
// Function ba_minigame_lockpicking.ba_minigame_lockpicking_C.InpActEvt_UI_Up_K2Node_InputActionEvent_5
struct Aba_minigame_lockpicking_C_InpActEvt_UI_Up_K2Node_InputActionEvent_5_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ba_minigame_lockpicking.ba_minigame_lockpicking_C.InpActEvt_UI_Down_K2Node_InputActionEvent_4
struct Aba_minigame_lockpicking_C_InpActEvt_UI_Down_K2Node_InputActionEvent_4_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ba_minigame_lockpicking.ba_minigame_lockpicking_C.InpActEvt_UI_Right_K2Node_InputActionEvent_3
struct Aba_minigame_lockpicking_C_InpActEvt_UI_Right_K2Node_InputActionEvent_3_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ba_minigame_lockpicking.ba_minigame_lockpicking_C.InpActEvt_UI_Left_K2Node_InputActionEvent_2
struct Aba_minigame_lockpicking_C_InpActEvt_UI_Left_K2Node_InputActionEvent_2_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ba_minigame_lockpicking.ba_minigame_lockpicking_C.InpActEvt_UI_Cancel_K2Node_InputActionEvent_1
struct Aba_minigame_lockpicking_C_InpActEvt_UI_Cancel_K2Node_InputActionEvent_1_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ba_minigame_lockpicking.ba_minigame_lockpicking_C.InpActEvt_UI_Accept_K2Node_InputActionEvent_0
struct Aba_minigame_lockpicking_C_InpActEvt_UI_Accept_K2Node_InputActionEvent_0_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ba_minigame_lockpicking.ba_minigame_lockpicking_C.WidgetShake
struct Aba_minigame_lockpicking_C_WidgetShake_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x100 (0x100 - 0x0)
// Function ba_minigame_lockpicking.ba_minigame_lockpicking_C.ExecuteUbergraph_ba_minigame_lockpicking
struct Aba_minigame_lockpicking_C_ExecuteUbergraph_ba_minigame_lockpicking_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B12[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  K2Node_InputActionEvent_Key_2;                     // 0x8(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_1;                     // 0x20(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key;                       // 0x38(0x18)(HasGetValueTypeHash)
	class UWid_Lockpicking_Main_C*               CallFunc_Create_ReturnValue;                       // 0x50(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_X;                            // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Y;                            // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Z;                            // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B24[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  K2Node_InputActionEvent_Key_3;                     // 0x68(0x18)(HasGetValueTypeHash)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_4;                     // 0x88(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_5;                     // 0xA0(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_IsInViewport_ReturnValue;                 // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsInViewport_ReturnValue_1;               // 0xB9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1B3D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_GetPlayerPawn_ReturnValue;                // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInViewport_ReturnValue_2;               // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsInViewport_ReturnValue_3;               // 0xD9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsInViewport_ReturnValue_4;               // 0xDA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1B6C[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               K2Node_CustomEvent_Widget;                         // 0xE0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                      CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0xE8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_Add_Vector2DVector2D_ReturnValue;         // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_GetPosition_ReturnValue;                  // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


