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

// 0x50 (0x50 - 0x0)
// Function UI_InputDetector.UI_InputDetector_C.Set_InputAxis_KBM_New
struct UUI_InputDetector_C_Set_InputAxis_KBM_New_Params
{
public:
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FInputAxis                            K2Node_MakeStruct_InputAxis;                       // 0x10(0x40)(None)
};

// 0x50 (0x50 - 0x0)
// Function UI_InputDetector.UI_InputDetector_C.Set_InputAction_Controller_New
struct UUI_InputDetector_C_Set_InputAction_Controller_New_Params
{
public:
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FInputAction                          K2Node_MakeStruct_InputAction;                     // 0x10(0x40)(None)
};

// 0x50 (0x50 - 0x0)
// Function UI_InputDetector.UI_InputDetector_C.Set_InputAction_Controller_Old
struct UUI_InputDetector_C_Set_InputAction_Controller_Old_Params
{
public:
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FInputAction                          K2Node_MakeStruct_InputAction;                     // 0x10(0x40)(None)
};

// 0x216 (0x216 - 0x0)
// Function UI_InputDetector.UI_InputDetector_C.ChangeOtherKey
struct UUI_InputDetector_C_ChangeOtherKey_Params
{
public:
	bool                                         Gamepad;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_161C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                OldKeyAsString;                                    // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FKey                                  OldKey;                                            // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class FString                                NewKeyAsString;                                    // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FKey                                  NewKey;                                            // 0x40(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                         Local_Gamepad;                                     // 0x58(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1627[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Local_NewKeyAsString;                              // 0x60(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                Local_OldKeyAsString;                              // 0x70(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FKey                                  Local_OldKey;                                      // 0x80(0x18)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FKey                                  Local_NewKey;                                      // 0x98(0x18)(Edit, BlueprintVisible, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0xC0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0xD4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1647[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputAction                          CallFunc_Array_Get_Item;                           // 0xE0(0x40)(None)
	bool                                         CallFunc_Key_IsGamepadKey_ReturnValue;             // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x121(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x122(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1651[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputAction                          K2Node_MakeStruct_InputAction;                     // 0x128(0x40)(None)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x168(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x169(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1658[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x16C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_1;                              // 0x171(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Select_Default;                             // 0x172(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1661[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_NameToString_ReturnValue_1;          // 0x178(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FInputAxis                            CallFunc_Array_Get_Item_1;                         // 0x188(0x40)(None)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x1C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x1CC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_166E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputAxis                            K2Node_MakeStruct_InputAxis;                       // 0x1D0(0x40)(None)
	bool                                         CallFunc_Key_IsGamepadKey_ReturnValue_1;           // 0x210(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_1;          // 0x211(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x212(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Select_Default_1;                           // 0x213(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x214(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_3;                // 0x215(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x220 (0x220 - 0x0)
// Function UI_InputDetector.UI_InputDetector_C.SwapKeys
struct UUI_InputDetector_C_SwapKeys_Params
{
public:
	bool                                         Gamepad;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1787[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                OldKeyAsString;                                    // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FKey                                  OldKey;                                            // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class FString                                NewKeyAsString;                                    // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FKey                                  NewKey;                                            // 0x40(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                         Local_Gamepad;                                     // 0x58(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1793[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Local_NewKeyAsString;                              // 0x60(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                Local_OldKeyAsString;                              // 0x70(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FKey                                  Local_OldKey;                                      // 0x80(0x18)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FKey                                  Local_NewKey;                                      // 0x98(0x18)(Edit, BlueprintVisible, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0xC0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0xD4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_17B6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputAction                          CallFunc_Array_Get_Item;                           // 0xE0(0x40)(None)
	bool                                         CallFunc_Key_IsGamepadKey_ReturnValue;             // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x121(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x122(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_17BD[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputAction                          K2Node_MakeStruct_InputAction;                     // 0x128(0x40)(None)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x168(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x169(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_17C6[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x16C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_1;                              // 0x171(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Select_Default;                             // 0x172(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_17CF[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_NameToString_ReturnValue_1;          // 0x178(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FInputAxis                            CallFunc_Array_Get_Item_1;                         // 0x188(0x40)(None)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x1C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x1CC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_17DD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x1D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Abs_ReturnValue;                          // 0x1D4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputAxis                            K2Node_MakeStruct_InputAxis;                       // 0x1D8(0x40)(None)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0x218(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Key_IsGamepadKey_ReturnValue_1;           // 0x219(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_1;          // 0x21A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x21B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Select_Default_1;                           // 0x21C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x21D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_3;                // 0x21E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x21F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x200 (0x200 - 0x0)
// Function UI_InputDetector.UI_InputDetector_C.DebugNewAxisBinding
struct UUI_InputDetector_C_DebugNewAxisBinding_Params
{
public:
	struct FInputAxis                            CurrentButton;                                     // 0x0(0x40)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FInputAxis                            NewButton;                                         // 0x40(0x40)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x80(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_FloatToString_ReturnValue;           // 0x90(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_FloatToString_ReturnValue_1;         // 0xA0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0xB0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1901[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0xC8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0xD8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_SelectString_ReturnValue;                 // 0xE8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_4;              // 0xF8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_191F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_SelectString_ReturnValue_1;               // 0x110(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x120(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x130(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_5;              // 0x140(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_6;              // 0x150(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_7;              // 0x160(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_8;              // 0x170(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_9;              // 0x180(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_10;             // 0x190(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_11;             // 0x1A0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_12;             // 0x1B0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_13;             // 0x1C0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_14;             // 0x1D0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_15;             // 0x1E0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_16;             // 0x1F0(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function UI_InputDetector.UI_InputDetector_C.Set_InputAxis_KBM_Old
struct UUI_InputDetector_C_Set_InputAxis_KBM_Old_Params
{
public:
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FInputAxis                            K2Node_MakeStruct_InputAxis;                       // 0x10(0x40)(None)
};

// 0x50 (0x50 - 0x0)
// Function UI_InputDetector.UI_InputDetector_C.Set_InputAction_KBM_New
struct UUI_InputDetector_C_Set_InputAction_KBM_New_Params
{
public:
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FInputAction                          K2Node_MakeStruct_InputAction;                     // 0x10(0x40)(None)
};

// 0x50 (0x50 - 0x0)
// Function UI_InputDetector.UI_InputDetector_C.Set_InputAction_KBM_Old
struct UUI_InputDetector_C_Set_InputAction_KBM_Old_Params
{
public:
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FInputAction                          K2Node_MakeStruct_InputAction;                     // 0x10(0x40)(None)
};

// 0x28 (0x28 - 0x0)
// Function UI_InputDetector.UI_InputDetector_C.FilterKeyboardKeys
struct UUI_InputDetector_C_FilterKeyboardKeys_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_1;          // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_2;          // 0x1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_3;          // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_4;          // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_5;          // 0x1E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_6;          // 0x1F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_7;          // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_2;                  // 0x23(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_3;                  // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_4;                  // 0x25(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_5;                  // 0x26(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_6;                  // 0x27(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function UI_InputDetector.UI_InputDetector_C.FilterControllerKeys
struct UUI_InputDetector_C_FilterControllerKeys_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_1;          // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_2;          // 0x1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_3;          // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_4;          // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_5;          // 0x1E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_6;          // 0x1F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_7;          // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_2;                  // 0x23(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_3;                  // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_4;                  // 0x25(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_5;                  // 0x26(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_6;                  // 0x27(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x308 (0x308 - 0x0)
// Function UI_InputDetector.UI_InputDetector_C.OnMouseButtonDown
struct UUI_InputDetector_C_OnMouseButtonDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                           ReturnValue;                                       // 0xA8(0xB8)(Parm, OutParm, ReturnParm)
	struct FPointerEvent                         Local_MouseEvent;                                  // 0x160(0x70)(Edit, BlueprintVisible)
	struct FInputAxis                            CallFunc_GetInputAxisFromMouseButtonEvent_ReturnValue; // 0x1D0(0x40)(None)
	struct FInputAction                          CallFunc_GetInputActionFromMouseButtonEvent_ReturnValue; // 0x210(0x40)(None)
	struct FEventReply                           CallFunc_Unhandled_ReturnValue;                    // 0x250(0xB8)(None)
};

// 0x1A0 (0x1A0 - 0x0)
// Function UI_InputDetector.UI_InputDetector_C.DebugNewActionBinding
struct UUI_InputDetector_C_DebugNewActionBinding_Params
{
public:
	struct FInputAction                          CurrentButton;                                     // 0x0(0x40)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FInputAction                          NewButton;                                         // 0x40(0x40)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         Swap;                                              // 0x80(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1C94[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x88(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x98(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0xA8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0xB8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_4;              // 0xC8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0xD9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1CAE[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_SelectString_ReturnValue;                 // 0xE0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_SelectString_ReturnValue_1;               // 0xF0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x100(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_5;              // 0x110(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_6;              // 0x120(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_7;              // 0x130(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_SelectString_ReturnValue_2;               // 0x140(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_8;              // 0x150(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_9;              // 0x160(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_10;             // 0x170(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_11;             // 0x180(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_12;             // 0x190(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0xD2 (0xD2 - 0x0)
// Function UI_InputDetector.UI_InputDetector_C.Rebind_Set
struct UUI_InputDetector_C_Rebind_Set_Params
{
public:
	struct FInputAction                          InputAction;                                       // 0x0(0x40)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FInputAxis                            InputAxis;                                         // 0x40(0x40)(BlueprintVisible, BlueprintReadOnly, Parm)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x80(0x10)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x90(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchString_CmpSuccess;                    // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Key_IsGamepadKey_ReturnValue;             // 0x99(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x9A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Key_IsGamepadKey_ReturnValue_1;           // 0x9B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x9C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_FilterControllerKeys_ReturnValue;         // 0x9D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Key_IsGamepadKey_ReturnValue_2;           // 0x9E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1DC0[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0xA0(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0xB0(0x10)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue_1;        // 0xC0(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue_2;        // 0xC8(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchString_CmpSuccess_1;                  // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchString_CmpSuccess_2;                  // 0xD1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x298 (0x298 - 0x0)
// Function UI_InputDetector.UI_InputDetector_C.OnKeyDown
struct UUI_InputDetector_C_OnKeyDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                             InKeyEvent;                                        // 0x38(0x38)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                           ReturnValue;                                       // 0x70(0xB8)(Parm, OutParm, ReturnParm)
	struct FKeyEvent                             Local_KeyEvent;                                    // 0x128(0x38)(Edit, BlueprintVisible)
	struct FInputAxis                            CallFunc_GetInputAxisFromKeyEvent_ReturnValue;     // 0x160(0x40)(None)
	struct FInputAction                          CallFunc_GetInputActionFromKeyEvent_ReturnValue;   // 0x1A0(0x40)(None)
	struct FEventReply                           CallFunc_Unhandled_ReturnValue;                    // 0x1E0(0xB8)(None)
};

// 0x1 (0x1 - 0x0)
// Function UI_InputDetector.UI_InputDetector_C.OnPauseMenuCloses
struct UUI_InputDetector_C_OnPauseMenuCloses_Params
{
public:
	bool                                         Close;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xA8 (0xA8 - 0x0)
// Function UI_InputDetector.UI_InputDetector_C.OnMouseEnter
struct UUI_InputDetector_C_OnMouseEnter_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x138 (0x138 - 0x0)
// Function UI_InputDetector.UI_InputDetector_C.ExecuteUbergraph_UI_InputDetector
struct UUI_InputDetector_C_ExecuteUbergraph_UI_InputDetector_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x14(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_1FC6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x28(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1FD7[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x34(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_1FDD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue_1;        // 0x48(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Close;                          // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1FEA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameInfoInstance_C*                   CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance; // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1FF7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x64(0x38)(IsPlainOldData, NoDestructor)
	uint8                                        Pad_1FFF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerEvent                         K2Node_Event_MouseEvent;                           // 0xA0(0x70)(ConstParm)
	bool                                         CallFunc_IsVisible_ReturnValue_1;                  // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_200C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x118(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsGamepadAttached_ReturnValue;            // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchString_CmpSuccess;                    // 0x121(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x122(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2025[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0x128(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPCInputDispatcherComponent_C*         CallFunc_GetComponentByClass_ReturnValue;          // 0x130(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


