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
// Function BP_GG_Sky_Sphere.BP_GG_Sky_Sphere_C.TurnOffSun
struct ABP_GG_Sky_Sphere_C_TurnOffSun_Params
{
public:
	struct FGGSkyLightSettings                   Settings;                                          // 0x0(0x1C)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// 0x1C (0x1C - 0x0)
// Function BP_GG_Sky_Sphere.BP_GG_Sky_Sphere_C.TurnOnSun
struct ABP_GG_Sky_Sphere_C_TurnOnSun_Params
{
public:
	struct FGGSkyLightSettings                   Settings;                                          // 0x0(0x1C)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// 0x50 (0x50 - 0x0)
// Function BP_GG_Sky_Sphere.BP_GG_Sky_Sphere_C.ExecuteUbergraph_BP_GG_Sky_Sphere
struct ABP_GG_Sky_Sphere_C_ExecuteUbergraph_BP_GG_Sky_Sphere_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGGSkyLightSettings                   K2Node_CustomEvent_Settings_1;                     // 0x4(0x1C)(NoDestructor)
	bool                                         CallFunc_K2_SetActorRotation_ReturnValue;          // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C61[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGGSkyLightSettings                   K2Node_CustomEvent_Settings;                       // 0x24(0x1C)(NoDestructor)
	bool                                         CallFunc_K2_SetActorRotation_ReturnValue_1;        // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C66[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              CallFunc_K2_GetActorRotation_ReturnValue;          // 0x44(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


