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

// 0x8 (0x8 - 0x0)
// Function WBP_QuestInfoContainer.WBP_QuestInfoContainer_C.BPI_SlideIn
struct UWBP_QuestInfoContainer_C_BPI_SlideIn_Params
{
public:
	class UWorldQuest*                           Quest;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function WBP_QuestInfoContainer.WBP_QuestInfoContainer_C.ExecuteUbergraph_WBP_QuestInfoContainer
struct UWBP_QuestInfoContainer_C_ExecuteUbergraph_WBP_QuestInfoContainer_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_153D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWorldQuest*                           K2Node_Event_quest;                                // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


