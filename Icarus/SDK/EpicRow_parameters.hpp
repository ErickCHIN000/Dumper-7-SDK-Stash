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
// Function EpicRow.EpicRow_C.AddAI
struct UEpicRow_C_AddAI_Params
{
public:
	class FText                                  RowName;                                           // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x50 (0x50 - 0x0)
// Function EpicRow.EpicRow_C.ExecuteUbergraph_EpicRow
struct UEpicRow_C_ExecuteUbergraph_EpicRow_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_215D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_CustomEvent_RowName;                        // 0x8(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FEpicCreaturesRowHandle               CallFunc_MakeEpicCreatures_ReturnValue;            // 0x38(0x18)(NoDestructor, HasGetValueTypeHash)
};

}
}


