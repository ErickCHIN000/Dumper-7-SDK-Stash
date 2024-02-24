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

// 0x4 (0x4 - 0x0)
// Function wid_LoadDay_List_Entry.wid_LoadDay_List_Entry_C.GetEntryIndex
struct UWid_LoadDay_List_Entry_C_GetEntryIndex_Params
{
public:
	int32                                        EntryIndex;                                        // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function wid_LoadDay_List_Entry.wid_LoadDay_List_Entry_C.Init
struct UWid_LoadDay_List_Entry_C_Init_Params
{
public:
	class FString                                SaveName;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                  DayText;                                           // 0x10(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x58 (0x58 - 0x0)
// Function wid_LoadDay_List_Entry.wid_LoadDay_List_Entry_C.PlayClickEffect
struct UWid_LoadDay_List_Entry_C_PlayClickEffect_Params
{
public:
	TArray<struct FAkExternalSourceInfo>         Temp_struct_Variable;                              // 0x0(0x10)(ConstParm, ReferenceParm)
	FDelegateProperty_                           Temp_delegate_Variable;                            // 0x10(0x10)(ConstParm, ZeroConstructor, NoDestructor)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;   // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_PostEvent_ReturnValue;                    // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B7C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x30(0x28)(UObjectWrapper)
};

// 0x3D (0x3D - 0x0)
// Function wid_LoadDay_List_Entry.wid_LoadDay_List_Entry_C.SetSelected
struct UWid_LoadDay_List_Entry_C_SetSelected_Params
{
public:
	bool                                         IsSelected;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         PlaySoundEffect;                                   // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1BF8[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAkExternalSourceInfo>         Temp_struct_Variable;                              // 0x8(0x10)(ConstParm, ReferenceParm)
	FDelegateProperty_                           Temp_delegate_Variable;                            // 0x18(0x10)(ConstParm, ZeroConstructor, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x2B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1C0B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;   // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_PostEvent_ReturnValue;                    // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function wid_LoadDay_List_Entry.wid_LoadDay_List_Entry_C.SetSelectableEntryOwner
struct UWid_LoadDay_List_Entry_C_SetSelectableEntryOwner_Params
{
public:
	TScriptInterface<class ISelectableEntryOwnerInterface_C> Owner;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function wid_LoadDay_List_Entry.wid_LoadDay_List_Entry_C.Select
struct UWid_LoadDay_List_Entry_C_Select_Params
{
public:
	bool                                         IsSelected;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         PostSoundEvent;                                    // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function wid_LoadDay_List_Entry.wid_LoadDay_List_Entry_C.SetEntryIndex
struct UWid_LoadDay_List_Entry_C_SetEntryIndex_Params
{
public:
	int32                                        EntryIndex;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function wid_LoadDay_List_Entry.wid_LoadDay_List_Entry_C.PreConstruct
struct UWid_LoadDay_List_Entry_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xD0 (0xD0 - 0x0)
// Function wid_LoadDay_List_Entry.wid_LoadDay_List_Entry_C.ExecuteUbergraph_wid_LoadDay_List_Entry
struct UWid_LoadDay_List_Entry_C_ExecuteUbergraph_wid_LoadDay_List_Entry_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1D88[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class ISelectableEntryOwnerInterface_C> K2Node_Event_Owner;                                // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsSelected;                           // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_PostSoundEvent;                       // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1D99[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Event_EntryIndex;                           // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0x20(0x18)(None)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x38(0x28)(UObjectWrapper)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_1;                    // 0x60(0x28)(UObjectWrapper)
	bool                                         CallFunc_IsPressed_ReturnValue;                    // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1DAC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_2;                    // 0x90(0x28)(UObjectWrapper)
	class FText                                  CallFunc_TextToUpper_ReturnValue_1;                // 0xB8(0x18)(None)
};

// 0x8 (0x8 - 0x0)
// Function wid_LoadDay_List_Entry.wid_LoadDay_List_Entry_C.OnHovered__DelegateSignature
struct UWid_LoadDay_List_Entry_C_OnHovered__DelegateSignature_Params
{
public:
	class UWid_LoadDay_List_Entry_C*             Entry;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function wid_LoadDay_List_Entry.wid_LoadDay_List_Entry_C.OnDaySelected__DelegateSignature
struct UWid_LoadDay_List_Entry_C_OnDaySelected__DelegateSignature_Params
{
public:
	class FString                                SaveName;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

}
}


