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
// Function wid_Storage_V2_Menu.wid_Storage_V2_Menu_C.OpenMenu
struct UWid_Storage_V2_Menu_C_OpenMenu_Params
{
public:
	class FName                                  NameID;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function wid_Storage_V2_Menu.wid_Storage_V2_Menu_C.PreConstruct
struct UWid_Storage_V2_Menu_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x47C (0x47C - 0x0)
// Function wid_Storage_V2_Menu.wid_Storage_V2_Menu_C.ExecuteUbergraph_wid_Storage_V2_Menu
struct UWid_Storage_V2_Menu_C_ExecuteUbergraph_wid_Storage_V2_Menu_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F28[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_GetPlayerPawn_ReturnValue;                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_Inventory_ButtonInfo          K2Node_MakeStruct_struct_Inventory_ButtonInfo;     // 0x10(0x20)(HasGetValueTypeHash)
	struct FStruct_Inventory_ButtonInfo          K2Node_MakeStruct_struct_Inventory_ButtonInfo_1;   // 0x30(0x20)(UObjectWrapper, HasGetValueTypeHash)
	struct FStruct_Inventory_ButtonInfo          K2Node_MakeStruct_struct_Inventory_ButtonInfo_2;   // 0x50(0x20)(HasGetValueTypeHash)
	TArray<struct FAkExternalSourceInfo>         Temp_struct_Variable;                              // 0x70(0x10)(ConstParm, ReferenceParm)
	FDelegateProperty_                           Temp_delegate_Variable;                            // 0x80(0x10)(ConstParm, ZeroConstructor, NoDestructor)
	TArray<struct FAkExternalSourceInfo>         Temp_struct_Variable_1;                            // 0x90(0x10)(ConstParm, ReferenceParm)
	FDelegateProperty_                           Temp_delegate_Variable_1;                          // 0xA0(0x10)(ConstParm, ZeroConstructor, NoDestructor)
	TArray<struct FAkExternalSourceInfo>         Temp_struct_Variable_2;                            // 0xB0(0x10)(ConstParm, ReferenceParm)
	FDelegateProperty_                           Temp_delegate_Variable_2;                          // 0xC0(0x10)(ConstParm, ZeroConstructor, NoDestructor)
	TArray<struct FAkExternalSourceInfo>         Temp_struct_Variable_3;                            // 0xD0(0x10)(ConstParm, ReferenceParm)
	FDelegateProperty_                           Temp_delegate_Variable_3;                          // 0xE0(0x10)(ConstParm, ZeroConstructor, NoDestructor)
	int32                                        CallFunc_PostEvent_ReturnValue;                    // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F6B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;   // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_Inventory_Grid_Entry_C*           CallFunc_GetCurrentSelection_CurrentSelection;     // 0x100(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetItemInfo_IsValid;                      // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F75[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemEntry                            CallFunc_GetItemInfo_ReturnValue;                  // 0x110(0x150)(None)
	struct FStruct_Inventory_ButtonInfo          K2Node_MakeStruct_struct_Inventory_ButtonInfo_3;   // 0x260(0x20)(HasGetValueTypeHash)
	struct FStruct_Inventory_ButtonModifyInfo    K2Node_MakeStruct_struct_Inventory_ButtonModifyInfo; // 0x280(0xC0)(HasGetValueTypeHash)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1; // 0x340(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_NameID;                         // 0x348(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Count_ReturnValue;                        // 0x350(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x354(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F92[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_FMin_ReturnValue;                         // 0x358(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x35C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_FloatToText_ReturnValue;             // 0x360(0x18)(None)
	class UWid_Inventory_Grid_Entry_C*           CallFunc_GetCurrentSelection_CurrentSelection_1;   // 0x378(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IWid_IInventoryApp_C> CallFunc_ChangeApp_NewApp_CastInput;               // 0x380(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CanBePutToQuickMenu_Result;               // 0x390(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1FAE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_Inventory_Grid_Entry_C*           CallFunc_GetCurrentSelection_CurrentSelection_2;   // 0x398(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_ResourceTransfer_C*               CallFunc_Create_ReturnValue;                       // 0x3A0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x3A8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x3B0(0x28)(UObjectWrapper)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_1;                    // 0x3D8(0x28)(UObjectWrapper)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_2;                    // 0x400(0x28)(UObjectWrapper)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_3;                    // 0x428(0x28)(UObjectWrapper)
	bool                                         CallFunc_CanSplitItem_Result;                      // 0x450(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1FC7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_GetPlayerPawn_ReturnValue_1;              // 0x458(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_GetPlayerPawn_ReturnValue_2;              // 0x460(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_PostEvent_ReturnValue_1;                  // 0x468(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_PostEvent_ReturnValue_2;                  // 0x46C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_GetPlayerPawn_ReturnValue_3;              // 0x470(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_PostEvent_ReturnValue_3;                  // 0x478(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


