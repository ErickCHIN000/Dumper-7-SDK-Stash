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

// 0x18 (0x18 - 0x0)
// Function MetaResourceRow.MetaResourceRow_C.SetMetaResource
struct UMetaResourceRow_C_SetMetaResource_Params
{
public:
	struct FMetaCurrencyRowHandle                CurrencyRow;                                       // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0xF8 (0xF8 - 0x0)
// Function MetaResourceRow.MetaResourceRow_C.ExecuteUbergraph_MetaResourceRow
struct UMetaResourceRow_C_ExecuteUbergraph_MetaResourceRow_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1BD7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMetaCurrency                         CallFunc_GetMetaCurrencyStruct_MetaCurrency;       // 0x8(0xB8)(None)
	enum class EValid                            CallFunc_GetMetaCurrencyStruct_Paths;              // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xC1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1BEB[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_NameToText_ReturnValue;              // 0xC8(0x18)(None)
	struct FMetaCurrencyRowHandle                K2Node_CustomEvent_CurrencyRow;                    // 0xE0(0x18)(NoDestructor, HasGetValueTypeHash)
};

}
}


