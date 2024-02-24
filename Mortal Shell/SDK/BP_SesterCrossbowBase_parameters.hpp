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

// 0xB1 (0xB1 - 0x0)
// Function BP_SesterCrossbowBase.BP_SesterCrossbowBase_C.TraceBehind
struct ABP_SesterCrossbowBase_C_TraceBehind_Params
{
public:
	TArray<class AActor*>                        Temp_object_Variable;                              // 0x0(0x10)(ConstParm, ReferenceParm, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x10(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x1C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_SphereTraceSingle_OutHit;                 // 0x28(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_SphereTraceSingle_ReturnValue;            // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function BP_SesterCrossbowBase.BP_SesterCrossbowBase_C.GetMeleeTraceEnd
struct ABP_SesterCrossbowBase_C_GetMeleeTraceEnd_Params
{
public:
	class FName                                  OptionalSocketOverride;                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               TraceEnd;                                          // 0x8(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetSocketLocation_ReturnValue;            // 0x14(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BP_SesterCrossbowBase.BP_SesterCrossbowBase_C.GetMeleeTraceStart
struct ABP_SesterCrossbowBase_C_GetMeleeTraceStart_Params
{
public:
	class FName                                  OptionalSocketOverride;                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               TraceStart;                                        // 0x8(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetSocketLocation_ReturnValue;            // 0x14(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_SesterCrossbowBase.BP_SesterCrossbowBase_C.OnNotifyEnd_E79F42BB4AFD467B059C5EB10B0175BB
struct ABP_SesterCrossbowBase_C_OnNotifyEnd_E79F42BB4AFD467B059C5EB10B0175BB_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_SesterCrossbowBase.BP_SesterCrossbowBase_C.OnNotifyBegin_E79F42BB4AFD467B059C5EB10B0175BB
struct ABP_SesterCrossbowBase_C_OnNotifyBegin_E79F42BB4AFD467B059C5EB10B0175BB_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_SesterCrossbowBase.BP_SesterCrossbowBase_C.OnInterrupted_E79F42BB4AFD467B059C5EB10B0175BB
struct ABP_SesterCrossbowBase_C_OnInterrupted_E79F42BB4AFD467B059C5EB10B0175BB_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_SesterCrossbowBase.BP_SesterCrossbowBase_C.OnBlendOut_E79F42BB4AFD467B059C5EB10B0175BB
struct ABP_SesterCrossbowBase_C_OnBlendOut_E79F42BB4AFD467B059C5EB10B0175BB_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_SesterCrossbowBase.BP_SesterCrossbowBase_C.OnCompleted_E79F42BB4AFD467B059C5EB10B0175BB
struct ABP_SesterCrossbowBase_C_OnCompleted_E79F42BB4AFD467B059C5EB10B0175BB_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_SesterCrossbowBase.BP_SesterCrossbowBase_C.OnNotifyEnd_AD966C164EF3767F28A521933537316C
struct ABP_SesterCrossbowBase_C_OnNotifyEnd_AD966C164EF3767F28A521933537316C_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_SesterCrossbowBase.BP_SesterCrossbowBase_C.OnNotifyBegin_AD966C164EF3767F28A521933537316C
struct ABP_SesterCrossbowBase_C_OnNotifyBegin_AD966C164EF3767F28A521933537316C_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_SesterCrossbowBase.BP_SesterCrossbowBase_C.OnInterrupted_AD966C164EF3767F28A521933537316C
struct ABP_SesterCrossbowBase_C_OnInterrupted_AD966C164EF3767F28A521933537316C_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_SesterCrossbowBase.BP_SesterCrossbowBase_C.OnBlendOut_AD966C164EF3767F28A521933537316C
struct ABP_SesterCrossbowBase_C_OnBlendOut_AD966C164EF3767F28A521933537316C_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_SesterCrossbowBase.BP_SesterCrossbowBase_C.OnCompleted_AD966C164EF3767F28A521933537316C
struct ABP_SesterCrossbowBase_C_OnCompleted_AD966C164EF3767F28A521933537316C_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_SesterCrossbowBase.BP_SesterCrossbowBase_C.OnNotifyEnd_C454EFBC424D25F96F1EF2809C2F4343
struct ABP_SesterCrossbowBase_C_OnNotifyEnd_C454EFBC424D25F96F1EF2809C2F4343_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_SesterCrossbowBase.BP_SesterCrossbowBase_C.OnNotifyBegin_C454EFBC424D25F96F1EF2809C2F4343
struct ABP_SesterCrossbowBase_C_OnNotifyBegin_C454EFBC424D25F96F1EF2809C2F4343_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_SesterCrossbowBase.BP_SesterCrossbowBase_C.OnInterrupted_C454EFBC424D25F96F1EF2809C2F4343
struct ABP_SesterCrossbowBase_C_OnInterrupted_C454EFBC424D25F96F1EF2809C2F4343_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_SesterCrossbowBase.BP_SesterCrossbowBase_C.OnBlendOut_C454EFBC424D25F96F1EF2809C2F4343
struct ABP_SesterCrossbowBase_C_OnBlendOut_C454EFBC424D25F96F1EF2809C2F4343_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_SesterCrossbowBase.BP_SesterCrossbowBase_C.OnCompleted_C454EFBC424D25F96F1EF2809C2F4343
struct ABP_SesterCrossbowBase_C_OnCompleted_C454EFBC424D25F96F1EF2809C2F4343_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_SesterCrossbowBase.BP_SesterCrossbowBase_C.OnNotifyEnd_E3DDAFF34B6ACB25A48FD899874BD27B
struct ABP_SesterCrossbowBase_C_OnNotifyEnd_E3DDAFF34B6ACB25A48FD899874BD27B_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_SesterCrossbowBase.BP_SesterCrossbowBase_C.OnNotifyBegin_E3DDAFF34B6ACB25A48FD899874BD27B
struct ABP_SesterCrossbowBase_C_OnNotifyBegin_E3DDAFF34B6ACB25A48FD899874BD27B_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_SesterCrossbowBase.BP_SesterCrossbowBase_C.OnInterrupted_E3DDAFF34B6ACB25A48FD899874BD27B
struct ABP_SesterCrossbowBase_C_OnInterrupted_E3DDAFF34B6ACB25A48FD899874BD27B_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_SesterCrossbowBase.BP_SesterCrossbowBase_C.OnBlendOut_E3DDAFF34B6ACB25A48FD899874BD27B
struct ABP_SesterCrossbowBase_C_OnBlendOut_E3DDAFF34B6ACB25A48FD899874BD27B_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_SesterCrossbowBase.BP_SesterCrossbowBase_C.OnCompleted_E3DDAFF34B6ACB25A48FD899874BD27B
struct ABP_SesterCrossbowBase_C_OnCompleted_E3DDAFF34B6ACB25A48FD899874BD27B_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_SesterCrossbowBase.BP_SesterCrossbowBase_C.OnNotifyEnd_6AB0A1014188C0DAC083139FC2477174
struct ABP_SesterCrossbowBase_C_OnNotifyEnd_6AB0A1014188C0DAC083139FC2477174_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_SesterCrossbowBase.BP_SesterCrossbowBase_C.OnNotifyBegin_6AB0A1014188C0DAC083139FC2477174
struct ABP_SesterCrossbowBase_C_OnNotifyBegin_6AB0A1014188C0DAC083139FC2477174_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_SesterCrossbowBase.BP_SesterCrossbowBase_C.OnInterrupted_6AB0A1014188C0DAC083139FC2477174
struct ABP_SesterCrossbowBase_C_OnInterrupted_6AB0A1014188C0DAC083139FC2477174_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_SesterCrossbowBase.BP_SesterCrossbowBase_C.OnBlendOut_6AB0A1014188C0DAC083139FC2477174
struct ABP_SesterCrossbowBase_C_OnBlendOut_6AB0A1014188C0DAC083139FC2477174_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_SesterCrossbowBase.BP_SesterCrossbowBase_C.OnCompleted_6AB0A1014188C0DAC083139FC2477174
struct ABP_SesterCrossbowBase_C_OnCompleted_6AB0A1014188C0DAC083139FC2477174_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x80 (0x80 - 0x0)
// Function BP_SesterCrossbowBase.BP_SesterCrossbowBase_C.InitAfterSpawn
struct ABP_SesterCrossbowBase_C_InitAfterSpawn_Params
{
public:
	class AAdvancedEnemySpawner_C*               SpawnerRef;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  UniqueId;                                          // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ELevelPhases                      PhaseToSpawn;                                      // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bPermanentlyDeadOnceKilled_;                       // 0x11(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_A4E[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class APatrolPoint_C*                        PatrolPointA;                                      // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bShouldWander_;                                    // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_A57[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class APatrolPoint_C*                        PatrolPointB;                                      // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AggroRadius;                                       // 0x30(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A65[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_TriggerOnEnemyAggro_C*             TriggerToActivateOnAggro;                          // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShouldPatrol_;                                     // 0x40(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_A6E[0xF];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            SpawnTransform;                                    // 0x50(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function BP_SesterCrossbowBase.BP_SesterCrossbowBase_C.ClientPlayImpactSound
struct ABP_SesterCrossbowBase_C_ClientPlayImpactSound_Params
{
public:
	struct FVector                               ImpactLocation;                                    // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_AB4[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                HitActor;                                          // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_SesterCrossbowBase.BP_SesterCrossbowBase_C.PlayAttackMontage
struct ABP_SesterCrossbowBase_C_PlayAttackMontage_Params
{
public:
	class UAnimMontage*                          MontageToPlay;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PlayRate;                                          // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StartingPosition;                                  // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  StartingSection;                                   // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_SesterCrossbowBase.BP_SesterCrossbowBase_C.SelectAttack
struct ABP_SesterCrossbowBase_C_SelectAttack_Params
{
public:
	float                                        DistanceFromPlayer;                                // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function BP_SesterCrossbowBase.BP_SesterCrossbowBase_C.ForceHeavyStaggerDamage
struct ABP_SesterCrossbowBase_C_ForceHeavyStaggerDamage_Params
{
public:
	struct FVector                               DirectionToSource;                                 // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BP_SesterCrossbowBase.BP_SesterCrossbowBase_C.EnemyDeath
struct ABP_SesterCrossbowBase_C_EnemyDeath_Params
{
public:
	class AActor*                                Killer;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bShouldPlayDeathAnim;                              // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x519 (0x519 - 0x0)
// Function BP_SesterCrossbowBase.BP_SesterCrossbowBase_C.ExecuteUbergraph_BP_SesterCrossbowBase
struct ABP_SesterCrossbowBase_C_ExecuteUbergraph_BP_SesterCrossbowBase_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_D54[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_CustomEvent_NotifyName_20;                  // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable;                                // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x18(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_NotifyName_19;                  // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_NotifyName_18;                  // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x38(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_NotifyName_17;                  // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x50(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_NotifyName_16;                  // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x68(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_NotifyName_15;                  // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x80(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  Temp_name_Variable_1;                              // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x98(0x10)(ZeroConstructor, NoDestructor)
	bool                                         K2Node_SwitchName_CmpSuccess;                      // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_D7B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_CustomEvent_NotifyName_14;                  // 0xAC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_NotifyName_13;                  // 0xB4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0xBC(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_NotifyName_12;                  // 0xCC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_7;            // 0xD4(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_NotifyName_11;                  // 0xE4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_8;            // 0xEC(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_NotifyName_10;                  // 0xFC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_9;            // 0x104(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  Temp_name_Variable_2;                              // 0x114(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_10;           // 0x11C(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_NotifyName_9;                   // 0x12C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_NotifyName_8;                   // 0x134(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_11;           // 0x13C(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_NotifyName_7;                   // 0x14C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_12;           // 0x154(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_NotifyName_6;                   // 0x164(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_13;           // 0x16C(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_NotifyName_5;                   // 0x17C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_14;           // 0x184(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  Temp_name_Variable_3;                              // 0x194(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_15;           // 0x19C(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_NotifyName_4;                   // 0x1AC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_NotifyName_3;                   // 0x1B4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_16;           // 0x1BC(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_NotifyName_2;                   // 0x1CC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_17;           // 0x1D4(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_NotifyName_1;                   // 0x1E4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_18;           // 0x1EC(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_NotifyName;                     // 0x1FC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_19;           // 0x204(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  Temp_name_Variable_4;                              // 0x214(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x21C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_DBE[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_20;           // 0x220(0x10)(ZeroConstructor, NoDestructor)
	class AAdvancedEnemySpawner_C*               K2Node_Event_SpawnerRef;                           // 0x230(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_Event_UniqueID;                             // 0x238(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ELevelPhases                      K2Node_Event_PhaseToSpawn;                         // 0x240(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bPermanentlyDeadOnceKilled_;          // 0x241(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_DD0[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class APatrolPoint_C*                        K2Node_Event_PatrolPointA;                         // 0x248(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bShouldWander_;                       // 0x250(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_DD8[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class APatrolPoint_C*                        K2Node_Event_PatrolPointB;                         // 0x258(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_AggroRadius;                          // 0x260(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_DDC[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_TriggerOnEnemyAggro_C*             K2Node_Event_TriggerToActivateOnAggro;             // 0x268(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_ShouldPatrol_;                        // 0x270(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_DE2[0xF];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            K2Node_Event_SpawnTransform;                       // 0x280(0x30)(IsPlainOldData, NoDestructor)
	class ASesterCrossbow_C*                     K2Node_DynamicCast_AsSester_Crossbow;              // 0x2B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x2B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_DEF[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimInstance*                         CallFunc_GetAnimInstance_ReturnValue;              // 0x2C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTwinSisters_Crossbow_AnimBlueprint_C* K2Node_DynamicCast_AsTwin_Sisters_Crossbow_Anim_Blueprint; // 0x2C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x2D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E00[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_CustomEvent_NotifyName_22;                  // 0x2D4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E10[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ACharacter*                            CallFunc_GetPlayerCharacter_ReturnValue;           // 0x2E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x2E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LineOfSightTo_ReturnValue;                // 0x2F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E1D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_21;           // 0x2F4(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_E21[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimInstance*                         CallFunc_GetAnimInstance_ReturnValue_1;            // 0x308(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTwinSisters_Crossbow_AnimBlueprint_C* K2Node_DynamicCast_AsTwin_Sisters_Crossbow_Anim_Blueprint_1; // 0x310(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x318(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E2E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPlayMontageCallbackProxy*             CallFunc_CreateProxyObjectForPlayMontage_ReturnValue; // 0x320(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x328(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E32[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               K2Node_Event_ImpactLocation;                       // 0x32C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_Event_HitActor;                             // 0x338(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_NotifyName_21;                  // 0x340(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E3A[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_GetSocketTransform_ReturnValue;           // 0x350(0x30)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0x380(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0x38C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0x398(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E4B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ACharacter*                            CallFunc_GetPlayerCharacter_ReturnValue_1;         // 0x3A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetVelocity_ReturnValue;                  // 0x3B0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_22;           // 0x3BC(0x10)(ZeroConstructor, NoDestructor)
	struct FVector                               CallFunc_GetSocketLocation_ReturnValue;            // 0x3CC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_CalcRangeAttackTargetLocation_ReturnValue; // 0x3D8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_FindLookAtRotation_ReturnValue;           // 0x3E4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0x3F0(0x30)(IsPlainOldData, NoDestructor)
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x420(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_SelectRandomAttack_SelectedAttack;        // 0x428(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x42C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E7E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_CrossbowProjectile_Sesters_C*      CallFunc_FinishSpawningActor_ReturnValue;          // 0x430(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          K2Node_Event_MontageToPlay;                        // 0x438(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_PlayRate;                             // 0x440(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_StartingPosition;                     // 0x444(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_Event_StartingSection;                      // 0x448(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPlayMontageCallbackProxy*             CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1; // 0x450(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x458(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x459(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E9E[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Event_DistanceFromPlayer;                   // 0x45C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FClamp_ReturnValue;                       // 0x460(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x464(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_EA6[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Select_Default;                             // 0x468(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_FloatFloat_ReturnValue_1;       // 0x46C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x46D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_EAF[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_CustomEvent_NotifyName_23;                  // 0x470(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_UpdateCurrentMontagePlayLength_PlayLengthAtDefaultPlaybackSpeed; // 0x478(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_23;           // 0x47C(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_EC5[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPlayMontageCallbackProxy*             CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2; // 0x490(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x498(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_ECB[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               K2Node_Event_DirectionToSource;                    // 0x49C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_MakeLiteralName_ReturnValue;              // 0x4A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                           CallFunc_GetController_ReturnValue_1;              // 0x4B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPlayMontageCallbackProxy*             CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3; // 0x4B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x4C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_5;                    // 0x4C1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_EE4[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UBlackboardComponent*                  CallFunc_GetBlackboard_ReturnValue;                // 0x4C8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_6;                    // 0x4D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_EEA[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_UpdateCurrentMontagePlayLength_PlayLengthAtDefaultPlaybackSpeed_1; // 0x4D4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_NotifyName_24;                  // 0x4D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_Event_Killer;                               // 0x4E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bShouldPlayDeathAnim;                 // 0x4E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_EF1[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_24;           // 0x4EC(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_EF4[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           CallFunc_GetController_ReturnValue_2;              // 0x500(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_7;                    // 0x508(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_8;                    // 0x509(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_EFC[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPlayMontageCallbackProxy*             CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_4; // 0x510(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_9;                    // 0x518(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


