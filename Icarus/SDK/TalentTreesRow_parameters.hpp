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
// Function TalentTreesRow.TalentTreesRow_C.SetTalentTreeRow
struct UTalentTreesRow_C_SetTalentTreeRow_Params
{
public:
	struct FTalentTreesRowHandle                 TalentTreesRowHandle;                              // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function TalentTreesRow.TalentTreesRow_C.ExecuteUbergraph_TalentTreesRow
struct UTalentTreesRow_C_ExecuteUbergraph_TalentTreesRow_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTalentTreesRowHandle                 K2Node_CustomEvent_TalentTreesRowHandle;           // 0x4(0x18)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F3A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_NameToText_ReturnValue;              // 0x20(0x18)(None)
};

}
}


