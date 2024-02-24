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
// Function MS_SyncService.MS_SyncService_C.SS_SetWeaponType
struct UMS_SyncService_C_SS_SetWeaponType_Params
{
public:
	enum class EMadman_WeaponType                NewType;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function MS_SyncService.MS_SyncService_C.SS_SetPatrolType
struct UMS_SyncService_C_SS_SetPatrolType_Params
{
public:
	enum class EMS_PatrolTypes                   NewType;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function MS_SyncService.MS_SyncService_C.SS_SyncDemoniacState
struct UMS_SyncService_C_SS_SyncDemoniacState_Params
{
public:
	enum class EMS_DemoniacStates                State;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function MS_SyncService.MS_SyncService_C.SS_SetPatrolPOI
struct UMS_SyncService_C_SS_SetPatrolPOI_Params
{
public:
	enum class EMS_PatrolPoiType                 PoiType;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1253[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               PoiLocation;                                       // 0x4(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


