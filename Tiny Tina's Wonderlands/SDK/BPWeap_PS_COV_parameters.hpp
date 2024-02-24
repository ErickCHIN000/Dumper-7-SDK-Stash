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

// 0x2 (0x2 - 0x0)
// Function BPWeap_PS_COV.BPWeap_PS_COV_C.Notify_ReloadEnded
struct ABPWeap_PS_COV_C_Notify_ReloadEnded_Params
{
public:
	bool                                         bCompleted;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bAmmoGiven;                                        // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x6 (0x6 - 0x0)
// Function BPWeap_PS_COV.BPWeap_PS_COV_C.ExecuteUbergraph_BPWeap_PS_COV
struct ABPWeap_PS_COV_C_ExecuteUbergraph_BPWeap_PS_COV_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bCompleted;                           // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bAmmoGiven;                           // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


