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
// Function BPI_FluxWaveRenderer.BPI_FluxWaveRenderer_C.SetWaveProfile
struct IBPI_FluxWaveRenderer_C_SetWaveProfile_Params
{
public:
	class UPDA_FluxWaveProfile_C*                Profile;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BPI_FluxWaveRenderer.BPI_FluxWaveRenderer_C.GetWaveTextureMaterials
struct IBPI_FluxWaveRenderer_C_GetWaveTextureMaterials_Params
{
public:
	TArray<class UMaterialInstanceDynamic*>      MaterialInstances;                                 // 0x0(0x10)(Parm, OutParm)
};

// 0x18 (0x18 - 0x0)
// Function BPI_FluxWaveRenderer.BPI_FluxWaveRenderer_C.SetWaveTextureAndArea
struct IBPI_FluxWaveRenderer_C_SetWaveTextureAndArea_Params
{
public:
	class UTextureRenderTarget2D*                Texture;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Area;                                              // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BPI_FluxWaveRenderer.BPI_FluxWaveRenderer_C.CanRenderWave
struct IBPI_FluxWaveRenderer_C_CanRenderWave_Params
{
public:
	bool                                         CanRender;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


