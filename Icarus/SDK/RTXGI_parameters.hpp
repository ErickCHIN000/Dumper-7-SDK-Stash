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
// Function RTXGI.DDGIVolumeComponent.ToggleVolume
struct UDDGIVolumeComponent_ToggleVolume_Params
{
public:
	bool                                         IsVolumeEnabled;                                   // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RTXGI.DDGIVolumeComponent.SetProbesVisualization
struct UDDGIVolumeComponent_SetProbesVisualization_Params
{
public:
	bool                                         IsProbesVisualized;                                // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RTXGI.DDGIVolumeComponent.SetLightMultiplier
struct UDDGIVolumeComponent_SetLightMultiplier_Params
{
public:
	float                                        NewLightMultiplier;                                // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RTXGI.DDGIVolumeComponent.SetIrradianceScalar
struct UDDGIVolumeComponent_SetIrradianceScalar_Params
{
public:
	float                                        NewIrradianceScalar;                               // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RTXGI.DDGIVolumeComponent.SetEmissiveMultiplier
struct UDDGIVolumeComponent_SetEmissiveMultiplier_Params
{
public:
	float                                        NewEmissiveMultiplier;                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RTXGI.DDGIVolumeComponent.GetLightMultiplier
struct UDDGIVolumeComponent_GetLightMultiplier_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RTXGI.DDGIVolumeComponent.GetIrradianceScalar
struct UDDGIVolumeComponent_GetIrradianceScalar_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RTXGI.DDGIVolumeComponent.GetEmissiveMultiplier
struct UDDGIVolumeComponent_GetEmissiveMultiplier_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


