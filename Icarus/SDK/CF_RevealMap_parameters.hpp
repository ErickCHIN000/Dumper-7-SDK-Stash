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
// Function CF_RevealMap.CF_RevealMap_C.ExecuteUbergraph_CF_RevealMap
struct UCF_RevealMap_C_ExecuteUbergraph_CF_RevealMap_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_17AD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UUMG_RadarMainScreenBase_C*>    CallFunc_GetAllWidgetsOfClass_FoundWidgets;        // 0x8(0x10)(ReferenceParm, ContainsInstancedReference)
	class UUMG_RadarMainScreenBase_C*            CallFunc_Array_Get_Item;                           // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


