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
// Function bp_LightBeam_01.bp_LightBeam_01_C.Set Brightness
struct Abp_LightBeam_01_C_Set_Brightness_Params
{
public:
	float                                        NewBrightness;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function bp_LightBeam_01.bp_LightBeam_01_C.GetRotation
struct Abp_LightBeam_01_C_GetRotation_Params
{
public:
	struct FRotator                              Rotation;                                          // 0x0(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                              CallFunc_K2_GetComponentRotation_ReturnValue;      // 0xC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x98 (0x98 - 0x0)
// Function bp_LightBeam_01.bp_LightBeam_01_C.UpdateRotation
struct Abp_LightBeam_01_C_UpdateRotation_Params
{
public:
	struct FRotator                              Rotation;                                          // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                            CallFunc_K2_SetWorldRotation_SweepHitResult;       // 0xC(0x8C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// 0x128 (0x128 - 0x0)
// Function bp_LightBeam_01.bp_LightBeam_01_C.UserConstructionScript
struct Abp_LightBeam_01_C_UserConstructionScript_Params
{
public:
	struct FTransform                            Temp_struct_Variable;                              // 0x0(0x30)(ConstParm, IsPlainOldData, NoDestructor)
	struct FTransform                            Temp_struct_Variable_1;                            // 0x30(0x30)(ConstParm, IsPlainOldData, NoDestructor)
	class UStaticMeshComponent*                  CallFunc_AddComponent_ReturnValue;                 // 0x60(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  CallFunc_AddComponent_ReturnValue_1;               // 0x68(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_AttachToComponent_ReturnValue;         // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1484[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_RandomFloatInRangeFromStream_ReturnValue; // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_K2_GetActorRotation_ReturnValue;          // 0x78(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1492[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0x90(0x8C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	uint8                                        Pad_14A7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue_1; // 0x120(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


