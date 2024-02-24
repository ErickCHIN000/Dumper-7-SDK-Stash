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

// 0x2C (0x2C - 0x0)
// Function wid_MainMenu_SubMenu_List.wid_MainMenu_SubMenu_List_C.PlayClickEffect
struct UWid_MainMenu_SubMenu_List_C_PlayClickEffect_Params
{
public:
	TArray<struct FAkExternalSourceInfo>         Temp_struct_Variable;                              // 0x0(0x10)(ConstParm, ReferenceParm)
	FDelegateProperty_                           Temp_delegate_Variable;                            // 0x10(0x10)(ConstParm, ZeroConstructor, NoDestructor)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;   // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_PostEvent_ReturnValue;                    // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function wid_MainMenu_SubMenu_List.wid_MainMenu_SubMenu_List_C.GetSelectedEntry
struct UWid_MainMenu_SubMenu_List_C_GetSelectedEntry_Params
{
public:
	class UWid_MainMenu_SubMenu_List_Entry_C*    SelectedEntry;                                     // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetSelectedEntry_Entry;                   // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UWid_MainMenu_SubMenu_List_Entry_C*    K2Node_DynamicCast_AsWid_Main_Menu_Sub_Menu_List_Entry; // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xB9 (0xB9 - 0x0)
// Function wid_MainMenu_SubMenu_List.wid_MainMenu_SubMenu_List_C.InitEntry
struct UWid_MainMenu_SubMenu_List_C_InitEntry_Params
{
public:
	class UWid_MainMenu_SubMenu_List_Entry_C*    Entry;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsVisible;                                         // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1AE3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               EntryPadding;                                      // 0xC(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                        NewLocalVar_0;                                     // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<TScriptInterface<class ISelectableEntryInterace_C>> SelectableEntries;                                 // 0x20(0x10)(Edit, BlueprintVisible)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1AE8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x3C(0x10)(ZeroConstructor, NoDestructor)
	int32                                        CallFunc_GetSelectedEntryIndex_CurrentlySelected;  // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1AF4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0x58(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_MainMenu_SubMenu_List_Entry_C*    K2Node_DynamicCast_AsWid_Main_Menu_Sub_Menu_List_Entry; // 0x60(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1AFA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class ISelectableEntryInterace_C> CallFunc_Array_Add_NewItem_CastInput;              // 0x70(0x10)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x84(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1B05[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetChildrenCount_ReturnValue;             // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ISelectableEntryOwnerInterface_C> CallFunc_SelectNewEntry_self_CastInput;            // 0x90(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0xA1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0xA2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B18[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0xA8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                      K2Node_DynamicCast_AsVertical_Box_Slot;            // 0xB0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x38 (0x38 - 0x0)
// Function wid_MainMenu_SubMenu_List.wid_MainMenu_SubMenu_List_C.AddBackEntry
struct UWid_MainMenu_SubMenu_List_C_AddBackEntry_Params
{
public:
	bool                                         IsVisible;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1B73[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               Padding;                                           // 0x4(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1B7A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_MainMenu_SubMenu_List_Entry_C*    CallFunc_Create_ReturnValue;                       // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Temp_text_Variable;                                // 0x20(0x18)(ConstParm)
};

// 0x19 (0x19 - 0x0)
// Function wid_MainMenu_SubMenu_List.wid_MainMenu_SubMenu_List_C.ShowList
struct UWid_MainMenu_SubMenu_List_C_ShowList_Params
{
public:
	TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetSelectedEntry_Entry;                   // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UWid_MainMenu_SubMenu_List_Entry_C*    K2Node_DynamicCast_AsWid_Main_Menu_Sub_Menu_List_Entry; // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x29 (0x29 - 0x0)
// Function wid_MainMenu_SubMenu_List.wid_MainMenu_SubMenu_List_C.PlayHideAnimation
struct UWid_MainMenu_SubMenu_List_C_PlayHideAnimation_Params
{
public:
	bool                                         WasMouseClick;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1C08[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetSelectedEntry_Entry;                   // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UWid_MainMenu_SubMenu_List_Entry_C*    K2Node_DynamicCast_AsWid_Main_Menu_Sub_Menu_List_Entry; // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function wid_MainMenu_SubMenu_List.wid_MainMenu_SubMenu_List_C.OnEntryClicked
struct UWid_MainMenu_SubMenu_List_C_OnEntryClicked_Params
{
public:
	int32                                        EntryIndex;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function wid_MainMenu_SubMenu_List.wid_MainMenu_SubMenu_List_C.ClearEntries
struct UWid_MainMenu_SubMenu_List_C_ClearEntries_Params
{
public:
	TArray<TScriptInterface<class ISelectableEntryInterace_C>> K2Node_MakeArray_Array;                            // 0x0(0x10)(ReferenceParm)
};

// 0x48 (0x48 - 0x0)
// Function wid_MainMenu_SubMenu_List.wid_MainMenu_SubMenu_List_C.AddEntry
struct UWid_MainMenu_SubMenu_List_C_AddEntry_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         IsVisible;                                         // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1CA0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               Padding;                                           // 0x1C(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                        NewLocalVar_0;                                     // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<TScriptInterface<class ISelectableEntryInterace_C>> SelectableEntries;                                 // 0x30(0x10)(Edit, BlueprintVisible)
	class UWid_MainMenu_SubMenu_List_Entry_C*    CallFunc_Create_ReturnValue;                       // 0x40(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function wid_MainMenu_SubMenu_List.wid_MainMenu_SubMenu_List_C.EntryClicked__DelegateSignature
struct UWid_MainMenu_SubMenu_List_C_EntryClicked__DelegateSignature_Params
{
public:
	int32                                        NewParam;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


