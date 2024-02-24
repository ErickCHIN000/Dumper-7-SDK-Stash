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
// Function wid_SelectableManager.wid_SelectableManager_C.IncrementValueReleased
struct UWid_SelectableManager_C_IncrementValueReleased_Params
{
public:
	bool                                         CallFunc_IsAnythingSelected_ReturnValue;           // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SelectPreviouslySelected_Result;          // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1AFD[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetSelectedEntry_Entry;                   // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function wid_SelectableManager.wid_SelectableManager_C.DecrementValueReleased
struct UWid_SelectableManager_C_DecrementValueReleased_Params
{
public:
	bool                                         CallFunc_IsAnythingSelected_ReturnValue;           // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SelectPreviouslySelected_Result;          // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1B34[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetSelectedEntry_Entry;                   // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2C (0x2C - 0x0)
// Function wid_SelectableManager.wid_SelectableManager_C.PlaySoundEffect
struct UWid_SelectableManager_C_PlaySoundEffect_Params
{
public:
	TArray<struct FAkExternalSourceInfo>         Temp_struct_Variable;                              // 0x0(0x10)(ConstParm, ReferenceParm)
	FDelegateProperty_                           Temp_delegate_Variable;                            // 0x10(0x10)(ConstParm, ZeroConstructor, NoDestructor)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;   // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_PostEvent_ReturnValue;                    // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function wid_SelectableManager.wid_SelectableManager_C.SelectPreviouslySelected
struct UWid_SelectableManager_C_SelectPreviouslySelected_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsAnythingSelected_ReturnValue;           // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_Get_Item;                           // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x24 (0x24 - 0x0)
// Function wid_SelectableManager.wid_SelectableManager_C.Is Entry Enabled
struct UWid_SelectableManager_C_Is_Entry_Enabled_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Is_Enabled;                                        // 0x4(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1C20[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetEntry_Entry;                           // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UUserWidget*                           K2Node_DynamicCast_AsUser_Widget;                  // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetIsEnabled_ReturnValue;                 // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x23(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x24 (0x24 - 0x0)
// Function wid_SelectableManager.wid_SelectableManager_C.Set Selectable Enabled
struct UWid_SelectableManager_C_Set_Selectable_Enabled_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Is_Enabled;                                        // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1C77[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetEntry_Entry;                           // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UUserWidget*                           K2Node_DynamicCast_AsUser_Widget;                  // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetIsEnabled_ReturnValue;                 // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x23(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3A (0x3A - 0x0)
// Function wid_SelectableManager.wid_SelectableManager_C.Set Selectables Enabled
struct UWid_SelectableManager_C_Set_Selectables_Enabled_Params
{
public:
	bool                                         Is_Enabled;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1CFD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1D09[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_Get_Item;                           // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Select_Default;                             // 0x16(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x17(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class ISelectableEntryInterace_C> CallFunc_Array_Get_Item_1;                         // 0x18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D14[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               K2Node_DynamicCast_AsWidget;                       // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function wid_SelectableManager.wid_SelectableManager_C.IsAnythingSelected
struct UWid_SelectableManager_C_IsAnythingSelected_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function wid_SelectableManager.wid_SelectableManager_C.DecrementValue
struct UWid_SelectableManager_C_DecrementValue_Params
{
public:
	bool                                         CallFunc_SelectPreviouslySelected_Result;          // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsAnythingSelected_ReturnValue;           // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1D9E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetSelectedEntry_Entry;                   // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function wid_SelectableManager.wid_SelectableManager_C.IncrementValue
struct UWid_SelectableManager_C_IncrementValue_Params
{
public:
	bool                                         CallFunc_IsAnythingSelected_ReturnValue;           // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SelectPreviouslySelected_Result;          // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1DDA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetSelectedEntry_Entry;                   // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function wid_SelectableManager.wid_SelectableManager_C.GetSelectedEntryIndex
struct UWid_SelectableManager_C_GetSelectedEntryIndex_Params
{
public:
	int32                                        CurrentlySelected;                                 // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function wid_SelectableManager.wid_SelectableManager_C.GetSelectedEntry
struct UWid_SelectableManager_C_GetSelectedEntry_Params
{
public:
	TScriptInterface<class ISelectableEntryInterace_C> Entry;                                             // 0x0(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetEntry_Entry;                           // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function wid_SelectableManager.wid_SelectableManager_C.GetEntry
struct UWid_SelectableManager_C_GetEntry_Params
{
public:
	int32                                        EntryIndex;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1E67[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class ISelectableEntryInterace_C> Entry;                                             // 0x8(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class ISelectableEntryInterace_C> CallFunc_Array_Get_Item;                           // 0x18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x31 (0x31 - 0x0)
// Function wid_SelectableManager.wid_SelectableManager_C.Select
struct UWid_SelectableManager_C_Select_Params
{
public:
	int32                                        EntryIndex;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PostSoundEvent;                                    // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1EC9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetSelectedEntry_Entry;                   // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsAnythingSelected_ReturnValue;           // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1EE0[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetEntry_Entry;                           // 0x20(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_InRange_IntInt_ReturnValue;               // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x24 (0x24 - 0x0)
// Function wid_SelectableManager.wid_SelectableManager_C.SelectPrevious
struct UWid_SelectableManager_C_SelectPrevious_Params
{
public:
	int32                                        NewIndex;                                          // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SelectPreviouslySelected_Result;          // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F68[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Is_Entry_Enabled_Is_Enabled;              // 0x16(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F80[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Percent_IntInt_ReturnValue;               // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function wid_SelectableManager.wid_SelectableManager_C.SelectNext
struct UWid_SelectableManager_C_SelectNext_Params
{
public:
	int32                                        NewIndex;                                          // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SelectPreviouslySelected_Result;          // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1FF6[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Is_Entry_Enabled_Is_Enabled;              // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x16(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2014[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Percent_IntInt_ReturnValue;               // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// Function wid_SelectableManager.wid_SelectableManager_C.InitSelectableEntries
struct UWid_SelectableManager_C_InitSelectableEntries_Params
{
public:
	TArray<TScriptInterface<class ISelectableEntryInterace_C>> SelectableEntries;                                 // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2082[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class ISelectableEntryInterace_C> CallFunc_Array_Get_Item;                           // 0x20(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UUserWidget*                           K2Node_DynamicCast_AsUser_Widget;                  // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetIsEnabled_ReturnValue;                 // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_208B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x45(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2094[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2098[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class ISelectableEntryOwnerInterface_C> CallFunc_SetSelectableEntryOwner_Owner_CastInput;  // 0x50(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function wid_SelectableManager.wid_SelectableManager_C.SelectNewEntry
struct UWid_SelectableManager_C_SelectNewEntry_Params
{
public:
	int32                                        EntryIndex;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PostSoundEvent;                                    // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function wid_SelectableManager.wid_SelectableManager_C.ExecuteUbergraph_wid_SelectableManager
struct UWid_SelectableManager_C_ExecuteUbergraph_wid_SelectableManager_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_EntryIndex;                           // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_PostSoundEvent;                       // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function wid_SelectableManager.wid_SelectableManager_C.OnSelectedEntryChanged__DelegateSignature
struct UWid_SelectableManager_C_OnSelectedEntryChanged__DelegateSignature_Params
{
public:
	int32                                        EntryIndex;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


