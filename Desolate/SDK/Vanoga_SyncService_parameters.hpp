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
// Function Vanoga_SyncService.Vanoga_SyncService_C.SS_SetPatrolType
struct UVanoga_SyncService_C_SS_SetPatrolType_Params
{
public:
	enum class EVanoga_PatrolTypes               NewType;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function Vanoga_SyncService.Vanoga_SyncService_C.SS_SetPatrolPoiLocation
struct UVanoga_SyncService_C_SS_SetPatrolPoiLocation_Params
{
public:
	struct FVector                               Location;                                          // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Vanoga_SyncService.Vanoga_SyncService_C.SS_SetPatrolPoiType
struct UVanoga_SyncService_C_SS_SetPatrolPoiType_Params
{
public:
	enum class EVanoga_PatrolPoiType             PatrolPoiType;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


