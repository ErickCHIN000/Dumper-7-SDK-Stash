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

// 0x1A (0x1A - 0x0)
// Function AfflictionRow.AfflictionRow_C.LessThan
struct UAfflictionRow_C_LessThan_Params
{
public:
	class UObject*                               Other;                                             // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F0C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAfflictionRow_C*                      K2Node_DynamicCast_AsAffliction_Row;               // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LexicalLess_Name_ReturnValue;             // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function AfflictionRow.AfflictionRow_C.Set Row
struct UAfflictionRow_C_Set_Row_Params
{
public:
	class FName                                  RowName;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA1 (0xA1 - 0x0)
// Function AfflictionRow.AfflictionRow_C.ExecuteUbergraph_AfflictionRow
struct UAfflictionRow_C_ExecuteUbergraph_AfflictionRow_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F87[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x8(0x18)(None)
	class FName                                  K2Node_CustomEvent_RowName;                        // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAfflictionChanceRowHandle            CallFunc_MakeAfflictionChance_ReturnValue;         // 0x28(0x18)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_ReplaceInline_ReturnValue;                // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F91[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAfflictionChance                     CallFunc_GetAfflictionChanceStruct_AfflictionChance; // 0x48(0x40)(None)
	enum class EValid                            CallFunc_GetAfflictionChanceStruct_Paths;          // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F9B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x90(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


