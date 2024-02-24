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
// Function AccountFlagRow.AccountFlagRow_C.SetAccountFlagRow
struct UAccountFlagRow_C_SetAccountFlagRow_Params
{
public:
	struct FAccountFlagsRowHandle                AccountFlag;                                       // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function AccountFlagRow.AccountFlagRow_C.ExecuteUbergraph_AccountFlagRow
struct UAccountFlagRow_C_ExecuteUbergraph_AccountFlagRow_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAccountFlagsRowHandle                K2Node_CustomEvent_AccountFlag;                    // 0x4(0x18)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B40[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_NameToText_ReturnValue;              // 0x20(0x18)(None)
};

}
}


