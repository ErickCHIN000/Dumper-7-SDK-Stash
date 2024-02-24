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

// 0x18 (0x18 - 0x0)
// Function Maneater.ManeaterAIFunctionLibrary.GetPawnAndAIController
struct UManeaterAIFunctionLibrary_GetPawnAndAIController_Params
{
public:
	class UObject*                               InObject;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APawn*                                 Out_Pawn;                                          // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AME_AIController*                      Out_AIController;                                  // 0x10(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// Function Maneater.ME_AbilitySystemComponent.SpawnEmitter
struct UME_AbilitySystemComponent_SpawnEmitter_Params
{
public:
	struct FMEGameplayEffectParticleSystem       GameplayEffectParticleSystem;                      // 0x0(0x70)(Parm, OutParm, NativeAccessSpecifierPublic)
	class UParticleSystem*                       ParticleSystem;                                    // 0x70(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       AttachComponent;                                   // 0x78(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_AbilitySystemComponent.GetAttributeSet
struct UME_AbilitySystemComponent_GetAttributeSet_Params
{
public:
	TSubclassOf<class UME_AttributeSet>          AttributeSetClass;                                 // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UME_AttributeSet*                      ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_ActorDamageInterface.GetSizeLevel
struct IME_ActorDamageInterface_GetSizeLevel_Params
{
public:
	class AME_AnimalCharacter*                   GrabbingAnimal;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E1[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_ActorDamageInterface.GetMaxHealth
struct IME_ActorDamageInterface_GetMaxHealth_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_ActorDamageInterface.GetCurrentHealth
struct IME_ActorDamageInterface_GetCurrentHealth_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_AggroComponent.GetSuspicionLevel
struct UME_AggroComponent_GetSuspicionLevel_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_AggroComponent.GetAlertState
struct UME_AggroComponent_GetAlertState_Params
{
public:
	enum class EAIThreatAlertState               ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function Maneater.ME_AICombatInterface.CanAIAttackTarget
struct IME_AICombatInterface_CanAIAttackTarget_Params
{
public:
	struct FAttackTarget                         PotentialTarget;                                   // 0x0(0x18)(Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_44A[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function Maneater.ME_AICombatInterface.AIAttackTarget
struct IME_AICombatInterface_AIAttackTarget_Params
{
public:
	struct FAttackTarget                         NewTarget;                                         // 0x0(0x18)(Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_AIController.UseNearestPatrolPoint
struct AME_AIController_UseNearestPatrolPoint_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_AIController.UseAbility
struct AME_AIController_UseAbility_Params
{
public:
	struct FGameplayAbilitySpecHandle            AbilityHandle;                                     // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_46C[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_AIController.TransferAlertKnowledge
struct AME_AIController_TransferAlertKnowledge_Params
{
public:
	class AME_AIController*                      AIC;                                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_AIController.SetUseNearestPatrolPoint
struct AME_AIController_SetUseNearestPatrolPoint_Params
{
public:
	bool                                         bUseNearest;                                       // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_AIController.SetPatrolPlotter
struct AME_AIController_SetPatrolPlotter_Params
{
public:
	class ATwAIPatrolPlotter*                    InPatrolPlotter;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function Maneater.ME_AIController.SetLeashLocation
struct AME_AIController_SetLeashLocation_Params
{
public:
	struct FVector                               InLeashLocation;                                   // 0x0(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_AIController.SetLeashActive
struct AME_AIController_SetLeashActive_Params
{
public:
	bool                                         bSetActive;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_AIController.SetCurrentDefinedPatrolIndex
struct AME_AIController_SetCurrentDefinedPatrolIndex_Params
{
public:
	int32                                        NewPatrolIdx;                                      // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_AIController.SetBehaviorTreeEnabled
struct AME_AIController_SetBehaviorTreeEnabled_Params
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Maneater.ME_AIController.SetAlertState
struct AME_AIController_SetAlertState_Params
{
public:
	enum class EAIThreatAlertState               NewAlertState;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C5[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                AlertInstigator;                                   // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForced;                                           // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C6[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MillisecondDelayMax;                               // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_AIController.OnSuspicionIncreased
struct AME_AIController_OnSuspicionIncreased_Params
{
public:
	float                                        NewSuspicionLevel;                                 // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4CF[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                SuspicionInstigator;                               // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_AIController.OnPlayerPawnStatusChanged
struct AME_AIController_OnPlayerPawnStatusChanged_Params
{
public:
	class AActor*                                PlayerPawn;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Maneater.ME_AIController.OnHeardNoise
struct AME_AIController_OnHeardNoise_Params
{
public:
	struct FVector                               NoiseOrigin;                                       // 0x0(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NoiseIntensity;                                    // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                NoiseInstigator;                                   // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_AIController.OnDamagedPlayer
struct AME_AIController_OnDamagedPlayer_Params
{
public:
	float                                        DamageAmount;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_AIController.OnDamaged
struct AME_AIController_OnDamaged_Params
{
public:
	float                                        DamageAmount;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4E8[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                DamageInstigator;                                  // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_AIController.OnCombatStatusChanged
struct AME_AIController_OnCombatStatusChanged_Params
{
public:
	enum class ECombatStatus                     Status;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// Function Maneater.ME_AIController.NotifyPawnHit
struct AME_AIController_NotifyPawnHit_Params
{
public:
	class AActor*                                SelfActor;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                OtherActor;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               NormalImpulse;                                     // 0x10(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                            Hit;                                               // 0x1C(0x88)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_4FB[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function Maneater.ME_AIController.NotifyPawnDamaged
struct AME_AIController_NotifyPawnDamaged_Params
{
public:
	class AActor*                                DamagedActor;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damage;                                            // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_50B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDamageType*                           DamageType;                                        // 0x10(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AController*                           InstigatedBy;                                      // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                DamageCauser;                                      // 0x20(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Maneater.ME_AIController.MakeAIAudibleNoise
struct AME_AIController_MakeAIAudibleNoise_Params
{
public:
	struct FVector                               Origin;                                            // 0x0(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Intensity;                                         // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                NoiseInstigator;                                   // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_AIController.IsPlayerInstigatedAlert
struct AME_AIController_IsPlayerInstigatedAlert_Params
{
public:
	class AActor*                                AlertInstigator;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_51B[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_AIController.IsOnNavmesh
struct AME_AIController_IsOnNavmesh_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_AIController.IsDormant
struct AME_AIController_IsDormant_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_AIController.IsAlertedToPlayer
struct AME_AIController_IsAlertedToPlayer_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_AIController.IncreaseSuspicion
struct AME_AIController_IncreaseSuspicion_Params
{
public:
	float                                        SuspicionAmount;                                   // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_536[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                SuspcionInstigator;                                // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_AIController.GetTotalCombatPriority
struct AME_AIController_GetTotalCombatPriority_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_AIController.GetSuspicion
struct AME_AIController_GetSuspicion_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_AIController.GetSightDistance
struct AME_AIController_GetSightDistance_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_AIController.GetPawnAbilitySystemComponent
struct AME_AIController_GetPawnAbilitySystemComponent_Params
{
public:
	class UAbilitySystemComponent*               ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_AIController.GetPatrolPlotter
struct AME_AIController_GetPatrolPlotter_Params
{
public:
	class ATwAIPatrolPlotter*                    ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function Maneater.ME_AIController.GetLeashLocation
struct AME_AIController_GetLeashLocation_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_AIController.GetLeashDistance
struct AME_AIController_GetLeashDistance_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_AIController.GetLeashActive
struct AME_AIController_GetLeashActive_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_AIController.GetEnemy
struct AME_AIController_GetEnemy_Params
{
public:
	class AActor*                                ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_AIController.GetCurrentDefinedPatrolIndex
struct AME_AIController_GetCurrentDefinedPatrolIndex_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_AIController.GetCurrentAlert
struct AME_AIController_GetCurrentAlert_Params
{
public:
	enum class EAIThreatAlertState               ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_AIController.GetCombatStatus
struct AME_AIController_GetCombatStatus_Params
{
public:
	enum class ECombatStatus                     ReturnValue;                                       // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_AIController.GetCombatPriorityBuffs
struct AME_AIController_GetCombatPriorityBuffs_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_AIController.GetCombatPriority
struct AME_AIController_GetCombatPriority_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_AIController.GetCombatLockTime
struct AME_AIController_GetCombatLockTime_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_AIController.GetCombatCooldownTime
struct AME_AIController_GetCombatCooldownTime_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_AIController.GetClosestEscapeVolume
struct AME_AIController_GetClosestEscapeVolume_Params
{
public:
	class AMEEscapeVolume*                       ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_AIController.GetBoatEscapeVolume
struct AME_AIController_GetBoatEscapeVolume_Params
{
public:
	class AMEEscapeVolume*                       ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_AIController.GetBaseSightDistance
struct AME_AIController_GetBaseSightDistance_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_AIController.GetAbilityPriority
struct AME_AIController_GetAbilityPriority_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_AIController.CancelAbility
struct AME_AIController_CancelAbility_Params
{
public:
	struct FGameplayAbilitySpecHandle            AbilityHandle;                                     // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function Maneater.ME_AIController.AttackTargetActor
struct AME_AIController_AttackTargetActor_Params
{
public:
	struct FAttackTarget                         NewTarget;                                         // 0x0(0x18)(Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_650[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_AIController.AlertStateChangedInternal
struct AME_AIController_AlertStateChangedInternal_Params
{
public:
	enum class EAIThreatAlertState               OldAlertState;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAIThreatAlertState               NewState;                                          // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_669[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                ChangeInstigator;                                  // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_AIController.AddCombatPriorityBuff
struct AME_AIController_AddCombatPriorityBuff_Params
{
public:
	struct FCombatPriorityBuff                   CombatPriorityBuff;                                // 0x0(0x8)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_AIController.AbilityEnded
struct AME_AIController_AbilityEnded_Params
{
public:
	struct FAbilityEndedData                     AbilityData;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_AIDirector.UnregisterEvent
struct AME_AIDirector_UnregisterEvent_Params
{
public:
	class UME_AlertEvent*                        AlertEvent;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_AIDirector.UnregisterAllEvents
struct AME_AIDirector_UnregisterAllEvents_Params
{
public:
	class AActor*                                LinkedActor;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_AIDirector.RegisterEvent
struct AME_AIDirector_RegisterEvent_Params
{
public:
	class UME_AlertEvent*                        AlertEvent;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_AIDirector.OnEventPulse
struct AME_AIDirector_OnEventPulse_Params
{
public:
	class UME_AlertEvent*                        AlertEvent;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_AIDirector.OnEndAbility
struct AME_AIDirector_OnEndAbility_Params
{
public:
	class AME_AIController*                      AIC;                                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UME_GameplayAbility*                   Ability;                                           // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_AIDirector.NotifyIncomingAttack
struct AME_AIDirector_NotifyIncomingAttack_Params
{
public:
	float                                        BaseIncomingAttackDistance;                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsBite;                                           // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7BB[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function Maneater.ME_AIDirector.GetReleventWitnessEvents
struct AME_AIDirector_GetReleventWitnessEvents_Params
{
public:
	class AME_AIController*                      AIC;                                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UME_AlertEvent_Witness*>        Out_WitnessAlerts;                                 // 0x8(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_AIDirector.GetCombatManager
struct AME_AIDirector_GetCombatManager_Params
{
public:
	class UME_CombatManager*                     ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function Maneater.ME_AIDirector.ForceToAlertState
struct AME_AIDirector_ForceToAlertState_Params
{
public:
	enum class EAIThreatAlertState               NewAlertState;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7EA[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Origin;                                            // 0x4(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7EB[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class APawn>                     PawnClass;                                         // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_AIDirector.CreateAndRegisterWitnessEvent
struct AME_AIDirector_CreateAndRegisterWitnessEvent_Params
{
public:
	class AActor*                                LinkedActor;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UME_AlertEvent_Witness*                ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Maneater.ME_AIDirector.BroadcastNoise
struct AME_AIDirector_BroadcastNoise_Params
{
public:
	struct FVector                               NoiseOrigin;                                       // 0x0(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NoiseIntensity;                                    // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                NoiseInstigator;                                   // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function Maneater.ME_VehicleMovementComponent.GetLocalVelocity
struct UME_VehicleMovementComponent_GetLocalVelocity_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function Maneater.ME_VehicleMovementComponent.GetAngularVelocity
struct UME_VehicleMovementComponent_GetAngularVelocity_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x24 (0x24 - 0x0)
// Function Maneater.ME_VehicleMovementComponent.AddImpulse
struct UME_VehicleMovementComponent_AddImpulse_Params
{
public:
	struct FVector                               Impulse;                                           // 0x0(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ImpulseLocation;                                   // 0xC(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ImpulseNormal;                                     // 0x18(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function Maneater.ME_AlertEvent.SetEventLocation
struct UME_AlertEvent_SetEventLocation_Params
{
public:
	struct FVector                               InEventLocation;                                   // 0x0(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_AlertEvent.LinkActorToEvent
struct UME_AlertEvent_LinkActorToEvent_Params
{
public:
	class AActor*                                ActorToLink;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_AlertEvent.GetSuspicionAmount
struct UME_AlertEvent_GetSuspicionAmount_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_AlertEvent.GetLinkedActor
struct UME_AlertEvent_GetLinkedActor_Params
{
public:
	class AActor*                                ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function Maneater.ME_AlertEvent.GetEventLocation
struct UME_AlertEvent_GetEventLocation_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_AlertEvent.CanProcessEvent
struct UME_AlertEvent_CanProcessEvent_Params
{
public:
	class AME_AIController*                      AIC;                                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8CD[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function Maneater.ME_AlertEvent_Witness.GetCachedVisiblePoint
struct UME_AlertEvent_Witness_GetCachedVisiblePoint_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function Maneater.ME_CharacterAIController.OnGameplayTagRemoved
struct AME_CharacterAIController_OnGameplayTagRemoved_Params
{
public:
	struct FGameplayTagContainer                 TagsRemoved;                                       // 0x0(0x20)(Parm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function Maneater.ME_CharacterAIController.OnGameplayTagAdded
struct AME_CharacterAIController_OnGameplayTagAdded_Params
{
public:
	struct FGameplayTagContainer                 TagsAdded;                                         // 0x0(0x20)(Parm, NativeAccessSpecifierPublic)
	float                                        TagDuration;                                       // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_975[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2 (0x2 - 0x0)
// Function Maneater.ME_CharacterAIController.OnForceStopMoving
struct AME_CharacterAIController_OnForceStopMoving_Params
{
public:
	enum class EThreeStateSwitch                 MovementState;                                     // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EThreeStateSwitch                 RotationState;                                     // 0x1(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_AnimalAIController.TriggerEvadeIfWithinRange
struct AME_AnimalAIController_TriggerEvadeIfWithinRange_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_AnimalAIController.TriggerEvade
struct AME_AnimalAIController_TriggerEvade_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_AnimalAIController.OnPreyGrabbed
struct AME_AnimalAIController_OnPreyGrabbed_Params
{
public:
	class AME_AnimalCharacter*                   Grabber;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Prey;                                              // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_Character.StopAI
struct AME_Character_StopAI_Params
{
public:
	class FString                                StopReason;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function Maneater.ME_Character.SetRootMotionNonUniformTranslationScale
struct AME_Character_SetRootMotionNonUniformTranslationScale_Params
{
public:
	struct FVector                               InRootMotionScale;                                 // 0x0(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_Character.SetDesiredAnimDir
struct AME_Character_SetDesiredAnimDir_Params
{
public:
	enum class EDirOctant                        AnimDir;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_Character.SetDeathPhysics
struct AME_Character_SetDeathPhysics_Params
{
public:
	float                                        PhysicsBlendDuration;                              // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPartialPhysics;                                   // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9F9[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_Character.SetAIPatrolPlotter
struct AME_Character_SetAIPatrolPlotter_Params
{
public:
	class ATwAIPatrolPlotter*                    InPatrolPlotter;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_Character.RestartAI
struct AME_Character_RestartAI_Params
{
public:
	bool                                         bMaintainAggroInfo;                                // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Maneater.ME_Character.PulseDynamicDialogueEvent
struct AME_Character_PulseDynamicDialogueEvent_Params
{
public:
	class FName                                  DialogueEventName;                                 // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        ArgumentValueNames;                                // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function Maneater.ME_Character.ProcessRagdollImpactResponse
struct AME_Character_ProcessRagdollImpactResponse_Params
{
public:
	class UPhysicalMaterial*                     InstigatorPM;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   InstigatorComp;                                    // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   OtherComp;                                         // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitLocation;                                       // 0x18(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitNormal;                                         // 0x24(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               NormalImpulse;                                     // 0x30(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A26[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function Maneater.ME_Character.PostDynamicDialogueEvent
struct AME_Character_PostDynamicDialogueEvent_Params
{
public:
	class FName                                  DialogueEventName;                                 // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        ArgumentValueNames;                                // 0x8(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function Maneater.ME_Character.PlayVoice
struct AME_Character_PlayVoice_Params
{
public:
	enum class ECharacterVoiceEventType          VoiceType;                                         // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A3D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        VoicePriority;                                     // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A3E[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_Character.OnPlayerSharkGrowthLevelChanged
struct AME_Character_OnPlayerSharkGrowthLevelChanged_Params
{
public:
	int32                                        NewLevel;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bChangeFromTheoretical;                            // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A4D[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_Character.OnPhysicsVolumeChanged
struct AME_Character_OnPhysicsVolumeChanged_Params
{
public:
	class APhysicsVolume*                        NewVolume;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x370 (0x370 - 0x0)
// Function Maneater.ME_Character.OnGameplayEffectRemoved
struct AME_Character_OnGameplayEffectRemoved_Params
{
public:
	struct FActiveGameplayEffect                 RemovedGameplayEffect;                             // 0x0(0x370)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x2A8 (0x2A8 - 0x0)
// Function Maneater.ME_Character.OnGameplayEffectApplied
struct AME_Character_OnGameplayEffectApplied_Params
{
public:
	class UAbilitySystemComponent*               Source;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEffectSpec                   SpecApplied;                                       // 0x8(0x298)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FActiveGameplayEffectHandle           ActiveHandle;                                      // 0x2A0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_Character.OnDied
struct AME_Character_OnDied_Params
{
public:
	class AController*                           Killer;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_Character.IsVulnerable
struct AME_Character_IsVulnerable_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_Character.IsUnderwater
struct AME_Character_IsUnderwater_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_Character.IsTagged
struct AME_Character_IsTagged_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_Character.IsSilhouetted
struct AME_Character_IsSilhouetted_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_Character.IsPhysicalAnimationActive
struct AME_Character_IsPhysicalAnimationActive_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_Character.IsPassenger
struct AME_Character_IsPassenger_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_Character.IsInstigatingAnyAlerts
struct AME_Character_IsInstigatingAnyAlerts_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_Character.IsDrowning
struct AME_Character_IsDrowning_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_Character.IsCritVulnerable
struct AME_Character_IsCritVulnerable_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_Character.IsBeingThrashedByPlayer
struct AME_Character_IsBeingThrashedByPlayer_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_Character.IsBeingThrashed
struct AME_Character_IsBeingThrashed_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_Character.IsAliveAndWell
struct AME_Character_IsAliveAndWell_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_Character.IsAbilitySystemComponentSetUp
struct AME_Character_IsAbilitySystemComponentSetUp_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_Character.HasPassedVulnerabilityThreshold
struct AME_Character_HasPassedVulnerabilityThreshold_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_Character.GetWasRecentlyBumped
struct AME_Character_GetWasRecentlyBumped_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_Character.GetVisionTypeAsDialogueString
struct AME_Character_GetVisionTypeAsDialogueString_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function Maneater.ME_Character.GetThrashEscapeDirection
struct AME_Character_GetThrashEscapeDirection_Params
{
public:
	struct FRotator                              ReturnValue;                                       // 0x0(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function Maneater.ME_Character.GetRootMotionNonUniformTranslationScale
struct AME_Character_GetRootMotionNonUniformTranslationScale_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_Character.GetPassengerVehicle
struct AME_Character_GetPassengerVehicle_Params
{
public:
	class AME_VehiclePawn*                       ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_Character.GetPassengerSeat
struct AME_Character_GetPassengerSeat_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_Character.GetOriginalPhysicsAsset
struct AME_Character_GetOriginalPhysicsAsset_Params
{
public:
	class UPhysicsAsset*                         ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function Maneater.ME_Character.GetNutritionData_BP
struct AME_Character_GetNutritionData_BP_Params
{
public:
	struct FNutrientChunkList                    ReturnValue;                                       // 0x0(0x20)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_Character.GetMercunaObstacle
struct AME_Character_GetMercunaObstacle_Params
{
public:
	class UME_MercunaObstacleComponent*          ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_Character.GetMercunaNavigation
struct AME_Character_GetMercunaNavigation_Params
{
public:
	class UME_MercunaNavigationComponent*        ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_Character.GetLocationAsDialogueString
struct AME_Character_GetLocationAsDialogueString_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function Maneater.ME_Character.GetHeadLocation
struct AME_Character_GetHeadLocation_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_Character.GetFloorPhysicalMaterial
struct AME_Character_GetFloorPhysicalMaterial_Params
{
public:
	class UME_PhysicalMaterial*                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_Character.GetDesiredAnimDir
struct AME_Character_GetDesiredAnimDir_Params
{
public:
	enum class EDirOctant                        ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_Character.GetCollisionComponent
struct AME_Character_GetCollisionComponent_Params
{
public:
	class UCapsuleComponent*                     ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_Character.GetCharacterVisionType
struct AME_Character_GetCharacterVisionType_Params
{
public:
	enum class EVisionType                       ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_Character.GetAIPatrolPlotter
struct AME_Character_GetAIPatrolPlotter_Params
{
public:
	class ATwAIPatrolPlotter*                    ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_Character.GetAbilitySystemComponent
struct AME_Character_GetAbilitySystemComponent_Params
{
public:
	class UME_AbilitySystemComponent*            ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_Character.Died
struct AME_Character_Died_Params
{
public:
	class AController*                           Killer;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPlayDeathAnimation;                               // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AFE[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2 (0x2 - 0x0)
// Function Maneater.ME_Character.CanVisionTypeSeeCharacter
struct AME_Character_CanVisionTypeSeeCharacter_Params
{
public:
	enum class EVisionType                       VisionType;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_AnimalCharacter.UpdatePartialRagdoll
struct AME_AnimalCharacter_UpdatePartialRagdoll_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function Maneater.ME_AnimalCharacter.UpdateJointBlendWeight
struct AME_AnimalCharacter_UpdateJointBlendWeight_Params
{
public:
	class USkeletalMeshComponent*                SKM;                                               // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PartialPhysicsBase;                                // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AnimBlendMultiplier;                               // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpeedPercent;                                      // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B94[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x3 (0x3 - 0x0)
// Function Maneater.ME_AnimalCharacter.TryUseEvadeAbility
struct AME_AnimalCharacter_TryUseEvadeAbility_Params
{
public:
	enum class EComboDirection                   InputDirection;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReversed;                                         // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x2(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_AnimalCharacter.SetThreatLevel
struct AME_AnimalCharacter_SetThreatLevel_Params
{
public:
	enum class EAIThreatAlertState               NewAlertState;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BA0[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                InstigatingActor;                                  // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x180 (0x180 - 0x0)
// Function Maneater.ME_AnimalCharacter.OnConsumedGrabPoint
struct AME_AnimalCharacter_OnConsumedGrabPoint_Params
{
public:
	struct FThrashGrabPoint                      ConsumedGrabPoint;                                 // 0x0(0x180)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_AnimalCharacter.OnAbilityActivated
struct AME_AnimalCharacter_OnAbilityActivated_Params
{
public:
	enum class EME_CharacterAbility              Ability;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_AnimalCharacter.ModifyStamina
struct AME_AnimalCharacter_ModifyStamina_Params
{
public:
	float                                        Change;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_AnimalCharacter.IsTransitioning
struct AME_AnimalCharacter_IsTransitioning_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_AnimalCharacter.IsThrashing
struct AME_AnimalCharacter_IsThrashing_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_AnimalCharacter.IsLunging
struct AME_AnimalCharacter_IsLunging_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_AnimalCharacter.IsEvading
struct AME_AnimalCharacter_IsEvading_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_AnimalCharacter.HasAnyStamina
struct AME_AnimalCharacter_HasAnyStamina_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_AnimalCharacter.GetThrashDecayPct
struct AME_AnimalCharacter_GetThrashDecayPct_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_AnimalCharacter.GetThrashDamagePool
struct AME_AnimalCharacter_GetThrashDamagePool_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function Maneater.ME_AnimalCharacter.GetTailLocation
struct AME_AnimalCharacter_GetTailLocation_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_AnimalCharacter.GetTailControlStrength
struct AME_AnimalCharacter_GetTailControlStrength_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_AnimalCharacter.GetPreyAttachBoneName
struct AME_AnimalCharacter_GetPreyAttachBoneName_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_AnimalCharacter.GetMaxMoveSpeed
struct AME_AnimalCharacter_GetMaxMoveSpeed_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function Maneater.ME_AnimalCharacter.GetJawsLocation
struct AME_AnimalCharacter_GetJawsLocation_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_AnimalCharacter.GetJawSize
struct AME_AnimalCharacter_GetJawSize_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_AnimalCharacter.GetDrownSpeedModifier
struct AME_AnimalCharacter_GetDrownSpeedModifier_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_AnimalCharacter.GetDrownSpeedBase
struct AME_AnimalCharacter_GetDrownSpeedBase_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_AnimalCharacter.GetCurrentSpeedPct
struct AME_AnimalCharacter_GetCurrentSpeedPct_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_AnimalCharacter.GetBaseThrashDamage
struct AME_AnimalCharacter_GetBaseThrashDamage_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_AnimalCharacter.GetBaseTailwhipDamage
struct AME_AnimalCharacter_GetBaseTailwhipDamage_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_AnimalCharacter.GetBaseStrugglePower
struct AME_AnimalCharacter_GetBaseStrugglePower_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_AnimalCharacter.GetBaseStrikeDamage
struct AME_AnimalCharacter_GetBaseStrikeDamage_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_AnimalCharacter.GetBaseBiteDamage
struct AME_AnimalCharacter_GetBaseBiteDamage_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_AnimalCharacter.ConsumePreyWhole
struct AME_AnimalCharacter_ConsumePreyWhole_Params
{
public:
	class AActor*                                ThrashablePrey;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BD7[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_AnimalCharacter.CanGrabPrey
struct AME_AnimalCharacter_CanGrabPrey_Params
{
public:
	class AActor*                                ThrashablePrey;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BDB[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_AnimalCharacter.CanEnterCombatMovement
struct AME_AnimalCharacter_CanEnterCombatMovement_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function Maneater.ME_CharacterMovementComponent.SetOverrideMercunaAcceleration
struct UME_CharacterMovementComponent_SetOverrideMercunaAcceleration_Params
{
public:
	struct FVector                               OverrideAcceleration;                              // 0x0(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function Maneater.ME_CharacterMovementComponent.GetMercunaAcceleration
struct UME_CharacterMovementComponent_GetMercunaAcceleration_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function Maneater.ME_CharacterMovementComponent.GetLocalVelocity
struct UME_CharacterMovementComponent_GetLocalVelocity_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_CharacterMovementComponent.AtSeaLevel
struct UME_CharacterMovementComponent_AtSeaLevel_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_AnimInstance_Base.PlayLostLimbAnimation
struct UME_AnimInstance_Base_PlayLostLimbAnimation_Params
{
public:
	enum class ESkeletonGrabbableJoints          LostJoint;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_AnimInstance_Base.PlayDeathAnimation
struct UME_AnimInstance_Base_PlayDeathAnimation_Params
{
public:
	class UAnimMontage*                          ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_AnimInstance_Base.GetWhipshotRecoveryAnimation
struct UME_AnimInstance_Base_GetWhipshotRecoveryAnimation_Params
{
public:
	class UAnimMontage*                          ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_AnimInstance_Base.GetOwningCharacter
struct UME_AnimInstance_Base_GetOwningCharacter_Params
{
public:
	class AME_Character*                         ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_AnimInstance_Base.GetIsMoving
struct UME_AnimInstance_Base_GetIsMoving_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function Maneater.ME_AnimInstance_HumanNPC.SaveSoftWeaponReferences
struct UME_AnimInstance_HumanNPC_SaveSoftWeaponReferences_Params
{
public:
	bool                                         ValidSoft;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C8A[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UAnimSequence>          LocalSoftReference;                                // 0x8(0x28)(Parm, OutParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAnimSequence>          SentSoftReference;                                 // 0x30(0x28)(Parm, OutParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function Maneater.ME_AnimInstance_HumanNPC.SaveSoftWeaponArrayReferences
struct UME_AnimInstance_HumanNPC_SaveSoftWeaponArrayReferences_Params
{
public:
	bool                                         ValidSoft;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C8C[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSoftObjectPtr<class UAnimMontage>>   LocalSoftReference;                                // 0x8(0x10)(Parm, OutParm, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UAnimMontage>>   SentSoftReference;                                 // 0x18(0x10)(Parm, OutParm, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function Maneater.ME_AnimInstance_HumanNPC.SaveSoftBlendSpaceReferences
struct UME_AnimInstance_HumanNPC_SaveSoftBlendSpaceReferences_Params
{
public:
	bool                                         ValidSoft;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C8F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UBlendSpace>            LocalSoftReference;                                // 0x8(0x28)(Parm, OutParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UBlendSpace>            SentSoftReference;                                 // 0x30(0x28)(Parm, OutParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function Maneater.ME_AnimInstance_HumanNPC.SaveHardWeaponBlendspace
struct UME_AnimInstance_HumanNPC_SaveHardWeaponBlendspace_Params
{
public:
	TSoftObjectPtr<class UBlendSpace>            SoftRef;                                           // 0x0(0x28)(Parm, OutParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlendSpace*                           HardRef;                                           // 0x28(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function Maneater.ME_AnimInstance_HumanNPC.SaveHardWeaponAnimationArray
struct UME_AnimInstance_HumanNPC_SaveHardWeaponAnimationArray_Params
{
public:
	TArray<TSoftObjectPtr<class UAnimMontage>>   SoftArray;                                         // 0x0(0x10)(Parm, OutParm, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UAnimMontage*>                  HardArray;                                         // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function Maneater.ME_AnimInstance_HumanNPC.SaveHardWeaponAnimation
struct UME_AnimInstance_HumanNPC_SaveHardWeaponAnimation_Params
{
public:
	TSoftObjectPtr<class UAnimSequence>          SoftRef;                                           // 0x0(0x28)(Parm, OutParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         HardRef;                                           // 0x28(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x24 (0x24 - 0x0)
// Function Maneater.ME_AnimInstance_HumanNPC.PlayPassengerHitReaction
struct UME_AnimInstance_HumanNPC_PlayPassengerHitReaction_Params
{
public:
	struct FVector                               HitLocation;                                       // 0x0(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitNormal;                                         // 0xC(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitImpulse;                                        // 0x18(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_AnimInstance_HumanNPC.PlayGetupAnimation
struct UME_AnimInstance_HumanNPC_PlayGetupAnimation_Params
{
public:
	bool                                         ChestUp;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_AnimInstance_HumanNPC.PlayFiringMontage
struct UME_AnimInstance_HumanNPC_PlayFiringMontage_Params
{
public:
	class UAnimMontage*                          ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_AnimInstance_HumanNPC.PassengerHitReactionDelay
struct UME_AnimInstance_HumanNPC_PassengerHitReactionDelay_Params
{
public:
	class UAnimMontage*                          MontageToPlay;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_AnimInstance_HumanNPC.GetupAnimationBlendingOut
struct UME_AnimInstance_HumanNPC_GetupAnimationBlendingOut_Params
{
public:
	class UAnimMontage*                          Montage;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInterrupted;                                      // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CAE[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_AnimInstance_HumanNPC.GetUninjuredChestUpGetupAnimation
struct UME_AnimInstance_HumanNPC_GetUninjuredChestUpGetupAnimation_Params
{
public:
	class UAnimMontage*                          ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_AnimInstance_HumanNPC.GetUninjuredChestDownGetupAnimation
struct UME_AnimInstance_HumanNPC_GetUninjuredChestDownGetupAnimation_Params
{
public:
	class UAnimMontage*                          ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_AnimInstance_HumanNPC.GetInjuredChestUpGetupAnimation
struct UME_AnimInstance_HumanNPC_GetInjuredChestUpGetupAnimation_Params
{
public:
	class UAnimMontage*                          ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_AnimInstance_HumanNPC.GetInjuredChestDownGetupAnimation
struct UME_AnimInstance_HumanNPC_GetInjuredChestDownGetupAnimation_Params
{
public:
	class UAnimMontage*                          ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_AnimInstance_HumanNPC.FiringMontageBlendingOut
struct UME_AnimInstance_HumanNPC_FiringMontageBlendingOut_Params
{
public:
	class UAnimMontage*                          Montage;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInterrupted;                                      // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CBC[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_AnimInstance_HumanNPC.CarryingWeaponRequiresAiming
struct UME_AnimInstance_HumanNPC_CarryingWeaponRequiresAiming_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function Maneater.ME_AnimInstance_HumanNPC.AddSoftWeaponAnimationArray
struct UME_AnimInstance_HumanNPC_AddSoftWeaponAnimationArray_Params
{
public:
	TArray<struct FSoftObjectPath>               ArrayToLoad;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UAnimMontage>>   SoftArray;                                         // 0x10(0x10)(Parm, OutParm, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Maneater.ME_AnimInstance_PlayerShark.UpdateKnifingRotation
struct UME_AnimInstance_PlayerShark_UpdateKnifingRotation_Params
{
public:
	struct FRotator                              MeshRotation;                                      // 0x0(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              ActorRotation;                                     // 0xC(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_AnimInstance_PlayerShark.SetCruisingWaterLine
struct UME_AnimInstance_PlayerShark_SetCruisingWaterLine_Params
{
public:
	bool                                         SetTo;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_AnimInstance_PlayerShark.GetOwningShark
struct UME_AnimInstance_PlayerShark_GetOwningShark_Params
{
public:
	class AME_PlayerSharkCharacter*              ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_AssetLoader.GetSkeletalMesh
struct AME_AssetLoader_GetSkeletalMesh_Params
{
public:
	class FName                                  SEventName;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                         ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function Maneater.ME_AssetLoader.GetParticleSystemList
struct AME_AssetLoader_GetParticleSystemList_Params
{
public:
	TArray<class FName>                          EventNames;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECharacterActionMode              EActionMode;                                       // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DD3[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UParticleSystem*>               ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Maneater.ME_AssetLoader.GetParticleSystem
struct AME_AssetLoader_GetParticleSystem_Params
{
public:
	class FName                                  SEventName;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECharacterActionMode              EActionMode;                                       // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DD7[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystem*                       ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_AssetLoader.GetMaterial
struct AME_AssetLoader_GetMaterial_Params
{
public:
	class FName                                  SEventName;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function Maneater.ME_AssetLoader.GetImpactEffect
struct AME_AssetLoader_GetImpactEffect_Params
{
public:
	class FName                                  SNameBase;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPhysicalSurface                  ESurfaceType;                                      // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DDB[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FImpactEffect                         ReturnValue;                                       // 0x10(0x40)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Maneater.ME_AssetLoader.GetEquippedEvolutionRowName
struct AME_AssetLoader_GetEquippedEvolutionRowName_Params
{
public:
	enum class EEvolutionSlot                    SlotType;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DE0[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Maneater.ME_AssetLoader.GetAudioEventWithSurface
struct AME_AssetLoader_GetAudioEventWithSurface_Params
{
public:
	class FName                                  SEventName;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPhysicalSurface                  ESurfaceType;                                      // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DE1[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkAudioEvent*                         ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Maneater.ME_AssetLoader.GetAudioEvent
struct AME_AssetLoader_GetAudioEvent_Params
{
public:
	class FName                                  SEventName;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECharacterActionMode              EActionMode;                                       // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DE3[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkAudioEvent*                         ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Maneater.ME_AssetLoader.GetAnimMontage
struct AME_AssetLoader_GetAnimMontage_Params
{
public:
	class FName                                  SEventName;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECharacterActionMode              EActionMode;                                       // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DE7[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Maneater.ME_AudioEventManager.Trigger
struct UME_AudioEventManager_Trigger_Params
{
public:
	class FName                                  EventName;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               WorldContextObject;                                // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ForceMode;                                         // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E02[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function Maneater.ME_AudioEventManager.TickSwimAttenuation
struct UME_AudioEventManager_TickSwimAttenuation_Params
{
public:
	bool                                         InCombat;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E06[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DeltaTime;                                         // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Maneater.ME_AudioEventManager.PostWhizzbyIfInRange
struct UME_AudioEventManager_PostWhizzbyIfInRange_Params
{
public:
	class UAkAudioEvent*                         Event;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Projectile;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               WorldContextObject;                                // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_AudioEventManager.IsBankLoaded
struct UME_AudioEventManager_IsBankLoaded_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_AudioEventManager.GetAudioEventManager
struct UME_AudioEventManager_GetAudioEventManager_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UME_AudioEventManager*                 ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_AudioEventManager.BankWaitCheckEx
struct UME_AudioEventManager_BankWaitCheckEx_Params
{
public:
	class UWorld*                                World;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_ThrashableActor.OnDied
struct AME_ThrashableActor_OnDied_Params
{
public:
	class AController*                           Killer;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_ThrashableActor.GetCurrentHealth_Implementation
struct AME_ThrashableActor_GetCurrentHealth_Implementation_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_ThrashableActor.GetAbilitySystemComponent
struct AME_ThrashableActor_GetAbilitySystemComponent_Params
{
public:
	class UME_AbilitySystemComponent*            ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_SpawnPointActor.TriggerSpawn
struct AME_SpawnPointActor_TriggerSpawn_Params
{
public:
	bool                                         bForce;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_SpawnPointActor.GetCapsuleComponent
struct AME_SpawnPointActor_GetCapsuleComponent_Params
{
public:
	class UCapsuleComponent*                     ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_SpawnPointActor.CanSpawnAI
struct AME_SpawnPointActor_CanSpawnAI_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_BlueprintFunctionLibrary.SetPrimitiveMinDrawDistance
struct UME_BlueprintFunctionLibrary_SetPrimitiveMinDrawDistance_Params
{
public:
	class UPrimitiveComponent*                   PrimitiveComponent;                                // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinDrawDistance;                                   // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E64[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_BlueprintFunctionLibrary.SetManeaterDefaultMinLOD
struct UME_BlueprintFunctionLibrary_SetManeaterDefaultMinLOD_Params
{
public:
	class UStaticMesh*                           StaticMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_BlueprintFunctionLibrary.GetTriangleCount
struct UME_BlueprintFunctionLibrary_GetTriangleCount_Params
{
public:
	class UStaticMesh*                           StaticMesh;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LODIndex;                                          // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0xC(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_BlueprintFunctionLibrary.DisableOutlineRendering
struct UME_BlueprintFunctionLibrary_DisableOutlineRendering_Params
{
public:
	float                                        InDuration;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_VehicleAIController.IsThreatUnderVehicle
struct AME_VehicleAIController_IsThreatUnderVehicle_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_BoatAIController.OnTrackedAIDied
struct AME_BoatAIController_OnTrackedAIDied_Params
{
public:
	class AME_AIController*                      KilledAIC;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function Maneater.ME_VehiclePawn.WallHit
struct AME_VehiclePawn_WallHit_Params
{
public:
	class UPrimitiveComponent*                   MyComp;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   OtherComp;                                         // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitLocation;                                       // 0x10(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E7C[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function Maneater.ME_VehiclePawn.Timer_EjectPassenger
struct AME_VehiclePawn_Timer_EjectPassenger_Params
{
public:
	int32                                        PassengerIndex;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E82[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           EjectInstigator;                                   // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEjectingAllPassengers;                            // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E83[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_VehiclePawn.Sink
struct AME_VehiclePawn_Sink_Params
{
public:
	class AController*                           SinkInstigator;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E8C[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_VehiclePawn.SetPassengerWeapon
struct AME_VehiclePawn_SetPassengerWeapon_Params
{
public:
	int32                                        PassengerNum;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E8D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UME_WeaponComponent>       NewWeapon;                                         // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_VehiclePawn.SetPassengerThreatLevel
struct AME_VehiclePawn_SetPassengerThreatLevel_Params
{
public:
	enum class EAIThreatAlertState               NewAlertState;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E91[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                InstigatingActor;                                  // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_VehiclePawn.SetBossPhase
struct AME_VehiclePawn_SetBossPhase_Params
{
public:
	int32                                        NewPhaseNumber;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_VehiclePawn.SetAIPatrolPlotter
struct AME_VehiclePawn_SetAIPatrolPlotter_Params
{
public:
	class ATwAIPatrolPlotter*                    InPatrolPlotter;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// Function Maneater.ME_VehiclePawn.RockBoat
struct AME_VehiclePawn_RockBoat_Params
{
public:
	int32                                        NewRamVerticalIndex;                               // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RamForce;                                          // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RotationOfRam;                                     // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ForceNormal;                                       // 0xC(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E96[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_VehiclePawn.RammedByAnimal
struct AME_VehiclePawn_RammedByAnimal_Params
{
public:
	class AME_PlayerSharkCharacter*              RammingAnimal;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RamForce;                                          // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E9E[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_VehiclePawn.OnSink
struct AME_VehiclePawn_OnSink_Params
{
public:
	class AController*                           SinkInstigator;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_VehiclePawn.OnPhysicsVolumeChanged
struct AME_VehiclePawn_OnPhysicsVolumeChanged_Params
{
public:
	class APhysicsVolume*                        NewVolume;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function Maneater.ME_VehiclePawn.OnMeshComponentHit
struct AME_VehiclePawn_OnMeshComponentHit_Params
{
public:
	class UPrimitiveComponent*                   SelfActor;                                         // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                OtherActor;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   OtherPrimitive;                                    // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               NormalImpulse;                                     // 0x18(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                            Hit;                                               // 0x24(0x88)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_EA9[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_VehiclePawn.OnKilledBySlamAttack
struct AME_VehiclePawn_OnKilledBySlamAttack_Params
{
public:
	class AME_PlayerSharkCharacter*              PlayerShark;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x370 (0x370 - 0x0)
// Function Maneater.ME_VehiclePawn.OnGameplayEffectRemoved
struct AME_VehiclePawn_OnGameplayEffectRemoved_Params
{
public:
	struct FActiveGameplayEffect                 RemovedGameplayEffect;                             // 0x0(0x370)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x2A8 (0x2A8 - 0x0)
// Function Maneater.ME_VehiclePawn.OnGameplayEffectApplied
struct AME_VehiclePawn_OnGameplayEffectApplied_Params
{
public:
	class UAbilitySystemComponent*               Source;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEffectSpec                   SpecApplied;                                       // 0x8(0x298)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FActiveGameplayEffectHandle           ActiveHandle;                                      // 0x2A0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_VehiclePawn.OnDamageParticleEffectFinished
struct AME_VehiclePawn_OnDamageParticleEffectFinished_Params
{
public:
	class UParticleSystemComponent*              PSystem;                                           // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_VehiclePawn.OnBreakApart
struct AME_VehiclePawn_OnBreakApart_Params
{
public:
	class AController*                           BreakInstigator;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_VehiclePawn.IsBossVehicle
struct AME_VehiclePawn_IsBossVehicle_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_VehiclePawn.IsAbilitySystemComponentSetUp
struct AME_VehiclePawn_IsAbilitySystemComponentSetUp_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_VehiclePawn.HasPilot
struct AME_VehiclePawn_HasPilot_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_VehiclePawn.HasAnyWeapons
struct AME_VehiclePawn_HasAnyWeapons_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_VehiclePawn.GetRotationOfLocationAroundBoat
struct AME_VehiclePawn_GetRotationOfLocationAroundBoat_Params
{
public:
	struct FVector                               PointLocation;                                     // 0x0(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xC(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_VehiclePawn.GetPassengerMesh
struct AME_VehiclePawn_GetPassengerMesh_Params
{
public:
	int32                                        PassengerIndex;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EBA[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USkeletalMeshComponent*                ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_VehiclePawn.GetMercunaObstacle
struct AME_VehiclePawn_GetMercunaObstacle_Params
{
public:
	class UME_MercunaObstacleComponent*          ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_VehiclePawn.GetMercunaNavigation
struct AME_VehiclePawn_GetMercunaNavigation_Params
{
public:
	class UME_MercunaNavigationComponent*        ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_VehiclePawn.GetHunterRank
struct AME_VehiclePawn_GetHunterRank_Params
{
public:
	enum class EHunterRank                       ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_VehiclePawn.GetAIPatrolPlotter
struct AME_VehiclePawn_GetAIPatrolPlotter_Params
{
public:
	class ATwAIPatrolPlotter*                    ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_VehiclePawn.GetAbilitySystemComponent
struct AME_VehiclePawn_GetAbilitySystemComponent_Params
{
public:
	class UME_AbilitySystemComponent*            ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_VehiclePawn.EnableBossPhaseTimer
struct AME_VehiclePawn_EnableBossPhaseTimer_Params
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function Maneater.ME_VehiclePawn.EjectPassenger
struct AME_VehiclePawn_EjectPassenger_Params
{
public:
	int32                                        PassengerIndex;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EC6[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           EjectInstigator;                                   // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AME_HumanCharacter*                    EjectedPassenger;                                  // 0x10(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               EjectImpulse;                                      // 0x18(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldRagdoll;                                    // 0x24(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bJumpOff;                                          // 0x25(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSpawnController;                                  // 0x26(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEjectingAllPassengers;                            // 0x27(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EC7[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_VehiclePawn.EjectAllPassengers
struct AME_VehiclePawn_EjectAllPassengers_Params
{
public:
	class AController*                           EjectInstigator;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_VehiclePawn.BreakApart
struct AME_VehiclePawn_BreakApart_Params
{
public:
	class AController*                           BreakInstigator;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_ED0[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_VehiclePawn.BossPhaseChanged
struct AME_VehiclePawn_BossPhaseChanged_Params
{
public:
	int32                                        NewPhaseNumber;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PassengerRespawnDelay;                             // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_VehiclePawn.BoardPassenger
struct AME_VehiclePawn_BoardPassenger_Params
{
public:
	class AME_HumanCharacter*                    NewPassenger;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_ED3[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_WorldLandmarkActor.SetDiscoveryState
struct AME_WorldLandmarkActor_SetDiscoveryState_Params
{
public:
	enum class ELandmarkDiscoveryState           NewDiscoveryState;                                 // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_WorldLandmarkActor.OnDiscoveryStateChanged
struct AME_WorldLandmarkActor_OnDiscoveryStateChanged_Params
{
public:
	enum class ELandmarkDiscoveryState           NewState;                                          // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_BossBattleInfo.SetBattleState
struct AME_BossBattleInfo_SetBattleState_Params
{
public:
	enum class EBossBattleState                  NewBattleState;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_BossBattleInfo.OnBountyChanged
struct AME_BossBattleInfo_OnBountyChanged_Params
{
public:
	uint8                                        NewBountyLevel;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F48[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                BountyChangeInstigator;                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_BossBattleInfo.BossBattleEventInternal
struct AME_BossBattleInfo_BossBattleEventInternal_Params
{
public:
	class AME_AIController*                      Boss;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBossBattleEvent                  EventType;                                         // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F4C[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function Maneater.ME_BossInterface.GetBossName
struct IME_BossInterface_GetBossName_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_BossInterface.GetBossHealthPct
struct IME_BossInterface_GetBossHealthPct_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function Maneater.ME_BossInterface.GetBossBattleInfo
struct IME_BossInterface_GetBossBattleInfo_Params
{
public:
	TSoftClassPtr<class AME_BossBattleInfo>      ReturnValue;                                       // 0x0(0x28)(Parm, OutParm, ReturnParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_BountyManager.SetBountyState
struct AME_BountyManager_SetBountyState_Params
{
public:
	enum class EBountyState                      NewBountyState;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_BountyManager.IsBountyActive
struct AME_BountyManager_IsBountyActive_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_BountyManager.IsBossActive
struct AME_BountyManager_IsBossActive_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_BountyManager.GetTierMaxPoints
struct AME_BountyManager_GetTierMaxPoints_Params
{
public:
	int32                                        Tier;                                              // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_BountyManager.GetPendingBossVehicle
struct AME_BountyManager_GetPendingBossVehicle_Params
{
public:
	class AME_VehiclePawn*                       ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_BountyManager.GetNumActiveDivers
struct AME_BountyManager_GetNumActiveDivers_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_BountyManager.GetMaxNumActiveDivers
struct AME_BountyManager_GetMaxNumActiveDivers_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_BountyManager.GetMaxInfamyTier
struct AME_BountyManager_GetMaxInfamyTier_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function Maneater.ME_BountyManager.GetLastKillLocation
struct AME_BountyManager_GetLastKillLocation_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_BountyManager.GetHunterControllers
struct AME_BountyManager_GetHunterControllers_Params
{
public:
	TArray<class AME_AIController*>              ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// Function Maneater.ME_BountyManager.GetClosestBoatLocation
struct AME_BountyManager_GetClosestBoatLocation_Params
{
public:
	struct FVector                               SourceLocation;                                    // 0x0(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Out_DistanceSqr;                                   // 0xC(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0x10(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_BountyManager.GetBountyState
struct AME_BountyManager_GetBountyState_Params
{
public:
	enum class EBountyState                      ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_BountyManager.GetBountyDataForTier
struct AME_BountyManager_GetBountyDataForTier_Params
{
public:
	int32                                        Tier;                                              // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F96[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UME_BountyTier*                        ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function Maneater.ME_BountyManager.GetBountyCenter
struct AME_BountyManager_GetBountyCenter_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_BountyManager.GetBossVehicle
struct AME_BountyManager_GetBossVehicle_Params
{
public:
	class AME_VehiclePawn*                       ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function Maneater.ME_BountyManager.GetActiveBossName
struct AME_BountyManager_GetActiveBossName_Params
{
public:
	class FText                                  BossFirstName;                                     // 0x0(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
	class FText                                  BossLastName;                                      // 0x18(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_BountyManager.DialogueCallback
struct AME_BountyManager_DialogueCallback_Params
{
public:
	enum class EAkCallbackType                   CallbackType;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FA4[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkCallbackInfo*                       CallbackInfo;                                      // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_BountyManager.CleanUpAndDisable
struct AME_BountyManager_CleanUpAndDisable_Params
{
public:
	bool                                         bWaitForSave;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_BuoyancyForceComponent.SetBasePrimitiveComp
struct UME_BuoyancyForceComponent_SetBasePrimitiveComp_Params
{
public:
	class UPrimitiveComponent*                   PrimComp;                                          // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_BuoyancyForceComponent.GetBasePrimitiveComp
struct UME_BuoyancyForceComponent_GetBasePrimitiveComp_Params
{
public:
	class UPrimitiveComponent*                   ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function Maneater.ME_CharacterAbilityHelper.TryActivateAbilityForTag
struct UME_CharacterAbilityHelper_TryActivateAbilityForTag_Params
{
public:
	struct FGameplayTag                          GameplayTag;                                       // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bActionModeDependent;                              // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FEB[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_CharacterAbilityHelper.TryActivateAbilityForHandle
struct UME_CharacterAbilityHelper_TryActivateAbilityForHandle_Params
{
public:
	struct FGameplayAbilitySpecHandle            Handle;                                            // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FEE[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_CharacterAbilityHelper.IsStumbled
struct UME_CharacterAbilityHelper_IsStumbled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_CharacterAbilityHelper.GetAbilityIndexFromEnum
struct UME_CharacterAbilityHelper_GetAbilityIndexFromEnum_Params
{
public:
	enum class EME_CharacterAbility              AbilitySlot;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FEF[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_CharacterAbilityHelper.GetAbilityHandleFromEnum
struct UME_CharacterAbilityHelper_GetAbilityHandleFromEnum_Params
{
public:
	enum class EME_CharacterAbility              AbilitySlot;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FF0[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAbilitySpecHandle            ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_CharacterAbilityHelper.CancelAbilityForHandle
struct UME_CharacterAbilityHelper_CancelAbilityForHandle_Params
{
public:
	struct FGameplayAbilitySpecHandle            Handle;                                            // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_CharacterAbilityHelper.CancelAbilityForEnum
struct UME_CharacterAbilityHelper_CancelAbilityForEnum_Params
{
public:
	enum class EME_CharacterAbility              CharacterAbilityEnum;                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_CharacterAbilityHelper.CanActivateAbilities
struct UME_CharacterAbilityHelper_CanActivateAbilities_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_CharacterFunctionLibrary.SetHealthToPercentage
struct UME_CharacterFunctionLibrary_SetHealthToPercentage_Params
{
public:
	class AME_Character*                         TwChar;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Percent;                                           // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_100B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_CharacterFunctionLibrary.GetWalkMoveSpeed
struct UME_CharacterFunctionLibrary_GetWalkMoveSpeed_Params
{
public:
	class AME_Character*                         TwChar;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_100D[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_CharacterFunctionLibrary.GetSwimMoveSpeed
struct UME_CharacterFunctionLibrary_GetSwimMoveSpeed_Params
{
public:
	class AME_Character*                         TwChar;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_100F[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_CharacterFunctionLibrary.GetStaminaRegen
struct UME_CharacterFunctionLibrary_GetStaminaRegen_Params
{
public:
	class AME_Character*                         TwChar;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1011[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_CharacterFunctionLibrary.GetStaminaMax
struct UME_CharacterFunctionLibrary_GetStaminaMax_Params
{
public:
	class AME_Character*                         TwChar;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1013[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_CharacterFunctionLibrary.GetStamina
struct UME_CharacterFunctionLibrary_GetStamina_Params
{
public:
	class AME_Character*                         TwChar;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1015[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function Maneater.ME_CharacterFunctionLibrary.GetSizeRatio
struct UME_CharacterFunctionLibrary_GetSizeRatio_Params
{
public:
	class AME_Character*                         Character1;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AME_Character*                         Character2;                                        // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1017[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function Maneater.ME_CharacterFunctionLibrary.GetSizeDifferential
struct UME_CharacterFunctionLibrary_GetSizeDifferential_Params
{
public:
	class AME_Character*                         Character1;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AME_Character*                         Character2;                                        // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SizeDiffThresholdUp;                               // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SizeDifferentialDown;                              // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESizeDiff                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_101B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_CharacterFunctionLibrary.GetSizeDelta
struct UME_CharacterFunctionLibrary_GetSizeDelta_Params
{
public:
	class AME_Character*                         TwChar;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_101D[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_CharacterFunctionLibrary.GetSize
struct UME_CharacterFunctionLibrary_GetSize_Params
{
public:
	class AME_Character*                         TwChar;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1022[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_CharacterFunctionLibrary.GetMaxAcceleration
struct UME_CharacterFunctionLibrary_GetMaxAcceleration_Params
{
public:
	class AME_Character*                         TwChar;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1026[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_CharacterFunctionLibrary.GetHealthPercentage
struct UME_CharacterFunctionLibrary_GetHealthPercentage_Params
{
public:
	class AME_Character*                         TwChar;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1027[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_CharacterFunctionLibrary.GetHealthMax
struct UME_CharacterFunctionLibrary_GetHealthMax_Params
{
public:
	class AME_Character*                         TwChar;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1028[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_CharacterFunctionLibrary.GetHealth
struct UME_CharacterFunctionLibrary_GetHealth_Params
{
public:
	class AME_Character*                         TwChar;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_102A[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_CharacterFunctionLibrary.GetCharacterActionMode
struct UME_CharacterFunctionLibrary_GetCharacterActionMode_Params
{
public:
	class AME_Character*                         TwChar;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECharacterActionMode              ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_102B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_CharacterFunctionLibrary.GetActorDamagableAttributeSet
struct UME_CharacterFunctionLibrary_GetActorDamagableAttributeSet_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UME_AttributeSet*                      ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Maneater.ME_CheatManager.Debug_DrawProgressBar
struct UME_CheatManager_Debug_DrawProgressBar_Params
{
public:
	class UWorld*                                World;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                ProgressReferenceActor;                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ProgressPercent;                                   // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_102D[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_CheatManager.Cheat_UnlockAchievement
struct UME_CheatManager_Cheat_UnlockAchievement_Params
{
public:
	class FName                                  AchievementName;                                   // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_CheatManager.Cheat_TutorialSkipAhead
struct UME_CheatManager_Cheat_TutorialSkipAhead_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_CheatManager.Cheat_ToggleAI
struct UME_CheatManager_Cheat_ToggleAI_Params
{
public:
	enum class EThreeStateSwitch                 bEnableAI;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_CheatManager.Cheat_StoryAdvanceTo
struct UME_CheatManager_Cheat_StoryAdvanceTo_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Maneater.ME_CheatManager.Cheat_SpawnAI
struct UME_CheatManager_Cheat_SpawnAI_Params
{
public:
	class FString                                AIName;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpawnOffset;                                       // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1036[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_CheatManager.Cheat_SlamDamageEnabled
struct UME_CheatManager_Cheat_SlamDamageEnabled_Params
{
public:
	bool                                         bTurnOn;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_CheatManager.Cheat_SetWalkMoveSpeed
struct UME_CheatManager_Cheat_SetWalkMoveSpeed_Params
{
public:
	float                                        NewWalkSpeed;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_CheatManager.Cheat_SetTOD
struct UME_CheatManager_Cheat_SetTOD_Params
{
public:
	float                                        HourOfDay;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_CheatManager.Cheat_SetSwimMoveSpeed
struct UME_CheatManager_Cheat_SetSwimMoveSpeed_Params
{
public:
	float                                        NewSwimSpeed;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_CheatManager.Cheat_SetSharkMesh
struct UME_CheatManager_Cheat_SetSharkMesh_Params
{
public:
	int32                                        SharkMesh;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_CheatManager.Cheat_SetMaxAcceleration
struct UME_CheatManager_Cheat_SetMaxAcceleration_Params
{
public:
	float                                        NewMaxAcceleration;                                // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_CheatManager.Cheat_SetLevel
struct UME_CheatManager_Cheat_SetLevel_Params
{
public:
	int32                                        Level;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_CheatManager.Cheat_SetKnifingZOffset
struct UME_CheatManager_Cheat_SetKnifingZOffset_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_CheatManager.Cheat_SetEvolutionCharge
struct UME_CheatManager_Cheat_SetEvolutionCharge_Params
{
public:
	float                                        ChargeAmount;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_CheatManager.Cheat_SetCameraZOffset
struct UME_CheatManager_Cheat_SetCameraZOffset_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_CheatManager.Cheat_SetCameraProbeSize
struct UME_CheatManager_Cheat_SetCameraProbeSize_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_CheatManager.Cheat_SetCameraComplex
struct UME_CheatManager_Cheat_SetCameraComplex_Params
{
public:
	bool                                         bCollideComplex;                                   // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_CheatManager.Cheat_SetCameraArmLength
struct UME_CheatManager_Cheat_SetCameraArmLength_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_CheatManager.Cheat_SetBossPhase
struct UME_CheatManager_Cheat_SetBossPhase_Params
{
public:
	int32                                        NewPhaseNum;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_CheatManager.Cheat_ResetObjective
struct UME_CheatManager_Cheat_ResetObjective_Params
{
public:
	class FName                                  ObjName;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function Maneater.ME_CheatManager.Cheat_ProgressObjective
struct UME_CheatManager_Cheat_ProgressObjective_Params
{
public:
	class FName                                  ObjName;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Increment;                                         // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_CheatManager.Cheat_PlayStoryCinematic
struct UME_CheatManager_Cheat_PlayStoryCinematic_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_CheatManager.Cheat_PauseAndSetTOD
struct UME_CheatManager_Cheat_PauseAndSetTOD_Params
{
public:
	float                                        HourOfDay;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_CheatManager.Cheat_OverrideBoatTurnSound
struct UME_CheatManager_Cheat_OverrideBoatTurnSound_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function Maneater.ME_CheatManager.Cheat_LogObjectives
struct UME_CheatManager_Cheat_LogObjectives_Params
{
public:
	enum class EObjectiveType                    Type;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWorldRegion                      Region;                                            // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_CheatManager.Cheat_Grow
struct UME_CheatManager_Cheat_Grow_Params
{
public:
	int32                                        GrowthChange;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_CheatManager.Cheat_GiveNutrients
struct UME_CheatManager_Cheat_GiveNutrients_Params
{
public:
	int32                                        Nutrients;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENutrientType                     NutrientType;                                      // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_105C[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_CheatManager.Cheat_GiveEvolutions
struct UME_CheatManager_Cheat_GiveEvolutions_Params
{
public:
	int32                                        Rarity;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_CheatManager.Cheat_FastTravel
struct UME_CheatManager_Cheat_FastTravel_Params
{
public:
	int32                                        RegionIndex;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1065[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_CheatManager.Cheat_EnableTargetLasers
struct UME_CheatManager_Cheat_EnableTargetLasers_Params
{
public:
	bool                                         bTurnOn;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_CheatManager.Cheat_Dismember
struct UME_CheatManager_Cheat_Dismember_Params
{
public:
	int32                                        GrabPointIdx;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function Maneater.ME_CheatManager.Cheat_DiscoverObjectives
struct UME_CheatManager_Cheat_DiscoverObjectives_Params
{
public:
	enum class EObjectiveType                    Type;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWorldRegion                      Region;                                            // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_CheatManager.Cheat_DebugGTWaves
struct UME_CheatManager_Cheat_DebugGTWaves_Params
{
public:
	int32                                        GridCount;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_CheatManager.Cheat_CompleteRegionObjectives
struct UME_CheatManager_Cheat_CompleteRegionObjectives_Params
{
public:
	class FString                                RegionName;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_CheatManager.Cheat_CompleteObjective
struct UME_CheatManager_Cheat_CompleteObjective_Params
{
public:
	class FName                                  ObjName;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_CheatManager.Cheat_CompleteNextAvailableObjectives
struct UME_CheatManager_Cheat_CompleteNextAvailableObjectives_Params
{
public:
	int32                                        Num;                                               // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_CheatManager.Cheat_BountyTriggerBoss
struct UME_CheatManager_Cheat_BountyTriggerBoss_Params
{
public:
	int32                                        BossIndex;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_CheatManager.Cheat_BountySetInfamyLevel
struct UME_CheatManager_Cheat_BountySetInfamyLevel_Params
{
public:
	int32                                        InfamyLevel;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_CheatManager.Cheat_ApplyNutrientMultiplier
struct UME_CheatManager_Cheat_ApplyNutrientMultiplier_Params
{
public:
	float                                        Multiplier;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_CheatManager.Cheat_AlertAI
struct UME_CheatManager_Cheat_AlertAI_Params
{
public:
	float                                        AlertRadius;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_CheatManager.Cheat_AIVision
struct UME_CheatManager_Cheat_AIVision_Params
{
public:
	bool                                         bTurnOn;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_CheatManager.Cheat_AITargeting
struct UME_CheatManager_Cheat_AITargeting_Params
{
public:
	bool                                         bTurnOn;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_CheatManager.Cheat_AdvanceStoryEvent
struct UME_CheatManager_Cheat_AdvanceStoryEvent_Params
{
public:
	int32                                        Amount;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_CheatManager.Cheat_AdjustWalkMoveSpeed
struct UME_CheatManager_Cheat_AdjustWalkMoveSpeed_Params
{
public:
	float                                        WalkMultiplier;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_CheatManager.Cheat_AdjustSwimMoveSpeed
struct UME_CheatManager_Cheat_AdjustSwimMoveSpeed_Params
{
public:
	float                                        SwimMultiplier;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_CheatManager.Cheat_AdjustMaxAcceleration
struct UME_CheatManager_Cheat_AdjustMaxAcceleration_Params
{
public:
	float                                        MaxAccelerationMultiplier;                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Maneater.ME_CheatManager.AudioTrigger
struct UME_CheatManager_AudioTrigger_Params
{
public:
	class FString                                Event;                                             // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ForceMode;                                         // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_107E[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_CombatManager.IsInCombat
struct UME_CombatManager_IsInCombat_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.MEControlSchemes.GetControlSchemes
struct UMEControlSchemes_GetControlSchemes_Params
{
public:
	TArray<class FText>                          ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.MEControlSchemes.GetControlSchemeDefault
struct UMEControlSchemes_GetControlSchemeDefault_Params
{
public:
	class UMEControlSchemes*                     ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function Maneater.MEControlSchemes.GetControlSchemeAtIndex
struct UMEControlSchemes_GetControlSchemeAtIndex_Params
{
public:
	int32                                        Idx;                                               // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1090[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMEControlScheme                      ReturnValue;                                       // 0x8(0x38)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function Maneater.MEControlSchemes.GetAxisForScheme
struct UMEControlSchemes_GetAxisForScheme_Params
{
public:
	struct FMEControlScheme                      Scheme;                                            // 0x0(0x38)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FAxisBindingSaveData>          ReturnValue;                                       // 0x38(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function Maneater.MEControlSchemes.GetActionsForScheme
struct UMEControlSchemes_GetActionsForScheme_Params
{
public:
	struct FMEControlScheme                      Scheme;                                            // 0x0(0x38)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FActionBindingSaveData>        ReturnValue;                                       // 0x38(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.MEControlSchemes.ApplyControlScheme
struct UMEControlSchemes_ApplyControlScheme_Params
{
public:
	int32                                        Idx;                                               // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_CreatureSchoolPawn.SetAIPatrolPlotter
struct AME_CreatureSchoolPawn_SetAIPatrolPlotter_Params
{
public:
	class ATwAIPatrolPlotter*                    InPatrolPlotter;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x370 (0x370 - 0x0)
// Function Maneater.ME_CreatureSchoolPawn.OnGameplayEffectRemoved
struct AME_CreatureSchoolPawn_OnGameplayEffectRemoved_Params
{
public:
	struct FActiveGameplayEffect                 RemovedGameplayEffect;                             // 0x0(0x370)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_CreatureSchoolPawn.IsAbilitySystemComponentSetUp
struct AME_CreatureSchoolPawn_IsAbilitySystemComponentSetUp_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_CreatureSchoolPawn.GetAIPatrolPlotter
struct AME_CreatureSchoolPawn_GetAIPatrolPlotter_Params
{
public:
	class ATwAIPatrolPlotter*                    ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_CreatureSchoolPawn.GetAbilitySystemComponent
struct AME_CreatureSchoolPawn_GetAbilitySystemComponent_Params
{
public:
	class UME_AbilitySystemComponent*            ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_DestructibleActor.UpdateOctree
struct AME_DestructibleActor_UpdateOctree_Params
{
public:
	bool                                         bAffectsNavigation;                                // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_DestructibleActor.PlayerDamagedBreakable
struct AME_DestructibleActor_PlayerDamagedBreakable_Params
{
public:
	float                                        DamageAmount;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Maneater.ME_DestructibleActor.OnComponentFractured
struct AME_DestructibleActor_OnComponentFractured_Params
{
public:
	struct FVector                               HitPoint;                                          // 0x0(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitDirection;                                      // 0xC(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_DestructibleActor.IsDestroyed
struct AME_DestructibleActor_IsDestroyed_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_DestructibleActor.GetCurrentHealth_Implementation
struct AME_DestructibleActor_GetCurrentHealth_Implementation_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_DestructibleActor.CanDamageBreakable
struct AME_DestructibleActor_CanDamageBreakable_Params
{
public:
	class AActor*                                DamageCauser;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10B3[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function Maneater.ME_DialogueFunctionLibrary.TwPlaySubtitledAkEvent
struct UME_DialogueFunctionLibrary_TwPlaySubtitledAkEvent_Params
{
public:
	class FString                                EventName;                                         // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Actor;                                             // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                            SearchTable;                                       // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x20(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10C8[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function Maneater.ME_DialogueFunctionLibrary.TwPlayDialogueAkEvent
struct UME_DialogueFunctionLibrary_TwPlayDialogueAkEvent_Params
{
public:
	class UDataTable*                            SearchTable;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                         AkEvent;                                           // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Actor;                                             // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10CE[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function Maneater.ME_DialogueFunctionLibrary.PlayDialogueFile
struct UME_DialogueFunctionLibrary_PlayDialogueFile_Params
{
public:
	struct FDataTableRowHandle                   DialogueToPlay;                                    // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class AActor*                                WorldContext;                                      // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10CF[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function Maneater.ME_DialogueFunctionLibrary.PlayDialogueAkEvent
struct UME_DialogueFunctionLibrary_PlayDialogueAkEvent_Params
{
public:
	struct FDataTableRowHandle                   DialogueToPlay;                                    // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                         AkEvent;                                           // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Actor;                                             // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10D0[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function Maneater.ME_DialogueSystem.ShowSubtitle
struct UME_DialogueSystem_ShowSubtitle_Params
{
public:
	class FText                                  DialogueText;                                      // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeSeconds;                                       // 0x1C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x20(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10D1[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_DialogueSystem.SequencerDialogueCallback
struct UME_DialogueSystem_SequencerDialogueCallback_Params
{
public:
	enum class EAkCallbackType                   CallbackType;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10D2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkCallbackInfo*                       CallbackInfo;                                      // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function Maneater.ME_DialogueSystem.PostDynamicDialogue
struct UME_DialogueSystem_PostDynamicDialogue_Params
{
public:
	class FName                                  DialogueEventName;                                 // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Speaker;                                           // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        ArgumentValueNames;                                // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function Maneater.ME_DialogueSystem.PlayExternalDialogueFile
struct UME_DialogueSystem_PlayExternalDialogueFile_Params
{
public:
	class FName                                  EventName;                                         // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Filename;                                          // 0x8(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                WorldContext;                                      // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShowSubtitle;                                      // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10D3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  DialogueText;                                      // 0x28(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_DialogueSystem.InitDialogueSystem
struct UME_DialogueSystem_InitDialogueSystem_Params
{
public:
	class AME_GameMode*                          OwningGameMode;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_DialogueSystem.GetOnDialogueSystemCallbackDelegate
struct UME_DialogueSystem_GetOnDialogueSystemCallbackDelegate_Params
{
public:
	FMulticastInlineDelegateProperty_            ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_DialogueSystem.EndStateCooldown
struct UME_DialogueSystem_EndStateCooldown_Params
{
public:
	class FName                                  StateName;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_DialogueSystem.DynamicDialogueCallback
struct UME_DialogueSystem_DynamicDialogueCallback_Params
{
public:
	enum class EAkCallbackType                   CallbackType;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10D5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkCallbackInfo*                       CallbackInfo;                                      // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_DialogueSystem.DialogueCallback
struct UME_DialogueSystem_DialogueCallback_Params
{
public:
	enum class EAkCallbackType                   CallbackType;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10D6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkCallbackInfo*                       CallbackInfo;                                      // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function Maneater.ME_DialogueSystem.AddAudioDialogueMapping
struct UME_DialogueSystem_AddAudioDialogueMapping_Params
{
public:
	int32                                        AkPlayingId;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10D7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  DialogueText;                                      // 0x8(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	float                                        TimeSeconds;                                       // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10D8[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_SignificanceHandlerInterface.HandleSignificanceChange
struct IME_SignificanceHandlerInterface_HandleSignificanceChange_Params
{
public:
	bool                                         bIsSignificant;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_DistanceSignificanceComponent.HandleSignificanceChange
struct UME_DistanceSignificanceComponent_HandleSignificanceChange_Params
{
public:
	bool                                         bIsSignificant;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_ExplosionActor.GetExplosionRadius
struct AME_ExplosionActor_GetExplosionRadius_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_FogOverrideVolume.ActorOverlapped
struct AME_FogOverrideVolume_ActorOverlapped_Params
{
public:
	class AActor*                                OverlappedActor;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                OtherActor;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_FogOverrideVolume.ActorEndOverlap
struct AME_FogOverrideVolume_ActorEndOverlap_Params
{
public:
	class AActor*                                OverlappedActor;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                OtherActor;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Maneater.ME_GameInstance.TriggerNarratorEvent
struct UME_GameInstance_TriggerNarratorEvent_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               WorldContextObject;                                // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10EF[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_GameInstance.StreamContentAtLocationForCinematic
struct UME_GameInstance_StreamContentAtLocationForCinematic_Params
{
public:
	struct FVector                               Location;                                          // 0x0(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_GameInstance.SetSelectedSaveSlot
struct UME_GameInstance_SetSelectedSaveSlot_Params
{
public:
	int32                                        LocalUserIdx;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Slot;                                              // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_GameInstance.GetSelectedSaveSlot
struct UME_GameInstance_GetSelectedSaveSlot_Params
{
public:
	int32                                        LocalUserIdx;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_GameInstance.GetCurrentNarratorCueTable
struct UME_GameInstance_GetCurrentNarratorCueTable_Params
{
public:
	class UDataTable*                            ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_GameInstance.DisableLevelStreaming
struct UME_GameInstance_DisableLevelStreaming_Params
{
public:
	bool                                         bDisable;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10F5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               WorldContextObject;                                // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_GameInstance.Cheat_LogSaveGameObjectRecordsForSlot
struct UME_GameInstance_Cheat_LogSaveGameObjectRecordsForSlot_Params
{
public:
	int32                                        SlotIndex;                                         // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_GameMode.SuppressNextAudioPause
struct AME_GameMode_SuppressNextAudioPause_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_GameMode.StartStoryCinematicSequence
struct AME_GameMode_StartStoryCinematicSequence_Params
{
public:
	class FName                                  CinematicsDataTableRowName;                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function Maneater.ME_GameMode.ShowLoadingScreen
struct AME_GameMode_ShowLoadingScreen_Params
{
public:
	struct FVector                               DistanceStreamLocation;                            // 0x0(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RequiredLevelName;                                 // 0xC(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_GameMode.ShouldWaterBePoisonedForStoryIndex
struct AME_GameMode_ShouldWaterBePoisonedForStoryIndex_Params
{
public:
	int32                                        StoryIndex;                                        // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_110E[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_GameMode.SetWaterPoisoned
struct AME_GameMode_SetWaterPoisoned_Params
{
public:
	bool                                         bPoisoned;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_GameMode.SetNoCameraFadeIn
struct AME_GameMode_SetNoCameraFadeIn_Params
{
public:
	bool                                         SetTo;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_GameMode.SetLeaveOnBlackScreen
struct AME_GameMode_SetLeaveOnBlackScreen_Params
{
public:
	bool                                         SetTo;                                             // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_GameMode.SetAutoReEnableControls
struct AME_GameMode_SetAutoReEnableControls_Params
{
public:
	bool                                         UseAutoReEnable;                                   // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// Function Maneater.ME_GameMode.SetAutoFadeIn
struct AME_GameMode_SetAutoFadeIn_Params
{
public:
	bool                                         UseAutoFadeIn;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1111[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          CameraStartingColor;                               // 0x4(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BlendTime;                                         // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BlendDelay;                                        // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function Maneater.ME_GameMode.RequestTravelToLocation
struct AME_GameMode_RequestTravelToLocation_Params
{
public:
	struct FVector                               Location;                                          // 0x0(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Rotation;                                          // 0xC(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class AME_PlayerSharkCharacter*              PlayerSharkCharacter;                              // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSkipLoadScreen;                                   // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSetCameraRotation;                                // 0x21(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1114[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_GameMode.PauseSunPosition
struct AME_GameMode_PauseSunPosition_Params
{
public:
	bool                                         bPause;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_GameMode.OnHuntCommanderEjected
struct AME_GameMode_OnHuntCommanderEjected_Params
{
public:
	class AController*                           EjectInstigator;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AME_HumanCharacter*                    Pilot;                                             // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_GameMode.OnCinematicCameraCut
struct AME_GameMode_OnCinematicCameraCut_Params
{
public:
	class UCameraComponent*                      CameraComponent;                                   // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_GameMode.OnActorSpawned
struct AME_GameMode_OnActorSpawned_Params
{
public:
	class AActor*                                InActor;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_GameMode.IsWaterPoisoned
struct AME_GameMode_IsWaterPoisoned_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_GameMode.GetTutorialManager
struct AME_GameMode_GetTutorialManager_Params
{
public:
	class AME_TutorialManager*                   ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_GameMode.GetSonarManager
struct AME_GameMode_GetSonarManager_Params
{
public:
	class AME_SonarManager*                      ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_GameMode.GetRegionStates
struct AME_GameMode_GetRegionStates_Params
{
public:
	TArray<struct FWorldRegionState>             ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x130 (0x130 - 0x0)
// Function Maneater.ME_GameMode.GetRegionState
struct AME_GameMode_GetRegionState_Params
{
public:
	int32                                        RegionIndex;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_111C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWorldRegionState                     State;                                             // 0x8(0x120)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x128(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_111D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_GameMode.GetRegionPopulation
struct AME_GameMode_GetRegionPopulation_Params
{
public:
	int32                                        RegionIndex;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_GameMode.GetPlayerObjectiveManager
struct AME_GameMode_GetPlayerObjectiveManager_Params
{
public:
	class AME_PlayerObjectiveManager*            ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_GameMode.GetDLCManager
struct AME_GameMode_GetDLCManager_Params
{
public:
	class AMED_DLCManager*                       ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_GameMode.GetDialogueSystem
struct AME_GameMode_GetDialogueSystem_Params
{
public:
	class UME_DialogueSystem*                    ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_GameMode.GetBountyManager
struct AME_GameMode_GetBountyManager_Params
{
public:
	class AME_BountyManager*                     ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_GameMode.GetAssetLoader
struct AME_GameMode_GetAssetLoader_Params
{
public:
	class AME_AssetLoader*                       ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_GameMode.GetAIDirector
struct AME_GameMode_GetAIDirector_Params
{
public:
	class AME_AIDirector*                        ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_GameplayAbility_Montage.MontageStarted
struct UME_GameplayAbility_Montage_MontageStarted_Params
{
public:
	class UAnimMontage*                          Montage;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_GameplayAbility_Montage.MontageEnded
struct UME_GameplayAbility_Montage_MontageEnded_Params
{
public:
	class UAnimMontage*                          Montage;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInterrupted;                                      // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1137[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_GameplayAbility_MontageSequence.MontageStarted
struct UME_GameplayAbility_MontageSequence_MontageStarted_Params
{
public:
	class UAnimMontage*                          Montage;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_GameplayAbility_MontageSequence.MontageEnded
struct UME_GameplayAbility_MontageSequence_MontageEnded_Params
{
public:
	class UAnimMontage*                          Montage;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInterrupted;                                      // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1155[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_GameplayAbility_MontageSequence.GetMontageInstanceByIndex
struct UME_GameplayAbility_MontageSequence_GetMontageInstanceByIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1156[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMontageInstance*                      ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_GameplayAbility_MontageSequence.GetCurrentMontageInstance
struct UME_GameplayAbility_MontageSequence_GetCurrentMontageInstance_Params
{
public:
	class UMontageInstance*                      Out_MontageInstance;                               // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1157[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_GameplayAbility_MontageSequence.GetCurrentMontageIndex
struct UME_GameplayAbility_MontageSequence_GetCurrentMontageIndex_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_GameplayAbility_WildlifeDirectionalLunge.MontageStarted
struct UME_GameplayAbility_WildlifeDirectionalLunge_MontageStarted_Params
{
public:
	class UAnimMontage*                          Montage;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_GameplayAbility_WildlifeDirectionalLunge.MontageEnded
struct UME_GameplayAbility_WildlifeDirectionalLunge_MontageEnded_Params
{
public:
	class UAnimMontage*                          Montage;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInterrupted;                                      // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1167[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// Function Maneater.ME_GameplayAbility_WildlifeLunge.CheckOwnerPosition
struct UME_GameplayAbility_WildlifeLunge_CheckOwnerPosition_Params
{
public:
	struct FGameplayAbilityActorInfo             ActorInfo;                                         // 0x0(0x48)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	float                                        DropFocusRange;                                    // 0x48(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_116F[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_GameplayStatics.ToggleWorldRendering
struct UME_GameplayStatics_ToggleWorldRendering_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableRendering;                                  // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1172[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function Maneater.ME_GameplayStatics.TestPreyAttachment
struct UME_GameplayStatics_TestPreyAttachment_Params
{
public:
	class AME_AnimalCharacter*                   GrabbingAnimal;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                PreyActor;                                         // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1173[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function Maneater.ME_GameplayStatics.SpawnAIAtLocation
struct UME_GameplayStatics_SpawnAIAtLocation_Params
{
public:
	class AActor*                                WorldContextActor;                                 // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                SpawnClass;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SpawnLocation;                                     // 0x10(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              SpawnRotation;                                     // 0x1C(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bPersistent;                                       // 0x28(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESpawnActorCollisionHandlingMethod PawnCollision;                                     // 0x29(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1174[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AME_AIController*                      ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function Maneater.ME_GameplayStatics.SpawnAIAtActor
struct UME_GameplayStatics_SpawnAIAtActor_Params
{
public:
	class AActor*                                WorldContextActor;                                 // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                SpawnClass;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Actor;                                             // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseActorRotation;                                 // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPersistent;                                       // 0x19(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESpawnActorCollisionHandlingMethod PawnCollision;                                     // 0x1A(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1175[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AME_AIController*                      ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Maneater.ME_GameplayStatics.ShowTutorialPopup
struct UME_GameplayStatics_ShowTutorialPopup_Params
{
public:
	class FName                                  TutorialLabel;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               WorldContext;                                      // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1176[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_GameplayStatics.SetTimeOfDaySpeedScale
struct UME_GameplayStatics_SetTimeOfDaySpeedScale_Params
{
public:
	float                                        NewScale;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1177[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                ContextActor;                                      // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_GameplayStatics.SetTimeOfDay
struct UME_GameplayStatics_SetTimeOfDay_Params
{
public:
	float                                        TimeOfDay;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1178[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                ContextActor;                                      // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_GameplayStatics.SetLevelStreamingVolumesEnabled
struct UME_GameplayStatics_SetLevelStreamingVolumesEnabled_Params
{
public:
	TArray<class ALevelStreamingVolume*>         Volumes;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Maneater.ME_GameplayStatics.SetLevelStreamingVolumesDisabled
struct UME_GameplayStatics_SetLevelStreamingVolumesDisabled_Params
{
public:
	TArray<class ALevelStreamingVolume*>         Volumes;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUnloadLevels;                                     // 0x10(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1179[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function Maneater.ME_GameplayStatics.SetKeyForAxis
struct UME_GameplayStatics_SetKeyForAxis_Params
{
public:
	class FName                                  ActionName;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                  Binding;                                           // 0x8(0x18)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AxisScale;                                         // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGamepad;                                          // 0x24(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_117B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               Context;                                           // 0x28(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Rebuild;                                           // 0x30(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_117C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function Maneater.ME_GameplayStatics.SetKeyForAction
struct UME_GameplayStatics_SetKeyForAction_Params
{
public:
	class FName                                  ActionName;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                  Binding;                                           // 0x8(0x18)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BindIndex;                                         // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_117D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               Context;                                           // 0x28(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Rebuild;                                           // 0x30(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_117E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function Maneater.ME_GameplayStatics.ResolveAsset
struct UME_GameplayStatics_ResolveAsset_Params
{
public:
	TSoftObjectPtr<class UObject>                Asset;                                             // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               WorldContext;                                      // 0x28(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Maneater.ME_GameplayStatics.ReadPixelsFromRenderTarget
struct UME_GameplayStatics_ReadPixelsFromRenderTarget_Params
{
public:
	class UTextureRenderTarget2D*                RT;                                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FColor>                        OutPixelBuffer;                                    // 0x8(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Maneater.ME_GameplayStatics.ProjectPointToSurface
struct UME_GameplayStatics_ProjectPointToSurface_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ProjectionPoint;                                   // 0x8(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x14(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1182[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD8 (0xD8 - 0x0)
// Function Maneater.ME_GameplayStatics.ProcessImpactResponse
struct UME_GameplayStatics_ProcessImpactResponse_Params
{
public:
	class UPhysicalMaterial*                     InstigatorPM;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       Instigator;                                        // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   Receiver;                                          // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitLocation;                                       // 0x18(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitNormal;                                         // 0x24(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAttachToReceiver;                                 // 0x30(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1183[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  AttachPoint;                                       // 0x34(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPhysicalSurface                  ReceivingSurfaceOverride;                          // 0x3C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ForceWorldRotation;                                // 0x3D(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1185[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FImpactResponseInstance               ReturnValue;                                       // 0x40(0x98)(Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function Maneater.ME_GameplayStatics.KeyIsValid
struct UME_GameplayStatics_KeyIsValid_Params
{
public:
	struct FKey                                  InKey;                                             // 0x0(0x18)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1187[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_GameplayStatics.IsWaypointed
struct UME_GameplayStatics_IsWaypointed_Params
{
public:
	class AActor*                                InActor;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1189[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_GameplayStatics.IsWatchingCinematic
struct UME_GameplayStatics_IsWatchingCinematic_Params
{
public:
	class UObject*                               WorldContext;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_118A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_GameplayStatics.IsPlayingPrologue
struct UME_GameplayStatics_IsPlayingPrologue_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_118B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_GameplayStatics.IsPlayerOnLand
struct UME_GameplayStatics_IsPlayerOnLand_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_118C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function Maneater.ME_GameplayStatics.IsPlayerLookingAtLocation
struct UME_GameplayStatics_IsPlayerLookingAtLocation_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TestLocation;                                      // 0x8(0xC)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TestAngle;                                         // 0x14(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_118D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function Maneater.ME_GameplayStatics.IsPlayerInRangeOfLocation
struct UME_GameplayStatics_IsPlayerInRangeOfLocation_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TestLocation;                                      // 0x8(0xC)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RangeVal;                                          // 0x14(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_118F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_GameplayStatics.IsPlayerInGrotto
struct UME_GameplayStatics_IsPlayerInGrotto_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1190[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_GameplayStatics.IsPlayerCameraUnderwater
struct UME_GameplayStatics_IsPlayerCameraUnderwater_Params
{
public:
	class AActor*                                InActor;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1191[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_GameplayStatics.IsPlatformWinGDK
struct UME_GameplayStatics_IsPlatformWinGDK_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_GameplayStatics.IsPlatformWindows
struct UME_GameplayStatics_IsPlatformWindows_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_GameplayStatics.IsInWorldMap
struct UME_GameplayStatics_IsInWorldMap_Params
{
public:
	class UObject*                               WorldContext;                                      // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1193[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_GameplayStatics.IsInBaseMap
struct UME_GameplayStatics_IsInBaseMap_Params
{
public:
	class UObject*                               WorldContext;                                      // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1195[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function Maneater.ME_GameplayStatics.IntPointToFVector2D
struct UME_GameplayStatics_IntPointToFVector2D_Params
{
public:
	TArray<struct FIntPoint>                     Input;                                             // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVector2D>                     Output;                                            // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_GameplayStatics.GetWorldUnitScale
struct UME_GameplayStatics_GetWorldUnitScale_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_GameplayStatics.GetWorldSettings
struct UME_GameplayStatics_GetWorldSettings_Params
{
public:
	class AActor*                                WorldContextActor;                                 // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AME_WorldSettings*                     ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Maneater.ME_GameplayStatics.GetWorldRegionStates
struct UME_GameplayStatics_GetWorldRegionStates_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FWorldRegionState>             RegionStates;                                      // 0x8(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x130 (0x130 - 0x0)
// Function Maneater.ME_GameplayStatics.GetWorldRegionStateFromObjective
struct UME_GameplayStatics_GetWorldRegionStateFromObjective_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UME_PlayerObjective*                   Obj;                                               // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWorldRegionState                     RegionState;                                       // 0x10(0x120)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x130 (0x130 - 0x0)
// Function Maneater.ME_GameplayStatics.GetWorldRegionState
struct UME_GameplayStatics_GetWorldRegionState_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InRegionIndex;                                     // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_119C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWorldRegionState                     RegionState;                                       // 0x10(0x120)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_GameplayStatics.GetWorldRegionData
struct UME_GameplayStatics_GetWorldRegionData_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UME_WorldRegionData*                   ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function Maneater.ME_GameplayStatics.GetWorldLocationAtUVCoord
struct UME_GameplayStatics_GetWorldLocationAtUVCoord_Params
{
public:
	class AActor*                                Bounds;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             UVCoord;                                           // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0x10(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_119E[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_GameplayStatics.GetWorldBoundsActor
struct UME_GameplayStatics_GetWorldBoundsActor_Params
{
public:
	class AActor*                                WorldContext;                                      // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function Maneater.ME_GameplayStatics.GetWaterDepthAtLocation
struct UME_GameplayStatics_GetWaterDepthAtLocation_Params
{
public:
	struct FVector                               InLocation;                                        // 0x0(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11A7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                WorldContextActor;                                 // 0x10(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x18(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11A9[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_GameplayStatics.GetWaterDepth
struct UME_GameplayStatics_GetWaterDepth_Params
{
public:
	class AActor*                                InActor;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11AA[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function Maneater.ME_GameplayStatics.GetUVsAtWorldLocation
struct UME_GameplayStatics_GetUVsAtWorldLocation_Params
{
public:
	class AActor*                                Bounds;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0x8(0xC)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11AB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture*                              Texture;                                           // 0x18(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_GameplayStatics.GetTutorialManager
struct UME_GameplayStatics_GetTutorialManager_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AME_TutorialManager*                   ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_GameplayStatics.GetTimeofDaySpeedScale
struct UME_GameplayStatics_GetTimeofDaySpeedScale_Params
{
public:
	class AActor*                                ContextActor;                                      // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11AC[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_GameplayStatics.GetTimeofDayNoContext
struct UME_GameplayStatics_GetTimeofDayNoContext_Params
{
public:
	class AActor*                                ContextActor;                                      // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11AD[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_GameplayStatics.GetTimeofDay
struct UME_GameplayStatics_GetTimeofDay_Params
{
public:
	class AActor*                                ContextActor;                                      // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11AF[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_GameplayStatics.GetSpawnPool
struct UME_GameplayStatics_GetSpawnPool_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UME_SpawnPool*                         ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_GameplayStatics.GetSpawnManager
struct UME_GameplayStatics_GetSpawnManager_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AME_SpawnManager*                      ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_GameplayStatics.GetSonarManager
struct UME_GameplayStatics_GetSonarManager_Params
{
public:
	class UObject*                               WorldContext;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AME_SonarManager*                      ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_GameplayStatics.GetSilhouetteColor
struct UME_GameplayStatics_GetSilhouetteColor_Params
{
public:
	class AActor*                                SilhouetteActor;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EOutlineColor                     ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11B1[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function Maneater.ME_GameplayStatics.GetRegionName
struct UME_GameplayStatics_GetRegionName_Params
{
public:
	enum class EWorldRegion                      Region;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIgnoreLocalization;                               // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11B2[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ReturnValue;                                       // 0x8(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_GameplayStatics.GetRegionIndexforVolume
struct UME_GameplayStatics_GetRegionIndexforVolume_Params
{
public:
	class AME_WorldRegionVolume*                 RegionVolume;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11B3[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function Maneater.ME_GameplayStatics.GetRegionFromName
struct UME_GameplayStatics_GetRegionFromName_Params
{
public:
	class FText                                  RegionName;                                        // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
	enum class EWorldRegion                      ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11B5[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_GameplayStatics.GetPMFromComponent
struct UME_GameplayStatics_GetPMFromComponent_Params
{
public:
	class USceneComponent*                       InComponent;                                       // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPhysicalMaterial*                     ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_GameplayStatics.GetPlayerSharkState
struct UME_GameplayStatics_GetPlayerSharkState_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AME_PlayerSharkState*                  ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_GameplayStatics.GetPlayerSharkPawn
struct UME_GameplayStatics_GetPlayerSharkPawn_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AME_PlayerSharkCharacter*              ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_GameplayStatics.GetPlayerBounty
struct UME_GameplayStatics_GetPlayerBounty_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAsDollars;                                        // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11B6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ReturnValue;                                       // 0xC(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_GameplayStatics.GetPersistentLevel
struct UME_GameplayStatics_GetPersistentLevel_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULevel*                                ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_GameplayStatics.GetOceanPhysicsVolume
struct UME_GameplayStatics_GetOceanPhysicsVolume_Params
{
public:
	class AActor*                                InActor;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AME_OceanPhysicsVolume*                ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_GameplayStatics.GetOceanManager
struct UME_GameplayStatics_GetOceanManager_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AME_OceanManager*                      ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_GameplayStatics.GetObjectiveSpawnManager
struct UME_GameplayStatics_GetObjectiveSpawnManager_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AME_ObjectiveSpawnManager*             ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_GameplayStatics.GetObjectiveManager
struct UME_GameplayStatics_GetObjectiveManager_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AME_PlayerObjectiveManager*            ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_GameplayStatics.GetManeaterGameMode
struct UME_GameplayStatics_GetManeaterGameMode_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AME_GameMode*                          ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Maneater.ME_GameplayStatics.GetLocalViewPosition
struct UME_GameplayStatics_GetLocalViewPosition_Params
{
public:
	class AActor*                                ContextActor;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0x8(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11BC[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function Maneater.ME_GameplayStatics.GetLocalizedGrowthName
struct UME_GameplayStatics_GetLocalizedGrowthName_Params
{
public:
	enum class EPlayerGrowthStage                GrowthStage;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11BD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ReturnValue;                                       // 0x8(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_GameplayStatics.GetLastRenderTime
struct UME_GameplayStatics_GetLastRenderTime_Params
{
public:
	class UPrimitiveComponent*                   InComponent;                                       // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11C0[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_GameplayStatics.GetLandscapeResolution
struct UME_GameplayStatics_GetLandscapeResolution_Params
{
public:
	class ALandscape*                            Landscape;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_GameplayStatics.GetLandscape
struct UME_GameplayStatics_GetLandscape_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ALandscape*                            ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function Maneater.ME_GameplayStatics.GetKeysForAction
struct UME_GameplayStatics_GetKeysForAction_Params
{
public:
	class FName                                  ActionName;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AxisScale;                                         // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11C3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FKey>                          Bindings;                                          // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function Maneater.ME_GameplayStatics.GetKeyFriendlyName
struct UME_GameplayStatics_GetKeyFriendlyName_Params
{
public:
	struct FKey                                  InKey;                                             // 0x0(0x18)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  ReturnValue;                                       // 0x18(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_GameplayStatics.GetDLCManager
struct UME_GameplayStatics_GetDLCManager_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AMED_DLCManager*                       ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_GameplayStatics.GetDialogueSystem
struct UME_GameplayStatics_GetDialogueSystem_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UME_DialogueSystem*                    ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_GameplayStatics.GetDefaultObject
struct UME_GameplayStatics_GetDefaultObject_Params
{
public:
	class UObject*                               InObject;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Maneater.ME_GameplayStatics.GetCurrentMapName
struct UME_GameplayStatics_GetCurrentMapName_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_GameplayStatics.GetCurrentBossFight
struct UME_GameplayStatics_GetCurrentBossFight_Params
{
public:
	class AActor*                                WorldContextActor;                                 // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AME_BossBattleInfo*                    ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_GameplayStatics.GetClassDefaultObject
struct UME_GameplayStatics_GetClassDefaultObject_Params
{
public:
	class UClass*                                InClass;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_GameplayStatics.GetCameraWaterDepth
struct UME_GameplayStatics_GetCameraWaterDepth_Params
{
public:
	class AActor*                                InActor;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11C7[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_GameplayStatics.GetBountyManager
struct UME_GameplayStatics_GetBountyManager_Params
{
public:
	class UObject*                               WorldContext;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AME_BountyManager*                     ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function Maneater.ME_GameplayStatics.GetAssetName
struct UME_GameplayStatics_GetAssetName_Params
{
public:
	TSoftObjectPtr<class UObject>                Asset;                                             // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIncludePath;                                      // 0x28(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11C8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ReturnValue;                                       // 0x30(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function Maneater.ME_GameplayStatics.GetAssetMapName
struct UME_GameplayStatics_GetAssetMapName_Params
{
public:
	TSoftObjectPtr<class UObject>                Asset;                                             // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x28(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_GameplayStatics.GetAssetLoader
struct UME_GameplayStatics_GetAssetLoader_Params
{
public:
	class UObject*                               WorldContext;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AME_AssetLoader*                       ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Maneater.ME_GameplayStatics.GetAllThrashablePawns
struct UME_GameplayStatics_GetAllThrashablePawns_Params
{
public:
	class AActor*                                WorldContextActor;                                 // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class APawn*>                         ThrashableList;                                    // 0x8(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Maneater.ME_GameplayStatics.GetAllThrashableActors
struct UME_GameplayStatics_GetAllThrashableActors_Params
{
public:
	class UObject*                               WorldContext;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                        ThrashableList;                                    // 0x8(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Maneater.ME_GameplayStatics.GetAllPingableActors
struct UME_GameplayStatics_GetAllPingableActors_Params
{
public:
	class UObject*                               WorldContext;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                        PingableList;                                      // 0x8(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Maneater.ME_GameplayStatics.GetAllLivingHumans
struct UME_GameplayStatics_GetAllLivingHumans_Params
{
public:
	class AActor*                                WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AME_HumanCharacter*>            HumanList;                                         // 0x8(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Maneater.ME_GameplayStatics.GetAllLivingCharacters
struct UME_GameplayStatics_GetAllLivingCharacters_Params
{
public:
	class AActor*                                WorldContextActor;                                 // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AME_Character*>                 CharacterList;                                     // 0x8(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Maneater.ME_GameplayStatics.GetAllLivingAnimals
struct UME_GameplayStatics_GetAllLivingAnimals_Params
{
public:
	class AActor*                                WorldContextActor;                                 // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AME_AnimalCharacter*>           AnimalList;                                        // 0x8(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function Maneater.ME_GameplayStatics.GetAllChildrenOfClass
struct UME_GameplayStatics_GetAllChildrenOfClass_Params
{
public:
	TSubclassOf<class UObject>                   InParent;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          IgnoredClasses;                                    // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSoftClassPtr<class UObject>>         ChildList;                                         // 0x18(0x10)(Parm, OutParm, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_GameplayStatics.GetAllAxisInputs
struct UME_GameplayStatics_GetAllAxisInputs_Params
{
public:
	TArray<struct FInputAxisKeyMapping>          AxisInputs;                                        // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function Maneater.ME_GameplayStatics.GetAllAIControllers
struct UME_GameplayStatics_GetAllAIControllers_Params
{
public:
	class AActor*                                WorldContextActor;                                 // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AME_AIController*>              ControllerList;                                    // 0x8(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSortByDistance;                                   // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11CC[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_GameplayStatics.GetAllActionInputs
struct UME_GameplayStatics_GetAllActionInputs_Params
{
public:
	TArray<struct FInputActionKeyMapping>        ActionInputs;                                      // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_GameplayStatics.GetAIDirector
struct UME_GameplayStatics_GetAIDirector_Params
{
public:
	class UObject*                               WorldContext;                                      // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AME_AIDirector*                        ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function Maneater.ME_GameplayStatics.GetActionsForKey
struct UME_GameplayStatics_GetActionsForKey_Params
{
public:
	struct FKey                                  InKey;                                             // 0x0(0x18)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FInputAxisKeyMapping>          OutAxisMappings;                                   // 0x18(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FInputActionKeyMapping>        OutActionMappings;                                 // 0x28(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function Maneater.ME_GameplayStatics.FVector2DToIntPoint
struct UME_GameplayStatics_FVector2DToIntPoint_Params
{
public:
	TArray<struct FVector2D>                     Input;                                             // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FIntPoint>                     Output;                                            // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function Maneater.ME_GameplayStatics.FormatGameplayText
struct UME_GameplayStatics_FormatGameplayText_Params
{
public:
	class FText                                  TextToFormat;                                      // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
	TArray<struct FRichTextActionMapping>        ActionBinds;                                       // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  ReturnValue;                                       // 0x28(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_GameplayStatics.ForceDespawnAllProxBombs
struct UME_GameplayStatics_ForceDespawnAllProxBombs_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_GameplayStatics.ForceDespawnAI
struct UME_GameplayStatics_ForceDespawnAI_Params
{
public:
	class AME_AIController*                      AIC;                                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x24 (0x24 - 0x0)
// Function Maneater.ME_GameplayStatics.FindSlopeRotation
struct UME_GameplayStatics_FindSlopeRotation_Params
{
public:
	struct FVector                               FloorNormal;                                       // 0x0(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              CurrentRotation;                                   // 0xC(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              ReturnValue;                                       // 0x18(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_GameplayStatics.FFloatIntervalToFVector2D
struct UME_GameplayStatics_FFloatIntervalToFVector2D_Params
{
public:
	struct FFloatIntervalBP                      Input;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                             ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function Maneater.ME_GameplayStatics.DrawArrowOnActor
struct UME_GameplayStatics_DrawArrowOnActor_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Direction;                                         // 0x8(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FColor                                Color;                                             // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ArrowLength;                                       // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11CF[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function Maneater.ME_GameplayStatics.CreateRenderTarget2DNoHDR
struct UME_GameplayStatics_CreateRenderTarget2DNoHDR_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Width;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Height;                                            // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextureRenderTarget2D*                ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_GameplayStatics.AttachCinematicEvolutionMeshes
struct UME_GameplayStatics_AttachCinematicEvolutionMeshes_Params
{
public:
	class ASkeletalMeshActor*                    SkeletalMeshActor;                                 // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_GameUserSettings.SetVSyncType
struct UME_GameUserSettings_SetVSyncType_Params
{
public:
	class UWorld*                                OwnerWorld;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Val;                                               // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11D5[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_GameUserSettings.SetShowFrameRate
struct UME_GameUserSettings_SetShowFrameRate_Params
{
public:
	bool                                         bNewShowFrameRate;                                 // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_GameUserSettings.SetShadowsOn
struct UME_GameUserSettings_SetShadowsOn_Params
{
public:
	class UWorld*                                OwnerWorld;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Val;                                               // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11D6[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_GameUserSettings.SetOceanQualityLevel
struct UME_GameUserSettings_SetOceanQualityLevel_Params
{
public:
	int32                                        QualityLevel;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_GameUserSettings.SetLastActiveUserId
struct UME_GameUserSettings_SetLastActiveUserId_Params
{
public:
	class FString                                UserId;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_GameUserSettings.SetGlobalQuality
struct UME_GameUserSettings_SetGlobalQuality_Params
{
public:
	int32                                        Val;                                               // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_GameUserSettings.SetDefaultFOV
struct UME_GameUserSettings_SetDefaultFOV_Params
{
public:
	float                                        InFOV;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_GameUserSettings.SetBrightness
struct UME_GameUserSettings_SetBrightness_Params
{
public:
	class UWorld*                                OwnerWorld;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Val;                                               // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11D7[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_GameUserSettings.SetAntiAliasingType
struct UME_GameUserSettings_SetAntiAliasingType_Params
{
public:
	class UWorld*                                OwnerWorld;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Value;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11D8[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_GameUserSettings.GetVSyncType
struct UME_GameUserSettings_GetVSyncType_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_GameUserSettings.GetShowFrameRate
struct UME_GameUserSettings_GetShowFrameRate_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_GameUserSettings.GetShadowsOn
struct UME_GameUserSettings_GetShadowsOn_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_GameUserSettings.GetOceanQualityLevel
struct UME_GameUserSettings_GetOceanQualityLevel_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_GameUserSettings.GetManeaterUserSettings
struct UME_GameUserSettings_GetManeaterUserSettings_Params
{
public:
	class UME_GameUserSettings*                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_GameUserSettings.GetLastActiveUserId
struct UME_GameUserSettings_GetLastActiveUserId_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_GameUserSettings.GetGlobalQuality
struct UME_GameUserSettings_GetGlobalQuality_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_GameUserSettings.GetDefaultFOV
struct UME_GameUserSettings_GetDefaultFOV_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_GameUserSettings.GetBrightness
struct UME_GameUserSettings_GetBrightness_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_GameUserSettings.GetAntiAliasingType
struct UME_GameUserSettings_GetAntiAliasingType_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_GoreChunk.HandleWaterSurfaceTransition
struct AME_GoreChunk_HandleWaterSurfaceTransition_Params
{
public:
	bool                                         bIsAboveWater;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_Grotto.SetInactive
struct AME_Grotto_SetInactive_Params
{
public:
	class AActor*                                OverlappedActor;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                OtherActor;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_Grotto.Activate
struct AME_Grotto_Activate_Params
{
public:
	class AActor*                                OverlappedActor;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                OtherActor;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_HumanAIController.GetStateAsDialogueString
struct AME_HumanAIController_GetStateAsDialogueString_Params
{
public:
	class FString                                State;                                             // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_HumanCharacter.TryUpdateChatter
struct AME_HumanCharacter_TryUpdateChatter_Params
{
public:
	bool                                         bForce;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_HumanCharacter.SetThreatLevel
struct AME_HumanCharacter_SetThreatLevel_Params
{
public:
	enum class EAIThreatAlertState               NewAlertState;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11EE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                InstigatingActor;                                  // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Maneater.ME_HumanCharacter.SetIsPassenger
struct AME_HumanCharacter_SetIsPassenger_Params
{
public:
	bool                                         bNewPassengerStatus;                               // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11EF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AME_VehiclePawn*                       NewVehicle;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bChangeCollision;                                  // 0x10(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11F0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SeatIndex;                                         // 0x14(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_HumanCharacter.GetStateAsDialogueString
struct AME_HumanCharacter_GetStateAsDialogueString_Params
{
public:
	class FString                                State;                                             // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function Maneater.ME_HumanCharacter.EjectIfPassenger
struct AME_HumanCharacter_EjectIfPassenger_Params
{
public:
	class AController*                           EjectInstigator;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldRagdoll;                                    // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11F3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               EjectImpulse;                                      // 0xC(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11F4[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function Maneater.ME_HumanCharacter.ChatterUpdateEvent_BP
struct AME_HumanCharacter_ChatterUpdateEvent_BP_Params
{
public:
	int32                                        TotalLimbs;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DestroyedLimbs;                                    // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsGrabbed;                                         // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         WasBumped;                                         // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWasForced;                                        // 0xA(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11F6[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function Maneater.ME_SharkCharacter.GetDorsalFinLocation
struct AME_SharkCharacter_GetDorsalFinLocation_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function Maneater.ME_PlayerSharkCharacter.UpdateGrowthAssets
struct AME_PlayerSharkCharacter_UpdateGrowthAssets_Params
{
public:
	enum class EPlayerGrowthStage                OldGrowthStage;                                    // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPlayerGrowthStage                NewGrowthStage;                                    // 0x1(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_PlayerSharkCharacter.TailWhipTimeDilationStarted_BP
struct AME_PlayerSharkCharacter_TailWhipTimeDilationStarted_BP_Params
{
public:
	enum class ECharacterActionMode              ActionMode;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_PlayerSharkCharacter.StopBiting
struct AME_PlayerSharkCharacter_StopBiting_Params
{
public:
	bool                                         bFromInput;                                        // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_PlayerSharkCharacter.StartBiting
struct AME_PlayerSharkCharacter_StartBiting_Params
{
public:
	bool                                         bFromInput;                                        // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_PlayerSharkCharacter.SetWantsToLeaveKnifing
struct AME_PlayerSharkCharacter_SetWantsToLeaveKnifing_Params
{
public:
	bool                                         bWantsToLeave;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_PlayerSharkCharacter.SetTagged
struct AME_PlayerSharkCharacter_SetTagged_Params
{
public:
	bool                                         bNewIsTagged;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function Maneater.ME_PlayerSharkCharacter.SetCameraRotation
struct AME_PlayerSharkCharacter_SetCameraRotation_Params
{
public:
	struct FRotator                              NewRotation;                                       // 0x0(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_PlayerSharkCharacter.SetActorAndCameraRotation
struct AME_PlayerSharkCharacter_SetActorAndCameraRotation_Params
{
public:
	struct FRotator                              NewRotation;                                       // 0x0(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class ETeleportType                     Teleport;                                          // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xD(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1219[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function Maneater.ME_PlayerSharkCharacter.PlayWaterReEntryAnimation
struct AME_PlayerSharkCharacter_PlayWaterReEntryAnimation_Params
{
public:
	float                                        EntryAngleDot;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VelocityAngleDot;                                  // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              FlatEntryRotator;                                  // 0x8(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         PerfectEntry;                                      // 0x14(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsCruisingWaterLine;                               // 0x15(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_121C[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_PlayerSharkCharacter.PlayAudioEvent
struct AME_PlayerSharkCharacter_PlayAudioEvent_Params
{
public:
	class UAkAudioEvent*                         AudioEvent;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_PlayerSharkCharacter.OnCinematicModeChangedEvent
struct AME_PlayerSharkCharacter_OnCinematicModeChangedEvent_Params
{
public:
	bool                                         bCinematicMode;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_PlayerSharkCharacter.OnCinematicModeChanged
struct AME_PlayerSharkCharacter_OnCinematicModeChanged_Params
{
public:
	bool                                         bCinematicMode;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function Maneater.ME_PlayerSharkCharacter.OnAttackAbilityMeleeHit_BP
struct AME_PlayerSharkCharacter_OnAttackAbilityMeleeHit_BP_Params
{
public:
	class UGameplayAbility*                      AttackAbility;                                     // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                            HitResult;                                         // 0x8(0x88)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Maneater.ME_PlayerSharkCharacter.LerpSharkMaterialParam
struct AME_PlayerSharkCharacter_LerpSharkMaterialParam_Params
{
public:
	class FString                                ParamName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ParamValue;                                        // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FLerpTime;                                         // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function Maneater.ME_PlayerSharkCharacter.KnifingStateChanged_BP
struct AME_PlayerSharkCharacter_KnifingStateChanged_BP_Params
{
public:
	bool                                         NewKnifingState;                                   // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECharacterActionMode              ChangeContext;                                     // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_PlayerSharkCharacter.IsSprinting
struct AME_PlayerSharkCharacter_IsSprinting_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_PlayerSharkCharacter.IsMotherShark
struct AME_PlayerSharkCharacter_IsMotherShark_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_PlayerSharkCharacter.IsInputDisabled
struct AME_PlayerSharkCharacter_IsInputDisabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_PlayerSharkCharacter.IsCapableOfFastTravel
struct AME_PlayerSharkCharacter_IsCapableOfFastTravel_Params
{
public:
	class AActor*                                DestGrotto;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFastTravelReturn                 ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_122C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x3 (0x3 - 0x0)
// Function Maneater.ME_PlayerSharkCharacter.GrowthStageUpdated
struct AME_PlayerSharkCharacter_GrowthStageUpdated_Params
{
public:
	enum class EPlayerGrowthStage                OldGrowthStage;                                    // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPlayerGrowthStage                NewGrowthStage;                                    // 0x1(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReinitPose;                                       // 0x2(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_PlayerSharkCharacter.GrowthStageChanged
struct AME_PlayerSharkCharacter_GrowthStageChanged_Params
{
public:
	enum class EPlayerGrowthStage                NewGrowthStage;                                    // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_PlayerSharkCharacter.GrowthLevelChanged
struct AME_PlayerSharkCharacter_GrowthLevelChanged_Params
{
public:
	int32                                        NewGrowthLevel;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bChangeFromTheoretical;                            // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_122F[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_PlayerSharkCharacter.GetPlayerTargetingSystem
struct AME_PlayerSharkCharacter_GetPlayerTargetingSystem_Params
{
public:
	class UME_PlayerTargetingSystem*             ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_PlayerSharkCharacter.GetPlayerSharkMovement
struct AME_PlayerSharkCharacter_GetPlayerSharkMovement_Params
{
public:
	class UME_PlayerSharkMovementComponent*      ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_PlayerSharkCharacter.GetPlayerLevel
struct AME_PlayerSharkCharacter_GetPlayerLevel_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_PlayerSharkCharacter.GetGrowthStageScale
struct AME_PlayerSharkCharacter_GetGrowthStageScale_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_PlayerSharkCharacter.GetGrowthStage
struct AME_PlayerSharkCharacter_GetGrowthStage_Params
{
public:
	enum class EPlayerGrowthStage                ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_PlayerSharkCharacter.GetCurrentLockOnTarget
struct AME_PlayerSharkCharacter_GetCurrentLockOnTarget_Params
{
public:
	class AActor*                                ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_PlayerSharkCharacter.GetCurrentFocusedTarget
struct AME_PlayerSharkCharacter_GetCurrentFocusedTarget_Params
{
public:
	class AActor*                                ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_PlayerSharkCharacter.GetCastAnimInstance
struct AME_PlayerSharkCharacter_GetCastAnimInstance_Params
{
public:
	class UME_AnimInstance_PlayerShark*          ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_PlayerSharkCharacter.GetAttachedEvolutionMesh
struct AME_PlayerSharkCharacter_GetAttachedEvolutionMesh_Params
{
public:
	enum class EEvolutionSlot                    EvolutionSlot;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1236[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MeshIndex;                                         // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_PlayerSharkCharacter.GenericWaterlineSplash
struct AME_PlayerSharkCharacter_GenericWaterlineSplash_Params
{
public:
	class UParticleSystem*                       Particles;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_PlayerSharkCharacter.GenericAttachedParticleTrail
struct AME_PlayerSharkCharacter_GenericAttachedParticleTrail_Params
{
public:
	class UParticleSystem*                       Particles;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELimbBoneName                     LimbName;                                          // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1238[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_PlayerSharkCharacter.EvolutionAbilityActivatedEvent
struct AME_PlayerSharkCharacter_EvolutionAbilityActivatedEvent_Params
{
public:
	enum class EEvolutionSetType                 SetType;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_PlayerSharkCharacter.EndWhipshotSlomo
struct AME_PlayerSharkCharacter_EndWhipshotSlomo_Params
{
public:
	int32                                        Idx;                                               // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PageCount;                                         // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_PlayerSharkCharacter.AttemptFastTravel
struct AME_PlayerSharkCharacter_AttemptFastTravel_Params
{
public:
	class AActor*                                Dest;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_123A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_PlayerSharkCharacter.ActivateMutagenScale
struct AME_PlayerSharkCharacter_ActivateMutagenScale_Params
{
public:
	class UParticleSystem*                       ParticleToPlay;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SocketToAttach;                                    // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_PlayerSharkCharacter.ActionModeUpdated_BP
struct AME_PlayerSharkCharacter_ActionModeUpdated_BP_Params
{
public:
	enum class ECharacterActionMode              NewActionMode;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function Maneater.ME_InventoryActor.SetSharkEvolutionVisuals
struct AME_InventoryActor_SetSharkEvolutionVisuals_Params
{
public:
	TMap<enum class EEvolutionSlot, class UME_PlayerEvolution*> EquippedEvolutionMap;                              // 0x0(0x50)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_InventoryActor.SetPlayerSharkCharacter
struct AME_InventoryActor_SetPlayerSharkCharacter_Params
{
public:
	class AME_PlayerSharkCharacter*              Character;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_InWorldWidgetCreator.SetActiveIndexFromObjective
struct AME_InWorldWidgetCreator_SetActiveIndexFromObjective_Params
{
public:
	class UME_PlayerObjective*                   PlayerObjective;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_InWorldWidgetCreator.OnViewControllerVisibilityChanged
struct AME_InWorldWidgetCreator_OnViewControllerVisibilityChanged_Params
{
public:
	enum class ESlateVisibility                  ControllerVisibility;                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_InWorldWidgetCreator.OnGamePauseStateChanged
struct AME_InWorldWidgetCreator_OnGamePauseStateChanged_Params
{
public:
	bool                                         bPaused;                                           // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_LandmarkObjective.OnDiscoveredSet
struct AME_LandmarkObjective_OnDiscoveredSet_Params
{
public:
	bool                                         bNewDiscoveredSetting;                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_LandmarkObjective.GetAssociatedSign
struct AME_LandmarkObjective_GetAssociatedSign_Params
{
public:
	class AME_DestructibleActor*                 ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_MapWidgetInterface.ShouldClampToEdgeOfMap
struct IME_MapWidgetInterface_ShouldClampToEdgeOfMap_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function Maneater.ME_MapWidgetInterface.OnWidgetMouseDown
struct IME_MapWidgetInterface_OnWidgetMouseDown_Params
{
public:
	class UUserWidget*                           Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPointerEvent                         MouseEvent;                                        // 0x8(0x70)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_MapWidgetInterface.GetMapWidgetVisibility
struct IME_MapWidgetInterface_GetMapWidgetVisibility_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_MapWidgetInterface.GetMapWidgetSize
struct IME_MapWidgetInterface_GetMapWidgetSize_Params
{
public:
	struct FVector2D                             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_MapWidgetInterface.GetMapWidgetPriority
struct IME_MapWidgetInterface_GetMapWidgetPriority_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_MapWidgetInterface.GetMapWidgetMaterial
struct IME_MapWidgetInterface_GetMapWidgetMaterial_Params
{
public:
	class UMaterialInterface*                    ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_MapWidgetInterface.GetMapWidgetIcon
struct IME_MapWidgetInterface_GetMapWidgetIcon_Params
{
public:
	class UTexture2D*                            ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_MapWidgetInterface.GetMapWidgetEnabled
struct IME_MapWidgetInterface_GetMapWidgetEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Maneater.ME_MapWidgetInterface.GetMapDisplayName
struct IME_MapWidgetInterface_GetMapDisplayName_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Maneater.ME_MapWidgetInterface.GetMapDescriptionText
struct IME_MapWidgetInterface_GetMapDescriptionText_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_MercunaNavOctree.IsBoatOctree
struct AME_MercunaNavOctree_IsBoatOctree_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_MercunaNavVolume.IsBoatVolume
struct AME_MercunaNavVolume_IsBoatVolume_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_MercunaNavVolume.IsAirVolume
struct AME_MercunaNavVolume_IsAirVolume_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_ObjectiveConditionBase.ConditionIsValid
struct UME_ObjectiveConditionBase_ConditionIsValid_Params
{
public:
	class AActor*                                WorldContextActor;                                 // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1298[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_OceanManager.IsUnderwater
struct AME_OceanManager_IsUnderwater_Params
{
public:
	struct FVector                               InLocation;                                        // 0x0(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12A6[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_OceanManager.GetWaveModulationAtLocation
struct AME_OceanManager_GetWaveModulationAtLocation_Params
{
public:
	struct FVector                               Location;                                          // 0x0(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xC(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_OceanManager.GetFluidHeightRT
struct AME_OceanManager_GetFluidHeightRT_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12AB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTextureRenderTarget2D*                ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Maneater.ME_OceanManager.CauseFluidDisturbance
struct AME_OceanManager_CauseFluidDisturbance_Params
{
public:
	struct FVector                               DisturbanceOrigin;                                 // 0x0(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DisturbanceRadius;                                 // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DisturbanceIntensity;                              // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFluidEffectType                  EffectType;                                        // 0x14(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12B1[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_OceanSurfaceParticleSystemComponent.SetWakeLowSize
struct UME_OceanSurfaceParticleSystemComponent_SetWakeLowSize_Params
{
public:
	float                                        NewSize;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function Maneater.ME_OceanSurfaceParticleSystemComponent.SetWakeLowColor
struct UME_OceanSurfaceParticleSystemComponent_SetWakeLowColor_Params
{
public:
	struct FVector                               NewColor;                                          // 0x0(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_OceanSurfaceParticleSystemComponent.SetWakeLowAlpha
struct UME_OceanSurfaceParticleSystemComponent_SetWakeLowAlpha_Params
{
public:
	float                                        NewAlpha;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_OceanSurfaceParticleSystemComponent.GetWakeLowSize
struct UME_OceanSurfaceParticleSystemComponent_GetWakeLowSize_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function Maneater.ME_OceanSurfaceParticleSystemComponent.GetWakeLowColor
struct UME_OceanSurfaceParticleSystemComponent_GetWakeLowColor_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_OceanSurfaceParticleSystemComponent.GetWakeLowAlpha
struct UME_OceanSurfaceParticleSystemComponent_GetWakeLowAlpha_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_WeaponComponent.StartAttackCooldown
struct UME_WeaponComponent_StartAttackCooldown_Params
{
public:
	float                                        CooldownDuration;                                  // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_WeaponComponent.SetShowLaserPointer
struct UME_WeaponComponent_SetShowLaserPointer_Params
{
public:
	bool                                         bShowPointer;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bResetTargeting;                                   // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12D8[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CustomLockOnStartTime;                             // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_WeaponComponent.PerformFire
struct UME_WeaponComponent_PerformFire_Params
{
public:
	struct FVector                               AimDirection;                                      // 0x0(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bViaAnimNotify;                                    // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12DD[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_WeaponComponent.IsCooldownActive
struct UME_WeaponComponent_IsCooldownActive_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_WeaponComponent.HasLaserLock
struct UME_WeaponComponent_HasLaserLock_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_WeaponComponent.HasLaser
struct UME_WeaponComponent_HasLaser_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_WeaponComponent.GetWeapon
struct UME_WeaponComponent_GetWeapon_Params
{
public:
	class USkeletalMeshComponent*                Owner;                                             // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UME_WeaponComponent*                   ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_WeaponComponent.GetTargetedActor
struct UME_WeaponComponent_GetTargetedActor_Params
{
public:
	class AME_Character*                         ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function Maneater.ME_WeaponComponent.GetLaserAimDir
struct UME_WeaponComponent_GetLaserAimDir_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_WeaponComponent.Fire
struct UME_WeaponComponent_Fire_Params
{
public:
	struct FVector                               AimDirection;                                      // 0x0(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bViaAnimNotify;                                    // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12E1[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_PhysicalImpactResponse.GetManeaterGameMode
struct UME_PhysicalImpactResponse_GetManeaterGameMode_Params
{
public:
	class AME_GameMode*                          ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function Maneater.ME_PhysicalImpactResponse.GetImpactEffects
struct UME_PhysicalImpactResponse_GetImpactEffects_Params
{
public:
	enum class EPhysicalSurface                  ImpactingSurface;                                  // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUnderwater;                                       // 0x1(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bScrape;                                           // 0x2(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12F1[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FImpactEffect                         ReturnValue;                                       // 0x8(0x40)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function Maneater.ME_PlayerEvolution.GetDisplayStatsForEvolution
struct UME_PlayerEvolution_GetDisplayStatsForEvolution_Params
{
public:
	float                                        EffectiveLevel;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12F7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UME_PlayerEvolution*                   Evolution;                                         // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEvolutionRarity                  ERarity;                                           // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12F8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FEvolutionDisplayStat>         ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_PlayerObjective.SetObjectiveState
struct UME_PlayerObjective_SetObjectiveState_Params
{
public:
	enum class EObjectiveState                   NewState;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTriggeredFromLoad;                                // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1300[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                WorldContextActor;                                 // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_PlayerObjective.OnGateActivated
struct UME_PlayerObjective_OnGateActivated_Params
{
public:
	class AActor*                                ActivatedGate;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_PlayerObjective.IsStoryObjective
struct UME_PlayerObjective_IsStoryObjective_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_PlayerObjective.IsComplete
struct UME_PlayerObjective_IsComplete_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_PlayerObjective.IsAssociatedWithActor
struct UME_PlayerObjective_IsAssociatedWithActor_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1304[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_PlayerObjective.GetTotalProgressPoints
struct UME_PlayerObjective_GetTotalProgressPoints_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Maneater.ME_PlayerObjective.GetSubtitleText
struct UME_PlayerObjective_GetSubtitleText_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Maneater.ME_PlayerObjective.GetShortObjectiveDescription
struct UME_PlayerObjective_GetShortObjectiveDescription_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Maneater.ME_PlayerObjective.GetProgressText
struct UME_PlayerObjective_GetProgressText_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_PlayerObjective.GetProductFilterType
struct UME_PlayerObjective_GetProductFilterType_Params
{
public:
	enum class EObjectiveProductFilterType       ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_PlayerObjective.GetObjectiveType
struct UME_PlayerObjective_GetObjectiveType_Params
{
public:
	enum class EObjectiveType                    ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_PlayerObjective.GetObjectiveState
struct UME_PlayerObjective_GetObjectiveState_Params
{
public:
	enum class EObjectiveState                   ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_PlayerObjective.GetObjectiveRewardsHandle
struct UME_PlayerObjective_GetObjectiveRewardsHandle_Params
{
public:
	struct FDataTableRowHandle                   ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_PlayerObjective.GetObjectiveImage
struct UME_PlayerObjective_GetObjectiveImage_Params
{
public:
	class UTexture2D*                            ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Maneater.ME_PlayerObjective.GetObjectiveDescription
struct UME_PlayerObjective_GetObjectiveDescription_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_PlayerObjective.GetMapLocators
struct UME_PlayerObjective_GetMapLocators_Params
{
public:
	TArray<struct FVector>                       ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_PlayerObjective.GetCurrentProgressPoints
struct UME_PlayerObjective_GetCurrentProgressPoints_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_PlayerObjective.GetCompletionPercentage
struct UME_PlayerObjective_GetCompletionPercentage_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_PlayerObjective.GetAssignedRegion
struct UME_PlayerObjective_GetAssignedRegion_Params
{
public:
	enum class EWorldRegion                      ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_PlayerObjective.Cheat_ProgressObjective
struct UME_PlayerObjective_Cheat_ProgressObjective_Params
{
public:
	int32                                        Increment;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function Maneater.ME_PlayerObjectiveGrotto.GetAssociatedGrotto
struct UME_PlayerObjectiveGrotto_GetAssociatedGrotto_Params
{
public:
	TSoftObjectPtr<class AActor>                 ReturnValue;                                       // 0x0(0x28)(Parm, OutParm, ReturnParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_PlayerObjectiveManager.StartTimeTrial
struct AME_PlayerObjectiveManager_StartTimeTrial_Params
{
public:
	class AActor*                                WorldContextActor;                                 // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartTime;                                         // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Rings;                                             // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_PlayerObjectiveManager.SetObjectState
struct AME_PlayerObjectiveManager_SetObjectState_Params
{
public:
	class AActor*                                FoundActor;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EObjectiveProgressState           EState;                                            // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1320[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_PlayerObjectiveManager.SetCustomObjectiveState
struct AME_PlayerObjectiveManager_SetCustomObjectiveState_Params
{
public:
	enum class EObjectiveState                   NewState;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1321[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                AssociatedActor;                                   // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_PlayerObjectiveManager.OnRingPassed
struct AME_PlayerObjectiveManager_OnRingPassed_Params
{
public:
	class AActor*                                WorldContextActor;                                 // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeIncrease;                                      // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1322[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_PlayerObjectiveManager.OnRegionChanged
struct AME_PlayerObjectiveManager_OnRegionChanged_Params
{
public:
	enum class EWorldRegion                      Region;                                            // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1323[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            RegionIcon;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_PlayerObjectiveManager.OnPlayerLevelChanged
struct AME_PlayerObjectiveManager_OnPlayerLevelChanged_Params
{
public:
	int32                                        NewGrowthLevel;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bChangeFromTheoretical;                            // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1324[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_PlayerObjectiveManager.OnInfamyRankUp
struct AME_PlayerObjectiveManager_OnInfamyRankUp_Params
{
public:
	int32                                        Rank;                                              // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// Function Maneater.ME_PlayerObjectiveManager.OnGrowthStageChanged
struct AME_PlayerObjectiveManager_OnGrowthStageChanged_Params
{
public:
	enum class EPlayerGrowthStage                OldGrowthStage;                                    // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPlayerGrowthStage                NewGrowthStage;                                    // 0x1(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReinitPose;                                       // 0x2(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_PlayerObjectiveManager.OnGrottoEntered
struct AME_PlayerObjectiveManager_OnGrottoEntered_Params
{
public:
	class AME_Grotto*                            ME_Grotto;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_PlayerObjectiveManager.OnGateActivated
struct AME_PlayerObjectiveManager_OnGateActivated_Params
{
public:
	class AActor*                                ActivatedGate;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function Maneater.ME_PlayerObjectiveManager.OnDLCEntitlementStatusInitialized
struct AME_PlayerObjectiveManager_OnDLCEntitlementStatusInitialized_Params
{
public:
	enum class EDLCType                          DLCType;                                           // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         InitialStatus;                                     // 0x1(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function Maneater.ME_PlayerObjectiveManager.OnDLCEntitlementStatusChanged
struct AME_PlayerObjectiveManager_OnDLCEntitlementStatusChanged_Params
{
public:
	enum class EDLCType                          DLCType;                                           // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         NewStatus;                                         // 0x1(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_PlayerObjectiveManager.ObjectUnloaded
struct AME_PlayerObjectiveManager_ObjectUnloaded_Params
{
public:
	class AActor*                                UnloadedActor;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_PlayerObjectiveManager.ObjectLoaded
struct AME_PlayerObjectiveManager_ObjectLoaded_Params
{
public:
	class AActor*                                LoadedActor;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_PlayerObjectiveManager.LandmarkObjectBitten
struct AME_PlayerObjectiveManager_LandmarkObjectBitten_Params
{
public:
	class AActor*                                LandmarkActor;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_PlayerObjectiveManager.IsBaseStoryFinished
struct AME_PlayerObjectiveManager_IsBaseStoryFinished_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_PlayerObjectiveManager.GetStoryConditionStatus
struct AME_PlayerObjectiveManager_GetStoryConditionStatus_Params
{
public:
	TArray<struct FConditionStatus>              ConditionResults;                                  // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_PlayerObjectiveManager.GetRegionPercentComplete
struct AME_PlayerObjectiveManager_GetRegionPercentComplete_Params
{
public:
	enum class EWorldRegion                      Region;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_132B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_PlayerObjectiveManager.GetObjectState
struct AME_PlayerObjectiveManager_GetObjectState_Params
{
public:
	class AActor*                                FoundActor;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EObjectiveProgressState           ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_132D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function Maneater.ME_PlayerObjectiveManager.GetObjectiveFromActor
struct AME_PlayerObjectiveManager_GetObjectiveFromActor_Params
{
public:
	class AActor*                                SearchingActor;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EObjectiveType                    FilterType;                                        // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_132F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UME_PlayerObjective*                   ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Maneater.ME_PlayerObjectiveManager.GetObjectiveById
struct AME_PlayerObjectiveManager_GetObjectiveById_Params
{
public:
	struct FGuid                                 ComparisonId;                                      // 0x0(0x10)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UME_PlayerObjective*                   ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_PlayerObjectiveManager.GetLastBossKilled
struct AME_PlayerObjectiveManager_GetLastBossKilled_Params
{
public:
	enum class EBossFightSequence                ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_PlayerObjectiveManager.GetGamePercentComplete
struct AME_PlayerObjectiveManager_GetGamePercentComplete_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_PlayerObjectiveManager.GetGameCompletionPercentage
struct AME_PlayerObjectiveManager_GetGameCompletionPercentage_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_PlayerObjectiveManager.GetEpisodeProgress
struct AME_PlayerObjectiveManager_GetEpisodeProgress_Params
{
public:
	int32                                        StoryIndex;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_PlayerObjectiveManager.GetCurrentStoryIndex
struct AME_PlayerObjectiveManager_GetCurrentStoryIndex_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_PlayerObjectiveManager.DelayedBossFightAvailableBroadcast
struct AME_PlayerObjectiveManager_DelayedBossFightAvailableBroadcast_Params
{
public:
	class UME_PlayerObjectiveBoss*               BossObjective;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_PlayerObjectiveManager.CheckNextStoryEvent
struct AME_PlayerObjectiveManager_CheckNextStoryEvent_Params
{
public:
	bool                                         bForceAdvanceStoryCheck;                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_PlayerObjectiveManager.Cheat_ResetObjective
struct AME_PlayerObjectiveManager_Cheat_ResetObjective_Params
{
public:
	class FName                                  ObjName;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function Maneater.ME_PlayerObjectiveManager.Cheat_ProgressObjective
struct AME_PlayerObjectiveManager_Cheat_ProgressObjective_Params
{
public:
	class FName                                  ObjName;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Increment;                                         // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_PlayerObjectiveManager.Cheat_CompleteObjective
struct AME_PlayerObjectiveManager_Cheat_CompleteObjective_Params
{
public:
	class FName                                  ObjName;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_PlayerSharkController.SetHUDVisibilityChanged
struct AME_PlayerSharkController_SetHUDVisibilityChanged_Params
{
public:
	bool                                         bVisible;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function Maneater.ME_PlayerSharkController.OnRevealMap
struct AME_PlayerSharkController_OnRevealMap_Params
{
public:
	struct FVector                               MapLocation;                                       // 0x0(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Intensity;                                         // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_PlayerSharkController.OnPossessedPawn
struct AME_PlayerSharkController_OnPossessedPawn_Params
{
public:
	class AME_PlayerSharkCharacter*              PlayerPawn;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_PlayerSharkController.OnPlayerDied
struct AME_PlayerSharkController_OnPlayerDied_Params
{
public:
	class AME_PlayerSharkCharacter*              PlayerPawn;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_PlayerSharkController.IsCinematicMode
struct AME_PlayerSharkController_IsCinematicMode_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Maneater.ME_PlayerSharkController.GetKeysForAction
struct AME_PlayerSharkController_GetKeysForAction_Params
{
public:
	class FName                                  ActionName;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FInputActionKeyMapping>        Bindings;                                          // 0x8(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function Maneater.ME_PlayerSharkMovementComponent.SetCrusingWaterLine
struct UME_PlayerSharkMovementComponent_SetCrusingWaterLine_Params
{
public:
	bool                                         bNewCrusingWaterline;                              // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECharacterActionMode              ChangeContext;                                     // 0x1(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function Maneater.ME_PlayerSharkState.SetWaypoint
struct AME_PlayerSharkState_SetWaypoint_Params
{
public:
	class AActor*                                TargetActor;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TargetLocation;                                    // 0x8(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_134F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AME_WaypointMarker*                    ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Maneater.ME_PlayerSharkState.SetTeleporterDestination
struct AME_PlayerSharkState_SetTeleporterDestination_Params
{
public:
	struct FVector                               Location;                                          // 0x0(0xC)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Rotation;                                          // 0xC(0xC)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_PlayerSharkState.SetStat
struct AME_PlayerSharkState_SetStat_Params
{
public:
	enum class EPersistentStatType               StatToModify;                                      // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1350[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NewValue;                                          // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Maneater.ME_PlayerSharkState.SetSlottedEvolution
struct AME_PlayerSharkState_SetSlottedEvolution_Params
{
public:
	enum class EEvolutionSlot                    EvolutionSlot;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1351[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UME_PlayerEvolution*                   Evolution;                                         // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1354[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C (0x1C - 0x0)
// Function Maneater.ME_PlayerSharkState.SetRespawnLocation
struct AME_PlayerSharkState_SetRespawnLocation_Params
{
public:
	struct FVector                               NewRespawnLocation;                                // 0x0(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              NewRespawnRotation;                                // 0xC(0xC)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bSaveGame;                                         // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1355[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_PlayerSharkState.SetNewEvolution
struct AME_PlayerSharkState_SetNewEvolution_Params
{
public:
	class UME_PlayerEvolution*                   Evolution;                                         // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsNewEvolution;                                   // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1357[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_PlayerSharkState.SetInventoryEvolutionEquipped
struct AME_PlayerSharkState_SetInventoryEvolutionEquipped_Params
{
public:
	class UME_PlayerEvolution*                   Evolution;                                         // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEvolutionSlot                    AssignedSlot;                                      // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1358[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_PlayerSharkState.SetHasNewEvolutionAvailable
struct AME_PlayerSharkState_SetHasNewEvolutionAvailable_Params
{
public:
	bool                                         bAvailable;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function Maneater.ME_PlayerSharkState.SetGrowthStage
struct AME_PlayerSharkState_SetGrowthStage_Params
{
public:
	enum class EPlayerGrowthStage                NewGrowthStage;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReinitPose;                                       // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_PlayerSharkState.SetGrowthLevel
struct AME_PlayerSharkState_SetGrowthLevel_Params
{
public:
	int32                                        NewGrowthLevel;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ForceGrowth;                                       // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCauseGameSave;                                    // 0x5(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bChangeFromTheoretical;                            // 0x6(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_135C[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_PlayerSharkState.RemoveInventoryEvolution
struct AME_PlayerSharkState_RemoveInventoryEvolution_Params
{
public:
	class UME_PlayerEvolution*                   ToBeRemovedEvolution;                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_135D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_PlayerSharkState.ReceiveBountyChange
struct AME_PlayerSharkState_ReceiveBountyChange_Params
{
public:
	float                                        NewBountyDollars;                                  // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_135E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                BountyChangeInstigator;                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_PlayerSharkState.PurchaseInventoryEvolutionUpgrade
struct AME_PlayerSharkState_PurchaseInventoryEvolutionUpgrade_Params
{
public:
	class UME_PlayerEvolution*                   Evolution;                                         // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_135F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_PlayerSharkState.OnWorldRegionChanged
struct AME_PlayerSharkState_OnWorldRegionChanged_Params
{
public:
	class AME_WorldRegionVolume*                 NewRegion;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_PlayerSharkState.OnPlayerBountyChanged
struct AME_PlayerSharkState_OnPlayerBountyChanged_Params
{
public:
	float                                        NewBountyDollars;                                  // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1360[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                BountyChangeInstigator;                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_PlayerSharkState.OnNutrientsChanged
struct AME_PlayerSharkState_OnNutrientsChanged_Params
{
public:
	int32                                        NutrientDelta;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENutrientType                     NutrientType;                                      // 0x4(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1361[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_PlayerSharkState.OnIncreasedGrowthStage
struct AME_PlayerSharkState_OnIncreasedGrowthStage_Params
{
public:
	enum class EPlayerGrowthStage                NewGrowthStage;                                    // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_PlayerSharkState.OnGainedGrowthLevel
struct AME_PlayerSharkState_OnGainedGrowthLevel_Params
{
public:
	int32                                        NewGrowthLevel;                                    // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function Maneater.ME_PlayerSharkState.ModifyStat
struct AME_PlayerSharkState_ModifyStat_Params
{
public:
	enum class EPersistentStatType               StatToModify;                                      // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1363[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ValueChange;                                       // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_PlayerSharkState.ModifyGrowthStage
struct AME_PlayerSharkState_ModifyGrowthStage_Params
{
public:
	int32                                        GrowthChange;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_PlayerSharkState.ModifyGrowthLevel
struct AME_PlayerSharkState_ModifyGrowthLevel_Params
{
public:
	int32                                        GrowthLevelChange;                                 // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_PlayerSharkState.LevelUpRequiresGrowth
struct AME_PlayerSharkState_LevelUpRequiresGrowth_Params
{
public:
	int32                                        NewGrowthLevel;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1367[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_PlayerSharkState.IsInstigatingAnyAlerts
struct AME_PlayerSharkState_IsInstigatingAnyAlerts_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_PlayerSharkState.IsGrowthStageAvailable
struct AME_PlayerSharkState_IsGrowthStageAvailable_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_PlayerSharkState.IsEvolutionEquip
struct AME_PlayerSharkState_IsEvolutionEquip_Params
{
public:
	class UME_PlayerEvolution*                   Evolution;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1369[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_PlayerSharkState.GetSlottedEvolution
struct AME_PlayerSharkState_GetSlottedEvolution_Params
{
public:
	enum class EEvolutionSlot                    EvolutionSlot;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_136C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UME_PlayerEvolution*                   ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function Maneater.ME_PlayerSharkState.GetRespawnTransform
struct AME_PlayerSharkState_GetRespawnTransform_Params
{
public:
	struct FTransform                            ReturnValue;                                       // 0x0(0x30)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function Maneater.ME_PlayerSharkState.GetRespawnLocation
struct AME_PlayerSharkState_GetRespawnLocation_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_PlayerSharkState.GetNumberOfSetItemsEquippedByType
struct AME_PlayerSharkState_GetNumberOfSetItemsEquippedByType_Params
{
public:
	enum class EEvolutionSetType                 EType;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1370[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_PlayerSharkState.GetMinGrowthLevel
struct AME_PlayerSharkState_GetMinGrowthLevel_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_PlayerSharkState.GetMaxGrowthLevel
struct AME_PlayerSharkState_GetMaxGrowthLevel_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Maneater.ME_PlayerSharkState.GetInventoryEvolutions
struct AME_PlayerSharkState_GetInventoryEvolutions_Params
{
public:
	TArray<class UME_PlayerEvolution*>           Evolutions;                                        // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEvolutionSlot                    SlotTypeFilter;                                    // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1372[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function Maneater.ME_PlayerSharkState.GetInventoryEvolutionData
struct AME_PlayerSharkState_GetInventoryEvolutionData_Params
{
public:
	class UME_PlayerEvolution*                   Evolution;                                         // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEvolutionData                        OutEvolutionData;                                  // 0x8(0x10)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1373[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_PlayerSharkState.GetHasNewEvolutionAvailable
struct AME_PlayerSharkState_GetHasNewEvolutionAvailable_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_PlayerSharkState.GetGrowthPct
struct AME_PlayerSharkState_GetGrowthPct_Params
{
public:
	bool                                         bRelativeToNextStage;                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1374[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function Maneater.ME_PlayerSharkState.GetEvolutionSetName
struct AME_PlayerSharkState_GetEvolutionSetName_Params
{
public:
	enum class EEvolutionSetType                 EType;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1375[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ReturnValue;                                       // 0x8(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Maneater.ME_PlayerSharkState.GetEvolutionsBelongingToSet
struct AME_PlayerSharkState_GetEvolutionsBelongingToSet_Params
{
public:
	enum class EEvolutionSetType                 EType;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1376[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UME_PlayerEvolution*>           ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Maneater.ME_PlayerSharkState.GetDisplayStatsForEvolutionSetBonus
struct AME_PlayerSharkState_GetDisplayStatsForEvolutionSetBonus_Params
{
public:
	enum class EEvolutionSetType                 EType;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1377[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NumEquip;                                          // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FEvolutionDisplayStat>         ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_PlayerSharkState.DeductNutrientCost
struct AME_PlayerSharkState_DeductNutrientCost_Params
{
public:
	struct FEvolutionUpgradeCost                 UpgradeCost;                                       // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function Maneater.ME_PlayerSharkState.CanPurchaseEvolutionUpgrade
struct AME_PlayerSharkState_CanPurchaseEvolutionUpgrade_Params
{
public:
	struct FEvolutionUpgradePrice                UpgradePrice;                                      // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1378[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function Maneater.ME_PlayerSharkState.CanAffordEvolutionCost
struct AME_PlayerSharkState_CanAffordEvolutionCost_Params
{
public:
	struct FEvolutionUpgradeCost                 UpgradeCost;                                       // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1379[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_PlayerSharkState.AddInventoryEvolution
struct AME_PlayerSharkState_AddInventoryEvolution_Params
{
public:
	class UME_PlayerEvolution*                   NewEvolution;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEvolutionRarity                  Rarity;                                            // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_137A[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_PlayerSharkState.AcceptGrowthStageAtGrotto
struct AME_PlayerSharkState_AcceptGrowthStageAtGrotto_Params
{
public:
	enum class EPlayerGrowthStage                PlayerGrowthStage;                                 // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_PlayerTargetingSystem.SetShowSilhouette
struct UME_PlayerTargetingSystem_SetShowSilhouette_Params
{
public:
	class AActor*                                PingTarget;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShow;                                             // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EOutlineColor                     ForcedOutlineColor;                                // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1381[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_PlayerTargetingSystem.RemovePotentialTarget
struct UME_PlayerTargetingSystem_RemovePotentialTarget_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function Maneater.ME_PlayerTargetingSystem.GetSoftLockOnTargetLocation
struct UME_PlayerTargetingSystem_GetSoftLockOnTargetLocation_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function Maneater.ME_PlayerTargetingSystem.GetLockOnTargetLocation
struct UME_PlayerTargetingSystem_GetLockOnTargetLocation_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function Maneater.ME_PlayerTargetingSystem.GetFocusedTargetLocation
struct UME_PlayerTargetingSystem_GetFocusedTargetLocation_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_PlayerTargetingSystem.GetCurrentWhipShotTarget
struct UME_PlayerTargetingSystem_GetCurrentWhipShotTarget_Params
{
public:
	class AActor*                                ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_PlayerTargetingSystem.GetCurrentSoftLockOnTarget
struct UME_PlayerTargetingSystem_GetCurrentSoftLockOnTarget_Params
{
public:
	class AActor*                                ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_PlayerTargetingSystem.GetCurrentLockOnTarget
struct UME_PlayerTargetingSystem_GetCurrentLockOnTarget_Params
{
public:
	class AActor*                                ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_PlayerTargetingSystem.GetCurrentFocusedTarget
struct UME_PlayerTargetingSystem_GetCurrentFocusedTarget_Params
{
public:
	class AActor*                                ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_PlayerTargetingSystem.GetCurrentFocusedObjectiveTarget
struct UME_PlayerTargetingSystem_GetCurrentFocusedObjectiveTarget_Params
{
public:
	class AActor*                                ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_PlayerTargetingSystem.AddPotentialTarget
struct UME_PlayerTargetingSystem_AddPotentialTarget_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnlyWhipshotTarget;                               // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsObjectiveTarget;                                // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1384[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_Projectile.OnPhysicsVolumeChanged
struct AME_Projectile_OnPhysicsVolumeChanged_Params
{
public:
	class APhysicsVolume*                        NewVolume;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_Projectile.OnHitActor
struct AME_Projectile_OnHitActor_Params
{
public:
	class AActor*                                HitActor;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_SaveObjectBase.IsDirty
struct UME_SaveObjectBase_IsDirty_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_SaveGameObject.SetTigerSkinEvolutionRarity
struct UME_SaveGameObject_SetTigerSkinEvolutionRarity_Params
{
public:
	enum class EEvolutionRarity                  ERarity;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Maneater.ME_SaveGameObject.SaveObject
struct UME_SaveGameObject_SaveObject_Params
{
public:
	class UObject*                               ObjectToSave;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWorld*                                GameWorld;                                         // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1395[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_SaveGameObject.SaveActorWithTransform
struct UME_SaveGameObject_SaveActorWithTransform_Params
{
public:
	class AActor*                                ActorToSave;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1396[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_SaveGameObject.RemoveSavedObject
struct UME_SaveGameObject_RemoveSavedObject_Params
{
public:
	class UObject*                               ObjectToRemove;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1397[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function Maneater.ME_SaveGameObject.LoadObjectProperties
struct UME_SaveGameObject_LoadObjectProperties_Params
{
public:
	class UObject*                               ObjectToLoad;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWorld*                                GameWorld;                                         // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnlyClassMustMatch;                               // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x11(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1398[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function Maneater.ME_SaveGameObject.LoadAllObjectsOfClass
struct UME_SaveGameObject_LoadAllObjectsOfClass_Params
{
public:
	class UClass*                                ClassToLoad;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               WorldContextObject;                                // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UObject*>                       ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function Maneater.ME_SaveGameObject.LoadAllActorsWithTransform
struct UME_SaveGameObject_LoadAllActorsWithTransform_Params
{
public:
	class UClass*                                ClassToLoad;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               WorldContextObject;                                // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                        ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function Maneater.ME_SaveGameObject.LoadActorWithTransform
struct UME_SaveGameObject_LoadActorWithTransform_Params
{
public:
	class FString                                ActorName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               WorldContextObject;                                // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_SaveGameObject.GetTigerSkinEvolutionRarity
struct UME_SaveGameObject_GetTigerSkinEvolutionRarity_Params
{
public:
	enum class EEvolutionRarity                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_SaveProfileObject.SetTutorialPopupEnabled
struct UME_SaveProfileObject_SetTutorialPopupEnabled_Params
{
public:
	bool                                         bEnable;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_SaveProfileObject.SetSubtitlesEnabled
struct UME_SaveProfileObject_SetSubtitlesEnabled_Params
{
public:
	bool                                         bEnable;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_SaveProfileObject.SetSfxVolume
struct UME_SaveProfileObject_SetSfxVolume_Params
{
public:
	float                                        Val;                                               // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_SaveProfileObject.SetRightStickSensitivity
struct UME_SaveProfileObject_SetRightStickSensitivity_Params
{
public:
	float                                        Sensitivity;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_SaveProfileObject.SetRaytracingQuality
struct UME_SaveProfileObject_SetRaytracingQuality_Params
{
public:
	int32                                        Quality;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_SaveProfileObject.SetNarratorVolume
struct UME_SaveProfileObject_SetNarratorVolume_Params
{
public:
	float                                        Val;                                               // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_SaveProfileObject.SetMusicVolume
struct UME_SaveProfileObject_SetMusicVolume_Params
{
public:
	float                                        Val;                                               // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_SaveProfileObject.SetMouseSensitivity
struct UME_SaveProfileObject_SetMouseSensitivity_Params
{
public:
	float                                        Sensitivity;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_SaveProfileObject.SetMasterVolume
struct UME_SaveProfileObject_SetMasterVolume_Params
{
public:
	float                                        Val;                                               // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_SaveProfileObject.SetLeftStickSensitivity
struct UME_SaveProfileObject_SetLeftStickSensitivity_Params
{
public:
	float                                        Sensitivity;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_SaveProfileObject.SetInvertMouseYEnabled
struct UME_SaveProfileObject_SetInvertMouseYEnabled_Params
{
public:
	bool                                         bEnable;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_SaveProfileObject.SetInvertMouseY
struct UME_SaveProfileObject_SetInvertMouseY_Params
{
public:
	bool                                         Val;                                               // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_SaveProfileObject.SetInvertGamepadYEnabled
struct UME_SaveProfileObject_SetInvertGamepadYEnabled_Params
{
public:
	bool                                         bEnable;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_SaveProfileObject.SetInvertGamepadY
struct UME_SaveProfileObject_SetInvertGamepadY_Params
{
public:
	bool                                         Val;                                               // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_SaveProfileObject.SetDialogVolume
struct UME_SaveProfileObject_SetDialogVolume_Params
{
public:
	float                                        Val;                                               // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_SaveProfileObject.SetControlScheme
struct UME_SaveProfileObject_SetControlScheme_Params
{
public:
	int32                                        Idx;                                               // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_SaveProfileObject.SetControllerVibrationEnabled
struct UME_SaveProfileObject_SetControllerVibrationEnabled_Params
{
public:
	bool                                         bEnable;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_SaveProfileObject.IsMouseYInverted
struct UME_SaveProfileObject_IsMouseYInverted_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_SaveProfileObject.IsInvertMouseYEnabled
struct UME_SaveProfileObject_IsInvertMouseYEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_SaveProfileObject.IsInvertGamepadYEnabled
struct UME_SaveProfileObject_IsInvertGamepadYEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_SaveProfileObject.IsGamepadYInverted
struct UME_SaveProfileObject_IsGamepadYInverted_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_SaveProfileObject.GetTutorialPopupEnabled
struct UME_SaveProfileObject_GetTutorialPopupEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_SaveProfileObject.GetSubtitlesEnabled
struct UME_SaveProfileObject_GetSubtitlesEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_SaveProfileObject.GetSfxVolume
struct UME_SaveProfileObject_GetSfxVolume_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_SaveProfileObject.GetRightStickSensitivity
struct UME_SaveProfileObject_GetRightStickSensitivity_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_SaveProfileObject.GetRaytracingQuality
struct UME_SaveProfileObject_GetRaytracingQuality_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_SaveProfileObject.GetNarratorVolume
struct UME_SaveProfileObject_GetNarratorVolume_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_SaveProfileObject.GetMusicVolume
struct UME_SaveProfileObject_GetMusicVolume_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_SaveProfileObject.GetMouseSensitivity
struct UME_SaveProfileObject_GetMouseSensitivity_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_SaveProfileObject.GetMinStickSensitivity
struct UME_SaveProfileObject_GetMinStickSensitivity_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_SaveProfileObject.GetMinMouseSensitivity
struct UME_SaveProfileObject_GetMinMouseSensitivity_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_SaveProfileObject.GetMaxStickSensitivity
struct UME_SaveProfileObject_GetMaxStickSensitivity_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_SaveProfileObject.GetMaxMouseSensitivity
struct UME_SaveProfileObject_GetMaxMouseSensitivity_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_SaveProfileObject.GetMasterVolume
struct UME_SaveProfileObject_GetMasterVolume_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_SaveProfileObject.GetLeftStickSensitivity
struct UME_SaveProfileObject_GetLeftStickSensitivity_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_SaveProfileObject.GetDialogVolume
struct UME_SaveProfileObject_GetDialogVolume_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_SaveProfileObject.GetControlScheme
struct UME_SaveProfileObject_GetControlScheme_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_SaveProfileObject.GetControllerVibrationEnabled
struct UME_SaveProfileObject_GetControllerVibrationEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_SaveProfileObject.DEV_SetBoostType
struct UME_SaveProfileObject_DEV_SetBoostType_Params
{
public:
	uint8                                        Idx;                                               // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_SaveProfileObject.DEV_GetBoostType
struct UME_SaveProfileObject_DEV_GetBoostType_Params
{
public:
	uint8                                        ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_SaveSystemStatics.SaveCurrentlyActiveProfileData
struct UME_SaveSystemStatics_SaveCurrentlyActiveProfileData_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13BA[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_SaveSystemStatics.SaveCurrentlyActiveGameToSlot
struct UME_SaveSystemStatics_SaveCurrentlyActiveGameToSlot_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceFlush;                                       // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13BB[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function Maneater.ME_SaveSystemStatics.PeekSaveGameSlot
struct UME_SaveSystemStatics_PeekSaveGameSlot_Params
{
public:
	int32                                        Slot;                                              // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13BC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               WorldContextObject;                                // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UME_SaveGameObject*                    ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Maneater.ME_SaveSystemStatics.LoadSaveGameSlot
struct UME_SaveSystemStatics_LoadSaveGameSlot_Params
{
public:
	int32                                        Slot;                                              // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13BD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               WorldContextObject;                                // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UME_SaveGameObject*                    ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_SaveSystemStatics.LoadProfileData
struct UME_SaveSystemStatics_LoadProfileData_Params
{
public:
	class UObject*                               WorldContextObjet;                                 // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UME_SaveProfileObject*                 ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Maneater.ME_SaveSystemStatics.GetSaveName
struct UME_SaveSystemStatics_GetSaveName_Params
{
public:
	int32                                        Slot;                                              // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13BE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_SaveSystemStatics.GetSaveGameInstance
struct UME_SaveSystemStatics_GetSaveGameInstance_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UME_SaveGameObject*                    ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_SaveSystemStatics.GetSavedProfileTimeStamp
struct UME_SaveSystemStatics_GetSavedProfileTimeStamp_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_SaveSystemStatics.GetSavedProfileDir
struct UME_SaveSystemStatics_GetSavedProfileDir_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_SaveSystemStatics.GetProfileSaveInstance
struct UME_SaveSystemStatics_GetProfileSaveInstance_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UME_SaveProfileObject*                 ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_SaveSystemStatics.GetPreviouslyLoadedSaveSlot
struct UME_SaveSystemStatics_GetPreviouslyLoadedSaveSlot_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13BF[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_SaveSystemStatics.DestroySaveGameInstance
struct UME_SaveSystemStatics_DestroySaveGameInstance_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13C0[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function Maneater.ME_SaveSystemStatics.DeleteSaveGameSlot
struct UME_SaveSystemStatics_DeleteSaveGameSlot_Params
{
public:
	int32                                        Slot;                                              // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13C1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               WorldContextObject;                                // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13C2[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function Maneater.ME_SaveSystemStatics.CurrentPlayerDoesSlotHaveSave
struct UME_SaveSystemStatics_CurrentPlayerDoesSlotHaveSave_Params
{
public:
	int32                                        Slot;                                              // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13C3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               WorldContextObject;                                // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13C4[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function Maneater.ME_SignificanceEntity.PostSignificance
struct IME_SignificanceEntity_PostSignificance_Params
{
public:
	class UObject*                               SignificanceObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OldSignificance;                                   // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NewSignificance;                                   // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUnregistered;                                     // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13C7[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// Function Maneater.ME_SignificanceEntity.CalculateSignificance
struct IME_SignificanceEntity_CalculateSignificance_Params
{
public:
	class UObject*                               SignificanceObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13C8[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ViewPoint;                                         // 0x10(0x30)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x40(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13C9[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_SonarDetectableInterface.GetSonarWidget
struct IME_SonarDetectableInterface_GetSonarWidget_Params
{
public:
	bool                                         bForce;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13CB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidgetComponent*                      ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_SonarDetectableInterface.GetMaxDistanceVisible
struct IME_SonarDetectableInterface_GetMaxDistanceVisible_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Maneater.ME_SonarDetectableInterface.GetFriendlyName
struct IME_SonarDetectableInterface_GetFriendlyName_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_SonarDetectableInterface.GetFocusPriority
struct IME_SonarDetectableInterface_GetFocusPriority_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_SonarDetectableInterface.GetDisplayLevel
struct IME_SonarDetectableInterface_GetDisplayLevel_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Maneater.ME_SonarDetectableInterface.GetDetectableLocation
struct IME_SonarDetectableInterface_GetDetectableLocation_Params
{
public:
	struct FVector                               AttackerLocation;                                  // 0x0(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0xC(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function Maneater.ME_SonarDetectableInterface.GetDetectableComponentLocationOffset
struct IME_SonarDetectableInterface_GetDetectableComponentLocationOffset_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_SonarDetectableInterface.GetDetectableComponent
struct IME_SonarDetectableInterface_GetDetectableComponent_Params
{
public:
	class UPrimitiveComponent*                   ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_SonarDetectableInterface.CanBeLockedOnTo
struct IME_SonarDetectableInterface_CanBeLockedOnTo_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_SonarDetectableInterface.CanBeFocused
struct IME_SonarDetectableInterface_CanBeFocused_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_SonarManager.OnCinematicModeChanged
struct AME_SonarManager_OnCinematicModeChanged_Params
{
public:
	bool                                         bCinematicMode;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_SpawnManagerBase.AISpawned
struct AME_SpawnManagerBase_AISpawned_Params
{
public:
	class AME_AIController*                      AIC;                                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_SpawnlistCondition.ConditionIsValid
struct UME_SpawnlistCondition_ConditionIsValid_Params
{
public:
	class AActor*                                WorldContextActor;                                 // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13E0[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_SpawnPool.RemoveActorClassFromPool
struct UME_SpawnPool_RemoveActorClassFromPool_Params
{
public:
	class UClass*                                ActorClass;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_SpawnPoolEntity.IsExemptFromPool
struct IME_SpawnPoolEntity_IsExemptFromPool_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_SpawnPoolEntity.IsDespawning
struct IME_SpawnPoolEntity_IsDespawning_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_ThrashableInterface.OnWhipShotImpact
struct IME_ThrashableInterface_OnWhipShotImpact_Params
{
public:
	class APawn*                                 WhipInstigator;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Maneater.ME_ThrashableInterface.OnWhipShotEnd
struct IME_ThrashableInterface_OnWhipShotEnd_Params
{
public:
	class APawn*                                 WhipInstigator;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               EndVelocity;                                       // 0x8(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         GrabbedActor;                                      // 0x14(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_140B[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function Maneater.ME_ThrashableInterface.OnWhipShotBegin
struct IME_ThrashableInterface_OnWhipShotBegin_Params
{
public:
	class APawn*                                 WhipInstigator;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               WhipVelocity;                                      // 0x8(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_140D[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_ThrashableInterface.OnReleasedBy
struct IME_ThrashableInterface_OnReleasedBy_Params
{
public:
	class AME_AnimalCharacter*                   ReleasingAnimal;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIgnoreFlee;                                       // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBrokeAway;                                        // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_140F[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1A0 (0x1A0 - 0x0)
// Function Maneater.ME_ThrashableInterface.OnGrabPointDamagedVFX
struct IME_ThrashableInterface_OnGrabPointDamagedVFX_Params
{
public:
	struct FThrashGrabPoint                      GrabPoint;                                         // 0x0(0x180)(Parm, NativeAccessSpecifierPublic)
	float                                        DamageToApply;                                     // 0x180(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               DamageNormal;                                      // 0x184(0xC)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               DamageLocation;                                    // 0x190(0xC)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1411[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C0 (0x1C0 - 0x0)
// Function Maneater.ME_ThrashableInterface.OnGrabPointDamaged
struct IME_ThrashableInterface_OnGrabPointDamaged_Params
{
public:
	struct FThrashGrabPoint                      GrabPoint;                                         // 0x0(0x180)(Parm, NativeAccessSpecifierPublic)
	float                                        DamageToApply;                                     // 0x180(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPhysicalSurface                  PhysSurface;                                       // 0x184(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1413[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimitiveComponent*                   DamagedComponent;                                  // 0x188(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                DamageInstigator;                                  // 0x190(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   InstigatingComponent;                              // 0x198(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               DamageNormal;                                      // 0x1A0(0xC)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               DamageLocation;                                    // 0x1AC(0xC)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1414[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1A0 (0x1A0 - 0x0)
// Function Maneater.ME_ThrashableInterface.OnGrabPointConsumed
struct IME_ThrashableInterface_OnGrabPointConsumed_Params
{
public:
	class AME_AnimalCharacter*                   ConsumingAnimal;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1415[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FThrashGrabPoint                      ConsumedGrabPoint;                                 // 0x10(0x180)(Parm, NativeAccessSpecifierPublic)
	class FName                                  GoreCapBoneName;                                   // 0x190(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1416[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function Maneater.ME_ThrashableInterface.OnGrabPointChanged
struct IME_ThrashableInterface_OnGrabPointChanged_Params
{
public:
	class AME_AnimalCharacter*                   GrabbingAnimal;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   GrabbedComponent;                                  // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GrabPointIndex;                                    // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1418[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function Maneater.ME_ThrashableInterface.OnGrabbedBy
struct IME_ThrashableInterface_OnGrabbedBy_Params
{
public:
	class AME_AnimalCharacter*                   GrabbingAnimal;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   GrabbedComponent;                                  // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GrabPointIndex;                                    // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_141C[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_ThrashableInterface.OnConsumedWhole
struct IME_ThrashableInterface_OnConsumedWhole_Params
{
public:
	class AME_AnimalCharacter*                   ConsumingAnimal;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_ThrashableInterface.MoveActorToMeshPositionOnRelease
struct IME_ThrashableInterface_MoveActorToMeshPositionOnRelease_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_ThrashableInterface.GetWhipshotSpinning
struct IME_ThrashableInterface_GetWhipshotSpinning_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_ThrashableInterface.GetWhipshotRotationSpeed
struct IME_ThrashableInterface_GetWhipshotRotationSpeed_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_ThrashableInterface.GetWhipshotRolling
struct IME_ThrashableInterface_GetWhipshotRolling_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_ThrashableInterface.GetWhipShotMovementClass
struct IME_ThrashableInterface_GetWhipShotMovementClass_Params
{
public:
	TSubclassOf<class UME_WhipshotMovementComponent> ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_ThrashableInterface.GetWhipshotLandClearance
struct IME_ThrashableInterface_GetWhipshotLandClearance_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_ThrashableInterface.GetWhipShotImpactEffect
struct IME_ThrashableInterface_GetWhipShotImpactEffect_Params
{
public:
	TSubclassOf<class AActor>                    ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_ThrashableInterface.GetWhipShotFlightType
struct IME_ThrashableInterface_GetWhipShotFlightType_Params
{
public:
	enum class EMECustomMovementMode             ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_ThrashableInterface.GetWhipShotFlightParticleEffect
struct IME_ThrashableInterface_GetWhipShotFlightParticleEffect_Params
{
public:
	class UParticleSystem*                       ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_ThrashableInterface.GetThrashableMesh
struct IME_ThrashableInterface_GetThrashableMesh_Params
{
public:
	class UMeshComponent*                        ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_ThrashableInterface.GetSize
struct IME_ThrashableInterface_GetSize_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Maneater.ME_ThrashableInterface.GetGrabPoints
struct IME_ThrashableInterface_GetGrabPoints_Params
{
public:
	class AME_AnimalCharacter*                   GrabbingAnimal;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FThrashGrabPoint>              GrabPoints;                                        // 0x8(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_ThrashableInterface.CanBeWhipShot
struct IME_ThrashableInterface_CanBeWhipShot_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_ThrashableInterface.CanBeGrabbedBy
struct IME_ThrashableInterface_CanBeGrabbedBy_Params
{
public:
	class AME_AnimalCharacter*                   GrabbingAnimal;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1428[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_ThrashableInterface.CanBeConsumedWholeBy
struct IME_ThrashableInterface_CanBeConsumedWholeBy_Params
{
public:
	class AME_AnimalCharacter*                   GrabbingAnimal;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_142A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_TimeofDayInfo.SetTimeOfDay
struct AME_TimeofDayInfo_SetTimeOfDay_Params
{
public:
	float                                        NewHourOfDay;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForce;                                            // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_142D[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_TimeofDayInfo.SetPauseState
struct AME_TimeofDayInfo_SetPauseState_Params
{
public:
	bool                                         bNewPause;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_TimeofDayInfo.GetPauseState
struct AME_TimeofDayInfo_GetPauseState_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_TimeOfDayWorldActor.UpdateTimeOfDayCubemaps
struct AME_TimeOfDayWorldActor_UpdateTimeOfDayCubemaps_Params
{
public:
	float                                        InTimeOfDay;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_TimeOfDayWorldActor.OnNewFogVolumeEntered
struct AME_TimeOfDayWorldActor_OnNewFogVolumeEntered_Params
{
public:
	enum class EFogState                         PlayerFogOverride;                                 // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_TimeOfDayWorldActor.IsDaytime
struct AME_TimeOfDayWorldActor_IsDaytime_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_TorpedoProjectile.SetCanBeGrabbed
struct AME_TorpedoProjectile_SetCanBeGrabbed_Params
{
public:
	bool                                         bCanGrab;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function Maneater.ME_TutorialManager.ShouldShowInGamePopupWidget
struct AME_TutorialManager_ShouldShowInGamePopupWidget_Params
{
public:
	enum class ETutorialPopupID                  PopupId;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function Maneater.ME_TutorialManager.RequestInGamePopupWidget
struct AME_TutorialManager_RequestInGamePopupWidget_Params
{
public:
	enum class ETutorialPopupID                  PopupId;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.ME_TutorialManager.PushHudTip
struct AME_TutorialManager_PushHudTip_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_TutorialManager.OnWhipShotPerformed
struct AME_TutorialManager_OnWhipShotPerformed_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_TutorialManager.OnPlayerConsumedPrey
struct AME_TutorialManager_OnPlayerConsumedPrey_Params
{
public:
	class AME_AnimalCharacter*                   Player;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Prey;                                              // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function Maneater.ME_TutorialManager.OnKnifingStateChanged
struct AME_TutorialManager_OnKnifingStateChanged_Params
{
public:
	bool                                         NewKnifingState;                                   // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECharacterActionMode              ChangeContext;                                     // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_TutorialManager.OnEvolutionEquipped
struct AME_TutorialManager_OnEvolutionEquipped_Params
{
public:
	enum class EEvolutionSlot                    EvolutionSlot;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_145B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UME_PlayerEvolution*                   Evolution;                                         // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_TutorialManager.IsTutorialPartTwoComplete
struct AME_TutorialManager_IsTutorialPartTwoComplete_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_TutorialManager.IsTutorialPartOneComplete
struct AME_TutorialManager_IsTutorialPartOneComplete_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_TutorialManager.IsEnabled
struct AME_TutorialManager_IsEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_TutorialManager.IncrementObjective
struct AME_TutorialManager_IncrementObjective_Params
{
public:
	bool                                         ForceShowDelayedStep;                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.ME_TutorialManager.GetCurrentTutorialIndex
struct AME_TutorialManager_GetCurrentTutorialIndex_Params
{
public:
	enum class ETutorialEventId                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function Maneater.ME_TutorialManager.CreateInGamePopupWidget
struct AME_TutorialManager_CreateInGamePopupWidget_Params
{
public:
	enum class ETutorialPopupID                  PopupId;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function Maneater.ME_WhipshotMovementComponent.OnWhipShotVictimImpact
struct UME_WhipshotMovementComponent_OnWhipShotVictimImpact_Params
{
public:
	class UPrimitiveComponent*                   SelfActor;                                         // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                OtherActor;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   OtherPrimitive;                                    // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               NormalImpulse;                                     // 0x18(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                            Hit;                                               // 0x24(0x88)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_146D[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_WorldMapWidget.LoadSavedRenderTarget
struct UME_WorldMapWidget_LoadSavedRenderTarget_Params
{
public:
	class UTextureRenderTarget2D*                ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function Maneater.ME_WorldRegionVolume.PointIsWithinRegion
struct AME_WorldRegionVolume_PointIsWithinRegion_Params
{
public:
	struct FVector                               Point;                                             // 0x0(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SphereRadius;                                      // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1472[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function Maneater.ME_WorldSettings.OnImpactParticleComplete
struct AME_WorldSettings_OnImpactParticleComplete_Params
{
public:
	class UParticleSystemComponent*              PSystem;                                           // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.ME_WorldSettings.OnImpactAudioComplete
struct AME_WorldSettings_OnImpactAudioComplete_Params
{
public:
	enum class EAkCallbackType                   CallbackType;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1473[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkCallbackInfo*                       CallbackInfo;                                      // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.MEBTDecorator_CanSpawnDiver.OnTrackedAIChange
struct UMEBTDecorator_CanSpawnDiver_OnTrackedAIChange_Params
{
public:
	class AME_AIController*                      AIC;                                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.MEBTDecorator_CombatState.OnCombatStateChanged
struct UMEBTDecorator_CombatState_OnCombatStateChanged_Params
{
public:
	class AME_AIController*                      AIC;                                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECombatStatus                     PrevStatus;                                        // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1489[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function Maneater.MEBTDecorator_TimeSinceLastSpawn.OnNewSpawn
struct UMEBTDecorator_TimeSinceLastSpawn_OnNewSpawn_Params
{
public:
	class AME_AIController*                      AIC;                                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.MEBTTask_AbilityBase.OnAbilityFinished
struct UMEBTTask_AbilityBase_OnAbilityFinished_Params
{
public:
	struct FGameplayAbilitySpecHandle            AbilityHandle;                                     // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_149E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBehaviorTreeComponent*                OwnerComp;                                         // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.MEBTTask_MoveTo.OnRequestIdUpdated
struct UMEBTTask_MoveTo_OnRequestIdUpdated_Params
{
public:
	class AME_AIController*                      AIC;                                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAIRequestID                          UpdatedRequestId;                                  // 0x8(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14BD[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function Maneater.MEBTTask_SpawnAI.OnSpawnComplete
struct UMEBTTask_SpawnAI_OnSpawnComplete_Params
{
public:
	class AME_BoatAIController*                  AIC;                                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.MEBTTask_VehicleMoveTo.OnRequestIdUpdated
struct UMEBTTask_VehicleMoveTo_OnRequestIdUpdated_Params
{
public:
	class AME_AIController*                      AIC;                                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAIRequestID                          UpdatedRequestId;                                  // 0x8(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14D0[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function Maneater.MED_AirVehicleMoveComponent.SetMaxSpeedModifier
struct UMED_AirVehicleMoveComponent_SetMaxSpeedModifier_Params
{
public:
	float                                        UpdatedSpeed;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function Maneater.MED_AirVehicleMoveComponent.SetGoalLocation
struct UMED_AirVehicleMoveComponent_SetGoalLocation_Params
{
public:
	struct FVector                               Location;                                          // 0x0(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.MED_BountyManager.GetIsBountyOnHold
struct AMED_BountyManager_GetIsBountyOnHold_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.MED_CharacterFunctionLibrary.GetRunMoveSpeed
struct UMED_CharacterFunctionLibrary_GetRunMoveSpeed_Params
{
public:
	class AME_Character*                         TwChar;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14D6[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Maneater.MED_CharacterFunctionLibrary.GetFlyMoveSpeed
struct UMED_CharacterFunctionLibrary_GetFlyMoveSpeed_Params
{
public:
	class AME_Character*                         TwChar;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14D7[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function Maneater.MED_DLCManager.SetHasEnteredDLC01Map
struct AMED_DLCManager_SetHasEnteredDLC01Map_Params
{
public:
	bool                                         bSet;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.MED_DLCManager.SetHasCompletedDLC01Map
struct AMED_DLCManager_SetHasCompletedDLC01Map_Params
{
public:
	bool                                         bSet;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.MED_DLCManager.OwnsDLC01
struct AMED_DLCManager_OwnsDLC01_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.MED_DLCManager.LaunchPurchaseOverlay
struct AMED_DLCManager_LaunchPurchaseOverlay_Params
{
public:
	enum class EDLCType                          DLCType;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.MED_DLCManager.IsInDLC01Map
struct AMED_DLCManager_IsInDLC01Map_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.MED_DLCManager.HasEnteredDLC01Map
struct AMED_DLCManager_HasEnteredDLC01Map_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.MED_DLCManager.HasCompletedDLC01Map
struct AMED_DLCManager_HasCompletedDLC01Map_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function Maneater.MED_FlyingVehiclePawn.OnRotorOverlapEnd
struct AMED_FlyingVehiclePawn_OnRotorOverlapEnd_Params
{
public:
	class UPrimitiveComponent*                   OverlappedComponent;                               // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                OtherActor;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   OtherComp;                                         // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OtherBodyIndex;                                    // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14E5[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA8 (0xA8 - 0x0)
// Function Maneater.MED_FlyingVehiclePawn.OnRotorOverlapBegin
struct AMED_FlyingVehiclePawn_OnRotorOverlapBegin_Params
{
public:
	class UPrimitiveComponent*                   OverlappedComponent;                               // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                OtherActor;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   OtherComp;                                         // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OtherBodyIndex;                                    // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFromSweep;                                        // 0x1C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14E9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            SweepResult;                                       // 0x20(0x88)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function Maneater.MED_FlyingVehiclePawn.OnRotorEjectedPassengerImpact
struct AMED_FlyingVehiclePawn_OnRotorEjectedPassengerImpact_Params
{
public:
	class UPrimitiveComponent*                   HitComp;                                           // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                OtherActor;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   OtherComp;                                         // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               NormalImpulse;                                     // 0x18(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                            Hit;                                               // 0x24(0x88)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_14EA[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function Maneater.MED_FlyingVehiclePawn.ActivateHoverMode
struct AMED_FlyingVehiclePawn_ActivateHoverMode_Params
{
public:
	float                                        HoverStoppingDistance;                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HoverHeight;                                       // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bActivateSideTargeting;                            // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14EB[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function Maneater.MED_PlayerObjective_BountyTrigger.OnBountyBossDefeated
struct UMED_PlayerObjective_BountyTrigger_OnBountyBossDefeated_Params
{
public:
	int32                                        Rank;                                              // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function Maneater.MED_WaveSpawner.SpawnWaveAI
struct AMED_WaveSpawner_SpawnWaveAI_Params
{
public:
	class UClass*                                SpawnClass;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SpawnLocation;                                     // 0x8(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              SpawnRotation;                                     // 0x14(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class AME_AIController*                      ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function Maneater.MED_PlayerObjective_TinFoilHat.GetSubObjectiveByActor
struct UMED_PlayerObjective_TinFoilHat_GetSubObjectiveByActor_Params
{
public:
	class AActor*                                SearchingActor;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTinFoilHatSubObject                  OutSubObjective;                                   // 0x8(0x58)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x60(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1519[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function Maneater.MED_PlayerObjectiveTimeTrial.GetTimerRemaining
struct UMED_PlayerObjectiveTimeTrial_GetTimerRemaining_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function Maneater.MED_StaticPropActor.HandleActorHitByPawn
struct AMED_StaticPropActor_HandleActorHitByPawn_Params
{
public:
	class UPrimitiveComponent*                   SelfActor;                                         // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                OtherActor;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   OtherPrimitive;                                    // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               NormalImpulse;                                     // 0x18(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                            Hit;                                               // 0x24(0x88)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_1526[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function Maneater.MED_Teleporter.SetTeleportEnabled
struct AMED_Teleporter_SetTeleportEnabled_Params
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.MED_Teleporter.IsTeleportEnabled
struct AMED_Teleporter_IsTeleportEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.MED_Teleporter.GetMissingRequiredProducts
struct AMED_Teleporter_GetMissingRequiredProducts_Params
{
public:
	TArray<struct FMED_TeleporterProductRequirement> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.MED_Teleporter.GetDestination
struct AMED_Teleporter_GetDestination_Params
{
public:
	class UMED_TeleporterDestination*            ReturnValue;                                       // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.MED_Teleporter.CanUseTeleporter
struct AMED_Teleporter_CanUseTeleporter_Params
{
public:
	class AME_PlayerSharkCharacter*              PlayerShark;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsFromMenu;                                        // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFastTravelReturn                 ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_152E[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function Maneater.MED_TeleporterDestination.GetWorldRotation
struct UMED_TeleporterDestination_GetWorldRotation_Params
{
public:
	struct FRotator                              ReturnValue;                                       // 0x0(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function Maneater.MED_TeleporterDestination.GetWorldLocation
struct UMED_TeleporterDestination_GetWorldLocation_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.MED_TeleporterDestination.GetRequiredProducts
struct UMED_TeleporterDestination_GetRequiredProducts_Params
{
public:
	TArray<struct FMED_TeleporterProductRequirement> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Maneater.MED_TeleporterDestination.GetPreTravelCinematicSaveId
struct UMED_TeleporterDestination_GetPreTravelCinematicSaveId_Params
{
public:
	struct FGuid                                 ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.MED_TeleporterDestination.GetPreTravelCinematicDataTableRowName
struct UMED_TeleporterDestination_GetPreTravelCinematicDataTableRowName_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.MED_TeleporterDestination.GetLevelName
struct UMED_TeleporterDestination_GetLevelName_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Maneater.MED_TeleporterDestination.GetInWorldWidgetText
struct UMED_TeleporterDestination_GetInWorldWidgetText_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Maneater.MED_TeleporterDestination.GetDisplayName
struct UMED_TeleporterDestination_GetDisplayName_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.MED_TeleporterDestination.GetDisplayIcon
struct UMED_TeleporterDestination_GetDisplayIcon_Params
{
public:
	class UTexture2D*                            ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.MED_TinFoilHatActor.CheckObjectStateCompleted
struct AMED_TinFoilHatActor_CheckObjectStateCompleted_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.MED_WeaponComponent.SetAITreeWindowOpen
struct UMED_WeaponComponent_SetAITreeWindowOpen_Params
{
public:
	bool                                         SetTo;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.MED_WeaponComponent.GetLastFireTime
struct UMED_WeaponComponent_GetLastFireTime_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.MED_WeaponComponent.GetLaserLockOnStartTime
struct UMED_WeaponComponent_GetLaserLockOnStartTime_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Maneater.MED_WeaponComponent.GetIsLaserPointerShown
struct UMED_WeaponComponent_GetIsLaserPointerShown_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function Maneater.OvodusButton.UpdateCursorOverlaps
struct UOvodusButton_UpdateCursorOverlaps_Params
{
public:
	struct FGeometry                             AllottedGeometry;                                  // 0x0(0x38)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Maneater.OvodusButton.SetAdvancedHitTexture
struct UOvodusButton_SetAdvancedHitTexture_Params
{
public:
	class UTexture2D*                            InTexture;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Maneater.OvodusButton.SetAdvancedHitAlpha
struct UOvodusButton_SetAdvancedHitAlpha_Params
{
public:
	int32                                        InAlpha;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


