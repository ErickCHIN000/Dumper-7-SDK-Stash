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

// 0xA1 (0xA1 - 0x0)
// Function bp_dlg_control.bp_dlg_control_C.sort_dlg_actors
struct Abp_dlg_control_C_Sort_dlg_actors_Params
{
public:
	TArray<class Abp_dlg_actor_C*>               Sorted_actors_reversed;                            // 0x0(0x10)(Parm, OutParm)
	int32                                        Local_min_index;                                   // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_18E0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class Abp_dlg_actor_C*>               Local_sorted_actors;                               // 0x18(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)
	TArray<class Abp_dlg_actor_C*>               Local_actors_list;                                 // 0x28(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)
	TArray<float>                                Local_actors_distance;                             // 0x38(0x10)(Edit, BlueprintVisible)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_18EA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_GetPlayerPawn_ReturnValue;                // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class Abp_dlg_actor_C*                       CallFunc_Array_Get_Item;                           // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x6C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1905[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class Abp_dlg_actor_C*>               CallFunc_GetAllActorsOfClass_OutActors;            // 0x70(0x10)(ReferenceParm)
	int32                                        CallFunc_MinOfFloatArray_IndexOfMinValue;          // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_MinOfFloatArray_MinValue;                 // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class Abp_dlg_actor_C*                       CallFunc_Array_Get_Item_1;                         // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetDistanceTo_ReturnValue;                // 0x94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_2;                  // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x38 (0x38 - 0x0)
// Function bp_dlg_control.bp_dlg_control_C.dlg_axis
struct Abp_dlg_control_C_Dlg_axis_Params
{
public:
	class FName                                  Input_id;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Axis_x;                                            // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Axis_y;                                            // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Local_input;                                       // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          Local_block;                                       // 0x18(0x10)(Edit, BlueprintVisible)
	TArray<class FName>                          Local_ignore;                                      // 0x28(0x10)(Edit, BlueprintVisible)
};

// 0x131 (0x131 - 0x0)
// Function bp_dlg_control.bp_dlg_control_C.dlg_action
struct Abp_dlg_control_C_Dlg_action_Params
{
public:
	struct FKey                                  Input_key;                                         // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class FName                                  Input_id;                                          // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class Abp_dlg_actor_C*>               Local_unblocked_list;                              // 0x20(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)
	TArray<class Abp_dlg_actor_C*>               Local_sorted_list;                                 // 0x30(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)
	TArray<class FName>                          Local_block;                                       // 0x40(0x10)(Edit, BlueprintVisible)
	TArray<class FName>                          Local_ignore;                                      // 0x50(0x10)(Edit, BlueprintVisible)
	class FName                                  Local_input;                                       // 0x60(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Local_pressed;                                     // 0x68(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1AF0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  Local_key;                                         // 0x70(0x18)(Edit, BlueprintVisible, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x9C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1B21[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class Abp_dlg_actor_C*                       CallFunc_Array_Get_Item;                           // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B28[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class Abp_dlg_actor_C*                       CallFunc_Array_Get_Item_1;                         // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1B30[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0xBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0xC4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1B3D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0xCC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable;                                // 0xD0(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_1;                              // 0xD8(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class Abp_dlg_actor_C*                       CallFunc_Array_Get_Item_2;                         // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class Abp_dlg_actor_C*                       CallFunc_Array_Get_Item_3;                         // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_Contains_ReturnValue_1;             // 0xF1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0xF2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_Contains_ReturnValue_2;             // 0xF3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0xF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_Contains_ReturnValue_3;             // 0xF9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1B5D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0xFC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x101(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1B64[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_3;               // 0x104(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class Abp_dlg_actor_C*>               CallFunc_sort_dlg_actors_sorted_actors_reversed;   // 0x108(0x10)(ReferenceParm)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1B6C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0x11C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x120(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1B82[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x12C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInputKeyDown_ReturnValue;               // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function bp_dlg_control.bp_dlg_control_C.InpActEvt_q_special_l_K2Node_InputActionEvent_31
struct Abp_dlg_control_C_InpActEvt_q_special_l_K2Node_InputActionEvent_31_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_dlg_control.bp_dlg_control_C.InpActEvt_q_special_l_K2Node_InputActionEvent_30
struct Abp_dlg_control_C_InpActEvt_q_special_l_K2Node_InputActionEvent_30_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_dlg_control.bp_dlg_control_C.InpActEvt_q_special_r_K2Node_InputActionEvent_29
struct Abp_dlg_control_C_InpActEvt_q_special_r_K2Node_InputActionEvent_29_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_dlg_control.bp_dlg_control_C.InpActEvt_q_special_r_K2Node_InputActionEvent_28
struct Abp_dlg_control_C_InpActEvt_q_special_r_K2Node_InputActionEvent_28_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_dlg_control.bp_dlg_control_C.InpActEvt_q_thumb_l_K2Node_InputActionEvent_27
struct Abp_dlg_control_C_InpActEvt_q_thumb_l_K2Node_InputActionEvent_27_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_dlg_control.bp_dlg_control_C.InpActEvt_q_thumb_l_K2Node_InputActionEvent_26
struct Abp_dlg_control_C_InpActEvt_q_thumb_l_K2Node_InputActionEvent_26_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_dlg_control.bp_dlg_control_C.InpActEvt_q_thumb_r_K2Node_InputActionEvent_25
struct Abp_dlg_control_C_InpActEvt_q_thumb_r_K2Node_InputActionEvent_25_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_dlg_control.bp_dlg_control_C.InpActEvt_q_thumb_r_K2Node_InputActionEvent_24
struct Abp_dlg_control_C_InpActEvt_q_thumb_r_K2Node_InputActionEvent_24_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_dlg_control.bp_dlg_control_C.InpActEvt_q_shoulder_l_K2Node_InputActionEvent_23
struct Abp_dlg_control_C_InpActEvt_q_shoulder_l_K2Node_InputActionEvent_23_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_dlg_control.bp_dlg_control_C.InpActEvt_q_shoulder_l_K2Node_InputActionEvent_22
struct Abp_dlg_control_C_InpActEvt_q_shoulder_l_K2Node_InputActionEvent_22_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_dlg_control.bp_dlg_control_C.InpActEvt_q_shoulder_r_K2Node_InputActionEvent_21
struct Abp_dlg_control_C_InpActEvt_q_shoulder_r_K2Node_InputActionEvent_21_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_dlg_control.bp_dlg_control_C.InpActEvt_q_shoulder_r_K2Node_InputActionEvent_20
struct Abp_dlg_control_C_InpActEvt_q_shoulder_r_K2Node_InputActionEvent_20_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_dlg_control.bp_dlg_control_C.InpActEvt_q_trigger_l_K2Node_InputActionEvent_19
struct Abp_dlg_control_C_InpActEvt_q_trigger_l_K2Node_InputActionEvent_19_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_dlg_control.bp_dlg_control_C.InpActEvt_q_trigger_l_K2Node_InputActionEvent_18
struct Abp_dlg_control_C_InpActEvt_q_trigger_l_K2Node_InputActionEvent_18_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_dlg_control.bp_dlg_control_C.InpActEvt_q_trigger_r_K2Node_InputActionEvent_17
struct Abp_dlg_control_C_InpActEvt_q_trigger_r_K2Node_InputActionEvent_17_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_dlg_control.bp_dlg_control_C.InpActEvt_q_trigger_r_K2Node_InputActionEvent_16
struct Abp_dlg_control_C_InpActEvt_q_trigger_r_K2Node_InputActionEvent_16_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_dlg_control.bp_dlg_control_C.InpActEvt_q_dpad_u_K2Node_InputActionEvent_15
struct Abp_dlg_control_C_InpActEvt_q_dpad_u_K2Node_InputActionEvent_15_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_dlg_control.bp_dlg_control_C.InpActEvt_q_dpad_u_K2Node_InputActionEvent_14
struct Abp_dlg_control_C_InpActEvt_q_dpad_u_K2Node_InputActionEvent_14_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_dlg_control.bp_dlg_control_C.InpActEvt_q_dpad_d_K2Node_InputActionEvent_13
struct Abp_dlg_control_C_InpActEvt_q_dpad_d_K2Node_InputActionEvent_13_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_dlg_control.bp_dlg_control_C.InpActEvt_q_dpad_d_K2Node_InputActionEvent_12
struct Abp_dlg_control_C_InpActEvt_q_dpad_d_K2Node_InputActionEvent_12_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_dlg_control.bp_dlg_control_C.InpActEvt_q_dpad_l_K2Node_InputActionEvent_11
struct Abp_dlg_control_C_InpActEvt_q_dpad_l_K2Node_InputActionEvent_11_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_dlg_control.bp_dlg_control_C.InpActEvt_q_dpad_l_K2Node_InputActionEvent_10
struct Abp_dlg_control_C_InpActEvt_q_dpad_l_K2Node_InputActionEvent_10_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_dlg_control.bp_dlg_control_C.InpActEvt_q_dpad_r_K2Node_InputActionEvent_9
struct Abp_dlg_control_C_InpActEvt_q_dpad_r_K2Node_InputActionEvent_9_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_dlg_control.bp_dlg_control_C.InpActEvt_q_dpad_r_K2Node_InputActionEvent_8
struct Abp_dlg_control_C_InpActEvt_q_dpad_r_K2Node_InputActionEvent_8_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_dlg_control.bp_dlg_control_C.InpActEvt_q_face_u_K2Node_InputActionEvent_7
struct Abp_dlg_control_C_InpActEvt_q_face_u_K2Node_InputActionEvent_7_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_dlg_control.bp_dlg_control_C.InpActEvt_q_face_u_K2Node_InputActionEvent_6
struct Abp_dlg_control_C_InpActEvt_q_face_u_K2Node_InputActionEvent_6_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_dlg_control.bp_dlg_control_C.InpActEvt_q_face_d_K2Node_InputActionEvent_5
struct Abp_dlg_control_C_InpActEvt_q_face_d_K2Node_InputActionEvent_5_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_dlg_control.bp_dlg_control_C.InpActEvt_q_face_d_K2Node_InputActionEvent_4
struct Abp_dlg_control_C_InpActEvt_q_face_d_K2Node_InputActionEvent_4_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_dlg_control.bp_dlg_control_C.InpActEvt_q_face_l_K2Node_InputActionEvent_3
struct Abp_dlg_control_C_InpActEvt_q_face_l_K2Node_InputActionEvent_3_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_dlg_control.bp_dlg_control_C.InpActEvt_q_face_l_K2Node_InputActionEvent_2
struct Abp_dlg_control_C_InpActEvt_q_face_l_K2Node_InputActionEvent_2_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_dlg_control.bp_dlg_control_C.InpActEvt_q_face_r_K2Node_InputActionEvent_1
struct Abp_dlg_control_C_InpActEvt_q_face_r_K2Node_InputActionEvent_1_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_dlg_control.bp_dlg_control_C.InpActEvt_q_face_r_K2Node_InputActionEvent_0
struct Abp_dlg_control_C_InpActEvt_q_face_r_K2Node_InputActionEvent_0_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_dlg_control.bp_dlg_control_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_27
struct Abp_dlg_control_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_27_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_dlg_control.bp_dlg_control_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_26
struct Abp_dlg_control_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_26_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_dlg_control.bp_dlg_control_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_25
struct Abp_dlg_control_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_25_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_dlg_control.bp_dlg_control_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_24
struct Abp_dlg_control_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_24_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_dlg_control.bp_dlg_control_C.InpActEvt_MiddleMouseButton_K2Node_InputKeyEvent_23
struct Abp_dlg_control_C_InpActEvt_MiddleMouseButton_K2Node_InputKeyEvent_23_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_dlg_control.bp_dlg_control_C.InpActEvt_MiddleMouseButton_K2Node_InputKeyEvent_22
struct Abp_dlg_control_C_InpActEvt_MiddleMouseButton_K2Node_InputKeyEvent_22_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_dlg_control.bp_dlg_control_C.InpActEvt_One_K2Node_InputKeyEvent_21
struct Abp_dlg_control_C_InpActEvt_One_K2Node_InputKeyEvent_21_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_dlg_control.bp_dlg_control_C.InpActEvt_One_K2Node_InputKeyEvent_20
struct Abp_dlg_control_C_InpActEvt_One_K2Node_InputKeyEvent_20_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_dlg_control.bp_dlg_control_C.InpActEvt_Two_K2Node_InputKeyEvent_19
struct Abp_dlg_control_C_InpActEvt_Two_K2Node_InputKeyEvent_19_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_dlg_control.bp_dlg_control_C.InpActEvt_Two_K2Node_InputKeyEvent_18
struct Abp_dlg_control_C_InpActEvt_Two_K2Node_InputKeyEvent_18_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_dlg_control.bp_dlg_control_C.InpActEvt_Three_K2Node_InputKeyEvent_17
struct Abp_dlg_control_C_InpActEvt_Three_K2Node_InputKeyEvent_17_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_dlg_control.bp_dlg_control_C.InpActEvt_Three_K2Node_InputKeyEvent_16
struct Abp_dlg_control_C_InpActEvt_Three_K2Node_InputKeyEvent_16_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_dlg_control.bp_dlg_control_C.InpActEvt_Four_K2Node_InputKeyEvent_15
struct Abp_dlg_control_C_InpActEvt_Four_K2Node_InputKeyEvent_15_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_dlg_control.bp_dlg_control_C.InpActEvt_Four_K2Node_InputKeyEvent_14
struct Abp_dlg_control_C_InpActEvt_Four_K2Node_InputKeyEvent_14_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_dlg_control.bp_dlg_control_C.InpActEvt_Five_K2Node_InputKeyEvent_13
struct Abp_dlg_control_C_InpActEvt_Five_K2Node_InputKeyEvent_13_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_dlg_control.bp_dlg_control_C.InpActEvt_Five_K2Node_InputKeyEvent_12
struct Abp_dlg_control_C_InpActEvt_Five_K2Node_InputKeyEvent_12_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_dlg_control.bp_dlg_control_C.InpActEvt_Six_K2Node_InputKeyEvent_11
struct Abp_dlg_control_C_InpActEvt_Six_K2Node_InputKeyEvent_11_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_dlg_control.bp_dlg_control_C.InpActEvt_Six_K2Node_InputKeyEvent_10
struct Abp_dlg_control_C_InpActEvt_Six_K2Node_InputKeyEvent_10_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_dlg_control.bp_dlg_control_C.InpActEvt_Seven_K2Node_InputKeyEvent_9
struct Abp_dlg_control_C_InpActEvt_Seven_K2Node_InputKeyEvent_9_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_dlg_control.bp_dlg_control_C.InpActEvt_Seven_K2Node_InputKeyEvent_8
struct Abp_dlg_control_C_InpActEvt_Seven_K2Node_InputKeyEvent_8_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_dlg_control.bp_dlg_control_C.InpActEvt_Eight_K2Node_InputKeyEvent_7
struct Abp_dlg_control_C_InpActEvt_Eight_K2Node_InputKeyEvent_7_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_dlg_control.bp_dlg_control_C.InpActEvt_Eight_K2Node_InputKeyEvent_6
struct Abp_dlg_control_C_InpActEvt_Eight_K2Node_InputKeyEvent_6_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_dlg_control.bp_dlg_control_C.InpActEvt_Nine_K2Node_InputKeyEvent_5
struct Abp_dlg_control_C_InpActEvt_Nine_K2Node_InputKeyEvent_5_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_dlg_control.bp_dlg_control_C.InpActEvt_Nine_K2Node_InputKeyEvent_4
struct Abp_dlg_control_C_InpActEvt_Nine_K2Node_InputKeyEvent_4_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_dlg_control.bp_dlg_control_C.InpActEvt_Zero_K2Node_InputKeyEvent_3
struct Abp_dlg_control_C_InpActEvt_Zero_K2Node_InputKeyEvent_3_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_dlg_control.bp_dlg_control_C.InpActEvt_Zero_K2Node_InputKeyEvent_2
struct Abp_dlg_control_C_InpActEvt_Zero_K2Node_InputKeyEvent_2_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_dlg_control.bp_dlg_control_C.InpActEvt_SpaceBar_K2Node_InputKeyEvent_1
struct Abp_dlg_control_C_InpActEvt_SpaceBar_K2Node_InputKeyEvent_1_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_dlg_control.bp_dlg_control_C.InpActEvt_SpaceBar_K2Node_InputKeyEvent_0
struct Abp_dlg_control_C_InpActEvt_SpaceBar_K2Node_InputKeyEvent_0_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function bp_dlg_control.bp_dlg_control_C.InpAxisEvt_q_move_x_K2Node_InputAxisEvent_54
struct Abp_dlg_control_C_InpAxisEvt_q_move_x_K2Node_InputAxisEvent_54_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function bp_dlg_control.bp_dlg_control_C.InpAxisEvt_q_move_y_K2Node_InputAxisEvent_61
struct Abp_dlg_control_C_InpAxisEvt_q_move_y_K2Node_InputAxisEvent_61_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function bp_dlg_control.bp_dlg_control_C.InpAxisEvt_q_turn_x_K2Node_InputAxisEvent_74
struct Abp_dlg_control_C_InpAxisEvt_q_turn_x_K2Node_InputAxisEvent_74_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function bp_dlg_control.bp_dlg_control_C.InpAxisEvt_q_turn_y_K2Node_InputAxisEvent_87
struct Abp_dlg_control_C_InpAxisEvt_q_turn_y_K2Node_InputAxisEvent_87_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function bp_dlg_control.bp_dlg_control_C.InpAxisEvt_q_trigger_axis_l_K2Node_InputAxisEvent_100
struct Abp_dlg_control_C_InpAxisEvt_q_trigger_axis_l_K2Node_InputAxisEvent_100_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function bp_dlg_control.bp_dlg_control_C.InpAxisEvt_q_trigger_axis_r_K2Node_InputAxisEvent_113
struct Abp_dlg_control_C_InpAxisEvt_q_trigger_axis_r_K2Node_InputAxisEvent_113_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9A8 (0x9A8 - 0x0)
// Function bp_dlg_control.bp_dlg_control_C.ExecuteUbergraph_bp_dlg_control
struct Abp_dlg_control_C_ExecuteUbergraph_bp_dlg_control_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_27AC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  Temp_struct_Variable;                              // 0x8(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_17;                    // 0x20(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_16;                    // 0x38(0x18)(HasGetValueTypeHash)
	struct FKey                                  Temp_struct_Variable_1;                            // 0x50(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_15;                    // 0x68(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_14;                    // 0x80(0x18)(HasGetValueTypeHash)
	struct FKey                                  Temp_struct_Variable_2;                            // 0x98(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_13;                    // 0xB0(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_12;                    // 0xC8(0x18)(HasGetValueTypeHash)
	struct FKey                                  Temp_struct_Variable_3;                            // 0xE0(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_11;                    // 0xF8(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_10;                    // 0x110(0x18)(HasGetValueTypeHash)
	struct FKey                                  Temp_struct_Variable_4;                            // 0x128(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_9;                     // 0x140(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_8;                     // 0x158(0x18)(HasGetValueTypeHash)
	struct FKey                                  Temp_struct_Variable_5;                            // 0x170(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_7;                     // 0x188(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_6;                     // 0x1A0(0x18)(HasGetValueTypeHash)
	struct FKey                                  Temp_struct_Variable_6;                            // 0x1B8(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_5;                     // 0x1D0(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_4;                     // 0x1E8(0x18)(HasGetValueTypeHash)
	struct FKey                                  Temp_struct_Variable_7;                            // 0x200(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_3;                     // 0x218(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_2;                     // 0x230(0x18)(HasGetValueTypeHash)
	struct FKey                                  Temp_struct_Variable_8;                            // 0x248(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_1;                     // 0x260(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key;                       // 0x278(0x18)(HasGetValueTypeHash)
	struct FKey                                  Temp_struct_Variable_9;                            // 0x290(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputKeyEvent_Key_27;                       // 0x2A8(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputKeyEvent_Key_26;                       // 0x2C0(0x18)(HasGetValueTypeHash)
	struct FKey                                  Temp_struct_Variable_10;                           // 0x2D8(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputKeyEvent_Key_25;                       // 0x2F0(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputKeyEvent_Key_24;                       // 0x308(0x18)(HasGetValueTypeHash)
	struct FKey                                  Temp_struct_Variable_11;                           // 0x320(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputKeyEvent_Key_23;                       // 0x338(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputKeyEvent_Key_22;                       // 0x350(0x18)(HasGetValueTypeHash)
	struct FKey                                  Temp_struct_Variable_12;                           // 0x368(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputKeyEvent_Key_21;                       // 0x380(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputKeyEvent_Key_20;                       // 0x398(0x18)(HasGetValueTypeHash)
	struct FKey                                  Temp_struct_Variable_13;                           // 0x3B0(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputKeyEvent_Key_19;                       // 0x3C8(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputKeyEvent_Key_18;                       // 0x3E0(0x18)(HasGetValueTypeHash)
	struct FKey                                  Temp_struct_Variable_14;                           // 0x3F8(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputKeyEvent_Key_17;                       // 0x410(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputKeyEvent_Key_16;                       // 0x428(0x18)(HasGetValueTypeHash)
	struct FKey                                  Temp_struct_Variable_15;                           // 0x440(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputKeyEvent_Key_15;                       // 0x458(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputKeyEvent_Key_14;                       // 0x470(0x18)(HasGetValueTypeHash)
	struct FKey                                  Temp_struct_Variable_16;                           // 0x488(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputKeyEvent_Key_13;                       // 0x4A0(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputKeyEvent_Key_12;                       // 0x4B8(0x18)(HasGetValueTypeHash)
	struct FKey                                  Temp_struct_Variable_17;                           // 0x4D0(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputKeyEvent_Key_11;                       // 0x4E8(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputKeyEvent_Key_10;                       // 0x500(0x18)(HasGetValueTypeHash)
	struct FKey                                  Temp_struct_Variable_18;                           // 0x518(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputKeyEvent_Key_9;                        // 0x530(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputKeyEvent_Key_8;                        // 0x548(0x18)(HasGetValueTypeHash)
	struct FKey                                  Temp_struct_Variable_19;                           // 0x560(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputKeyEvent_Key_7;                        // 0x578(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputKeyEvent_Key_6;                        // 0x590(0x18)(HasGetValueTypeHash)
	struct FKey                                  Temp_struct_Variable_20;                           // 0x5A8(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputKeyEvent_Key_5;                        // 0x5C0(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputKeyEvent_Key_4;                        // 0x5D8(0x18)(HasGetValueTypeHash)
	struct FKey                                  Temp_struct_Variable_21;                           // 0x5F0(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputKeyEvent_Key_3;                        // 0x608(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputKeyEvent_Key_2;                        // 0x620(0x18)(HasGetValueTypeHash)
	struct FKey                                  Temp_struct_Variable_22;                           // 0x638(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputKeyEvent_Key_1;                        // 0x650(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputKeyEvent_Key;                          // 0x668(0x18)(HasGetValueTypeHash)
	struct FKey                                  Temp_struct_Variable_23;                           // 0x680(0x18)(HasGetValueTypeHash)
	class FName                                  CallFunc_MakeLiteralName_ReturnValue;              // 0x698(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_MakeLiteralName_ReturnValue_1;            // 0x6A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_MakeLiteralName_ReturnValue_2;            // 0x6A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_MakeLiteralName_ReturnValue_3;            // 0x6B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_MakeLiteralName_ReturnValue_4;            // 0x6B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_MakeLiteralName_ReturnValue_5;            // 0x6C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_MakeLiteralName_ReturnValue_6;            // 0x6C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_MakeLiteralName_ReturnValue_7;            // 0x6D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_MakeLiteralName_ReturnValue_8;            // 0x6D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_MakeLiteralName_ReturnValue_9;            // 0x6E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_MakeLiteralName_ReturnValue_10;           // 0x6E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_MakeLiteralName_ReturnValue_11;           // 0x6F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_MakeLiteralName_ReturnValue_12;           // 0x6F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_MakeLiteralName_ReturnValue_13;           // 0x700(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_MakeLiteralName_ReturnValue_14;           // 0x708(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_MakeLiteralName_ReturnValue_15;           // 0x710(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_MakeLiteralName_ReturnValue_16;           // 0x718(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                  Temp_struct_Variable_24;                           // 0x720(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_20;                    // 0x738(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_21;                    // 0x750(0x18)(HasGetValueTypeHash)
	struct FKey                                  Temp_struct_Variable_25;                           // 0x768(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_22;                    // 0x780(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_23;                    // 0x798(0x18)(HasGetValueTypeHash)
	struct FKey                                  Temp_struct_Variable_26;                           // 0x7B0(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_24;                    // 0x7C8(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_25;                    // 0x7E0(0x18)(HasGetValueTypeHash)
	struct FKey                                  Temp_struct_Variable_27;                           // 0x7F8(0x18)(HasGetValueTypeHash)
	float                                        K2Node_InputAxisEvent_AxisValue_5;                 // 0x810(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_InputAxisEvent_AxisValue_4;                 // 0x814(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_InputAxisEvent_AxisValue_3;                 // 0x818(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_InputAxisEvent_AxisValue_2;                 // 0x81C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_InputAxisEvent_AxisValue_1;                 // 0x820(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x824(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_InputAxisEvent_AxisValue;                   // 0x828(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2959[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  K2Node_InputActionEvent_Key_18;                    // 0x830(0x18)(HasGetValueTypeHash)
	class FName                                  CallFunc_MakeLiteralName_ReturnValue_17;           // 0x848(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x850(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_26;                    // 0x858(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_27;                    // 0x870(0x18)(HasGetValueTypeHash)
	class FName                                  CallFunc_MakeLiteralName_ReturnValue_18;           // 0x888(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_MakeLiteralName_ReturnValue_19;           // 0x890(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_MakeLiteralName_ReturnValue_20;           // 0x898(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_MakeLiteralName_ReturnValue_21;           // 0x8A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                  Temp_struct_Variable_28;                           // 0x8A8(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_28;                    // 0x8C0(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_29;                    // 0x8D8(0x18)(HasGetValueTypeHash)
	struct FKey                                  Temp_struct_Variable_29;                           // 0x8F0(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_30;                    // 0x908(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_31;                    // 0x920(0x18)(HasGetValueTypeHash)
	class FName                                  CallFunc_MakeLiteralName_ReturnValue_22;           // 0x938(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_MakeLiteralName_ReturnValue_23;           // 0x940(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_MakeLiteralName_ReturnValue_24;           // 0x948(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_MakeLiteralName_ReturnValue_25;           // 0x950(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_MakeLiteralName_ReturnValue_26;           // 0x958(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_MakeLiteralName_ReturnValue_27;           // 0x960(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_MakeLiteralName_ReturnValue_28;           // 0x968(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_MakeLiteralName_ReturnValue_29;           // 0x970(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_MakeLiteralName_ReturnValue_30;           // 0x978(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_MakeLiteralName_ReturnValue_31;           // 0x980(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_MakeLiteralName_ReturnValue_32;           // 0x988(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_19;                    // 0x990(0x18)(HasGetValueTypeHash)
};

}
}


