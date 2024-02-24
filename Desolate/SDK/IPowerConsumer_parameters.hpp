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
// Function IPowerConsumer.IPowerConsumer_C.AddChangeStateListeners
struct IIPowerConsumer_C_AddChangeStateListeners_Params
{
public:
	class AActor*                                Listener;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function IPowerConsumer.IPowerConsumer_C.Power
struct IIPowerConsumer_C_Power_Params
{
public:
	bool                                         On;                                                // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function IPowerConsumer.IPowerConsumer_C.GetLoadValue
struct IIPowerConsumer_C_GetLoadValue_Params
{
public:
	float                                        Load;                                              // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


