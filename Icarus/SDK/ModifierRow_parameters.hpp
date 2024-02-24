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
// Function ModifierRow.ModifierRow_C.LessThan
struct UModifierRow_C_LessThan_Params
{
public:
	class UObject*                               Other;                                             // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_16F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UModifierRow_C*                        K2Node_DynamicCast_AsModifier_Row;                 // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LexicalLess_Name_ReturnValue;             // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x28A (0x28A - 0x0)
// Function ModifierRow.ModifierRow_C.ExecuteUbergraph_ModifierRow
struct UModifierRow_C_ExecuteUbergraph_ModifierRow_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FModifierStatesRowHandle              CallFunc_MakeModifierStates_ReturnValue;           // 0x4(0x18)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_187[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_NameToText_ReturnValue;              // 0x20(0x18)(None)
	struct FModifierStateData                    CallFunc_GetModifierStatesStruct_ModifierStates;   // 0x38(0x250)(None)
	enum class EValid                            CallFunc_GetModifierStatesStruct_Paths;            // 0x288(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x289(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


