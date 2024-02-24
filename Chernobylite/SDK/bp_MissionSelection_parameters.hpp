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

// 0xA8 (0xA8 - 0x0)
// Function bp_MissionSelection.bp_MissionSelection_C.CacheAvailableCompanionsOnMoveOut
struct Abp_MissionSelection_C_CacheAvailableCompanionsOnMoveOut_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_23C1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance;      // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance_1;    // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance_2;    // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCompanionEntry>               CallFunc_GetAvailableCompanions_ReturnValue;       // 0x28(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_23DD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCompanionEntry                       CallFunc_Array_Get_Item;                           // 0x40(0x60)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_23E6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_AddUnique_ReturnValue;              // 0xA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x15C (0x15C - 0x0)
// Function bp_MissionSelection.bp_MissionSelection_C.CheckAllcompanionsHaveMission
struct Abp_MissionSelection_C_CheckAllcompanionsHaveMission_Params
{
public:
	bool                                         AllCompanionsAssigned;                             // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_24B0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetChildrenCount_ReturnValue;             // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_24BD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_FoodPanel_v3_Entry_C*             K2Node_DynamicCast_AsWid_Food_Panel_V_3_Entry;     // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CanBeSend_Result;                         // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_24DA[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_CanBeSend_PreventingBuff;                 // 0x2C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x35(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetCompanionData_Found;                   // 0x36(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_24E7[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCompanionDefinition                  CallFunc_GetCompanionData_StartingData;            // 0x38(0xB8)(None)
	bool                                         CallFunc_GetCompanionData_Found_in_current_data;   // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_24ED[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCompanionEntry                       CallFunc_GetCompanionData_CurrentData;             // 0xF8(0x60)(None)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x158(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue;            // 0x159(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x15A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x15B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x97 (0x97 - 0x0)
// Function bp_MissionSelection.bp_MissionSelection_C.CheckIfAllAssigned
struct Abp_MissionSelection_C_CheckIfAllAssigned_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_25CA[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_25D8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance;      // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCompanionEntry>               CallFunc_GetAvailableCompanions_ReturnValue;       // 0x18(0x10)(ReferenceParm)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25F3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCompanionEntry                       CallFunc_Array_Get_Item;                           // 0x30(0x60)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x94(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x95(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x96(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function bp_MissionSelection.bp_MissionSelection_C.InpActEvt_PC_Movement_Up_K2Node_InputActionEvent_30
struct Abp_MissionSelection_C_InpActEvt_PC_Movement_Up_K2Node_InputActionEvent_30_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_MissionSelection.bp_MissionSelection_C.InpActEvt_Console_Movement_Up_K2Node_InputActionEvent_29
struct Abp_MissionSelection_C_InpActEvt_Console_Movement_Up_K2Node_InputActionEvent_29_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_MissionSelection.bp_MissionSelection_C.InpActEvt_Console_Shortcuts_QuickUse1_K2Node_InputActionEvent_28
struct Abp_MissionSelection_C_InpActEvt_Console_Shortcuts_QuickUse1_K2Node_InputActionEvent_28_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_MissionSelection.bp_MissionSelection_C.InpActEvt_PC_Movement_Down_K2Node_InputActionEvent_27
struct Abp_MissionSelection_C_InpActEvt_PC_Movement_Down_K2Node_InputActionEvent_27_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_MissionSelection.bp_MissionSelection_C.InpActEvt_Console_Shortcuts_QuickUse3_K2Node_InputActionEvent_26
struct Abp_MissionSelection_C_InpActEvt_Console_Shortcuts_QuickUse3_K2Node_InputActionEvent_26_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_MissionSelection.bp_MissionSelection_C.InpActEvt_Console_Movement_Down_K2Node_InputActionEvent_25
struct Abp_MissionSelection_C_InpActEvt_Console_Movement_Down_K2Node_InputActionEvent_25_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_MissionSelection.bp_MissionSelection_C.InpActEvt_Console_Movement_Left_K2Node_InputActionEvent_24
struct Abp_MissionSelection_C_InpActEvt_Console_Movement_Left_K2Node_InputActionEvent_24_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_MissionSelection.bp_MissionSelection_C.InpActEvt_Console_Shortcuts_QuickUse4_K2Node_InputActionEvent_23
struct Abp_MissionSelection_C_InpActEvt_Console_Shortcuts_QuickUse4_K2Node_InputActionEvent_23_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_MissionSelection.bp_MissionSelection_C.InpActEvt_PC_Movement_Left_K2Node_InputActionEvent_22
struct Abp_MissionSelection_C_InpActEvt_PC_Movement_Left_K2Node_InputActionEvent_22_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_MissionSelection.bp_MissionSelection_C.InpActEvt_Console_Shortcuts_QuickUse2_K2Node_InputActionEvent_21
struct Abp_MissionSelection_C_InpActEvt_Console_Shortcuts_QuickUse2_K2Node_InputActionEvent_21_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_MissionSelection.bp_MissionSelection_C.InpActEvt_Console_Movement_Right_K2Node_InputActionEvent_20
struct Abp_MissionSelection_C_InpActEvt_Console_Movement_Right_K2Node_InputActionEvent_20_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_MissionSelection.bp_MissionSelection_C.InpActEvt_PC_Movement_Right_K2Node_InputActionEvent_19
struct Abp_MissionSelection_C_InpActEvt_PC_Movement_Right_K2Node_InputActionEvent_19_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_MissionSelection.bp_MissionSelection_C.InpActEvt_PC_Interaction_UI_K2Node_InputActionEvent_18
struct Abp_MissionSelection_C_InpActEvt_PC_Interaction_UI_K2Node_InputActionEvent_18_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_MissionSelection.bp_MissionSelection_C.InpActEvt_Console_Movement_Crouch_K2Node_InputActionEvent_17
struct Abp_MissionSelection_C_InpActEvt_Console_Movement_Crouch_K2Node_InputActionEvent_17_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_MissionSelection.bp_MissionSelection_C.InpActEvt_Console_Movement_Reloading_K2Node_InputActionEvent_16
struct Abp_MissionSelection_C_InpActEvt_Console_Movement_Reloading_K2Node_InputActionEvent_16_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_MissionSelection.bp_MissionSelection_C.InpActEvt_PC_Interaction_Reload_K2Node_InputActionEvent_15
struct Abp_MissionSelection_C_InpActEvt_PC_Interaction_Reload_K2Node_InputActionEvent_15_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_MissionSelection.bp_MissionSelection_C.InpActEvt_Console_Interaction_Scrap_K2Node_InputActionEvent_14
struct Abp_MissionSelection_C_InpActEvt_Console_Interaction_Scrap_K2Node_InputActionEvent_14_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_MissionSelection.bp_MissionSelection_C.InpActEvt_PC_Movement_Jump_K2Node_InputActionEvent_13
struct Abp_MissionSelection_C_InpActEvt_PC_Movement_Jump_K2Node_InputActionEvent_13_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_MissionSelection.bp_MissionSelection_C.InpActEvt_Console_Movement_Jump_K2Node_InputActionEvent_12
struct Abp_MissionSelection_C_InpActEvt_Console_Movement_Jump_K2Node_InputActionEvent_12_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_MissionSelection.bp_MissionSelection_C.InpActEvt_PC_Interaction_Use_K2Node_InputActionEvent_11
struct Abp_MissionSelection_C_InpActEvt_PC_Interaction_Use_K2Node_InputActionEvent_11_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_MissionSelection.bp_MissionSelection_C.InpActEvt_Console_Interaction_Attack_K2Node_InputActionEvent_10
struct Abp_MissionSelection_C_InpActEvt_Console_Interaction_Attack_K2Node_InputActionEvent_10_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_MissionSelection.bp_MissionSelection_C.InpActEvt_Console_Interaction_Attack_K2Node_InputActionEvent_9
struct Abp_MissionSelection_C_InpActEvt_Console_Interaction_Attack_K2Node_InputActionEvent_9_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_MissionSelection.bp_MissionSelection_C.InpActEvt_PC_Interaction_Accept_K2Node_InputActionEvent_8
struct Abp_MissionSelection_C_InpActEvt_PC_Interaction_Accept_K2Node_InputActionEvent_8_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_MissionSelection.bp_MissionSelection_C.InpActEvt_PC_Interaction_Accept_K2Node_InputActionEvent_7
struct Abp_MissionSelection_C_InpActEvt_PC_Interaction_Accept_K2Node_InputActionEvent_7_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_MissionSelection.bp_MissionSelection_C.InpActEvt_PC_Interaction_AlternativeAttack_K2Node_InputActionEvent_6
struct Abp_MissionSelection_C_InpActEvt_PC_Interaction_AlternativeAttack_K2Node_InputActionEvent_6_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_MissionSelection.bp_MissionSelection_C.InpActEvt_Console_Interaction_AlternativeAttack_K2Node_InputActionEvent_5
struct Abp_MissionSelection_C_InpActEvt_Console_Interaction_AlternativeAttack_K2Node_InputActionEvent_5_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_MissionSelection.bp_MissionSelection_C.InpActEvt_Utility_AnyGamepadKey_K2Node_InputActionEvent_4
struct Abp_MissionSelection_C_InpActEvt_Utility_AnyGamepadKey_K2Node_InputActionEvent_4_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_MissionSelection.bp_MissionSelection_C.InpActEvt_Utility_AnyKeyboardKey_K2Node_InputActionEvent_3
struct Abp_MissionSelection_C_InpActEvt_Utility_AnyKeyboardKey_K2Node_InputActionEvent_3_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_MissionSelection.bp_MissionSelection_C.InpActEvt_PC_Interaction_Scrap_K2Node_InputActionEvent_2
struct Abp_MissionSelection_C_InpActEvt_PC_Interaction_Scrap_K2Node_InputActionEvent_2_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_MissionSelection.bp_MissionSelection_C.InpActEvt_PC_Interaction_Attack_K2Node_InputActionEvent_1
struct Abp_MissionSelection_C_InpActEvt_PC_Interaction_Attack_K2Node_InputActionEvent_1_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_MissionSelection.bp_MissionSelection_C.InpActEvt_PC_Shortcuts_Pause_K2Node_InputActionEvent_0
struct Abp_MissionSelection_C_InpActEvt_PC_Shortcuts_Pause_K2Node_InputActionEvent_0_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function bp_MissionSelection.bp_MissionSelection_C.OnInteractionPressedComponent
struct Abp_MissionSelection_C_OnInteractionPressedComponent_Params
{
public:
	class AMainPawnCpp*                          PlayerPawn;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UActorComponent*                       ComponentHit;                                      // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function bp_MissionSelection.bp_MissionSelection_C.Finish
struct Abp_MissionSelection_C_Finish_Params
{
public:
	bool                                         UpdateMovementState;                               // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function bp_MissionSelection.bp_MissionSelection_C.OnMoveOutEvent
struct Abp_MissionSelection_C_OnMoveOutEvent_Params
{
public:
	enum class EEventMap                         Map;                                               // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function bp_MissionSelection.bp_MissionSelection_C.InpAxisEvt_Global_Movement_UpDown_K2Node_InputAxisEvent_3
struct Abp_MissionSelection_C_InpAxisEvt_Global_Movement_UpDown_K2Node_InputAxisEvent_3_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function bp_MissionSelection.bp_MissionSelection_C.InpAxisEvt_Global_Movement_RightLeft_K2Node_InputAxisEvent_4
struct Abp_MissionSelection_C_InpAxisEvt_Global_Movement_RightLeft_K2Node_InputAxisEvent_4_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA10 (0xA10 - 0x0)
// Function bp_MissionSelection.bp_MissionSelection_C.ExecuteUbergraph_bp_MissionSelection
struct Abp_MissionSelection_C_ExecuteUbergraph_bp_MissionSelection_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                  Temp_struct_Variable;                              // 0x8(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_8;                     // 0x20(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_7;                     // 0x38(0x18)(HasGetValueTypeHash)
	struct FKey                                  Temp_struct_Variable_1;                            // 0x50(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_6;                     // 0x68(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_5;                     // 0x80(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_4;                     // 0x98(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_3;                     // 0xB0(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_2;                     // 0xC8(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_1;                     // 0xE0(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key;                       // 0xF8(0x18)(HasGetValueTypeHash)
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle;              // 0x110(0x10)(NoDestructor)
	struct FKey                                  K2Node_InputActionEvent_Key_21;                    // 0x120(0x18)(HasGetValueTypeHash)
	class UWid_MissionSelection_Main_C*          K2Node_DynamicCast_AsWid_Mission_Selection_Main;   // 0x138(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2F7D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_MissionSelection_Main_C*          K2Node_DynamicCast_AsWid_Mission_Selection_Main_1; // 0x148(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x151(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x152(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x153(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsVisible_ReturnValue_1;                  // 0x154(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2F89[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  K2Node_InputActionEvent_Key_22;                    // 0x158(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_23;                    // 0x170(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_24;                    // 0x188(0x18)(HasGetValueTypeHash)
	class UWid_MissionSelection_Main_C*          K2Node_DynamicCast_AsWid_Mission_Selection_Main_2; // 0x1A0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x1A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x1A9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2F96[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_MissionSelection_Main_C*          K2Node_DynamicCast_AsWid_Mission_Selection_Main_3; // 0x1B0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x1B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x1B9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsVisible_ReturnValue_2;                  // 0x1BA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsVisible_ReturnValue_3;                  // 0x1BB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2FA4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  K2Node_InputActionEvent_Key_25;                    // 0x1C0(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_26;                    // 0x1D8(0x18)(HasGetValueTypeHash)
	class UWid_MissionSelection_Main_C*          K2Node_DynamicCast_AsWid_Mission_Selection_Main_4; // 0x1F0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0x1F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x1F9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2FAC[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_MissionSelection_Main_C*          K2Node_DynamicCast_AsWid_Mission_Selection_Main_5; // 0x200(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_5;                     // 0x208(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_5;                    // 0x209(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsVisible_ReturnValue_4;                  // 0x20A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsVisible_ReturnValue_5;                  // 0x20B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2FB4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  K2Node_InputActionEvent_Key_27;                    // 0x210(0x18)(HasGetValueTypeHash)
	class UWid_MissionSelection_Main_C*          K2Node_DynamicCast_AsWid_Mission_Selection_Main_6; // 0x228(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_6;                     // 0x230(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2FC5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  K2Node_InputActionEvent_Key_28;                    // 0x238(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_6;                    // 0x250(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsVisible_ReturnValue_6;                  // 0x251(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2FCE[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_MissionSelection_Main_C*          K2Node_DynamicCast_AsWid_Mission_Selection_Main_7; // 0x258(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_7;                     // 0x260(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2FD1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  K2Node_InputActionEvent_Key_29;                    // 0x268(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_7;                    // 0x280(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsVisible_ReturnValue_7;                  // 0x281(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2FDB[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_MissionSelection_Main_C*          K2Node_DynamicCast_AsWid_Mission_Selection_Main_8; // 0x288(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_8;                     // 0x290(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2FE0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  K2Node_InputActionEvent_Key_30;                    // 0x298(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_8;                    // 0x2B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsVisible_ReturnValue_8;                  // 0x2B1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2FE5[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_MissionSelection_Main_C*          K2Node_DynamicCast_AsWid_Mission_Selection_Main_9; // 0x2B8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_9;                     // 0x2C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2FEA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EEventMap, struct FStruct_MapInformation> Temp_byte_Variable;                                // 0x2C8(0x50)(None)
	bool                                         CallFunc_IsValid_ReturnValue_9;                    // 0x318(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsVisible_ReturnValue_9;                  // 0x319(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2FF6[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_MissionSelection_Main_C*          K2Node_DynamicCast_AsWid_Mission_Selection_Main_10; // 0x320(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_10;                    // 0x328(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_10;                   // 0x329(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2FF8[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_MissionSelection_Main_C*          K2Node_DynamicCast_AsWid_Mission_Selection_Main_11; // 0x330(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_11;                    // 0x338(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_11;                   // 0x339(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsVisible_ReturnValue_10;                 // 0x33A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsVisible_ReturnValue_11;                 // 0x33B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x33C(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_2FFF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_MissionSelection_Main_C*          K2Node_DynamicCast_AsWid_Mission_Selection_Main_12; // 0x350(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_12;                    // 0x358(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3003[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_MissionSelection_Main_C*          K2Node_DynamicCast_AsWid_Mission_Selection_Main_13; // 0x360(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_13;                    // 0x368(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_12;                   // 0x369(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_13;                   // 0x36A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsVisible_ReturnValue_12;                 // 0x36B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsVisible_ReturnValue_13;                 // 0x36C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_300B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x370(0x10)(ZeroConstructor, NoDestructor)
	class UWid_MissionSelection_Main_C*          K2Node_DynamicCast_AsWid_Mission_Selection_Main_14; // 0x380(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_14;                    // 0x388(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_14;                   // 0x389(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3012[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_MissionSelection_Main_C*          K2Node_DynamicCast_AsWid_Mission_Selection_Main_15; // 0x390(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_15;                    // 0x398(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_15;                   // 0x399(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsVisible_ReturnValue_14;                 // 0x39A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsVisible_ReturnValue_15;                 // 0x39B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3015[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_MissionSelection_Main_C*          K2Node_DynamicCast_AsWid_Mission_Selection_Main_16; // 0x3A0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_16;                    // 0x3A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_16;                   // 0x3A9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsVisible_ReturnValue_16;                 // 0x3AA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_301D[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_MissionSelection_Main_C*          K2Node_DynamicCast_AsWid_Mission_Selection_Main_17; // 0x3B0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_17;                    // 0x3B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_17;                   // 0x3B9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3023[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_MissionSelection_Main_C*          K2Node_DynamicCast_AsWid_Mission_Selection_Main_18; // 0x3C0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_18;                    // 0x3C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_18;                   // 0x3C9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsVisible_ReturnValue_17;                 // 0x3CA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsVisible_ReturnValue_18;                 // 0x3CB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3026[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_MissionSelection_Main_C*          K2Node_DynamicCast_AsWid_Mission_Selection_Main_19; // 0x3D0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_19;                    // 0x3D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_19;                   // 0x3D9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3029[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_MissionSelection_Main_C*          K2Node_DynamicCast_AsWid_Mission_Selection_Main_20; // 0x3E0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_20;                    // 0x3E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_20;                   // 0x3E9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsVisible_ReturnValue_19;                 // 0x3EA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_302D[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x3EC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsVisible_ReturnValue_20;                 // 0x3F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3034[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x3F4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_MissionSelection_Main_C*          K2Node_DynamicCast_AsWid_Mission_Selection_Main_21; // 0x3F8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_21;                    // 0x400(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_21;                   // 0x401(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3037[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_MissionSelection_Main_C*          K2Node_DynamicCast_AsWid_Mission_Selection_Main_22; // 0x408(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_22;                    // 0x410(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_22;                   // 0x411(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsVisible_ReturnValue_21;                 // 0x412(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsVisible_ReturnValue_22;                 // 0x413(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_303B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  K2Node_InputActionEvent_Key_9;                     // 0x418(0x18)(HasGetValueTypeHash)
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0x430(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetChildrenCount_ReturnValue;             // 0x438(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3040[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_FoodPanel_v3_Entry_C*             K2Node_DynamicCast_AsWid_Food_Panel_V_3_Entry;     // 0x440(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_23;                    // 0x448(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3047[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x44C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x450(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x451(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetCompanionData_Found;                   // 0x452(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_304D[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCompanionDefinition                  CallFunc_GetCompanionData_StartingData;            // 0x458(0xB8)(None)
	bool                                         CallFunc_GetCompanionData_Found_in_current_data;   // 0x510(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3055[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCompanionEntry                       CallFunc_GetCompanionData_CurrentData;             // 0x518(0x60)(None)
	bool                                         CallFunc_CanBeSend_Result;                         // 0x578(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3059[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_CanBeSend_PreventingBuff;                 // 0x57C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x584(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue;            // 0x585(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x586(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x587(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UWid_MissionSelection_Main_C*          K2Node_DynamicCast_AsWid_Mission_Selection_Main_23; // 0x588(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_24;                    // 0x590(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_23;                   // 0x591(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsVisible_ReturnValue_23;                 // 0x592(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_2;                  // 0x593(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_3;                  // 0x594(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_4;                  // 0x595(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_5;                  // 0x596(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_6;                  // 0x597(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_7;                  // 0x598(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_8;                  // 0x599(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3079[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  K2Node_InputActionEvent_Key_10;                    // 0x5A0(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_9;                  // 0x5B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_10;                 // 0x5B9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_11;                 // 0x5BA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_12;                 // 0x5BB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_13;                 // 0x5BC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_14;                 // 0x5BD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_15;                 // 0x5BE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_16;                 // 0x5BF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_17;                 // 0x5C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_18;                 // 0x5C1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_19;                 // 0x5C2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_20;                 // 0x5C3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_21;                 // 0x5C4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_22;                 // 0x5C5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3085[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  K2Node_InputActionEvent_Key_11;                    // 0x5C8(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_23;                 // 0x5E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_24;                 // 0x5E1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_25;                 // 0x5E2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_26;                 // 0x5E3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_27;                 // 0x5E4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_28;                 // 0x5E5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_29;                 // 0x5E6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_308A[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  K2Node_InputActionEvent_Key_12;                    // 0x5E8(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_30;                 // 0x600(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_31;                 // 0x601(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_32;                 // 0x602(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_33;                 // 0x603(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_34;                 // 0x604(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_35;                 // 0x605(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_36;                 // 0x606(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_308B[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  K2Node_InputActionEvent_Key_13;                    // 0x608(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_37;                 // 0x620(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_38;                 // 0x621(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_39;                 // 0x622(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_40;                 // 0x623(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_41;                 // 0x624(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_42;                 // 0x625(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_43;                 // 0x626(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_308E[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  K2Node_InputActionEvent_Key_14;                    // 0x628(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_44;                 // 0x640(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_45;                 // 0x641(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_46;                 // 0x642(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_47;                 // 0x643(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_48;                 // 0x644(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_49;                 // 0x645(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_50;                 // 0x646(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3090[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  K2Node_InputActionEvent_Key_15;                    // 0x648(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_51;                 // 0x660(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_52;                 // 0x661(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_53;                 // 0x662(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_54;                 // 0x663(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_55;                 // 0x664(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_56;                 // 0x665(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_57;                 // 0x666(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3094[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  K2Node_InputActionEvent_Key_16;                    // 0x668(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_58;                 // 0x680(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_59;                 // 0x681(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_60;                 // 0x682(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_61;                 // 0x683(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_62;                 // 0x684(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_63;                 // 0x685(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_64;                 // 0x686(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30A3[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  K2Node_InputActionEvent_Key_17;                    // 0x688(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_65;                 // 0x6A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_66;                 // 0x6A1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_67;                 // 0x6A2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_68;                 // 0x6A3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_69;                 // 0x6A4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_70;                 // 0x6A5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_71;                 // 0x6A6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30AD[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  K2Node_InputActionEvent_Key_18;                    // 0x6A8(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_72;                 // 0x6C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_73;                 // 0x6C1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_74;                 // 0x6C2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30B2[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_MissionSelection_Main_C*          K2Node_DynamicCast_AsWid_Mission_Selection_Main_24; // 0x6C8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_25;                    // 0x6D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_75;                 // 0x6D1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_24;                   // 0x6D2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_76;                 // 0x6D3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_77;                 // 0x6D4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_78;                 // 0x6D5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsVisible_ReturnValue_24;                 // 0x6D6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30BA[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_MissionSelection_Main_C*          K2Node_DynamicCast_AsWid_Mission_Selection_Main_25; // 0x6D8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_26;                    // 0x6E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_25;                   // 0x6E1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30BE[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_MissionSelection_Main_C*          K2Node_DynamicCast_AsWid_Mission_Selection_Main_26; // 0x6E8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_27;                    // 0x6F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_26;                   // 0x6F1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsVisible_ReturnValue_25;                 // 0x6F2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsVisible_ReturnValue_26;                 // 0x6F3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30C2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_MissionSelection_Main_C*          K2Node_DynamicCast_AsWid_Mission_Selection_Main_27; // 0x6F8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_28;                    // 0x700(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_27;                   // 0x701(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30C3[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_MissionSelection_Main_C*          K2Node_DynamicCast_AsWid_Mission_Selection_Main_28; // 0x708(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_29;                    // 0x710(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_28;                   // 0x711(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsVisible_ReturnValue_27;                 // 0x712(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsVisible_ReturnValue_28;                 // 0x713(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30C7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  K2Node_InputActionEvent_Key_19;                    // 0x718(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_79;                 // 0x730(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_80;                 // 0x731(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_81;                 // 0x732(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_82;                 // 0x733(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_83;                 // 0x734(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30CB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AMainPawnCpp*                          K2Node_Event_PlayerPawn;                           // 0x738(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UActorComponent*                       K2Node_Event_ComponentHit;                         // 0x740(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_84;                 // 0x748(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_85;                 // 0x749(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30D0[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x750(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_WorkshopUI_Main_C*                CallFunc_Create_ReturnValue;                       // 0x758(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_MakeLiteralFloat_ReturnValue;             // 0x760(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30D1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  K2Node_InputActionEvent_Key_20;                    // 0x768(0x18)(HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_UpdateMovementState;            // 0x780(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30D3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;   // 0x788(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1; // 0x790(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0x798(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACGMovementState*                      CallFunc_SetNewMovementState_ReturnValue;          // 0x7A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_2;        // 0x7A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_3;        // 0x7B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_4;        // 0x7B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEventMap                         K2Node_CustomEvent_Map;                            // 0x7C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30D6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_MapInformation                CallFunc_Map_Find_Value;                           // 0x7C8(0xE9)(HasGetValueTypeHash)
	uint8                                        Pad_30D8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x8B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30DB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2; // 0x8C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_RemoveChild_ReturnValue;                  // 0x8C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30DE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x8CC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACGMovementState*                      CallFunc_SetNewMovementState_ReturnValue_1;        // 0x8D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3; // 0x8E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_5;        // 0x8E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_6;        // 0x8F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_InputAxisEvent_AxisValue_1;                 // 0x8F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_InputAxisEvent_AxisValue;                   // 0x8FC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance;      // 0x900(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance_1;    // 0x908(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInPIE_ReturnValue;                      // 0x910(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x911(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x912(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30E7[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUserWidget*                           CallFunc_GetUserWidgetObject_ReturnValue;          // 0x918(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_col_ViewableObjectInteractivePoint_01_C* K2Node_DynamicCast_AsWid_Col_Viewable_Object_Interactive_Point_01; // 0x920(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_30;                    // 0x928(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30E9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x92C(0x8C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_K2_SetActorLocation_ReturnValue;          // 0x9B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30ED[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance_2;    // 0x9C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance_3;    // 0x9C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetIsGateOfMadnessMode_ReturnValue;       // 0x9D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30EF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetCurrentDay_ReturnValue;                // 0x9D4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetCompletedStoryQuestsCount_ReturnValue; // 0x9D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x9DC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0x9DD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_PermanentDataGetValue_ReturnValue;        // 0x9DE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30F4[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4; // 0x9E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5; // 0x9E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_Inventory_QuickMenu_C*            K2Node_DynamicCast_AsWid_Inventory_Quick_Menu;     // 0x9F0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_31;                    // 0x9F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30F7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_Inventory_QuickMenu_C*            K2Node_DynamicCast_AsWid_Inventory_Quick_Menu_1;   // 0xA00(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_32;                    // 0xA08(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30FA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetWorldDeltaSeconds_ReturnValue_1;       // 0xA0C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function bp_MissionSelection.bp_MissionSelection_C.MissionSelectionFinished__DelegateSignature
struct Abp_MissionSelection_C_MissionSelectionFinished__DelegateSignature_Params
{
public:
	class FName                                  MapName;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function bp_MissionSelection.bp_MissionSelection_C.ReturnWidgetReference__DelegateSignature
struct Abp_MissionSelection_C_ReturnWidgetReference__DelegateSignature_Params
{
public:
	class UWid_WorkshopUI_Main_C*                Workshop_UI;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


