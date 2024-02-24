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
// Function BPI_SchematicInterfaces.BPI_SchematicInterfaces_C.GetFuelComponent
struct IBPI_SchematicInterfaces_C_GetFuelComponent_Params
{
public:
	class UBP_StructureFuelComponent_C*          FuelComponent;                                     // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BPI_SchematicInterfaces.BPI_SchematicInterfaces_C.GetInventoryContainerInterface
struct IBPI_SchematicInterfaces_C_GetInventoryContainerInterface_Params
{
public:
	class AActor*                                RequestingActor;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IItemContainer>       ContainerInterface;                                // 0x8(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


