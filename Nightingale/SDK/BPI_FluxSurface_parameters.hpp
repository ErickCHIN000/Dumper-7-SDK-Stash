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
// Function BPI_FluxSurface.BPI_FluxSurface_C.SetCoastlineState
struct IBPI_FluxSurface_C_SetCoastlineState_Params
{
public:
	class UPDA_FluxCoastlineState_C*             State;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BPI_FluxSurface.BPI_FluxSurface_C.SetSimulationState
struct IBPI_FluxSurface_C_SetSimulationState_Params
{
public:
	class UPDA_FluxSimulationState_C*            State;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x1C (0x1C - 0x0)
// Function BPI_FluxSurface.BPI_FluxSurface_C.SpawnSplashAtLocation
struct IBPI_FluxSurface_C_SpawnSplashAtLocation_Params
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Type;                                              // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BPI_FluxSurface.BPI_FluxSurface_C.SetStateHeightWetMap
struct IBPI_FluxSurface_C_SetStateHeightWetMap_Params
{
public:
	class UTexture*                              Texture;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BPI_FluxSurface.BPI_FluxSurface_C.GetVolumeCollision
struct IBPI_FluxSurface_C_GetVolumeCollision_Params
{
public:
	class UPrimitiveComponent*                   Volume;                                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BPI_FluxSurface.BPI_FluxSurface_C.ApplySurfaceMaterialData
struct IBPI_FluxSurface_C_ApplySurfaceMaterialData_Params
{
public:
	TArray<class UMaterialInstanceDynamic*>      Materials;                                         // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0xA (0xA - 0x0)
// Function BPI_FluxSurface.BPI_FluxSurface_C.ApplySurfaceNiagaraData
struct IBPI_FluxSurface_C_ApplySurfaceNiagaraData_Params
{
public:
	class UNiagaraComponent*                     ParticleSystem;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         RequiredGround;                                    // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         RequiredWave;                                      // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


