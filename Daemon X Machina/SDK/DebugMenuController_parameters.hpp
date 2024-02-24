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

// 0x20 (0x20 - 0x0)
// Function DebugMenuController.DebugMenuController_C.GetCurrentMenu
struct ADebugMenuController_C_GetCurrentMenu_Params
{
public:
	class UDebugMenuListBox_C*                   NewParam;                                          // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_581[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_582[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDebugMenuListBox_C*                   CallFunc_Array_Get_Item;                           // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC8 (0xC8 - 0x0)
// Function DebugMenuController.DebugMenuController_C.CreateFolderByDataTable
struct ADebugMenuController_C_CreateFolderByDataTable_Params
{
public:
	class UDataTable*                            DataTable;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                Name;                                              // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FTTLDebugMenuFolder                   NewFolder;                                         // 0x18(0x30)(Parm, OutParm)
	TArray<int32>                                LinkTo;                                            // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor)
	TArray<class FName>                          CallFunc_GetDataTableRowNames_OutRowNames;         // 0x58(0x10)(ZeroConstructor, ReferenceParm)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5BC[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        CallFunc_NamesToStrings_Strings;                   // 0x70(0x10)(ZeroConstructor, ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTTLDebugMenuFolder                   K2Node_MakeStruct_TTLDebugMenuFolder;              // 0x88(0x30)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5C5[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0xC0(0x4)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0xC4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function DebugMenuController.DebugMenuController_C.SelectPageDown
struct ADebugMenuController_C_SelectPageDown_Params
{
public:
	class UDebugMenuListBox_C*                   CallFunc_GetCurrentMenu_NewParam;                  // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function DebugMenuController.DebugMenuController_C.SelectPageUp
struct ADebugMenuController_C_SelectPageUp_Params
{
public:
	class UDebugMenuListBox_C*                   CallFunc_GetCurrentMenu_NewParam;                  // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function DebugMenuController.DebugMenuController_C.SelectDown
struct ADebugMenuController_C_SelectDown_Params
{
public:
	int32                                        RepeatCount;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_608[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDebugMenuListBox_C*                   CallFunc_GetCurrentMenu_NewParam;                  // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function DebugMenuController.DebugMenuController_C.SelectUp
struct ADebugMenuController_C_SelectUp_Params
{
public:
	int32                                        RepeatCount;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_629[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDebugMenuListBox_C*                   CallFunc_GetCurrentMenu_NewParam;                  // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xA (0xA - 0x0)
// Function DebugMenuController.DebugMenuController_C.CloseMenu
struct ADebugMenuController_C_CloseMenu_Params
{
public:
	class UDebugMenuListBox_C*                   CallFunc_GetCurrentMenu_NewParam;                  // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_RemoveItem_ReturnValue;             // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x40 (0x40 - 0x0)
// Function DebugMenuController.DebugMenuController_C.OpenMenu
struct ADebugMenuController_C_OpenMenu_Params
{
public:
	struct FTTLDebugMenuFolder                   Folder;                                            // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UDebugMenuListBox_C*                   Menu;                                              // 0x30(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDebugMenuListBox_C*                   CallFunc_AddMenu_Menu;                             // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function DebugMenuController.DebugMenuController_C.AddMenuByDataTable
struct ADebugMenuController_C_AddMenuByDataTable_Params
{
public:
	class UDataTable*                            DataTable;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Index;                                             // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_675[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          CallFunc_GetDataTableRowNames_OutRowNames;         // 0x10(0x10)(ZeroConstructor, ReferenceParm)
	class UDebugMenuListBox_C*                   CallFunc_AddMenu_Menu;                             // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                        CallFunc_NamesToStrings_Strings;                   // 0x28(0x10)(ZeroConstructor, ReferenceParm)
};

// 0x64 (0x64 - 0x0)
// Function DebugMenuController.DebugMenuController_C.NamesToStrings
struct ADebugMenuController_C_NamesToStrings_Params
{
public:
	TArray<class FName>                          Names;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class FString>                        Strings;                                           // 0x10(0x10)(Parm, OutParm, ZeroConstructor)
	TArray<class FString>                        Values;                                            // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6A5[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_Array_Get_Item;                           // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6AA[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD8 (0xD8 - 0x0)
// Function DebugMenuController.DebugMenuController_C.AddMenu
struct ADebugMenuController_C_AddMenu_Params
{
public:
	struct FTTLDebugMenuFolder                   Folder;                                            // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                        Index;                                             // 0x30(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6FF[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDebugMenuListBox_C*                   Menu;                                              // 0x38(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDebugMenuListBox_C*                   NewWidget;                                         // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDebugMenuListBox_C*                   CallFunc_Create_ReturnValue;                       // 0x48(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_IntFloat_ReturnValue;            // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue1;             // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x64(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_713[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDebugMenuListBox_C*                   CallFunc_Array_Get_Item;                           // 0x68(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                             CallFunc_GetCachedGeometry_ReturnValue;            // 0x70(0x38)(ConstParm, IsPlainOldData, NoDestructor)
	struct FVector2D                             CallFunc_LocalToViewport_PixelPosition;            // 0xA8(0x8)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_LocalToViewport_ViewportPosition;         // 0xB0(0x8)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue2;             // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_X;                          // 0xBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_Y;                          // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_IntFloat_ReturnValue1;           // 0xC4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FMin_ReturnValue;                         // 0xCC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0xD0(0x8)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function DebugMenuController.DebugMenuController_C.InpActEvt_Enter_K2Node_InputKeyEvent_15
struct ADebugMenuController_C_InpActEvt_Enter_K2Node_InputKeyEvent_15_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function DebugMenuController.DebugMenuController_C.InpActEvt_BackSpace_K2Node_InputKeyEvent_14
struct ADebugMenuController_C_InpActEvt_BackSpace_K2Node_InputKeyEvent_14_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function DebugMenuController.DebugMenuController_C.InpActEvt_Up_K2Node_InputKeyEvent_13
struct ADebugMenuController_C_InpActEvt_Up_K2Node_InputKeyEvent_13_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function DebugMenuController.DebugMenuController_C.InpActEvt_Up_K2Node_InputKeyEvent_12
struct ADebugMenuController_C_InpActEvt_Up_K2Node_InputKeyEvent_12_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function DebugMenuController.DebugMenuController_C.InpActEvt_Down_K2Node_InputKeyEvent_11
struct ADebugMenuController_C_InpActEvt_Down_K2Node_InputKeyEvent_11_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function DebugMenuController.DebugMenuController_C.InpActEvt_Down_K2Node_InputKeyEvent_10
struct ADebugMenuController_C_InpActEvt_Down_K2Node_InputKeyEvent_10_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function DebugMenuController.DebugMenuController_C.InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_9
struct ADebugMenuController_C_InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_9_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function DebugMenuController.DebugMenuController_C.InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_8
struct ADebugMenuController_C_InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_8_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function DebugMenuController.DebugMenuController_C.InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_7
struct ADebugMenuController_C_InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_7_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function DebugMenuController.DebugMenuController_C.InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_6
struct ADebugMenuController_C_InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_6_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function DebugMenuController.DebugMenuController_C.InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_5
struct ADebugMenuController_C_InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_5_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function DebugMenuController.DebugMenuController_C.InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_4
struct ADebugMenuController_C_InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_4_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function DebugMenuController.DebugMenuController_C.InpActEvt_Left_K2Node_InputKeyEvent_3
struct ADebugMenuController_C_InpActEvt_Left_K2Node_InputKeyEvent_3_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function DebugMenuController.DebugMenuController_C.InpActEvt_Gamepad_DPad_Left_K2Node_InputKeyEvent_2
struct ADebugMenuController_C_InpActEvt_Gamepad_DPad_Left_K2Node_InputKeyEvent_2_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function DebugMenuController.DebugMenuController_C.InpActEvt_Right_K2Node_InputKeyEvent_1
struct ADebugMenuController_C_InpActEvt_Right_K2Node_InputKeyEvent_1_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function DebugMenuController.DebugMenuController_C.InpActEvt_Gamepad_DPad_Right_K2Node_InputKeyEvent_0
struct ADebugMenuController_C_InpActEvt_Gamepad_DPad_Right_K2Node_InputKeyEvent_0_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function DebugMenuController.DebugMenuController_C.ReceiveEndPlay
struct ADebugMenuController_C_ReceiveEndPlay_Params
{
public:
	enum class EEndPlayReason                    EndPlayReason;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function DebugMenuController.DebugMenuController_C.OnMenuUpRepeat
struct ADebugMenuController_C_OnMenuUpRepeat_Params
{
public:
	int32                                        RepeatCount;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function DebugMenuController.DebugMenuController_C.OnMenuDownRepeat
struct ADebugMenuController_C_OnMenuDownRepeat_Params
{
public:
	int32                                        RepeatCount;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x278 (0x278 - 0x0)
// Function DebugMenuController.DebugMenuController_C.ExecuteUbergraph_DebugMenuController
struct ADebugMenuController_C_ExecuteUbergraph_DebugMenuController_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  K2Node_InputKeyEvent_Key5;                         // 0x8(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputKeyEvent_Key4;                         // 0x20(0x18)(HasGetValueTypeHash)
	struct FKey                                  Temp_struct_Variable;                              // 0x38(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputKeyEvent_Key3;                         // 0x50(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputKeyEvent_Key2;                         // 0x68(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputKeyEvent_Key1;                         // 0x80(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputKeyEvent_Key;                          // 0x98(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputKeyEvent_Key6;                         // 0xB0(0x18)(HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xCC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_89D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  K2Node_InputKeyEvent_Key7;                         // 0xD8(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputKeyEvent_Key8;                         // 0xF0(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputKeyEvent_Key9;                         // 0x108(0x18)(HasGetValueTypeHash)
	struct FKey                                  Temp_struct_Variable1;                             // 0x120(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputKeyEvent_Key10;                        // 0x138(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputKeyEvent_Key11;                        // 0x150(0x18)(HasGetValueTypeHash)
	struct FKey                                  Temp_struct_Variable2;                             // 0x168(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputKeyEvent_Key12;                        // 0x180(0x18)(HasGetValueTypeHash)
	struct FKey                                  Temp_struct_Variable3;                             // 0x198(0x18)(HasGetValueTypeHash)
	class UDebugMenuListBox_C*                   CallFunc_OpenMenu_Menu;                            // 0x1B0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x1B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x1BC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_8B7[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDebugMenuListBox_C*                   CallFunc_GetCurrentMenu_NewParam;                  // 0x1C0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1C9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_8BC[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDebugMenuListBox_C*                   CallFunc_GetCurrentMenu_NewParam1;                 // 0x1D0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Get_Item;                           // 0x1D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue1;                     // 0x1DC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_8C2[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDebugMenuListBox_C*                   CallFunc_OpenMenu_Menu1;                           // 0x1E0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x1E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_8C7[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDebugMenuListBox_C*                   CallFunc_GetCurrentMenu_NewParam2;                 // 0x1F0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDebugMenuListBox_C*                   CallFunc_GetCurrentMenu_NewParam3;                 // 0x1F8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue2;                     // 0x200(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue3;                     // 0x201(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue4;                     // 0x202(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue5;                     // 0x203(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_8D0[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDebugMenuListBox_C*                   CallFunc_GetCurrentMenu_NewParam4;                 // 0x208(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEndPlayReason                    K2Node_Event_EndPlayReason;                        // 0x210(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8D5[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Event_RepeatCount1;                         // 0x214(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDebugMenuListBox_C*                   CallFunc_Array_Get_Item1;                          // 0x218(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue1;                // 0x220(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_RepeatCount;                          // 0x224(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x228(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_8E2[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  K2Node_InputKeyEvent_Key13;                        // 0x230(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputKeyEvent_Key14;                        // 0x248(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputKeyEvent_Key15;                        // 0x260(0x18)(HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function DebugMenuController.DebugMenuController_C.OnMenuClosed__DelegateSignature
struct ADebugMenuController_C_OnMenuClosed__DelegateSignature_Params
{
public:
	class UDebugMenuListBox_C*                   CurrentMenu;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function DebugMenuController.DebugMenuController_C.OnMenuOpened__DelegateSignature
struct ADebugMenuController_C_OnMenuOpened__DelegateSignature_Params
{
public:
	class UDebugMenuListBox_C*                   Menu;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


