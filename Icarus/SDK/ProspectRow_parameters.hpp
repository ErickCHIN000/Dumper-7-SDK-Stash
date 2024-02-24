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
// Function ProspectRow.ProspectRow_C.SetProspectRow
struct UProspectRow_C_SetProspectRow_Params
{
public:
	struct FProspectListRowHandle                ProspectRowHandle;                                 // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x2EA (0x2EA - 0x0)
// Function ProspectRow.ProspectRow_C.ExecuteUbergraph_ProspectRow
struct UProspectRow_C_ExecuteUbergraph_ProspectRow_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FProspectListRowHandle                K2Node_CustomEvent_ProspectRowHandle;              // 0x4(0x18)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9BE[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIcarusProspect                       CallFunc_GetProspectListStruct_ProspectList;       // 0x20(0x2C8)(None)
	enum class EValid                            CallFunc_GetProspectListStruct_Paths;              // 0x2E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x2E9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


