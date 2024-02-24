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
// Function BP_FogOfDiscoveryCapture.BP_FogOfDiscoveryCapture_C.OnFogLevelLoaded
struct ABP_FogOfDiscoveryCapture_C_OnFogLevelLoaded_Params
{
public:
	class UZoneMapData*                          UpdatedZoneMap;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_FogOfDiscoveryCapture.BP_FogOfDiscoveryCapture_C.ReceiveEndPlay
struct ABP_FogOfDiscoveryCapture_C_ReceiveEndPlay_Params
{
public:
	enum class EEndPlayReason                    EndPlayReason;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function BP_FogOfDiscoveryCapture.BP_FogOfDiscoveryCapture_C.ExecuteUbergraph_BP_FogOfDiscoveryCapture
struct ABP_FogOfDiscoveryCapture_C_ExecuteUbergraph_BP_FogOfDiscoveryCapture_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36FB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UZoneMapData*                          K2Node_Event_UpdatedZoneMap;                       // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEndPlayReason                    K2Node_Event_EndPlayReason;                        // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


