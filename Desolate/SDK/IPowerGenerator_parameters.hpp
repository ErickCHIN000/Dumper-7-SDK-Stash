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
// Function IPowerGenerator.IPowerGenerator_C.GetIsWorking
struct IIPowerGenerator_C_GetIsWorking_Params
{
public:
	bool                                         IsWorking;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function IPowerGenerator.IPowerGenerator_C.Discharge
struct IIPowerGenerator_C_Discharge_Params
{
public:
	float                                        Amount;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function IPowerGenerator.IPowerGenerator_C.GetEnergyLevel
struct IIPowerGenerator_C_GetEnergyLevel_Params
{
public:
	float                                        Level;                                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function IPowerGenerator.IPowerGenerator_C.GetPower
struct IIPowerGenerator_C_GetPower_Params
{
public:
	float                                        Power;                                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


