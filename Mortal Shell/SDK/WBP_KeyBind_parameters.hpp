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

// 0x12D (0x12D - 0x0)
// Function WBP_KeyBind.WBP_KeyBind_C.ChangeKBMKey
struct UWBP_KeyBind_C_ChangeKBMKey_Params
{
public:
	struct FInputChord                           NewInput;                                          // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UInputSettings*                        CallFunc_GetInputSettings_ReturnValue;             // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputSettings*                        CallFunc_GetInputSettings_ReturnValue_1;           // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputAxisKeyMapping                  K2Node_MakeStruct_InputAxisKeyMapping;             // 0x30(0x28)(None)
	class UInputSettings*                        CallFunc_GetInputSettings_ReturnValue_2;           // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputSettings*                        CallFunc_GetInputSettings_ReturnValue_3;           // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputAxisKeyMapping                  K2Node_MakeStruct_InputAxisKeyMapping_1;           // 0x68(0x28)(None)
	TArray<struct FInputAxisKeyMapping>          CallFunc_GetAxisMappingByName_OutMappings;         // 0x90(0x10)(ReferenceParm, HasGetValueTypeHash)
	class UInputSettings*                        CallFunc_GetInputSettings_ReturnValue_4;           // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0xAC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_14CB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInputSettings*                        CallFunc_GetInputSettings_ReturnValue_5;           // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputActionKeyMapping                K2Node_MakeStruct_InputActionKeyMapping;           // 0xB8(0x28)(None)
	class UInputSettings*                        CallFunc_GetInputSettings_ReturnValue_6;           // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputActionKeyMapping                K2Node_MakeStruct_InputActionKeyMapping_1;         // 0xE8(0x28)(None)
	class UInputSettings*                        CallFunc_GetInputSettings_ReturnValue_7;           // 0x110(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FInputActionKeyMapping>        CallFunc_GetActionMappingByName_OutMappings;       // 0x118(0x10)(ReferenceParm, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x128(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x12C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x17D (0x17D - 0x0)
// Function WBP_KeyBind.WBP_KeyBind_C.ChangeGamepadKey
struct UWBP_KeyBind_C_ChangeGamepadKey_Params
{
public:
	struct FInputChord                           NewInput;                                          // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                         CallFunc_Key_IsGamepadKey_ReturnValue;             // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_156C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputChord                           K2Node_MakeStruct_InputChord;                      // 0x28(0x20)(HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_InputChordInputChord_ReturnValue; // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1571[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputChord                           K2Node_MakeStruct_InputChord_1;                    // 0x50(0x20)(HasGetValueTypeHash)
	class UInputSettings*                        CallFunc_GetInputSettings_ReturnValue;             // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputSettings*                        CallFunc_GetInputSettings_ReturnValue_1;           // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputAxisKeyMapping                  K2Node_MakeStruct_InputAxisKeyMapping;             // 0x80(0x28)(None)
	class UInputSettings*                        CallFunc_GetInputSettings_ReturnValue_2;           // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputSettings*                        CallFunc_GetInputSettings_ReturnValue_3;           // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputAxisKeyMapping                  K2Node_MakeStruct_InputAxisKeyMapping_1;           // 0xB8(0x28)(None)
	TArray<struct FInputAxisKeyMapping>          CallFunc_GetAxisMappingByName_OutMappings;         // 0xE0(0x10)(ReferenceParm, HasGetValueTypeHash)
	class UInputSettings*                        CallFunc_GetInputSettings_ReturnValue_4;           // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0xFC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_158E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInputSettings*                        CallFunc_GetInputSettings_ReturnValue_5;           // 0x100(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputActionKeyMapping                K2Node_MakeStruct_InputActionKeyMapping;           // 0x108(0x28)(None)
	class UInputSettings*                        CallFunc_GetInputSettings_ReturnValue_6;           // 0x130(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputActionKeyMapping                K2Node_MakeStruct_InputActionKeyMapping_1;         // 0x138(0x28)(None)
	class UInputSettings*                        CallFunc_GetInputSettings_ReturnValue_7;           // 0x160(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FInputActionKeyMapping>        CallFunc_GetActionMappingByName_OutMappings;       // 0x168(0x10)(ReferenceParm, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x178(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x17C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function WBP_KeyBind.WBP_KeyBind_C.PreConstruct
struct UWBP_KeyBind_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function WBP_KeyBind.WBP_KeyBind_C.BndEvt__InputKeySelector_Primary_K2Node_ComponentBoundEvent_1_OnKeySelected__DelegateSignature
struct UWBP_KeyBind_C_BndEvt__InputKeySelector_Primary_K2Node_ComponentBoundEvent_1_OnKeySelected__DelegateSignature_Params
{
public:
	struct FInputChord                           SelectedKey;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function WBP_KeyBind.WBP_KeyBind_C.BndEvt__InputKeySelector_Gamepad_K2Node_ComponentBoundEvent_2_OnKeySelected__DelegateSignature
struct UWBP_KeyBind_C_BndEvt__InputKeySelector_Gamepad_K2Node_ComponentBoundEvent_2_OnKeySelected__DelegateSignature_Params
{
public:
	struct FInputChord                           SelectedKey;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x218 (0x218 - 0x0)
// Function WBP_KeyBind.WBP_KeyBind_C.ExecuteUbergraph_WBP_KeyBind
struct UWBP_KeyBind_C_ExecuteUbergraph_WBP_KeyBind_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1709[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_NameToText_ReturnValue;              // 0x18(0x18)(None)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x30(0x18)(None)
	class UInputSettings*                        CallFunc_GetInputSettings_ReturnValue;             // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_TextText_ReturnValue;          // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_170E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FInputActionKeyMapping>        CallFunc_GetActionMappingByName_OutMappings;       // 0x58(0x10)(ReferenceParm, HasGetValueTypeHash)
	class UInputSettings*                        CallFunc_GetInputSettings_ReturnValue_1;           // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x74(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_171A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FInputAxisKeyMapping>          CallFunc_GetAxisMappingByName_OutMappings;         // 0x78(0x10)(ReferenceParm, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x8C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1723[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputChord                           K2Node_ComponentBoundEvent_SelectedKey_1;          // 0x90(0x20)(HasGetValueTypeHash)
	class UInputSettings*                        CallFunc_GetInputSettings_ReturnValue_2;           // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FInputActionKeyMapping>        CallFunc_GetActionMappingByName_OutMappings_1;     // 0xB8(0x10)(ReferenceParm, HasGetValueTypeHash)
	struct FInputActionKeyMapping                CallFunc_Array_Get_Item;                           // 0xC8(0x28)(None)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_172D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInputSettings*                        CallFunc_GetInputSettings_ReturnValue_3;           // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputChord                           K2Node_MakeStruct_InputChord;                      // 0x100(0x20)(HasGetValueTypeHash)
	struct FInputChord                           K2Node_MakeStruct_InputChord_1;                    // 0x120(0x20)(HasGetValueTypeHash)
	bool                                         CallFunc_Key_IsGamepadKey_ReturnValue;             // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1737[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FInputAxisKeyMapping>          CallFunc_GetAxisMappingByName_OutMappings_1;       // 0x148(0x10)(ReferenceParm, HasGetValueTypeHash)
	struct FInputAxisKeyMapping                  CallFunc_Array_Get_Item_1;                         // 0x158(0x28)(None)
	int32                                        CallFunc_Array_Length_ReturnValue_3;               // 0x180(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x184(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1745[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputChord                           K2Node_MakeStruct_InputChord_2;                    // 0x188(0x20)(HasGetValueTypeHash)
	struct FInputChord                           K2Node_MakeStruct_InputChord_3;                    // 0x1A8(0x20)(HasGetValueTypeHash)
	bool                                         CallFunc_Key_IsGamepadKey_ReturnValue_1;           // 0x1C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1C9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1752[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputChord                           K2Node_ComponentBoundEvent_SelectedKey;            // 0x1D0(0x20)(HasGetValueTypeHash)
	class FText                                  K2Node_Select_Default;                             // 0x1F0(0x18)(None)
	bool                                         CallFunc_GetIsSelectingKey_ReturnValue;            // 0x208(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1759[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x20C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x210(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_175D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x214(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


