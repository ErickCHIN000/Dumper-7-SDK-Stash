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

// 0x10 (0x10 - 0x0)
// Function ProspectForecastRow.ProspectForecastRow_C.SetProspectForecast
struct UProspectForecastRow_C_SetProspectForecast_Params
{
public:
	struct FProspectForecastEnum                 NewProspectForecast;                               // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function ProspectForecastRow.ProspectForecastRow_C.ExecuteUbergraph_ProspectForecastRow
struct UProspectForecastRow_C_ExecuteUbergraph_ProspectForecastRow_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A01[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FProspectForecastEnum                 K2Node_CustomEvent_NewProspectForecast;            // 0x8(0x10)(HasGetValueTypeHash)
	class FName                                  CallFunc_BreakProspectForecastEnum_Name;           // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakProspectForecastEnum_Index;          // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A09[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_NameToText_ReturnValue;              // 0x28(0x18)(None)
};

}
}


