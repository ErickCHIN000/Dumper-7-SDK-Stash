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

// 0x1 (0x1 - 0x0)
// Function BPWeap_PS_VLA.BPWeap_PS_VLA_C.Notify_ReloadStarted
struct ABPWeap_PS_VLA_C_Notify_ReloadStarted_Params
{
public:
	bool                                         bAutoReload;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function BPWeap_PS_VLA.BPWeap_PS_VLA_C.ExecuteUbergraph_BPWeap_PS_VLA
struct ABPWeap_PS_VLA_C_ExecuteUbergraph_BPWeap_PS_VLA_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bAutoReload;                          // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


