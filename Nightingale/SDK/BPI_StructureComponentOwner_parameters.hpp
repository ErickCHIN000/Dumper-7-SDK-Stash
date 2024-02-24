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

// 0x28 (0x28 - 0x0)
// Function BPI_StructureComponentOwner.BPI_StructureComponentOwner_C.CallHealthChangedEvent
struct IBPI_StructureComponentOwner_C_CallHealthChangedEvent_Params
{
public:
	struct FStructureHealthChangedContext        HealthChangedContext;                              // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BPI_StructureComponentOwner.BPI_StructureComponentOwner_C.GetEventsObject
struct IBPI_StructureComponentOwner_C_GetEventsObject_Params
{
public:
	class UStructureEventsObject*                EventObject;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

}
}


