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

// 0x20 (0x20 - 0x0)
// Function SEQ_Test1.SequenceDirector_C.ExecuteUbergraph_SequenceDirector
struct USequenceDirector_C_ExecuteUbergraph_SequenceDirector_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1390[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UWB_InGame_C*>                  CallFunc_GetAllWidgetsOfClass_FoundWidgets;        // 0x8(0x10)(ReferenceParm, ContainsInstancedReference)
	class UWB_InGame_C*                          CallFunc_Array_Get_Item;                           // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


