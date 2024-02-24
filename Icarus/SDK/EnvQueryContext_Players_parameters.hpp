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

// 0x30 (0x30 - 0x0)
// Function EnvQueryContext_Players.EnvQueryContext_Players_C.ProvideActorsSet
struct UEnvQueryContext_Players_C_ProvideActorsSet_Params
{
public:
	class UObject*                               QuerierObject;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                QuerierActor;                                      // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                        ResultingActorsSet;                                // 0x10(0x10)(Parm, OutParm)
	TArray<class AIcarusPlayerCharacter*>        CallFunc_GetAllActorsOfClass_OutActors;            // 0x20(0x10)(ReferenceParm)
};

}
}


