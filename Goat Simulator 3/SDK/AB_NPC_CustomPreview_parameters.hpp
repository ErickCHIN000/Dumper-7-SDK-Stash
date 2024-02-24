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

// 0x10 (0x10 - 0x0)
// Function AB_NPC_CustomPreview.AB_NPC_CustomPreview_C.AnimGraph
struct UAB_NPC_CustomPreview_C_AnimGraph_Params
{
public:
	struct FPoseLink                             AnimGraph;                                         // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function AB_NPC_CustomPreview.AB_NPC_CustomPreview_C.ExecuteUbergraph_AB_NPC_CustomPreview
struct UAB_NPC_CustomPreview_C_ExecuteUbergraph_AB_NPC_CustomPreview_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_409[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSequenceEntryPinArray                K2Node_MakeStruct_SequenceEntryPinArray;           // 0x8(0x10)(None)
};

}
}


