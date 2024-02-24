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

// 0x11 (0x11 - 0x0)
// Function BPI_FluxTickableEditorCallback.BPI_FluxTickableEditorCallback_C.UpdateModifierMaterials
struct IBPI_FluxTickableEditorCallback_C_UpdateModifierMaterials_Params
{
public:
	TArray<class UMaterialInstanceDynamic*>      Materials;                                         // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         UseVelocityMap;                                    // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BPI_FluxTickableEditorCallback.BPI_FluxTickableEditorCallback_C.OnEditorSelectionChanged
struct IBPI_FluxTickableEditorCallback_C_OnEditorSelectionChanged_Params
{
public:
	bool                                         Selected;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BPI_FluxTickableEditorCallback.BPI_FluxTickableEditorCallback_C.OnEditorIterateSimulation
struct IBPI_FluxTickableEditorCallback_C_OnEditorIterateSimulation_Params
{
public:
	int32                                        Iterations;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


