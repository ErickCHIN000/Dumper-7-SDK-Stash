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

// 0x40 (0x40 - 0x0)
// Function MenuNavigationFaceButton.MenuNavigationFaceButton_C.GetActionHint
struct UMenuNavigationFaceButton_C_GetActionHint_Params
{
public:
	struct FActionHintStruct                     ActionHint;                                        // 0x0(0x40)(Parm, OutParm)
};

// 0x10 (0x10 - 0x0)
// Function MenuNavigationFaceButton.MenuNavigationFaceButton_C.UpdateButtonEffect
struct UMenuNavigationFaceButton_C_UpdateButtonEffect_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_C70[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function MenuNavigationFaceButton.MenuNavigationFaceButton_C.UpdateButtonDescription
struct UMenuNavigationFaceButton_C_UpdateButtonDescription_Params
{
public:
	class FText                                  NewText;                                           // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x130 (0x130 - 0x0)
// Function MenuNavigationFaceButton.MenuNavigationFaceButton_C.UpdateButtonText
struct UMenuNavigationFaceButton_C_UpdateButtonText_Params
{
public:
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x0(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x40(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x80(0x10)(ReferenceParm)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CE2[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x98(0x18)(None)
	class FText                                  CallFunc_Conv_NameToText_ReturnValue;              // 0xB0(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_2;            // 0xC8(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_1;                          // 0x108(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue_1;                     // 0x118(0x18)(None)
};

// 0x1 (0x1 - 0x0)
// Function MenuNavigationFaceButton.MenuNavigationFaceButton_C.PreConstruct
struct UMenuNavigationFaceButton_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x40 (0x40 - 0x0)
// Function MenuNavigationFaceButton.MenuNavigationFaceButton_C.UpdateHint
struct UMenuNavigationFaceButton_C_UpdateHint_Params
{
public:
	struct FActionHintStruct                     Hint;                                              // 0x0(0x40)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x1 (0x1 - 0x0)
// Function MenuNavigationFaceButton.MenuNavigationFaceButton_C.OnSetIsEnabled
struct UMenuNavigationFaceButton_C_OnSetIsEnabled_Params
{
public:
	bool                                         bInIsEnabled;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function MenuNavigationFaceButton.MenuNavigationFaceButton_C.ShowInteractable
struct UMenuNavigationFaceButton_C_ShowInteractable_Params
{
public:
	bool                                         Enabled;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x12C (0x12C - 0x0)
// Function MenuNavigationFaceButton.MenuNavigationFaceButton_C.ExecuteUbergraph_MenuNavigationFaceButton
struct UMenuNavigationFaceButton_C_ExecuteUbergraph_MenuNavigationFaceButton_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E25[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Temp_struct_Variable;                              // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Temp_struct_Variable_1;                            // 0x18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E30[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Temp_struct_Variable_2;                            // 0x2C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Select_Default;                             // 0x3C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Temp_struct_Variable_3;                            // 0x4C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x5C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_3;                              // 0x5D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x5E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E43[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FActionHintStruct                     K2Node_CustomEvent_Hint;                           // 0x60(0x40)(None)
	bool                                         K2Node_Event_bInIsEnabled;                         // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E45[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          K2Node_Select_Default_1;                           // 0xA4(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                               K2Node_MakeStruct_Margin;                          // 0xB4(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E59[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetObjectName_ReturnValue;                // 0xC8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FMargin                               K2Node_MakeStruct_Margin_1;                        // 0xD8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0xE8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FMargin                               K2Node_Select_Default_2;                           // 0xF8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_Enabled;                        // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E69[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               K2Node_MakeStruct_Margin_2;                        // 0x10C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FMargin                               K2Node_Select_Default_3;                           // 0x11C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


