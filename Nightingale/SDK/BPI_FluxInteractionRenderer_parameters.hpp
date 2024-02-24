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
// Function BPI_FluxInteractionRenderer.BPI_FluxInteractionRenderer_C.GetCoastlineState
struct IBPI_FluxInteractionRenderer_C_GetCoastlineState_Params
{
public:
	class UPDA_FluxCoastlineState_C*             State;                                             // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BPI_FluxInteractionRenderer.BPI_FluxInteractionRenderer_C.GetSimulationState
struct IBPI_FluxInteractionRenderer_C_GetSimulationState_Params
{
public:
	class UPDA_FluxSimulationState_C*            State;                                             // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BPI_FluxInteractionRenderer.BPI_FluxInteractionRenderer_C.SetInteractionsTexture
struct IBPI_FluxInteractionRenderer_C_SetInteractionsTexture_Params
{
public:
	class UTextureRenderTarget2D*                Texture;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BPI_FluxInteractionRenderer.BPI_FluxInteractionRenderer_C.SetInteractionsArea
struct IBPI_FluxInteractionRenderer_C_SetInteractionsArea_Params
{
public:
	struct FLinearColor                          Area;                                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BPI_FluxInteractionRenderer.BPI_FluxInteractionRenderer_C.CanRenderInteractions
struct IBPI_FluxInteractionRenderer_C_CanRenderInteractions_Params
{
public:
	bool                                         CanRender;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


