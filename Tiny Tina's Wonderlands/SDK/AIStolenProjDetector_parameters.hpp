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

// 0x2 (0x2 - 0x0)
// Function AIStolenProjDetector.AIStolenProjDetector_C.AIStolenProj_AttemptDetonate
struct UAIStolenProjDetector_C_AIStolenProj_AttemptDetonate_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_DetonateProjectile_ReturnValue;           // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function AIStolenProjDetector.AIStolenProjDetector_C.AIStolenProj_AttemptDisarm
struct UAIStolenProjDetector_C_AIStolenProj_AttemptDisarm_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_DisarmProjectile_ReturnValue;             // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function AIStolenProjDetector.AIStolenProjDetector_C.AIStolenProj_AttemptDestroy
struct UAIStolenProjDetector_C_AIStolenProj_AttemptDestroy_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_DestroyProjectile_ReturnValue;            // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xA (0xA - 0x0)
// Function AIStolenProjDetector.AIStolenProjDetector_C.AIStolenProj_AttemptAttach
struct UAIStolenProjDetector_C_AIStolenProj_AttemptAttach_Params
{
public:
	class FName                                  SocketName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_AttachProjectile_ReturnValue;             // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x52 (0x52 - 0x0)
// Function AIStolenProjDetector.AIStolenProjDetector_C.AIStolenProj_AttemptReturnTo
struct UAIStolenProjDetector_C_AIStolenProj_AttemptReturnTo_Params
{
public:
	enum class Enum_AIThrowAtStyle               ReturnTo;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1E70[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  TargetSocket;                                      // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxPrediction;                                     // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Speed;                                             // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AnglePercent;                                      // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              DirectionOffset;                                   // 0x1C(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FVector                               TargetOffset;                                      // 0x28(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1E78[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                SpecifiedActor;                                    // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               WorldLocation;                                     // 0x40(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x4C(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x4D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ReturnProjectileToLocation_ReturnValue;   // 0x4E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ReturnProjectileToActor_ReturnValue;      // 0x4F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ReturnProjectileToOwner_ReturnValue;      // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ReturnProjectileToTarget_ReturnValue;     // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xE (0xE - 0x0)
// Function AIStolenProjDetector.AIStolenProjDetector_C.AIStolenProj_AttemptLerpToSocket
struct UAIStolenProjDetector_C_AIStolenProj_AttemptLerpToSocket_Params
{
public:
	class FName                                  SocketToLerpTo;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LerpDuration;                                      // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0xC(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LerpToSocket_ReturnValue;                 // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function AIStolenProjDetector.AIStolenProjDetector_C.AIStolenProj_GetElementalTypeFromStolenProjectile
struct UAIStolenProjDetector_C_AIStolenProj_GetElementalTypeFromStolenProjectile_Params
{
public:
	enum class EOakElementalType                 StolenProjectileElement;                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EOakElementalType                 CallFunc_GetElementalType_ReturnValue;             // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function AIStolenProjDetector.AIStolenProjDetector_C.OnStolenProjectileUpdated_Event_0
struct UAIStolenProjDetector_C_OnStolenProjectileUpdated_Event_0_Params
{
public:
	class AActor*                                StolenProjectile;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function AIStolenProjDetector.AIStolenProjDetector_C.OnStolenProjectileDestroyed_Event_0
struct UAIStolenProjDetector_C_OnStolenProjectileDestroyed_Event_0_Params
{
public:
	class AActor*                                StolenProjectile;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function AIStolenProjDetector.AIStolenProjDetector_C.OnStolenProjectileReturned_Event_0
struct UAIStolenProjDetector_C_OnStolenProjectileReturned_Event_0_Params
{
public:
	class AActor*                                StolenProjectile;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function AIStolenProjDetector.AIStolenProjDetector_C.ExecuteUbergraph_AIStolenProjDetector
struct UAIStolenProjDetector_C_ExecuteUbergraph_AIStolenProjDetector_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F0C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_CustomEvent_StolenProjectile;               // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1;             // 0x20(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x30(0x10)(ZeroConstructor, NoDestructor)
	class AActor*                                K2Node_CustomEvent_StolenProjectile2;              // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_CustomEvent_StolenProjectile1;              // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function AIStolenProjDetector.AIStolenProjDetector_C.AIStolenProjectileDestroyFX__DelegateSignature
struct UAIStolenProjDetector_C_AIStolenProjectileDestroyFX__DelegateSignature_Params
{
public:
	class AActor*                                MyStolenProjectile;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function AIStolenProjDetector.AIStolenProjDetector_C.AIStolenProjectileReturnFX__DelegateSignature
struct UAIStolenProjDetector_C_AIStolenProjectileReturnFX__DelegateSignature_Params
{
public:
	class AActor*                                MyStolenProjectile;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function AIStolenProjDetector.AIStolenProjDetector_C.AIStolenProjectileUpdated__DelegateSignature
struct UAIStolenProjDetector_C_AIStolenProjectileUpdated__DelegateSignature_Params
{
public:
	class AActor*                                MyStolenProjectile;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


