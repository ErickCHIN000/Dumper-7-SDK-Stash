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

// 0x92 (0x92 - 0x0)
// Function BP_GGNPC_Environment.BP_GGNPC_Environment_C.ExecuteUbergraph_BP_GGNPC_Environment
struct ABP_GGNPC_Environment_C_ExecuteUbergraph_BP_GGNPC_Environment_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_CB3[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGNPCSpawner*                         CallFunc_GetNPCSpawner_ReturnValue;                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CB8[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGNPCSpawner_Environment*             K2Node_DynamicCast_AsGGNPCSpawner_Environment;     // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CBD[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_RandomInteger_ReturnValue;                // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_CC6[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGGRandomPlayerSequenceEntry          CallFunc_Array_Get_Item;                           // 0x30(0x50)(NoDestructor)
	TArray<struct FGGRandomPlayerSequenceEntry>  K2Node_MakeArray_Array;                            // 0x80(0x10)(ReferenceParm)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x91(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


