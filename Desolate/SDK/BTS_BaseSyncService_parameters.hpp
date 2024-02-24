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

// 0x4 (0x4 - 0x0)
// Function BTS_BaseSyncService.BTS_BaseSyncService_C.SS_SetMovingDuration
struct UBTS_BaseSyncService_C_SS_SetMovingDuration_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function BTS_BaseSyncService.BTS_BaseSyncService_C.SS_SetMovingLocation
struct UBTS_BaseSyncService_C_SS_SetMovingLocation_Params
{
public:
	struct FVector                               Value;                                             // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BTS_BaseSyncService.BTS_BaseSyncService_C.SS_SetIsHitted
struct UBTS_BaseSyncService_C_SS_SetIsHitted_Params
{
public:
	bool                                         bIsHitted;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BTS_BaseSyncService.BTS_BaseSyncService_C.SS_SetSlowProjectileReady
struct UBTS_BaseSyncService_C_SS_SetSlowProjectileReady_Params
{
public:
	bool                                         Value;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC (0xC - 0x0)
// Function BTS_BaseSyncService.BTS_BaseSyncService_C.SS_SetEvadePoint
struct UBTS_BaseSyncService_C_SS_SetEvadePoint_Params
{
public:
	struct FVector                               EvadePoint;                                        // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BTS_BaseSyncService.BTS_BaseSyncService_C.SS_SetAggroEmotionReady
struct UBTS_BaseSyncService_C_SS_SetAggroEmotionReady_Params
{
public:
	bool                                         Value;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BTS_BaseSyncService.BTS_BaseSyncService_C.SS_SetBehaviorType
struct UBTS_BaseSyncService_C_SS_SetBehaviorType_Params
{
public:
	enum class EAIBehaviorType                   BehaviorType;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function BTS_BaseSyncService.BTS_BaseSyncService_C.SS_SetGroupMovingLocation
struct UBTS_BaseSyncService_C_SS_SetGroupMovingLocation_Params
{
public:
	struct FVector                               GroupMovingLocation;                               // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function BTS_BaseSyncService.BTS_BaseSyncService_C.SS_SyncLastNoiseLocation
struct UBTS_BaseSyncService_C_SS_SyncLastNoiseLocation_Params
{
public:
	struct FVector                               Location;                                          // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function BTS_BaseSyncService.BTS_BaseSyncService_C.SS_SetSpawnPoint
struct UBTS_BaseSyncService_C_SS_SetSpawnPoint_Params
{
public:
	struct FVector                               SpawnPoint;                                        // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function BTS_BaseSyncService.BTS_BaseSyncService_C.SS_SetState
struct UBTS_BaseSyncService_C_SS_SetState_Params
{
public:
	enum class EAIStates                         State;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAIStates                         PreviousState;                                     // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function BTS_BaseSyncService.BTS_BaseSyncService_C.SS_SetPatrolPoint
struct UBTS_BaseSyncService_C_SS_SetPatrolPoint_Params
{
public:
	struct FVector                               PatrolPoint;                                       // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BTS_BaseSyncService.BTS_BaseSyncService_C.ReceiveSearchStart
struct UBTS_BaseSyncService_C_ReceiveSearchStart_Params
{
public:
	class AActor*                                OwnerActor;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x32 (0x32 - 0x0)
// Function BTS_BaseSyncService.BTS_BaseSyncService_C.ExecuteUbergraph_BTS_BaseSyncService
struct UBTS_BaseSyncService_C_ExecuteUbergraph_BTS_BaseSyncService_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_129B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_Event_OwnerActor;                           // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAIController*                         K2Node_DynamicCast_AsAIController;                 // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_129D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABaseAiCharacter_C*                    K2Node_DynamicCast_AsBase_Ai_Character;            // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SetSyncService_Result;                    // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


