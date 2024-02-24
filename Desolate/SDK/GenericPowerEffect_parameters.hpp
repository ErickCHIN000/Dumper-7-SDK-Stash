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

// 0x4 (0x4 - 0x0)
// Function GenericPowerEffect.GenericPowerEffect_C.GetLoadValue
struct AGenericPowerEffect_C_GetLoadValue_Params
{
public:
	float                                        Load;                                              // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function GenericPowerEffect.GenericPowerEffect_C.UpdateState
struct AGenericPowerEffect_C_UpdateState_Params
{
public:
	bool                                         IsOn;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function GenericPowerEffect.GenericPowerEffect_C.AddChangeStateListeners
struct AGenericPowerEffect_C_AddChangeStateListeners_Params
{
public:
	class AActor*                                Listener;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function GenericPowerEffect.GenericPowerEffect_C.Power
struct AGenericPowerEffect_C_Power_Params
{
public:
	bool                                         On;                                                // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function GenericPowerEffect.GenericPowerEffect_C.ExecuteUbergraph_GenericPowerEffect
struct AGenericPowerEffect_C_ExecuteUbergraph_GenericPowerEffect_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_917[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_Event_Listener;                             // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_On;                                   // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


