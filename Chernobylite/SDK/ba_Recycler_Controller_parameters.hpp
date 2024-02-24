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

// 0x63 (0x63 - 0x0)
// Function ba_Recycler_Controller.ba_Recycler_Controller_C.HideActiveItemIfNeeded
struct Aba_Recycler_Controller_C_HideActiveItemIfNeeded_Params
{
public:
	class FName                                  UniqueId;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInventoryComponent2*                  CallFunc_GetCGPlayerInventory_InventoryComponentNew; // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFPAnimQuery                          K2Node_MakeStruct_FPAnimQuery;                     // 0x18(0x18)(NoDestructor, UObjectWrapper)
	float                                        CallFunc_CountUID_ReturnValue;                     // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_QueryActivity_OutQueryResult;             // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2177[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFPAnimQuery>                  CallFunc_QueryActivity_OutQueryQueue;              // 0x38(0x10)(ReferenceParm)
	bool                                         CallFunc_EqualEqual_FloatFloat_ReturnValue;        // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_217F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1; // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACGWeapon*                             K2Node_DynamicCast_AsCGWeapon;                     // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x62(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3DD (0x3DD - 0x0)
// Function ba_Recycler_Controller.ba_Recycler_Controller_C.TryToRecycle
struct Aba_Recycler_Controller_C_TryToRecycle_Params
{
public:
	struct FInventoryEntry                       CachedItem;                                        // 0x0(0x30)(Edit, BlueprintVisible)
	float                                        StartCount;                                        // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Removed;                                           // 0x34(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_228A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           Temp_delegate_Variable;                            // 0x38(0x10)(ConstParm, ZeroConstructor, NoDestructor)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_228D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;   // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance;      // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInventoryComponent2*                  CallFunc_GetCGPlayerInventory_InventoryComponentNew; // 0x68(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetInternalItemId_ReturnValue;            // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventoryEntry                       CallFunc_GetItemWithInternalId_ReturnValue;        // 0x78(0x30)(None)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0xA9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_22B2[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCraftingRecipe                       CallFunc_GetDataTableRowFromName_OutRow;           // 0xB0(0x108)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x1B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_22BC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                CallFunc_Map_Values_Values;                        // 0x1C0(0x10)(ReferenceParm)
	TArray<class FName>                          CallFunc_Map_Keys_Keys;                            // 0x1D0(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Get_Item;                           // 0x1E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Array_Get_Item_1;                         // 0x1E4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x1EC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_ItemNames                    CallFunc_NameIDToitemEnum_Output;                  // 0x1F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_22D7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x1F4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x1F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x1FC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x200(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_22E9[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemEntry                            CallFunc_GetItemData_Data;                         // 0x210(0x150)(None)
	bool                                         CallFunc_DoesDataTableRowExist_ReturnValue;        // 0x360(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x361(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x362(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_22F8[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1; // 0x368(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_AquireItem_ReturnValue;                   // 0x370(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x374(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FAkExternalSourceInfo>         Temp_struct_Variable;                              // 0x378(0x10)(ConstParm, ReferenceParm)
	float                                        CallFunc_FMax_ReturnValue;                         // 0x388(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_PostEvent_ReturnValue;                    // 0x38C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2; // 0x390(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Count_ReturnValue;                        // 0x398(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Remove_ReturnValue;                       // 0x39C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x3A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2318[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       CallFunc_GetByIndex_ReturnValue;                   // 0x3A8(0x30)(None)
	float                                        CallFunc_RemoveAt_ReturnValue;                     // 0x3D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0x3DC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x65 (0x65 - 0x0)
// Function ba_Recycler_Controller.ba_Recycler_Controller_C.UpdateItems
struct Aba_Recycler_Controller_C_UpdateItems_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_23EE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;   // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FInventoryEntry>               CallFunc_GetItems_ReturnValue;                     // 0x18(0x10)(ReferenceParm)
	struct FInventoryEntry                       CallFunc_Array_Get_Item;                           // 0x28(0x30)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x5C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_23FF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x64(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function ba_Recycler_Controller.ba_Recycler_Controller_C.IsInteractionUnlocked
struct Aba_Recycler_Controller_C_IsInteractionUnlocked_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsInteractionUnlocked_ReturnValue;        // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function ba_Recycler_Controller.ba_Recycler_Controller_C.MaxInteractionDistance
struct Aba_Recycler_Controller_C_MaxInteractionDistance_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function ba_Recycler_Controller.ba_Recycler_Controller_C.SetActive
struct Aba_Recycler_Controller_C_SetActive_Params
{
public:
	bool                                         InNewActive;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function ba_Recycler_Controller.ba_Recycler_Controller_C.InpActEvt_Console_Movement_Reloading_K2Node_InputActionEvent_32
struct Aba_Recycler_Controller_C_InpActEvt_Console_Movement_Reloading_K2Node_InputActionEvent_32_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ba_Recycler_Controller.ba_Recycler_Controller_C.InpActEvt_Console_Movement_Reloading_K2Node_InputActionEvent_31
struct Aba_Recycler_Controller_C_InpActEvt_Console_Movement_Reloading_K2Node_InputActionEvent_31_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ba_Recycler_Controller.ba_Recycler_Controller_C.InpActEvt_PC_Shortcuts_Grab_K2Node_InputActionEvent_30
struct Aba_Recycler_Controller_C_InpActEvt_PC_Shortcuts_Grab_K2Node_InputActionEvent_30_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ba_Recycler_Controller.ba_Recycler_Controller_C.InpActEvt_PC_Shortcuts_Grab_K2Node_InputActionEvent_29
struct Aba_Recycler_Controller_C_InpActEvt_PC_Shortcuts_Grab_K2Node_InputActionEvent_29_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ba_Recycler_Controller.ba_Recycler_Controller_C.InpActEvt_PC_Interaction_Attack_K2Node_InputActionEvent_28
struct Aba_Recycler_Controller_C_InpActEvt_PC_Interaction_Attack_K2Node_InputActionEvent_28_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ba_Recycler_Controller.ba_Recycler_Controller_C.InpActEvt_PC_Interaction_UI_K2Node_InputActionEvent_27
struct Aba_Recycler_Controller_C_InpActEvt_PC_Interaction_UI_K2Node_InputActionEvent_27_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ba_Recycler_Controller.ba_Recycler_Controller_C.InpActEvt_Console_Movement_Crouch_K2Node_InputActionEvent_26
struct Aba_Recycler_Controller_C_InpActEvt_Console_Movement_Crouch_K2Node_InputActionEvent_26_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ba_Recycler_Controller.ba_Recycler_Controller_C.InpActEvt_PC_Interaction_Use_K2Node_InputActionEvent_25
struct Aba_Recycler_Controller_C_InpActEvt_PC_Interaction_Use_K2Node_InputActionEvent_25_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ba_Recycler_Controller.ba_Recycler_Controller_C.InpActEvt_PC_Interaction_Use_K2Node_InputActionEvent_24
struct Aba_Recycler_Controller_C_InpActEvt_PC_Interaction_Use_K2Node_InputActionEvent_24_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ba_Recycler_Controller.ba_Recycler_Controller_C.InpActEvt_Console_Movement_Jump_K2Node_InputActionEvent_23
struct Aba_Recycler_Controller_C_InpActEvt_Console_Movement_Jump_K2Node_InputActionEvent_23_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ba_Recycler_Controller.ba_Recycler_Controller_C.InpActEvt_Console_Movement_Jump_K2Node_InputActionEvent_22
struct Aba_Recycler_Controller_C_InpActEvt_Console_Movement_Jump_K2Node_InputActionEvent_22_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ba_Recycler_Controller.ba_Recycler_Controller_C.InpActEvt_PC_Movement_Up_K2Node_InputActionEvent_21
struct Aba_Recycler_Controller_C_InpActEvt_PC_Movement_Up_K2Node_InputActionEvent_21_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ba_Recycler_Controller.ba_Recycler_Controller_C.InpActEvt_Console_Movement_Up_K2Node_InputActionEvent_20
struct Aba_Recycler_Controller_C_InpActEvt_Console_Movement_Up_K2Node_InputActionEvent_20_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ba_Recycler_Controller.ba_Recycler_Controller_C.InpActEvt_Console_Shortcuts_QuickUse1_K2Node_InputActionEvent_19
struct Aba_Recycler_Controller_C_InpActEvt_Console_Shortcuts_QuickUse1_K2Node_InputActionEvent_19_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ba_Recycler_Controller.ba_Recycler_Controller_C.InpActEvt_PC_Movement_Down_K2Node_InputActionEvent_18
struct Aba_Recycler_Controller_C_InpActEvt_PC_Movement_Down_K2Node_InputActionEvent_18_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ba_Recycler_Controller.ba_Recycler_Controller_C.InpActEvt_Console_Movement_Down_K2Node_InputActionEvent_17
struct Aba_Recycler_Controller_C_InpActEvt_Console_Movement_Down_K2Node_InputActionEvent_17_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ba_Recycler_Controller.ba_Recycler_Controller_C.InpActEvt_Console_Shortcuts_QuickUse3_K2Node_InputActionEvent_16
struct Aba_Recycler_Controller_C_InpActEvt_Console_Shortcuts_QuickUse3_K2Node_InputActionEvent_16_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ba_Recycler_Controller.ba_Recycler_Controller_C.InpActEvt_PC_Movement_Left_K2Node_InputActionEvent_15
struct Aba_Recycler_Controller_C_InpActEvt_PC_Movement_Left_K2Node_InputActionEvent_15_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ba_Recycler_Controller.ba_Recycler_Controller_C.InpActEvt_PC_Movement_Left_K2Node_InputActionEvent_14
struct Aba_Recycler_Controller_C_InpActEvt_PC_Movement_Left_K2Node_InputActionEvent_14_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ba_Recycler_Controller.ba_Recycler_Controller_C.InpActEvt_Console_Shortcuts_QuickUse4_K2Node_InputActionEvent_13
struct Aba_Recycler_Controller_C_InpActEvt_Console_Shortcuts_QuickUse4_K2Node_InputActionEvent_13_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ba_Recycler_Controller.ba_Recycler_Controller_C.InpActEvt_Console_Shortcuts_QuickUse4_K2Node_InputActionEvent_12
struct Aba_Recycler_Controller_C_InpActEvt_Console_Shortcuts_QuickUse4_K2Node_InputActionEvent_12_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ba_Recycler_Controller.ba_Recycler_Controller_C.InpActEvt_Console_Movement_Left_K2Node_InputActionEvent_11
struct Aba_Recycler_Controller_C_InpActEvt_Console_Movement_Left_K2Node_InputActionEvent_11_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ba_Recycler_Controller.ba_Recycler_Controller_C.InpActEvt_Console_Movement_Left_K2Node_InputActionEvent_10
struct Aba_Recycler_Controller_C_InpActEvt_Console_Movement_Left_K2Node_InputActionEvent_10_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ba_Recycler_Controller.ba_Recycler_Controller_C.InpActEvt_PC_Movement_Right_K2Node_InputActionEvent_9
struct Aba_Recycler_Controller_C_InpActEvt_PC_Movement_Right_K2Node_InputActionEvent_9_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ba_Recycler_Controller.ba_Recycler_Controller_C.InpActEvt_PC_Movement_Right_K2Node_InputActionEvent_8
struct Aba_Recycler_Controller_C_InpActEvt_PC_Movement_Right_K2Node_InputActionEvent_8_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ba_Recycler_Controller.ba_Recycler_Controller_C.InpActEvt_Console_Shortcuts_QuickUse2_K2Node_InputActionEvent_7
struct Aba_Recycler_Controller_C_InpActEvt_Console_Shortcuts_QuickUse2_K2Node_InputActionEvent_7_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ba_Recycler_Controller.ba_Recycler_Controller_C.InpActEvt_Console_Shortcuts_QuickUse2_K2Node_InputActionEvent_6
struct Aba_Recycler_Controller_C_InpActEvt_Console_Shortcuts_QuickUse2_K2Node_InputActionEvent_6_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ba_Recycler_Controller.ba_Recycler_Controller_C.InpActEvt_Console_Movement_Right_K2Node_InputActionEvent_5
struct Aba_Recycler_Controller_C_InpActEvt_Console_Movement_Right_K2Node_InputActionEvent_5_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ba_Recycler_Controller.ba_Recycler_Controller_C.InpActEvt_Console_Movement_Right_K2Node_InputActionEvent_4
struct Aba_Recycler_Controller_C_InpActEvt_Console_Movement_Right_K2Node_InputActionEvent_4_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ba_Recycler_Controller.ba_Recycler_Controller_C.InpActEvt_PC_Interaction_Scrap_K2Node_InputActionEvent_3
struct Aba_Recycler_Controller_C_InpActEvt_PC_Interaction_Scrap_K2Node_InputActionEvent_3_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ba_Recycler_Controller.ba_Recycler_Controller_C.InpActEvt_Console_Interaction_Scrap_K2Node_InputActionEvent_2
struct Aba_Recycler_Controller_C_InpActEvt_Console_Interaction_Scrap_K2Node_InputActionEvent_2_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ba_Recycler_Controller.ba_Recycler_Controller_C.InpActEvt_PC_Interaction_AlternativeAttack_K2Node_InputActionEvent_1
struct Aba_Recycler_Controller_C_InpActEvt_PC_Interaction_AlternativeAttack_K2Node_InputActionEvent_1_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ba_Recycler_Controller.ba_Recycler_Controller_C.InpActEvt_PC_Shortcuts_Pause_K2Node_InputActionEvent_0
struct Aba_Recycler_Controller_C_InpActEvt_PC_Shortcuts_Pause_K2Node_InputActionEvent_0_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function ba_Recycler_Controller.ba_Recycler_Controller_C.OnPlayerFocusGainedComponent
struct Aba_Recycler_Controller_C_OnPlayerFocusGainedComponent_Params
{
public:
	class AMainPawnCpp*                          PlayerPawn;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UActorComponent*                       ComponentHit;                                      // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function ba_Recycler_Controller.ba_Recycler_Controller_C.OnPlayerFocusLostComponent
struct Aba_Recycler_Controller_C_OnPlayerFocusLostComponent_Params
{
public:
	class AMainPawnCpp*                          PlayerPawn;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UActorComponent*                       ComponentHit;                                      // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function ba_Recycler_Controller.ba_Recycler_Controller_C.OnInteractionPressedComponent
struct Aba_Recycler_Controller_C_OnInteractionPressedComponent_Params
{
public:
	class AMainPawnCpp*                          PlayerPawn;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UActorComponent*                       ComponentHit;                                      // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ba_Recycler_Controller.ba_Recycler_Controller_C.ReceiveTick
struct Aba_Recycler_Controller_C_ReceiveTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x7F4 (0x7F4 - 0x0)
// Function ba_Recycler_Controller.ba_Recycler_Controller_C.ExecuteUbergraph_ba_Recycler_Controller
struct Aba_Recycler_Controller_C_ExecuteUbergraph_ba_Recycler_Controller_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A89[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  Temp_struct_Variable;                              // 0x8(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_13;                    // 0x20(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_12;                    // 0x38(0x18)(HasGetValueTypeHash)
	struct FKey                                  Temp_struct_Variable_1;                            // 0x50(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_11;                    // 0x68(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_10;                    // 0x80(0x18)(HasGetValueTypeHash)
	struct FKey                                  Temp_struct_Variable_2;                            // 0x98(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_9;                     // 0xB0(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_8;                     // 0xC8(0x18)(HasGetValueTypeHash)
	struct FKey                                  Temp_struct_Variable_3;                            // 0xE0(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_7;                     // 0xF8(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_6;                     // 0x110(0x18)(HasGetValueTypeHash)
	struct FKey                                  Temp_struct_Variable_4;                            // 0x128(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_5;                     // 0x140(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_4;                     // 0x158(0x18)(HasGetValueTypeHash)
	struct FKey                                  Temp_struct_Variable_5;                            // 0x170(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_3;                     // 0x188(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_2;                     // 0x1A0(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_1;                     // 0x1B8(0x18)(HasGetValueTypeHash)
	TArray<struct FAkExternalSourceInfo>         Temp_struct_Variable_6;                            // 0x1D0(0x10)(ConstParm, ReferenceParm)
	FDelegateProperty_                           Temp_delegate_Variable;                            // 0x1E0(0x10)(ConstParm, ZeroConstructor, NoDestructor)
	struct FKey                                  K2Node_InputActionEvent_Key;                       // 0x1F0(0x18)(HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x208(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2AA8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class ACGMovementState>          Temp_class_Variable;                               // 0x210(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TSubclassOf<class ACGMovementState>          Temp_class_Variable_1;                             // 0x218(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_14;                    // 0x220(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_15;                    // 0x238(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_16;                    // 0x250(0x18)(HasGetValueTypeHash)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;   // 0x268(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_17;                    // 0x270(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_18;                    // 0x288(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_19;                    // 0x2A0(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_20;                    // 0x2B8(0x18)(HasGetValueTypeHash)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance;      // 0x2D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BuildSystemGetHasEnoughPower_ReturnValue; // 0x2D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BuildSystemGetHasEnoughPower_ReturnValue_1; // 0x2D9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2ABB[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  K2Node_InputActionEvent_Key_21;                    // 0x2E0(0x18)(HasGetValueTypeHash)
	class AMainPawnCpp*                          K2Node_Event_PlayerPawn_2;                         // 0x2F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UActorComponent*                       K2Node_Event_ComponentHit_2;                       // 0x300(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMainPawnCpp*                          K2Node_Event_PlayerPawn_1;                         // 0x308(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UActorComponent*                       K2Node_Event_ComponentHit_1;                       // 0x310(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMainPawnCpp*                          K2Node_Event_PlayerPawn;                           // 0x318(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UActorComponent*                       K2Node_Event_ComponentHit;                         // 0x320(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x328(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_Storage_v2_Main_C*                CallFunc_Create_ReturnValue;                       // 0x330(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_GetPlayerPawn_ReturnValue;                // 0x338(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                  Temp_struct_Variable_7;                            // 0x340(0x18)(HasGetValueTypeHash)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1; // 0x358(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACGMovementState*                      CallFunc_SetNewMovementState_ReturnValue;          // 0x360(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0x368(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_GetPlayerPawn_ReturnValue_1;              // 0x370(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2; // 0x378(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class ACGMovementState>          K2Node_Select_Default;                             // 0x380(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                        CallFunc_GetTimeSeconds_ReturnValue;               // 0x388(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2ADA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACGMovementState*                      CallFunc_SetNewMovementState_ReturnValue_1;        // 0x390(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetTimeSeconds_ReturnValue_1;             // 0x398(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x39C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x3A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0x3A4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2AE3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_2;        // 0x3A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3; // 0x3B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_22;                    // 0x3B8(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_23;                    // 0x3D0(0x18)(HasGetValueTypeHash)
	struct FKey                                  Temp_struct_Variable_8;                            // 0x3E8(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_24;                    // 0x400(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_25;                    // 0x418(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_26;                    // 0x430(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_27;                    // 0x448(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_28;                    // 0x460(0x18)(HasGetValueTypeHash)
	struct FKey                                  Temp_struct_Variable_9;                            // 0x478(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_29;                    // 0x490(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_30;                    // 0x4A8(0x18)(HasGetValueTypeHash)
	struct FKey                                  Temp_struct_Variable_10;                           // 0x4C0(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_31;                    // 0x4D8(0x18)(HasGetValueTypeHash)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4; // 0x4F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_32;                    // 0x4F8(0x18)(HasGetValueTypeHash)
	struct FVector2D                             CallFunc_GetSize_ReturnValue;                      // 0x510(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_DeltaSeconds;                         // 0x518(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_X;                          // 0x51C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_Y;                          // 0x520(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x524(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x528(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FTrunc_ReturnValue;                       // 0x52C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue_1;             // 0x530(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x534(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NearlyEqual_FloatFloat_ReturnValue;       // 0x535(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x536(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2B0A[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       CallFunc_GetByIndex_ReturnValue;                   // 0x538(0x30)(None)
	struct FCraftingRecipe                       CallFunc_GetDataTableRowFromName_OutRow;           // 0x568(0x108)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x670(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x671(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2B0F[0xE];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemEntry                            CallFunc_GetItemData_Data;                         // 0x680(0x150)(None)
	bool                                         CallFunc_DoesDataTableRowExist_ReturnValue;        // 0x7D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x7D1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x7D2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2B17[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x7D4(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_2B1A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5; // 0x7E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_PostEvent_ReturnValue;                    // 0x7F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ba_Recycler_Controller.ba_Recycler_Controller_C.OnStorageClosed__DelegateSignature
struct Aba_Recycler_Controller_C_OnStorageClosed__DelegateSignature_Params
{
public:
	int32                                        MaxCapacity;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B7F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FInventoryEntry>               ItemsInStorage;                                    // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

}
}


