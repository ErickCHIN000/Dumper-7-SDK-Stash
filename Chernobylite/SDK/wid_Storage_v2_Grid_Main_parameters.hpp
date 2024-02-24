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

// 0x10 (0x10 - 0x0)
// Function wid_Storage_v2_Grid_Main.wid_Storage_v2_Grid_Main_C.ChangeApp
struct UWid_Storage_v2_Grid_Main_C_ChangeApp_Params
{
public:
	TScriptInterface<class IWid_IInventoryGridApp_C> NextApp;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function wid_Storage_v2_Grid_Main.wid_Storage_v2_Grid_Main_C.GetCurrentSelection
struct UWid_Storage_v2_Grid_Main_C_GetCurrentSelection_Params
{
public:
	class UWid_Inventory_Grid_Entry_C*           CurrentSelection;                                  // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_Inventory_Grid_Entry_C*           CallFunc_GetCurrentSelection_CurrentSelection;     // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function wid_Storage_v2_Grid_Main.wid_Storage_v2_Grid_Main_C.Update
struct UWid_Storage_v2_Grid_Main_C_Update_Params
{
public:
	struct FVector2D                             Size;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsInStorage;                                       // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsInStorageInventory;                              // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IgnoreSelection;                                   // 0xA(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         PerformFullClear;                                  // 0xB(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function wid_Storage_v2_Grid_Main.wid_Storage_v2_Grid_Main_C.GrabItem
struct UWid_Storage_v2_Grid_Main_C_GrabItem_Params
{
public:
	struct FVector2D                             Index;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  ItemId;                                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function wid_Storage_v2_Grid_Main.wid_Storage_v2_Grid_Main_C.NewSelectionGrid
struct UWid_Storage_v2_Grid_Main_C_NewSelectionGrid_Params
{
public:
	struct FVector2D                             Index;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         FromKeyboard;                                      // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function wid_Storage_v2_Grid_Main.wid_Storage_v2_Grid_Main_C.OnMovedGrabPanel
struct UWid_Storage_v2_Grid_Main_C_OnMovedGrabPanel_Params
{
public:
	struct FVector2D                             Index;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function wid_Storage_v2_Grid_Main.wid_Storage_v2_Grid_Main_C.SelectItem
struct UWid_Storage_v2_Grid_Main_C_SelectItem_Params
{
public:
	struct FVector2D                             Idx;                                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function wid_Storage_v2_Grid_Main.wid_Storage_v2_Grid_Main_C.MovedForced
struct UWid_Storage_v2_Grid_Main_C_MovedForced_Params
{
public:
	struct FVector2D                             Index;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x14 (0x14 - 0x0)
// Function wid_Storage_v2_Grid_Main.wid_Storage_v2_Grid_Main_C.SplitItem
struct UWid_Storage_v2_Grid_Main_C_SplitItem_Params
{
public:
	struct FVector2D                             Index;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  ItemId;                                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Amount;                                            // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xF28 (0xF28 - 0x0)
// Function wid_Storage_v2_Grid_Main.wid_Storage_v2_Grid_Main_C.ExecuteUbergraph_wid_Storage_v2_Grid_Main
struct UWid_Storage_v2_Grid_Main_C_ExecuteUbergraph_wid_Storage_v2_Grid_Main_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B77[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_Inventory_ButtonInfo          K2Node_MakeStruct_struct_Inventory_ButtonInfo;     // 0x8(0x20)(HasGetValueTypeHash)
	struct FStruct_Inventory_ButtonInfo          K2Node_MakeStruct_struct_Inventory_ButtonInfo_1;   // 0x28(0x20)(HasGetValueTypeHash)
	struct FStruct_Inventory_ButtonInfo          K2Node_MakeStruct_struct_Inventory_ButtonInfo_2;   // 0x48(0x20)(HasGetValueTypeHash)
	struct FStruct_Inventory_ButtonInfo          K2Node_MakeStruct_struct_Inventory_ButtonInfo_3;   // 0x68(0x20)(HasGetValueTypeHash)
	struct FStruct_Inventory_ButtonInfo          K2Node_MakeStruct_struct_Inventory_ButtonInfo_4;   // 0x88(0x20)(HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xA8(0x10)(ZeroConstructor, NoDestructor)
	struct FStruct_Inventory_ButtonInfo          K2Node_MakeStruct_struct_Inventory_ButtonInfo_5;   // 0xB8(0x20)(HasGetValueTypeHash)
	struct FStruct_Inventory_ButtonInfo          K2Node_MakeStruct_struct_Inventory_ButtonInfo_6;   // 0xD8(0x20)(HasGetValueTypeHash)
	struct FStruct_Inventory_ButtonInfo          K2Node_MakeStruct_struct_Inventory_ButtonInfo_7;   // 0xF8(0x20)(HasGetValueTypeHash)
	struct FStruct_Inventory_ButtonInfo          K2Node_MakeStruct_struct_Inventory_ButtonInfo_8;   // 0x118(0x20)(HasGetValueTypeHash)
	struct FStruct_Inventory_ButtonInfo          K2Node_MakeStruct_struct_Inventory_ButtonInfo_9;   // 0x138(0x20)(HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x158(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x168(0x10)(ZeroConstructor, NoDestructor)
	struct FStruct_Inventory_ButtonInfo          K2Node_MakeStruct_struct_Inventory_ButtonInfo_10;  // 0x178(0x20)(HasGetValueTypeHash)
	struct FStruct_Inventory_ButtonInfo          K2Node_MakeStruct_struct_Inventory_ButtonInfo_11;  // 0x198(0x20)(HasGetValueTypeHash)
	struct FStruct_Inventory_ButtonInfo          K2Node_MakeStruct_struct_Inventory_ButtonInfo_12;  // 0x1B8(0x20)(HasGetValueTypeHash)
	struct FStruct_Inventory_ButtonInfo          K2Node_MakeStruct_struct_Inventory_ButtonInfo_13;  // 0x1D8(0x20)(HasGetValueTypeHash)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;   // 0x1F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x200(0x10)(ZeroConstructor, NoDestructor)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1; // 0x210(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2; // 0x218(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3; // 0x220(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4; // 0x228(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetItemInfo_IsValid;                      // 0x230(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_BD5[0xF];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemEntry                            CallFunc_GetItemInfo_ReturnValue;                  // 0x240(0x150)(None)
	bool                                         CallFunc_GetCanBeDropped_ReturnValue;              // 0x390(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_BE1[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UObject>                   CallFunc_Conv_SoftClassReferenceToClass_ReturnValue; // 0x398(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5; // 0x3A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class ACGActiveItem>             K2Node_ClassDynamicCast_AsCGActive_Item;           // 0x3A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x3B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ClassClass_ReturnValue;        // 0x3B1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_BF4[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6; // 0x3B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x3C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x3C1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x3C2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_BFE[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x3C4(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_GetItemInfo_IsValid_1;                    // 0x3D4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C0A[0xB];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemEntry                            CallFunc_GetItemInfo_ReturnValue_1;                // 0x3E0(0x150)(None)
	bool                                         CallFunc_GetCanBeDropped_ReturnValue_1;            // 0x530(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C12[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UObject>                   CallFunc_Conv_SoftClassReferenceToClass_ReturnValue_1; // 0x538(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7; // 0x540(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class ACGActiveItem>             K2Node_ClassDynamicCast_AsCGActive_Item_1;         // 0x548(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess_1;                // 0x550(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ClassClass_ReturnValue_1;      // 0x551(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetCanBeDropped_ReturnValue_2;            // 0x552(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x553(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C37[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8; // 0x558(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x560(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_3;                 // 0x561(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C42[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_9; // 0x568(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_Inventory_ButtonInfo          K2Node_MakeStruct_struct_Inventory_ButtonInfo_14;  // 0x570(0x20)(HasGetValueTypeHash)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_10; // 0x590(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetItemInfo_IsValid_2;                    // 0x598(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C55[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemEntry                            CallFunc_GetItemInfo_ReturnValue_2;                // 0x5A0(0x150)(None)
	bool                                         CallFunc_GetCanBeDropped_ReturnValue_3;            // 0x6F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C61[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UObject>                   CallFunc_Conv_SoftClassReferenceToClass_ReturnValue_2; // 0x6F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TSubclassOf<class ACGActiveItem>             K2Node_ClassDynamicCast_AsCGActive_Item_2;         // 0x700(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess_2;                // 0x708(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ClassClass_ReturnValue_2;      // 0x709(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_4;                 // 0x70A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x70B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_5;                 // 0x70C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C7B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_Inventory_ButtonInfo          K2Node_MakeStruct_struct_Inventory_ButtonInfo_15;  // 0x710(0x20)(HasGetValueTypeHash)
	struct FVector2D                             K2Node_CustomEvent_Index_4;                        // 0x730(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_ItemID_1;                       // 0x738(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_X;                          // 0x740(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_Y;                          // 0x744(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_11; // 0x748(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IWid_IInventoryGridApp_C> CallFunc_ChangeApp_NextApp_CastInput;              // 0x750(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetItemInfo_IsValid_3;                    // 0x760(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CA0[0xF];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemEntry                            CallFunc_GetItemInfo_ReturnValue_3;                // 0x770(0x150)(None)
	TSubclassOf<class UObject>                   CallFunc_Conv_SoftClassReferenceToClass_ReturnValue_3; // 0x8C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TSubclassOf<class ACGActiveItem>             K2Node_ClassDynamicCast_AsCGActive_Item_3;         // 0x8C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess_3;                // 0x8D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ClassClass_ReturnValue_3;      // 0x8D1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_6;                 // 0x8D2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CB1[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x8D4(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_3;                // 0x8E4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_7;                 // 0x8E5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CC2[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_Inventory_ButtonInfo          K2Node_MakeStruct_struct_Inventory_ButtonInfo_16;  // 0x8E8(0x20)(HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0x908(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_7;            // 0x918(0x10)(ZeroConstructor, NoDestructor)
	struct FVector2D                             K2Node_CustomEvent_Index_3;                        // 0x928(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_FromKeyboard;                   // 0x930(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CD2[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             K2Node_CustomEvent_Index_2;                        // 0x934(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_X_1;                        // 0x93C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_Y_1;                        // 0x940(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             K2Node_Event_Idx;                                  // 0x944(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x94C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue_1;      // 0x94D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CE3[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             K2Node_CustomEvent_Index_1;                        // 0x950(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue_2;      // 0x958(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CE9[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_Inventory_Grid_Entry_C*           CallFunc_GetAt_OutputPin;                          // 0x960(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_Inventory_Grid_Entry_C*           CallFunc_GetCurrentSelection_CurrentSelection;     // 0x968(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_Inventory_Grid_Entry_C*           CallFunc_GetCurrentSelection_CurrentSelection_1;   // 0x970(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanBeRemoved_Result;                      // 0x978(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CanBeGrabbed_Result;                      // 0x979(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_8;                 // 0x97A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_D0D[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_Inventory_ButtonInfo          K2Node_MakeStruct_struct_Inventory_ButtonInfo_17;  // 0x980(0x20)(HasGetValueTypeHash)
	struct FStruct_Inventory_ButtonInfo          K2Node_MakeStruct_struct_Inventory_ButtonInfo_18;  // 0x9A0(0x20)(HasGetValueTypeHash)
	bool                                         CallFunc_CanBeUsed_ReturnValue;                    // 0x9C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CanBePutToQuickMenu_Result;               // 0x9C1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_D1A[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_Inventory_ButtonInfo          K2Node_MakeStruct_struct_Inventory_ButtonInfo_19;  // 0x9C8(0x20)(HasGetValueTypeHash)
	struct FVector2D                             CallFunc_GetTileSize_TileSize;                     // 0x9E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_12; // 0x9F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_GetMaxSize_ReturnValue;                   // 0x9F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_13; // 0xA00(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_X_2;                        // 0xA08(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_Y_2;                        // 0xA0C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0xA10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_D3B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             CallFunc_GetMaxSize_ReturnValue_1;                 // 0xA14(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_4;                // 0xA1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_D43[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_BreakVector2D_X_3;                        // 0xA20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_Y_3;                        // 0xA24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue_1;         // 0xA28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_D4E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IWid_IInventoryGridApp_C> CallFunc_ChangeApp_NextApp_CastInput_1;            // 0xA30(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class IWid_IInventoryGridApp_C> CallFunc_ChangeApp_NextApp_CastInput_2;            // 0xA40(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                             K2Node_CustomEvent_Index;                          // 0xA50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_ItemID;                         // 0xA58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_CustomEvent_Amount;                         // 0xA60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_X_4;                        // 0xA64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_Y_4;                        // 0xA68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_D67[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IWid_IInventoryGridApp_C> CallFunc_ChangeApp_NextApp_CastInput_3;            // 0xA70(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                             CallFunc_GetTileSize_TileSize_1;                   // 0xA80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_14; // 0xA88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanSplitItem_Result;                      // 0xA90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_D76[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_Inventory_ButtonInfo          K2Node_MakeStruct_struct_Inventory_ButtonInfo_20;  // 0xA98(0x20)(HasGetValueTypeHash)
	struct FVector2D                             CallFunc_GetMaxSize_ReturnValue_2;                 // 0xAB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_Inventory_ButtonModifyInfo    K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo; // 0xAC0(0xC0)(HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_X_5;                        // 0xB80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_Y_5;                        // 0xB84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue_2;         // 0xB88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_5;                // 0xB89(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue_3;      // 0xB8A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CanSplitItem_Result_1;                    // 0xB8B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_D8B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_Inventory_ButtonInfo          K2Node_MakeStruct_struct_Inventory_ButtonInfo_21;  // 0xB90(0x20)(HasGetValueTypeHash)
	bool                                         CallFunc_CanSplitItem_Result_2;                    // 0xBB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_D94[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_Inventory_ButtonModifyInfo    K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo_1; // 0xBB8(0xC0)(HasGetValueTypeHash)
	struct FStruct_Inventory_ButtonInfo          K2Node_MakeStruct_struct_Inventory_ButtonInfo_22;  // 0xC78(0x20)(HasGetValueTypeHash)
	struct FStruct_Inventory_ButtonModifyInfo    K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo_2; // 0xC98(0xC0)(HasGetValueTypeHash)
	bool                                         CallFunc_CanSplitItem_Result_3;                    // 0xD58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_DB9[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_Inventory_ButtonInfo          K2Node_MakeStruct_struct_Inventory_ButtonInfo_23;  // 0xD60(0x20)(HasGetValueTypeHash)
	bool                                         CallFunc_CanSplitItem_Result_4;                    // 0xD80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_DBF[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_Inventory_ButtonModifyInfo    K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo_3; // 0xD88(0xC0)(HasGetValueTypeHash)
	struct FStruct_Inventory_ButtonInfo          K2Node_MakeStruct_struct_Inventory_ButtonInfo_24;  // 0xE48(0x20)(HasGetValueTypeHash)
	struct FStruct_Inventory_ButtonModifyInfo    K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo_4; // 0xE68(0xC0)(HasGetValueTypeHash)
};

// 0xC0 (0xC0 - 0x0)
// Function wid_Storage_v2_Grid_Main.wid_Storage_v2_Grid_Main_C.UpdateButtons__DelegateSignature
struct UWid_Storage_v2_Grid_Main_C_UpdateButtons__DelegateSignature_Params
{
public:
	struct FStruct_Inventory_ButtonModifyInfo    Info;                                              // 0x0(0xC0)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function wid_Storage_v2_Grid_Main.wid_Storage_v2_Grid_Main_C.NewSelection__DelegateSignature
struct UWid_Storage_v2_Grid_Main_C_NewSelection__DelegateSignature_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         FromKeyboard;                                      // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


