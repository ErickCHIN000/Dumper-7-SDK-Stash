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
// Function GenericEnergyGenerator.GenericEnergyGenerator_C.GetPower
struct AGenericEnergyGenerator_C_GetPower_Params
{
public:
	float                                        Power;                                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function GenericEnergyGenerator.GenericEnergyGenerator_C.GetEnergyLevel
struct AGenericEnergyGenerator_C_GetEnergyLevel_Params
{
public:
	float                                        Level;                                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function GenericEnergyGenerator.GenericEnergyGenerator_C.GetIsWorking
struct AGenericEnergyGenerator_C_GetIsWorking_Params
{
public:
	bool                                         IsWorking;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function GenericEnergyGenerator.GenericEnergyGenerator_C.Discharge
struct AGenericEnergyGenerator_C_Discharge_Params
{
public:
	float                                        Amount;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function GenericEnergyGenerator.GenericEnergyGenerator_C.ExecuteUbergraph_GenericEnergyGenerator
struct AGenericEnergyGenerator_C_ExecuteUbergraph_GenericEnergyGenerator_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_Amount;                               // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


