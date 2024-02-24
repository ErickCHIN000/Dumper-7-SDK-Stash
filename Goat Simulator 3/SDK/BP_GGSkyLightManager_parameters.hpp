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

// 0x1C (0x1C - 0x0)
// Function BP_GGSkyLightManager.BP_GGSkyLightManager_C.OnTurnedOffSun
struct ABP_GGSkyLightManager_C_OnTurnedOffSun_Params
{
public:
	struct FGGSkyLightSettings                   Settings;                                          // 0x0(0x1C)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// 0x1C (0x1C - 0x0)
// Function BP_GGSkyLightManager.BP_GGSkyLightManager_C.OnTurnedOnSun
struct ABP_GGSkyLightManager_C_OnTurnedOnSun_Params
{
public:
	struct FGGSkyLightSettings                   Settings;                                          // 0x0(0x1C)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// 0x58 (0x58 - 0x0)
// Function BP_GGSkyLightManager.BP_GGSkyLightManager_C.ExecuteUbergraph_BP_GGSkyLightManager
struct ABP_GGSkyLightManager_C_ExecuteUbergraph_BP_GGSkyLightManager_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_D2A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_GG_Sky_Sphere_C*                   K2Node_DynamicCast_AsBP_GG_Sky_Sphere;             // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_D30[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGGSkyLightSettings                   K2Node_Event_Settings_1;                           // 0x14(0x1C)(NoDestructor)
	class ABP_GG_Sky_Sphere_C*                   K2Node_DynamicCast_AsBP_GG_Sky_Sphere_1;           // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_D3A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGGSkyLightSettings                   K2Node_Event_Settings;                             // 0x3C(0x1C)(NoDestructor)
};

}
}


