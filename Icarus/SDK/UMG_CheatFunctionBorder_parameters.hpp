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

// 0x39 (0x39 - 0x0)
// Function UMG_CheatFunctionBorder.UMG_CheatFunctionBorder_C.UpperChar
struct UUMG_CheatFunctionBorder_C_UpperChar_Params
{
public:
	class FString                                Char;                                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                         IsUpper;                                           // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_298D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                UpperChar;                                         // 0x18(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_ToUpper_ReturnValue;                      // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x68 (0x68 - 0x0)
// Function UMG_CheatFunctionBorder.UMG_CheatFunctionBorder_C.GenerateDisplayName
struct UUMG_CheatFunctionBorder_C_GenerateDisplayName_Params
{
public:
	bool                                         IsUpper;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29A9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CharIndex;                                         // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                        Array;                                             // 0x8(0x10)(Edit, BlueprintVisible)
	class FString                                Char;                                              // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                DisplayString;                                     // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x38(0x18)(None)
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0x50(0x18)(None)
};

// 0x8 (0x8 - 0x0)
// Function UMG_CheatFunctionBorder.UMG_CheatFunctionBorder_C.Set Function
struct UUMG_CheatFunctionBorder_C_Set_Function_Params
{
public:
	class UCheatFunctionBase*                    CheatFunction;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UMG_CheatFunctionBorder.UMG_CheatFunctionBorder_C.Set Top Function
struct UUMG_CheatFunctionBorder_C_Set_Top_Function_Params
{
public:
	bool                                         IsTop;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x63 (0x63 - 0x0)
// Function UMG_CheatFunctionBorder.UMG_CheatFunctionBorder_C.ExecuteUbergraph_UMG_CheatFunctionBorder
struct UUMG_CheatFunctionBorder_C_ExecuteUbergraph_UMG_CheatFunctionBorder_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2AA1[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCheatFunctionBase*                    K2Node_CustomEvent_CheatFunction;                  // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                               K2Node_MakeStruct_Margin;                          // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UCF_Base_C*                            K2Node_DynamicCast_AsCF_Base;                      // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2AAF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UUMG_CheatFunctionBorder_C> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue; // 0x30(0x28)(InstancedReference, UObjectWrapper, HasGetValueTypeHash)
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x58(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_IsTop;                          // 0x62(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


