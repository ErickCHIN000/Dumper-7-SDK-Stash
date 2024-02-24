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

// 0xC0 (0xC0 - 0x0)
// Function BP_Storyteller.BP_Storyteller_C.DisplayText
struct ABP_Storyteller_C_DisplayText_Params
{
public:
	struct FTimerHandle                          CallFunc_K2_SetTimer_ReturnValue;                  // 0x0(0x8)(NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x8(0x18)(None)
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0x20(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetText_ReturnValue_1;                    // 0x48(0x18)(None)
	int32                                        CallFunc_Len_ReturnValue;                          // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_14F8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetSubstring_ReturnValue;                 // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x78(0x18)(None)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x90(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_TextText_ReturnValue;          // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_150C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_2;          // 0xA8(0x18)(None)
};

// 0x10 (0x10 - 0x0)
// Function BP_Storyteller.BP_Storyteller_C.StartStoryteller
struct ABP_Storyteller_C_StartStoryteller_Params
{
public:
	TArray<class FText>                          TextToDisplay;                                     // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// 0xE8 (0xE8 - 0x0)
// Function BP_Storyteller.BP_Storyteller_C.ExecuteUbergraph_BP_Storyteller
struct ABP_Storyteller_C_ExecuteUbergraph_BP_Storyteller_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_15B2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Array_Get_Item;                           // 0x8(0x18)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_15C3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_15CD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FText>                          K2Node_CustomEvent_TextToDisplay;                  // 0x40(0x10)(ConstParm, ReferenceParm, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_15D2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Array_Get_Item_1;                         // 0x58(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x70(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0xB0(0x10)(ReferenceParm, HasGetValueTypeHash)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0xC0(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0xD8(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

}
}


