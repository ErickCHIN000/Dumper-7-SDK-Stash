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

// 0x32 (0x32 - 0x0)
// Function UMG_CharacterSetting_Base.UMG_CharacterSetting_Base_C.VerifySettingsValid
struct UUMG_CharacterSetting_Base_C_VerifySettingsValid_Params
{
public:
	bool                                         IsValid;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4FF3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRowHandle                            CallFunc_Array_Get_Item;                           // 0x18(0x18)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsRowHandleValid_ReturnValue;             // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function UMG_CharacterSetting_Base.UMG_CharacterSetting_Base_C.GetSelectionDisplayName
struct UUMG_CharacterSetting_Base_C_GetSelectionDisplayName_Params
{
public:
	class FText                                  DisplayName;                                       // 0x0(0x18)(Parm, OutParm)
};

// 0x34 (0x34 - 0x0)
// Function UMG_CharacterSetting_Base.UMG_CharacterSetting_Base_C.GetSelectedOption
struct UUMG_CharacterSetting_Base_C_GetSelectedOption_Params
{
public:
	struct FRowHandle                            SelectedRow;                                       // 0x0(0x18)(Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_50B6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRowHandle                            CallFunc_Array_Get_Item;                           // 0x1C(0x18)(NoDestructor, HasGetValueTypeHash)
};

// 0x7 (0x7 - 0x0)
// Function UMG_CharacterSetting_Base.UMG_CharacterSetting_Base_C.ChangeSelection
struct UUMG_CharacterSetting_Base_C_ChangeSelection_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function UMG_CharacterSetting_Base.UMG_CharacterSetting_Base_C.ClearOptions
struct UUMG_CharacterSetting_Base_C_ClearOptions_Params
{
public:
	bool                                         ClearIndex;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_51C2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_AddOption_Index;                          // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x24 (0x24 - 0x0)
// Function UMG_CharacterSetting_Base.UMG_CharacterSetting_Base_C.AddOption
struct UUMG_CharacterSetting_Base_C_AddOption_Params
{
public:
	struct FRowHandle                            Option;                                            // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	int32                                        Index;                                             // 0x18(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5246[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function UMG_CharacterSetting_Base.UMG_CharacterSetting_Base_C.ExecuteUbergraph_UMG_CharacterSetting_Base
struct UUMG_CharacterSetting_Base_C_ExecuteUbergraph_UMG_CharacterSetting_Base_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function UMG_CharacterSetting_Base.UMG_CharacterSetting_Base_C.SelectionUpdated__DelegateSignature
struct UUMG_CharacterSetting_Base_C_SelectionUpdated__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_52E8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPreviewCameraSettingsEnum            NewFocus;                                          // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

}
}


