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

// 0x54 (0x54 - 0x0)
// Function wid_Storage_Main.wid_Storage_Main_C.SelectNewGrid
struct UWid_Storage_Main_C_SelectNewGrid_Params
{
public:
	bool                                         Main;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Storage;                                           // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Mini;                                              // 0x2(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_602[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           Temp_delegate_Variable;                            // 0x4(0x10)(ConstParm, ZeroConstructor, NoDestructor)
	uint8                                        Pad_605[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_Inventory_Grid_Entry_C*           CallFunc_GetCurrentSelection_CurrentSelection;     // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_Inventory_Grid_Entry_C*           CallFunc_GetCurrentSelection_CurrentSelection_1;   // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_60B[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_GetPlayerPawn_ReturnValue;                // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_610[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAkExternalSourceInfo>         Temp_struct_Variable;                              // 0x40(0x10)(ConstParm, ReferenceParm)
	int32                                        CallFunc_PostEvent_ReturnValue;                    // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x84 (0x84 - 0x0)
// Function wid_Storage_Main.wid_Storage_Main_C.MoveAllResourcesToStorage
struct UWid_Storage_Main_C_MoveAllResourcesToStorage_Params
{
public:
	float                                        CurrentItemAmount;                                 // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           Temp_delegate_Variable;                            // 0x4(0x10)(ConstParm, ZeroConstructor, NoDestructor)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FAkExternalSourceInfo>         Temp_struct_Variable;                              // 0x20(0x10)(ConstParm, ReferenceParm)
	TArray<enum class EResourceType>             K2Node_MakeArray_Array;                            // 0x30(0x10)(ReferenceParm)
	enum class EResourceType                     CallFunc_Array_Get_Item;                           // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_68F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_GetNameByResource_ReturnValue;            // 0x44(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EResourceType                     CallFunc_GetResourceByName_ReturnValue;            // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_698[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;   // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_PostEvent_ReturnValue;                    // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_69D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1; // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Remove_ReturnValue;                       // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_69E[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2; // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Count_ReturnValue;                        // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function wid_Storage_Main.wid_Storage_Main_C.ChangeApp
struct UWid_Storage_Main_C_ChangeApp_Params
{
public:
	TScriptInterface<class IWid_IInventoryApp_C> NewApp;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function wid_Storage_Main.wid_Storage_Main_C.PreConstruct
struct UWid_Storage_Main_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC0 (0xC0 - 0x0)
// Function wid_Storage_Main.wid_Storage_Main_C.UpdateButtonsStorage
struct UWid_Storage_Main_C_UpdateButtonsStorage_Params
{
public:
	struct FStruct_Inventory_ButtonModifyInfo    Info;                                              // 0x0(0xC0)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0xC0 (0xC0 - 0x0)
// Function wid_Storage_Main.wid_Storage_Main_C.CustomEvent_0
struct UWid_Storage_Main_C_CustomEvent_0_Params
{
public:
	struct FStruct_Inventory_ButtonModifyInfo    Info;                                              // 0x0(0xC0)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0xC0 (0xC0 - 0x0)
// Function wid_Storage_Main.wid_Storage_Main_C.CustomEvent_1
struct UWid_Storage_Main_C_CustomEvent_1_Params
{
public:
	struct FStruct_Inventory_ButtonModifyInfo    Info;                                              // 0x0(0xC0)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function wid_Storage_Main.wid_Storage_Main_C.NewSelection
struct UWid_Storage_Main_C_NewSelection_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         FromKeyboard;                                      // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function wid_Storage_Main.wid_Storage_Main_C.CustomEvent_2
struct UWid_Storage_Main_C_CustomEvent_2_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xDA4 (0xDA4 - 0x0)
// Function wid_Storage_Main.wid_Storage_Main_C.ExecuteUbergraph_wid_Storage_Main
struct UWid_Storage_Main_C_ExecuteUbergraph_wid_Storage_Main_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_Name;                           // 0x4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B40[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_Inventory_ButtonInfo          K2Node_MakeStruct_struct_Inventory_ButtonInfo;     // 0x10(0x20)(HasGetValueTypeHash)
	struct FStruct_Inventory_ButtonInfo          K2Node_MakeStruct_struct_Inventory_ButtonInfo_1;   // 0x30(0x20)(HasGetValueTypeHash)
	struct FStruct_Inventory_ButtonInfo          K2Node_MakeStruct_struct_Inventory_ButtonInfo_2;   // 0x50(0x20)(HasGetValueTypeHash)
	struct FStruct_Inventory_ButtonInfo          K2Node_MakeStruct_struct_Inventory_ButtonInfo_3;   // 0x70(0x20)(HasGetValueTypeHash)
	struct FStruct_Inventory_ButtonInfo          K2Node_MakeStruct_struct_Inventory_ButtonInfo_4;   // 0x90(0x20)(HasGetValueTypeHash)
	struct FStruct_Inventory_ButtonInfo          K2Node_MakeStruct_struct_Inventory_ButtonInfo_5;   // 0xB0(0x20)(HasGetValueTypeHash)
	struct FStruct_Inventory_ButtonInfo          K2Node_MakeStruct_struct_Inventory_ButtonInfo_6;   // 0xD0(0x20)(HasGetValueTypeHash)
	struct FStruct_Inventory_ButtonInfo          K2Node_MakeStruct_struct_Inventory_ButtonInfo_7;   // 0xF0(0x20)(HasGetValueTypeHash)
	struct FStruct_Inventory_ButtonInfo          K2Node_MakeStruct_struct_Inventory_ButtonInfo_8;   // 0x110(0x20)(HasGetValueTypeHash)
	class UWid_InventoryMenu_C*                  CallFunc_Create_ReturnValue;                       // 0x130(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x138(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x148(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x158(0x10)(ZeroConstructor, NoDestructor)
	class UWid_Inventory_Grid_Entry_C*           CallFunc_GetAt_OutputPin;                          // 0x168(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue;            // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x171(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_B5E[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_Inventory_Grid_Entry_C*           CallFunc_GetAt_OutputPin_1;                        // 0x178(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_Inventory_ButtonInfo          K2Node_MakeStruct_struct_Inventory_ButtonInfo_9;   // 0x180(0x20)(HasGetValueTypeHash)
	class APawn*                                 CallFunc_GetPlayerPawn_ReturnValue;                // 0x1A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1A9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_B6C[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_Inventory_Grid_Entry_C*           CallFunc_GetCurrentSelection_CurrentSelection;     // 0x1B0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IWid_IInventoryApp_C> CallFunc_ChangeApp_NewApp_CastInput;               // 0x1B8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        CallFunc_BreakVector2D_X;                          // 0x1C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_Y;                          // 0x1CC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x1D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_FloatFloat_ReturnValue;              // 0x1D4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_B73[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0x1D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_FloatFloat_ReturnValue;        // 0x1E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_B7D[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IWid_IInventoryApp_C> CallFunc_ChangeApp_NewApp_CastInput_1;             // 0x1E8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UWid_Inventory_Grid_Entry_C*           CallFunc_GetAt_OutputPin_2;                        // 0x1F8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_Inventory_ButtonInfo          K2Node_MakeStruct_struct_Inventory_ButtonInfo_10;  // 0x200(0x20)(HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_X_1;                        // 0x220(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_Y_1;                        // 0x224(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_FloatFloat_ReturnValue_1;      // 0x228(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_B90[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_Inventory_Grid_Entry_C*           CallFunc_GetCurrentSelection_CurrentSelection_1;   // 0x230(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_Inventory_Grid_Entry_C*           CallFunc_GetCurrentSelection_CurrentSelection_2;   // 0x238(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_GetPlayerPawn_ReturnValue_1;              // 0x240(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x248(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x249(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_B9F[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_Inventory_ButtonInfo          K2Node_MakeStruct_struct_Inventory_ButtonInfo_11;  // 0x250(0x20)(HasGetValueTypeHash)
	class UWid_Inventory_Grid_Entry_C*           CallFunc_GetCurrentSelection_CurrentSelection_3;   // 0x270(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_Inventory_Grid_Entry_C*           CallFunc_GetCurrentSelection_CurrentSelection_4;   // 0x278(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x280(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_BB6[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_GetPlayerPawn_ReturnValue_2;              // 0x288(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x290(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_3;                // 0x2A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x2A1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_3;                 // 0x2A2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_BC8[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_Inventory_Grid_Entry_C*           CallFunc_GetCurrentSelection_CurrentSelection_5;   // 0x2A8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_X_2;                        // 0x2B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_Y_2;                        // 0x2B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x2B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_FloatFloat_ReturnValue_2;      // 0x2B9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_BDC[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_Inventory_Grid_Entry_C*           CallFunc_GetCurrentSelection_CurrentSelection_6;   // 0x2C0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_Inventory_Grid_Entry_C*           CallFunc_GetCurrentSelection_CurrentSelection_7;   // 0x2C8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x2D0(0x10)(ZeroConstructor, NoDestructor)
	class APawn*                                 CallFunc_GetPlayerPawn_ReturnValue_3;              // 0x2E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_GetPlayerPawn_ReturnValue_4;              // 0x2E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_4;                // 0x2F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_4;                 // 0x2F1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x2F2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_BF6[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IWid_IInventoryApp_C> CallFunc_ChangeApp_NewApp_CastInput_2;             // 0x2F8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        CallFunc_BreakVector2D_X_3;                        // 0x308(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_Y_3;                        // 0x30C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue_1;               // 0x310(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_Inventory_Grid_Entry_C*           CallFunc_GetAt_OutputPin_3;                        // 0x318(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_5;                // 0x320(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_5;                 // 0x321(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_2;                    // 0x322(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C28[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_GetPlayerPawn_ReturnValue_5;              // 0x328(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x330(0x10)(ZeroConstructor, NoDestructor)
	class UWid_Inventory_Grid_Entry_C*           CallFunc_GetCurrentSelection_CurrentSelection_8;   // 0x340(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_Inventory_Grid_Entry_C*           CallFunc_GetCurrentSelection_CurrentSelection_9;   // 0x348(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           Temp_delegate_Variable;                            // 0x350(0x10)(ConstParm, ZeroConstructor, NoDestructor)
	class UWid_Inventory_Grid_Entry_C*           CallFunc_GetCurrentSelection_CurrentSelection_10;  // 0x360(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_Inventory_Grid_Entry_C*           CallFunc_GetCurrentSelection_CurrentSelection_11;  // 0x368(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FAkExternalSourceInfo>         Temp_struct_Variable;                              // 0x370(0x10)(ConstParm, ReferenceParm)
	class UWid_Inventory_Grid_Entry_C*           CallFunc_GetCurrentSelection_CurrentSelection_12;  // 0x380(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_Inventory_Grid_Entry_C*           CallFunc_GetCurrentSelection_CurrentSelection_13;  // 0x388(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           Temp_delegate_Variable_1;                          // 0x390(0x10)(ConstParm, ZeroConstructor, NoDestructor)
	class UWid_Inventory_Grid_Entry_C*           CallFunc_GetCurrentSelection_CurrentSelection_14;  // 0x3A0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_X_4;                        // 0x3A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_Y_4;                        // 0x3AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x3B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue_2;               // 0x3B4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_6;                // 0x3BC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C80[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_Inventory_Grid_Entry_C*           CallFunc_GetAt_OutputPin_4;                        // 0x3C0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_6;                 // 0x3C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C89[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAkExternalSourceInfo>         Temp_struct_Variable_1;                            // 0x3D0(0x10)(ConstParm, ReferenceParm)
	class APawn*                                 CallFunc_GetPlayerPawn_ReturnValue_6;              // 0x3E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           Temp_delegate_Variable_2;                          // 0x3E8(0x10)(ConstParm, ZeroConstructor, NoDestructor)
	TArray<struct FAkExternalSourceInfo>         Temp_struct_Variable_2;                            // 0x3F8(0x10)(ConstParm, ReferenceParm)
	FDelegateProperty_                           Temp_delegate_Variable_3;                          // 0x408(0x10)(ConstParm, ZeroConstructor, NoDestructor)
	int32                                        CallFunc_PostEvent_ReturnValue;                    // 0x418(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_C9D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_GetPlayerPawn_ReturnValue_7;              // 0x420(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FAkExternalSourceInfo>         Temp_struct_Variable_3;                            // 0x428(0x10)(ConstParm, ReferenceParm)
	int32                                        CallFunc_PostEvent_ReturnValue_1;                  // 0x438(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_PostEvent_ReturnValue_2;                  // 0x43C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_3;                    // 0x440(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CBF[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_GetPlayerPawn_ReturnValue_8;              // 0x448(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_7;                // 0x450(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CC5[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_PostEvent_ReturnValue_3;                  // 0x454(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_7;                 // 0x458(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_8;                // 0x459(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CD4[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_Inventory_Grid_Entry_C*           CallFunc_GetCurrentSelection_CurrentSelection_15;  // 0x460(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_8;                 // 0x468(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CD9[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_BreakVector2D_X_5;                        // 0x46C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_Y_5;                        // 0x470(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_FloatFloat_ReturnValue_3;      // 0x474(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CDD[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue_3;               // 0x478(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue_1;          // 0x480(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CE4[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_Inventory_Grid_Entry_C*           CallFunc_GetAt_OutputPin_5;                        // 0x488(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           Temp_delegate_Variable_4;                          // 0x490(0x10)(ConstParm, ZeroConstructor, NoDestructor)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;   // 0x4A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FAkExternalSourceInfo>         Temp_struct_Variable_4;                            // 0x4A8(0x10)(ConstParm, ReferenceParm)
	int32                                        CallFunc_PostEvent_ReturnValue_4;                  // 0x4B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_CF1[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1; // 0x4C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetCanBeDropped_ReturnValue;              // 0x4C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CF3[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_Inventory_ButtonInfo          K2Node_MakeStruct_struct_Inventory_ButtonInfo_12;  // 0x4D0(0x20)(HasGetValueTypeHash)
	FDelegateProperty_                           Temp_delegate_Variable_5;                          // 0x4F0(0x10)(ConstParm, ZeroConstructor, NoDestructor)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2; // 0x500(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetCanBeDropped_ReturnValue_1;            // 0x508(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CFD[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_Inventory_ButtonInfo          K2Node_MakeStruct_struct_Inventory_ButtonInfo_13;  // 0x510(0x20)(HasGetValueTypeHash)
	struct FStruct_Inventory_ButtonModifyInfo    K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo; // 0x530(0xC0)(HasGetValueTypeHash)
	TArray<struct FAkExternalSourceInfo>         Temp_struct_Variable_5;                            // 0x5F0(0x10)(ConstParm, ReferenceParm)
	int32                                        CallFunc_PostEvent_ReturnValue_5;                  // 0x600(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetCanBeDropped_ReturnValue_2;            // 0x604(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_D06[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_Inventory_ButtonInfo          K2Node_MakeStruct_struct_Inventory_ButtonInfo_14;  // 0x608(0x20)(HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x628(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_D11[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3; // 0x630(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IWid_IInventoryApp_C> CallFunc_ChangeApp_NewApp_CastInput_3;             // 0x638(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FStruct_Inventory_ButtonInfo          K2Node_MakeStruct_struct_Inventory_ButtonInfo_15;  // 0x648(0x20)(HasGetValueTypeHash)
	struct FStruct_Inventory_ButtonModifyInfo    K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo_1; // 0x668(0xC0)(HasGetValueTypeHash)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4; // 0x728(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CloseInventory_ReturnValue;               // 0x730(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_D26[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IWid_IInventoryApp_C> CallFunc_Start_self_CastInput;                     // 0x738(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	struct FVector2D                             CallFunc_GetDesiredSize_ReturnValue;               // 0x748(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_Inventory_Grid_Entry_C*           CallFunc_GetCurrentSelection_CurrentSelection_16;  // 0x750(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue_2;          // 0x758(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_D63[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_Inventory_Grid_Entry_C*           CallFunc_GetCurrentSelection_CurrentSelection_17;  // 0x760(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_Inventory_Grid_Entry_C*           CallFunc_GetCurrentSelection_CurrentSelection_18;  // 0x768(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IWid_IInventoryApp_C> CallFunc_ChangeApp_NewApp_CastInput_4;             // 0x770(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class IWid_IInventoryApp_C> CallFunc_ChangeApp_NewApp_CastInput_5;             // 0x780(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                             CallFunc_GetDesiredSize_ReturnValue_1;             // 0x790(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IWid_IInventoryApp_C> CallFunc_Start_self_CastInput_1;                   // 0x798(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5; // 0x7A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_Inventory_ButtonModifyInfo    K2Node_CustomEvent_Info_2;                         // 0x7B0(0xC0)(HasGetValueTypeHash)
	class UWid_Inventory_Grid_Entry_C*           CallFunc_GetCurrentSelection_CurrentSelection_19;  // 0x870(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                      CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x878(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_GetSize_ReturnValue;                      // 0x880(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue_3;          // 0x888(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_D90[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_Inventory_Grid_Entry_C*           CallFunc_GetCurrentSelection_CurrentSelection_20;  // 0x890(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_Inventory_Grid_Entry_C*           CallFunc_GetCurrentSelection_CurrentSelection_21;  // 0x898(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue_4;          // 0x8A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_D9B[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_Inventory_Grid_Entry_C*           CallFunc_GetCurrentSelection_CurrentSelection_22;  // 0x8A8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_Inventory_Grid_Entry_C*           CallFunc_GetCurrentSelection_CurrentSelection_23;  // 0x8B0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           Temp_delegate_Variable_6;                          // 0x8B8(0x10)(ConstParm, ZeroConstructor, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_9;                // 0x8C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_DA7[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_Conv_InterfaceToObject_ReturnValue;       // 0x8D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x8D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_10;               // 0x8D9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanNAND_ReturnValue;                  // 0x8DA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_DB0[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_Conv_InterfaceToObject_ReturnValue_1;     // 0x8E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_11;               // 0x8E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x8E9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanNAND_ReturnValue_1;                // 0x8EA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue_5;          // 0x8EB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        CallFunc_Subtract_ByteByte_ReturnValue;            // 0x8EC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_DC7[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_Inventory_Grid_Entry_C*           CallFunc_GetCurrentSelection_CurrentSelection_24;  // 0x8F0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Add_ByteByte_ReturnValue;                 // 0x8F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Percent_ByteByte_ReturnValue;             // 0x8F9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Add_ByteByte_ReturnValue_1;               // 0x8FA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue;                // 0x8FB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Percent_ByteByte_ReturnValue_1;           // 0x8FC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue_1;              // 0x8FD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_DDA[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAkExternalSourceInfo>         Temp_struct_Variable_6;                            // 0x900(0x10)(ConstParm, ReferenceParm)
	int32                                        CallFunc_PostEvent_ReturnValue_6;                  // 0x910(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           Temp_delegate_Variable_7;                          // 0x914(0x10)(ConstParm, ZeroConstructor, NoDestructor)
	uint8                                        Pad_DE5[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAkExternalSourceInfo>         Temp_struct_Variable_7;                            // 0x928(0x10)(ConstParm, ReferenceParm)
	class UWid_Inventory_Grid_Entry_C*           CallFunc_GetCurrentSelection_CurrentSelection_25;  // 0x938(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_PostEvent_ReturnValue_7;                  // 0x940(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_DF1[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_Inventory_ButtonModifyInfo    K2Node_CustomEvent_Info_1;                         // 0x948(0xC0)(HasGetValueTypeHash)
	struct FStruct_Inventory_ButtonModifyInfo    K2Node_CustomEvent_Info;                           // 0xA08(0xC0)(HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0xAC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance;      // 0xAD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_Inventory_ButtonInfo          K2Node_MakeStruct_struct_Inventory_ButtonInfo_16;  // 0xAD8(0x20)(HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_4;                    // 0xAF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0xAF9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue_1;      // 0xAFA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LastInputWasFromGamepad_Gamepad;          // 0xAFB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue_2;      // 0xAFC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue_3;      // 0xAFD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LastInputWasFromGamepad_Gamepad_1;        // 0xAFE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E22[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6; // 0xB00(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_Inventory_Grid_Entry_C*           CallFunc_GetCurrentSelection_CurrentSelection_26;  // 0xB08(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_Inventory_Grid_Entry_C*           CallFunc_GetCurrentSelection_CurrentSelection_27;  // 0xB10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue_4;      // 0xB18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetItemInfo_IsValid;                      // 0xB19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E2E[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemEntry                            CallFunc_GetItemInfo_ReturnValue;                  // 0xB20(0x150)(None)
	struct FStruct_Inventory_ButtonInfo          K2Node_MakeStruct_struct_Inventory_ButtonInfo_17;  // 0xC70(0x20)(HasGetValueTypeHash)
	struct FStruct_Inventory_ButtonModifyInfo    K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo_2; // 0xC90(0xC0)(HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0xD50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E3E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue_4;               // 0xD54(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E41[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_Inventory_Grid_Entry_C*           CallFunc_GetAt_OutputPin_6;                        // 0xD60(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_2;    // 0xD68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_9;                 // 0xD69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E4D[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           Temp_delegate_Variable_8;                          // 0xD6C(0x10)(ConstParm, ZeroConstructor, NoDestructor)
	uint8                                        Pad_E50[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAkExternalSourceInfo>         Temp_struct_Variable_8;                            // 0xD80(0x10)(ConstParm, ReferenceParm)
	class FName                                  K2Node_CustomEvent_Name_1;                         // 0xD90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_FromKeyboard;                   // 0xD98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E8F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_PostEvent_ReturnValue_8;                  // 0xD9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue_6;          // 0xDA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LastInputWasFromGamepad_Gamepad_2;        // 0xDA1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0xDA2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_10;                // 0xDA3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


