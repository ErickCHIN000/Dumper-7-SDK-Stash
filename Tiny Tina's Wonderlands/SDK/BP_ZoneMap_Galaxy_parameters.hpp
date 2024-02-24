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
// Function BP_ZoneMap_Galaxy.BP_ZoneMap_Galaxy_C.UserConstructionScript
struct ABP_ZoneMap_Galaxy_C_UserConstructionScript_Params
{
public:
	class UPlanetMapData_C*                      Planet_Map_Data;                                   // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_ZoneMap_Galaxy.BP_ZoneMap_Galaxy_C.ReceiveTick
struct ABP_ZoneMap_Galaxy_C_ReceiveTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_ZoneMap_Galaxy.BP_ZoneMap_Galaxy_C.ExecuteUbergraph_BP_ZoneMap_Galaxy
struct ABP_ZoneMap_Galaxy_C_ExecuteUbergraph_BP_ZoneMap_Galaxy_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_DeltaSeconds;                         // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


