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

// 0x220 (0x220 - 0x0)
// Function ba_RepairBench_InteractiveObject.ba_RepairBench_InteractiveObject_C.RepairItem
struct Aba_RepairBench_InteractiveObject_C_RepairItem_Params
{
public:
	class FName                                  LocalResourceName;                                 // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventoryEntry                       LocalItem;                                         // 0x8(0x30)(Edit, BlueprintVisible)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_270[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AMainPawnCpp*                          CallFunc_GetCGPawnBase_ReturnValue;                // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance;      // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMainPawnCpp*                          CallFunc_GetCGPawnBase_ReturnValue_1;              // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMainPawnCpp*                          CallFunc_GetCGPawnBase_ReturnValue_2;              // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInventoryComponent2*                  CallFunc_GetCGPlayerInventory_InventoryComponentNew; // 0x68(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           Temp_delegate_Variable;                            // 0x70(0x10)(ConstParm, ZeroConstructor, NoDestructor)
	TArray<struct FAkExternalSourceInfo>         Temp_struct_Variable;                              // 0x80(0x10)(ConstParm, ReferenceParm)
	int32                                        CallFunc_PostEvent_ReturnValue;                    // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_27A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       CallFunc_GetByIndex_ReturnValue;                   // 0x98(0x30)(None)
	class UInventoryComponent2*                  CallFunc_GetCGPlayerInventory_InventoryComponentNew_1; // 0xC8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCraftingRecipe                       CallFunc_GetCraftingRecipe_Recipe;                 // 0xD0(0x108)(None)
	class FName                                  CallFunc_GetInternalItemId_ReturnValue;            // 0x1D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          CallFunc_Map_Keys_Keys;                            // 0x1E0(0x10)(ReferenceParm)
	bool                                         CallFunc_CanBeRepaired_Result;                     // 0x1F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_281[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_Array_Get_Item;                           // 0x1F4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Map_Find_Value;                           // 0x1FC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x200(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_287[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x204(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x208(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x20C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_28D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x210(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Remove_ReturnValue;                       // 0x214(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0x218(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_292[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Remove_ReturnValue_1;                     // 0x21C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x24 (0x24 - 0x0)
// Function ba_RepairBench_InteractiveObject.ba_RepairBench_InteractiveObject_C.GetResourceCountOnPlayerAndStorage
struct Aba_RepairBench_InteractiveObject_C_GetResourceCountOnPlayerAndStorage_Params
{
public:
	class FName                                  Item;                                              // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C1[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AMainPawnCpp*                          CallFunc_GetCGPawnBase_ReturnValue;                // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_CountUID_ReturnValue;                     // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_CountUID_ReturnValue_1;                   // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x350 (0x350 - 0x0)
// Function ba_RepairBench_InteractiveObject.ba_RepairBench_InteractiveObject_C.CanBeRepaired
struct Aba_RepairBench_InteractiveObject_C_CanBeRepaired_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_324[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  LocalResourceName;                                 // 0x4(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_328[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       LocalItem;                                         // 0x10(0x30)(Edit, BlueprintVisible)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetResourceCountOnPlayerAndStorage_ReturnValue; // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCraftingRecipe                       CallFunc_GetCraftingRecipe_Recipe;                 // 0x50(0x108)(None)
	uint8                                        Pad_32E[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemEntry                            CallFunc_GetItemData_Data;                         // 0x160(0x150)(None)
	TArray<class FName>                          CallFunc_Map_Keys_Keys;                            // 0x2B0(0x10)(ReferenceParm)
	class FName                                  CallFunc_Array_Get_Item;                           // 0x2C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                CallFunc_LoadClassAsset_Blocking_ReturnValue;      // 0x2C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class ACGWeapon>                 K2Node_ClassDynamicCast_AsCGWeapon;                // 0x2D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x2D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_335[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Map_Find_Value;                           // 0x2DC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x2E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_337[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x2E4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x2E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x2EC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x2ED(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33C[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x2F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x2F4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_343[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance;      // 0x2F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInventoryComponent2*                  CallFunc_GetCGPlayerInventory_InventoryComponentNew; // 0x300(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInventoryComponent2*                  CallFunc_GetCGPlayerInventory_InventoryComponentNew_1; // 0x308(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetInternalItemId_ReturnValue;            // 0x310(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetWeaponDurability_ReturnValue;          // 0x318(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_FloatFloat_ReturnValue;              // 0x31C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_352[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       CallFunc_GetByIndex_ReturnValue;                   // 0x320(0x30)(None)
};

// 0x18 (0x18 - 0x0)
// Function ba_RepairBench_InteractiveObject.ba_RepairBench_InteractiveObject_C.InpActEvt_PC_Interaction_Use_K2Node_InputActionEvent_32
struct Aba_RepairBench_InteractiveObject_C_InpActEvt_PC_Interaction_Use_K2Node_InputActionEvent_32_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ba_RepairBench_InteractiveObject.ba_RepairBench_InteractiveObject_C.InpActEvt_PC_Interaction_Use_K2Node_InputActionEvent_31
struct Aba_RepairBench_InteractiveObject_C_InpActEvt_PC_Interaction_Use_K2Node_InputActionEvent_31_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ba_RepairBench_InteractiveObject.ba_RepairBench_InteractiveObject_C.InpActEvt_Console_Movement_Jump_K2Node_InputActionEvent_30
struct Aba_RepairBench_InteractiveObject_C_InpActEvt_Console_Movement_Jump_K2Node_InputActionEvent_30_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ba_RepairBench_InteractiveObject.ba_RepairBench_InteractiveObject_C.InpActEvt_Console_Movement_Jump_K2Node_InputActionEvent_29
struct Aba_RepairBench_InteractiveObject_C_InpActEvt_Console_Movement_Jump_K2Node_InputActionEvent_29_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ba_RepairBench_InteractiveObject.ba_RepairBench_InteractiveObject_C.InpActEvt_Console_Movement_Reloading_K2Node_InputActionEvent_28
struct Aba_RepairBench_InteractiveObject_C_InpActEvt_Console_Movement_Reloading_K2Node_InputActionEvent_28_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ba_RepairBench_InteractiveObject.ba_RepairBench_InteractiveObject_C.InpActEvt_Console_Movement_Reloading_K2Node_InputActionEvent_27
struct Aba_RepairBench_InteractiveObject_C_InpActEvt_Console_Movement_Reloading_K2Node_InputActionEvent_27_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ba_RepairBench_InteractiveObject.ba_RepairBench_InteractiveObject_C.InpActEvt_PC_Shortcuts_Grab_K2Node_InputActionEvent_26
struct Aba_RepairBench_InteractiveObject_C_InpActEvt_PC_Shortcuts_Grab_K2Node_InputActionEvent_26_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ba_RepairBench_InteractiveObject.ba_RepairBench_InteractiveObject_C.InpActEvt_PC_Shortcuts_Grab_K2Node_InputActionEvent_25
struct Aba_RepairBench_InteractiveObject_C_InpActEvt_PC_Shortcuts_Grab_K2Node_InputActionEvent_25_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ba_RepairBench_InteractiveObject.ba_RepairBench_InteractiveObject_C.InpActEvt_PC_Interaction_Attack_K2Node_InputActionEvent_24
struct Aba_RepairBench_InteractiveObject_C_InpActEvt_PC_Interaction_Attack_K2Node_InputActionEvent_24_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ba_RepairBench_InteractiveObject.ba_RepairBench_InteractiveObject_C.InpActEvt_PC_Movement_Up_K2Node_InputActionEvent_23
struct Aba_RepairBench_InteractiveObject_C_InpActEvt_PC_Movement_Up_K2Node_InputActionEvent_23_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ba_RepairBench_InteractiveObject.ba_RepairBench_InteractiveObject_C.InpActEvt_Console_Movement_Up_K2Node_InputActionEvent_22
struct Aba_RepairBench_InteractiveObject_C_InpActEvt_Console_Movement_Up_K2Node_InputActionEvent_22_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ba_RepairBench_InteractiveObject.ba_RepairBench_InteractiveObject_C.InpActEvt_Console_Shortcuts_QuickUse1_K2Node_InputActionEvent_21
struct Aba_RepairBench_InteractiveObject_C_InpActEvt_Console_Shortcuts_QuickUse1_K2Node_InputActionEvent_21_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ba_RepairBench_InteractiveObject.ba_RepairBench_InteractiveObject_C.InpActEvt_PC_Movement_Down_K2Node_InputActionEvent_20
struct Aba_RepairBench_InteractiveObject_C_InpActEvt_PC_Movement_Down_K2Node_InputActionEvent_20_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ba_RepairBench_InteractiveObject.ba_RepairBench_InteractiveObject_C.InpActEvt_Console_Movement_Down_K2Node_InputActionEvent_19
struct Aba_RepairBench_InteractiveObject_C_InpActEvt_Console_Movement_Down_K2Node_InputActionEvent_19_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ba_RepairBench_InteractiveObject.ba_RepairBench_InteractiveObject_C.InpActEvt_Console_Shortcuts_QuickUse3_K2Node_InputActionEvent_18
struct Aba_RepairBench_InteractiveObject_C_InpActEvt_Console_Shortcuts_QuickUse3_K2Node_InputActionEvent_18_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ba_RepairBench_InteractiveObject.ba_RepairBench_InteractiveObject_C.InpActEvt_PC_Movement_Left_K2Node_InputActionEvent_17
struct Aba_RepairBench_InteractiveObject_C_InpActEvt_PC_Movement_Left_K2Node_InputActionEvent_17_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ba_RepairBench_InteractiveObject.ba_RepairBench_InteractiveObject_C.InpActEvt_PC_Movement_Left_K2Node_InputActionEvent_16
struct Aba_RepairBench_InteractiveObject_C_InpActEvt_PC_Movement_Left_K2Node_InputActionEvent_16_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ba_RepairBench_InteractiveObject.ba_RepairBench_InteractiveObject_C.InpActEvt_Console_Shortcuts_QuickUse4_K2Node_InputActionEvent_15
struct Aba_RepairBench_InteractiveObject_C_InpActEvt_Console_Shortcuts_QuickUse4_K2Node_InputActionEvent_15_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ba_RepairBench_InteractiveObject.ba_RepairBench_InteractiveObject_C.InpActEvt_Console_Shortcuts_QuickUse4_K2Node_InputActionEvent_14
struct Aba_RepairBench_InteractiveObject_C_InpActEvt_Console_Shortcuts_QuickUse4_K2Node_InputActionEvent_14_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ba_RepairBench_InteractiveObject.ba_RepairBench_InteractiveObject_C.InpActEvt_Console_Movement_Left_K2Node_InputActionEvent_13
struct Aba_RepairBench_InteractiveObject_C_InpActEvt_Console_Movement_Left_K2Node_InputActionEvent_13_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ba_RepairBench_InteractiveObject.ba_RepairBench_InteractiveObject_C.InpActEvt_Console_Movement_Left_K2Node_InputActionEvent_12
struct Aba_RepairBench_InteractiveObject_C_InpActEvt_Console_Movement_Left_K2Node_InputActionEvent_12_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ba_RepairBench_InteractiveObject.ba_RepairBench_InteractiveObject_C.InpActEvt_PC_Movement_Right_K2Node_InputActionEvent_11
struct Aba_RepairBench_InteractiveObject_C_InpActEvt_PC_Movement_Right_K2Node_InputActionEvent_11_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ba_RepairBench_InteractiveObject.ba_RepairBench_InteractiveObject_C.InpActEvt_PC_Movement_Right_K2Node_InputActionEvent_10
struct Aba_RepairBench_InteractiveObject_C_InpActEvt_PC_Movement_Right_K2Node_InputActionEvent_10_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ba_RepairBench_InteractiveObject.ba_RepairBench_InteractiveObject_C.InpActEvt_Console_Shortcuts_QuickUse2_K2Node_InputActionEvent_9
struct Aba_RepairBench_InteractiveObject_C_InpActEvt_Console_Shortcuts_QuickUse2_K2Node_InputActionEvent_9_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ba_RepairBench_InteractiveObject.ba_RepairBench_InteractiveObject_C.InpActEvt_Console_Shortcuts_QuickUse2_K2Node_InputActionEvent_8
struct Aba_RepairBench_InteractiveObject_C_InpActEvt_Console_Shortcuts_QuickUse2_K2Node_InputActionEvent_8_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ba_RepairBench_InteractiveObject.ba_RepairBench_InteractiveObject_C.InpActEvt_Console_Movement_Right_K2Node_InputActionEvent_7
struct Aba_RepairBench_InteractiveObject_C_InpActEvt_Console_Movement_Right_K2Node_InputActionEvent_7_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ba_RepairBench_InteractiveObject.ba_RepairBench_InteractiveObject_C.InpActEvt_Console_Movement_Right_K2Node_InputActionEvent_6
struct Aba_RepairBench_InteractiveObject_C_InpActEvt_Console_Movement_Right_K2Node_InputActionEvent_6_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ba_RepairBench_InteractiveObject.ba_RepairBench_InteractiveObject_C.InpActEvt_PC_Interaction_Scrap_K2Node_InputActionEvent_5
struct Aba_RepairBench_InteractiveObject_C_InpActEvt_PC_Interaction_Scrap_K2Node_InputActionEvent_5_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ba_RepairBench_InteractiveObject.ba_RepairBench_InteractiveObject_C.InpActEvt_Console_Interaction_Scrap_K2Node_InputActionEvent_4
struct Aba_RepairBench_InteractiveObject_C_InpActEvt_Console_Interaction_Scrap_K2Node_InputActionEvent_4_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ba_RepairBench_InteractiveObject.ba_RepairBench_InteractiveObject_C.InpActEvt_PC_Interaction_AlternativeAttack_K2Node_InputActionEvent_3
struct Aba_RepairBench_InteractiveObject_C_InpActEvt_PC_Interaction_AlternativeAttack_K2Node_InputActionEvent_3_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ba_RepairBench_InteractiveObject.ba_RepairBench_InteractiveObject_C.InpActEvt_PC_Interaction_UI_K2Node_InputActionEvent_2
struct Aba_RepairBench_InteractiveObject_C_InpActEvt_PC_Interaction_UI_K2Node_InputActionEvent_2_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ba_RepairBench_InteractiveObject.ba_RepairBench_InteractiveObject_C.InpActEvt_Console_Movement_Crouch_K2Node_InputActionEvent_1
struct Aba_RepairBench_InteractiveObject_C_InpActEvt_Console_Movement_Crouch_K2Node_InputActionEvent_1_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ba_RepairBench_InteractiveObject.ba_RepairBench_InteractiveObject_C.InpActEvt_PC_Shortcuts_Pause_K2Node_InputActionEvent_0
struct Aba_RepairBench_InteractiveObject_C_InpActEvt_PC_Shortcuts_Pause_K2Node_InputActionEvent_0_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function ba_RepairBench_InteractiveObject.ba_RepairBench_InteractiveObject_C.OnInteractionPressedComponent
struct Aba_RepairBench_InteractiveObject_C_OnInteractionPressedComponent_Params
{
public:
	class AMainPawnCpp*                          PlayerPawn;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UActorComponent*                       ComponentHit;                                      // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ba_RepairBench_InteractiveObject.ba_RepairBench_InteractiveObject_C.ReceiveTick
struct Aba_RepairBench_InteractiveObject_C_ReceiveTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x51F (0x51F - 0x0)
// Function ba_RepairBench_InteractiveObject.ba_RepairBench_InteractiveObject_C.ExecuteUbergraph_ba_RepairBench_InteractiveObject
struct Aba_RepairBench_InteractiveObject_C_ExecuteUbergraph_ba_RepairBench_InteractiveObject_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_750[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  K2Node_InputActionEvent_Key_12;                    // 0x8(0x18)(HasGetValueTypeHash)
	struct FKey                                  Temp_struct_Variable;                              // 0x20(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_11;                    // 0x38(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_10;                    // 0x50(0x18)(HasGetValueTypeHash)
	struct FKey                                  Temp_struct_Variable_1;                            // 0x68(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_9;                     // 0x80(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_8;                     // 0x98(0x18)(HasGetValueTypeHash)
	struct FKey                                  Temp_struct_Variable_2;                            // 0xB0(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_7;                     // 0xC8(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_6;                     // 0xE0(0x18)(HasGetValueTypeHash)
	struct FKey                                  Temp_struct_Variable_3;                            // 0xF8(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_5;                     // 0x110(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_4;                     // 0x128(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_3;                     // 0x140(0x18)(HasGetValueTypeHash)
	TArray<struct FAkExternalSourceInfo>         Temp_struct_Variable_4;                            // 0x158(0x10)(ConstParm, ReferenceParm)
	FDelegateProperty_                           Temp_delegate_Variable;                            // 0x168(0x10)(ConstParm, ZeroConstructor, NoDestructor)
	struct FKey                                  K2Node_InputActionEvent_Key_2;                     // 0x178(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_1;                     // 0x190(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key;                       // 0x1A8(0x18)(HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x1C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_76F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class ACGMovementState>          Temp_class_Variable;                               // 0x1C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TSubclassOf<class ACGMovementState>          Temp_class_Variable_1;                             // 0x1D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_15;                    // 0x1D8(0x18)(HasGetValueTypeHash)
	struct FKey                                  Temp_struct_Variable_5;                            // 0x1F0(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_16;                    // 0x208(0x18)(HasGetValueTypeHash)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance;      // 0x220(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BuildSystemGetHasEnoughPower_ReturnValue; // 0x228(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BuildSystemGetHasEnoughPower_ReturnValue_1; // 0x229(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_77D[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetTimeSeconds_ReturnValue;               // 0x22C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetTimeSeconds_ReturnValue_1;             // 0x230(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x234(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_17;                    // 0x238(0x18)(HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x250(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0x254(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_78F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  K2Node_InputActionEvent_Key_18;                    // 0x258(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_19;                    // 0x270(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_20;                    // 0x288(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_21;                    // 0x2A0(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_22;                    // 0x2B8(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_23;                    // 0x2D0(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_24;                    // 0x2E8(0x18)(HasGetValueTypeHash)
	struct FKey                                  Temp_struct_Variable_6;                            // 0x300(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_25;                    // 0x318(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_26;                    // 0x330(0x18)(HasGetValueTypeHash)
	struct FKey                                  Temp_struct_Variable_7;                            // 0x348(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_27;                    // 0x360(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_28;                    // 0x378(0x18)(HasGetValueTypeHash)
	struct FKey                                  Temp_struct_Variable_8;                            // 0x390(0x18)(HasGetValueTypeHash)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;   // 0x3A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_29;                    // 0x3B0(0x18)(HasGetValueTypeHash)
	int32                                        CallFunc_PostEvent_ReturnValue;                    // 0x3C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7BF[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  K2Node_InputActionEvent_Key_30;                    // 0x3D0(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_13;                    // 0x3E8(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_CanBeRepaired_Result;                     // 0x400(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7CC[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AMainPawnCpp*                          K2Node_Event_PlayerPawn;                           // 0x408(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UActorComponent*                       K2Node_Event_ComponentHit;                         // 0x410(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x418(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_GetPlayerPawn_ReturnValue;                // 0x420(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_Storage_v2_Main_C*                CallFunc_Create_ReturnValue;                       // 0x428(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                  Temp_struct_Variable_9;                            // 0x430(0x18)(HasGetValueTypeHash)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1; // 0x448(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x450(0x10)(ZeroConstructor, NoDestructor)
	class ACGMovementState*                      CallFunc_SetNewMovementState_ReturnValue;          // 0x460(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                  Temp_struct_Variable_10;                           // 0x468(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_14;                    // 0x480(0x18)(HasGetValueTypeHash)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2; // 0x498(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0x4A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class ACGMovementState>          K2Node_Select_Default;                             // 0x4A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3; // 0x4B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACGMovementState*                      CallFunc_SetNewMovementState_ReturnValue_1;        // 0x4B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_31;                    // 0x4C0(0x18)(HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_2;        // 0x4D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_GetPlayerPawn_ReturnValue_1;              // 0x4E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_32;                    // 0x4E8(0x18)(HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x500(0x10)(ZeroConstructor, NoDestructor)
	float                                        K2Node_Event_DeltaSeconds;                         // 0x510(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x514(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue_1;             // 0x518(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x51C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NearlyEqual_FloatFloat_ReturnValue;       // 0x51D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x51E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


