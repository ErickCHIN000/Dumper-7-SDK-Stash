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
// Function CharacterFlagRow.CharacterFlagRow_C.SetCharacterFlagRow
struct UCharacterFlagRow_C_SetCharacterFlagRow_Params
{
public:
	struct FCharacterFlagsRowHandle              ProspectRowHandle;                                 // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function CharacterFlagRow.CharacterFlagRow_C.ExecuteUbergraph_CharacterFlagRow
struct UCharacterFlagRow_C_ExecuteUbergraph_CharacterFlagRow_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCharacterFlagsRowHandle              K2Node_CustomEvent_ProspectRowHandle;              // 0x4(0x18)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D10[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_NameToText_ReturnValue;              // 0x20(0x18)(None)
};

}
}


