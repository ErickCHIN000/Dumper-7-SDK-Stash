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

// 0x19 (0x19 - 0x0)
// Function BP_ControllerRumbleComponent.BP_ControllerRumbleComponent_C.Get Local Controller
struct UBP_ControllerRumbleComponent_C_Get_Local_Controller_Params
{
public:
	class AGGPlayerController*                   AsGGPlayer_Controller;                             // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGPlayerController*                   K2Node_DynamicCast_AsGGPlayer_Controller;          // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function BP_ControllerRumbleComponent.BP_ControllerRumbleComponent_C.WhileCurrentVehicleIsSpeedBoosting
struct UBP_ControllerRumbleComponent_C_WhileCurrentVehicleIsSpeedBoosting_Params
{
public:
	class AGGVehicle*                            Vehicle;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsDriver;                                         // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_A9E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Speed;                                             // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA8 (0xA8 - 0x0)
// Function BP_ControllerRumbleComponent.BP_ControllerRumbleComponent_C.OnCurrentVehicleHit
struct UBP_ControllerRumbleComponent_C_OnCurrentVehicleHit_Params
{
public:
	class AGGVehicle*                            Vehicle;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                OtherActor;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   OtherComponent;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ImpactSize;                                        // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        OtherImpactSize;                                   // 0x1C(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            HitResult;                                         // 0x20(0x88)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// 0x94 (0x94 - 0x0)
// Function BP_ControllerRumbleComponent.BP_ControllerRumbleComponent_C.OnLocalGoatRagdollImpact
struct UBP_ControllerRumbleComponent_C_OnLocalGoatRagdollImpact_Params
{
public:
	class AGGGoat*                               Goat;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Speed;                                             // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            Hit;                                               // 0xC(0x88)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// 0x11 (0x11 - 0x0)
// Function BP_ControllerRumbleComponent.BP_ControllerRumbleComponent_C.WhileLocalGoatIsVehicleBraking
struct UBP_ControllerRumbleComponent_C_WhileLocalGoatIsVehicleBraking_Params
{
public:
	class AGGGoat*                               LocalGoat;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGVehicle*                            Vehicle;                                           // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsHandBraking;                                    // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function BP_ControllerRumbleComponent.BP_ControllerRumbleComponent_C.OnLocalGoatBounced
struct UBP_ControllerRumbleComponent_C_OnLocalGoatBounced_Params
{
public:
	class AGGCharacter*                          Character;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGGBouncyStaticMeshComponent*          BouncyComponent;                                   // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function BP_ControllerRumbleComponent.BP_ControllerRumbleComponent_C.OnLocalGoatHeadbutting
struct UBP_ControllerRumbleComponent_C_OnLocalGoatHeadbutting_Params
{
public:
	class AGGGoat*                               HeadbuttingGoat;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bHitSomething;                                     // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_B87[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        HeadbuttedActors;                                  // 0x10(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         bIsChargeHeadbutt;                                 // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_B8C[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EStatusEffectTypes>        ActiveStatusEffects;                               // 0x28(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x30 (0x30 - 0x0)
// Function BP_ControllerRumbleComponent.BP_ControllerRumbleComponent_C.OnLocalGoatBackkicking
struct UBP_ControllerRumbleComponent_C_OnLocalGoatBackkicking_Params
{
public:
	class AGGGoat*                               BackkickingGoat;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bHitSomething;                                     // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_BB9[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        KickedActors;                                      // 0x10(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<enum class EStatusEffectTypes>        ActiveStatusEffects;                               // 0x20(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x94 (0x94 - 0x0)
// Function BP_ControllerRumbleComponent.BP_ControllerRumbleComponent_C.OnLocalGoatNeckRagdollImpact
struct UBP_ControllerRumbleComponent_C_OnLocalGoatNeckRagdollImpact_Params
{
public:
	class AGGGoat*                               Goat;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Speed;                                             // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            Hit;                                               // 0xC(0x88)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// 0x4 (0x4 - 0x0)
// Function BP_ControllerRumbleComponent.BP_ControllerRumbleComponent_C.ReceiveTick
struct UBP_ControllerRumbleComponent_C_ReceiveTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_ControllerRumbleComponent.BP_ControllerRumbleComponent_C.OnLocalGoatBouncyJumped
struct UBP_ControllerRumbleComponent_C_OnLocalGoatBouncyJumped_Params
{
public:
	class AGGGoat*                               LocalGoat;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        PreviousJumpCount;                                 // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Location;                                          // 0xC(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_ControllerRumbleComponent.BP_ControllerRumbleComponent_C.WhileLocalGoatIsGrinding
struct UBP_ControllerRumbleComponent_C_WhileLocalGoatIsGrinding_Params
{
public:
	class AGGGoat*                               LocalGoat;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsHyperspeedGrinding;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C5A[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGGGrindableSplineComponent*           GrindSpline;                                       // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_ControllerRumbleComponent.BP_ControllerRumbleComponent_C.OnLocalGoatStartHyperspeedGrind
struct UBP_ControllerRumbleComponent_C_OnLocalGoatStartHyperspeedGrind_Params
{
public:
	class UGGGrindableSplineComponent*           GrindSpline;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function BP_ControllerRumbleComponent.BP_ControllerRumbleComponent_C.OnLocalGoatGetStatusEffect
struct UBP_ControllerRumbleComponent_C_OnLocalGoatGetStatusEffect_Params
{
public:
	class AActor*                                GoatActor;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGGStatusEffectManager*                Manager;                                           // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGStatusEffectBase*                   NewStatusEffect;                                   // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EStatusEffectTypes                Type;                                              // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_ControllerRumbleComponent.BP_ControllerRumbleComponent_C.OnLocalGoatLickedActor
struct UBP_ControllerRumbleComponent_C_OnLocalGoatLickedActor_Params
{
public:
	class AGGGoat*                               GoatLicking;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                LickedActor;                                       // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_ControllerRumbleComponent.BP_ControllerRumbleComponent_C.OnVehicleExploded
struct UBP_ControllerRumbleComponent_C_OnVehicleExploded_Params
{
public:
	class AGGVehicle*                            Vehicle;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_ControllerRumbleComponent.BP_ControllerRumbleComponent_C.OnExplosiveActorExploded
struct UBP_ControllerRumbleComponent_C_OnExplosiveActorExploded_Params
{
public:
	class AGGExplosiveActor*                     ExplosiveActor;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_ControllerRumbleComponent.BP_ControllerRumbleComponent_C.OnFireballImpact
struct UBP_ControllerRumbleComponent_C_OnFireballImpact_Params
{
public:
	class AGGFireballProjectile*                 Fireball;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x14 (0x14 - 0x0)
// Function BP_ControllerRumbleComponent.BP_ControllerRumbleComponent_C.OnGoatPerfectLanding
struct UBP_ControllerRumbleComponent_C_OnGoatPerfectLanding_Params
{
public:
	class AGGGoat*                               LandedGoat;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Location;                                          // 0x8(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x14 (0x14 - 0x0)
// Function BP_ControllerRumbleComponent.BP_ControllerRumbleComponent_C.OnGoatPerfectJump
struct UBP_ControllerRumbleComponent_C_OnGoatPerfectJump_Params
{
public:
	class AGGGoat*                               JumpingGoat;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Location;                                          // 0x8(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_ControllerRumbleComponent.BP_ControllerRumbleComponent_C.OnLocalGoatHeadbutted
struct UBP_ControllerRumbleComponent_C_OnLocalGoatHeadbutted_Params
{
public:
	class UObject*                               HeadbuttedObject;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGGoat*                               HeadbuttingGoat;                                   // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function BP_ControllerRumbleComponent.BP_ControllerRumbleComponent_C.OnLocalGoatTakeDamage
struct UBP_ControllerRumbleComponent_C_OnLocalGoatTakeDamage_Params
{
public:
	class AActor*                                DamagedGoat;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Damage;                                            // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_DAC[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDamageType*                           DamageType;                                        // 0x10(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                           InstigatedBy;                                      // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                DamageCauser;                                      // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x648 (0x648 - 0x0)
// Function BP_ControllerRumbleComponent.BP_ControllerRumbleComponent_C.ExecuteUbergraph_BP_ControllerRumbleComponent
struct UBP_ControllerRumbleComponent_C_ExecuteUbergraph_BP_ControllerRumbleComponent_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1022[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_Event_DamagedGoat;                          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_Damage;                               // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1026[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDamageType*                           K2Node_Event_DamageType;                           // 0x18(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                           K2Node_Event_InstigatedBy;                         // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_Event_DamageCauser;                         // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Temp_struct_Variable;                              // 0x30(0x8)(NoDestructor, HasGetValueTypeHash)
	class UGGDamageType_Base*                    K2Node_DynamicCast_AsGGDamage_Type_Base;           // 0x38(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1035[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          Temp_struct_Variable_1;                            // 0x44(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Temp_struct_Variable_2;                            // 0x4C(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Temp_struct_Variable_3;                            // 0x54(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Temp_struct_Variable_4;                            // 0x5C(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Temp_struct_Variable_5;                            // 0x64(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x6C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1040[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          Temp_struct_Variable_6;                            // 0x70(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Temp_struct_Variable_7;                            // 0x78(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1045[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          Temp_struct_Variable_8;                            // 0x84(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Temp_struct_Variable_9;                            // 0x8C(0x8)(NoDestructor, HasGetValueTypeHash)
	enum class EStatusEffectTypes                Temp_byte_Variable;                                // 0x94(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EStatusEffectTypes                Temp_byte_Variable_1;                              // 0x95(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EStatusEffectTypes                Temp_byte_Variable_2;                              // 0x96(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EStatusEffectTypes                Temp_byte_Variable_3;                              // 0x97(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1050[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          Temp_struct_Variable_10;                           // 0x9C(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Temp_struct_Variable_11;                           // 0xA4(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_3;                              // 0xAC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1055[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          Temp_struct_Variable_12;                           // 0xB0(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Temp_struct_Variable_13;                           // 0xB8(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_4;                              // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_105D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          Temp_struct_Variable_14;                           // 0xC4(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_5;                              // 0xCC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_105F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          Temp_struct_Variable_15;                           // 0xD0(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Temp_struct_Variable_16;                           // 0xD8(0x8)(NoDestructor, HasGetValueTypeHash)
	enum class ETypeOfDamage                     Temp_byte_Variable_4;                              // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1064[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          Temp_struct_Variable_17;                           // 0xE4(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Temp_struct_Variable_18;                           // 0xEC(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Temp_struct_Variable_19;                           // 0xF4(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Temp_struct_Variable_20;                           // 0xFC(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Temp_struct_Variable_21;                           // 0x104(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Temp_struct_Variable_22;                           // 0x10C(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Temp_struct_Variable_23;                           // 0x114(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Temp_struct_Variable_24;                           // 0x11C(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Temp_struct_Variable_25;                           // 0x124(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Temp_struct_Variable_26;                           // 0x12C(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Temp_struct_Variable_27;                           // 0x134(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Temp_struct_Variable_28;                           // 0x13C(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          K2Node_Select_Default;                             // 0x144(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Temp_struct_Variable_29;                           // 0x14C(0x8)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_107D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGPlayerController*                   CallFunc_Get_Local_Controller_AsGGPlayer_Controller; // 0x158(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class AGGPlayerController*                   CallFunc_Get_Local_Controller_AsGGPlayer_Controller_1; // 0x160(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class AGGPlayerController*                   CallFunc_Get_Local_Controller_AsGGPlayer_Controller_2; // 0x168(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class AGGPlayerController*                   CallFunc_Get_Local_Controller_AsGGPlayer_Controller_3; // 0x170(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class AGGVehicle*                            K2Node_Event_Vehicle_3;                            // 0x178(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bIsDriver;                            // 0x180(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1083[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Event_Speed_2;                              // 0x184(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGVehicle*                            K2Node_Event_Vehicle_2;                            // 0x188(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_Event_OtherActor;                           // 0x190(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   K2Node_Event_OtherComponent;                       // 0x198(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_ImpactSize;                           // 0x1A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_OtherImpactSize;                      // 0x1A4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            K2Node_Event_HitResult;                            // 0x1A8(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AGGGoat*                               K2Node_Event_Goat_1;                               // 0x230(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_Speed_1;                              // 0x238(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            K2Node_Event_Hit_1;                                // 0x23C(0x88)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	uint8                                        Pad_1097[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGGoat*                               K2Node_Event_LocalGoat_2;                          // 0x2C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGVehicle*                            K2Node_Event_Vehicle_1;                            // 0x2D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bIsHandBraking;                       // 0x2D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0x2D9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_10A4[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          K2Node_Select_Default_1;                           // 0x2DC(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          K2Node_Select_Default_2;                           // 0x2E4(0x8)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_10AA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGPlayerController*                   CallFunc_GetGGPlayerController_ReturnValue;        // 0x2F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGCharacter*                          K2Node_Event_Character;                            // 0x2F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGGBouncyStaticMeshComponent*          K2Node_Event_BouncyComponent;                      // 0x300(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGGoat*                               K2Node_Event_HeadbuttingGoat_1;                    // 0x308(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bHitSomething_1;                      // 0x310(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_10B5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        K2Node_Event_HeadbuttedActors;                     // 0x318(0x10)(ConstParm, ReferenceParm)
	bool                                         K2Node_Event_bIsChargeHeadbutt;                    // 0x328(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_10B9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EStatusEffectTypes>        K2Node_Event_ActiveStatusEffects_1;                // 0x330(0x10)(ConstParm, ReferenceParm)
	class AGGGoat*                               K2Node_Event_BackkickingGoat;                      // 0x340(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bHitSomething;                        // 0x348(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_10C0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        K2Node_Event_KickedActors;                         // 0x350(0x10)(ConstParm, ReferenceParm)
	TArray<enum class EStatusEffectTypes>        K2Node_Event_ActiveStatusEffects;                  // 0x360(0x10)(ConstParm, ReferenceParm)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x370(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_Contains_ReturnValue_1;             // 0x371(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_Contains_ReturnValue_2;             // 0x372(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_10CB[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGPlayerController*                   CallFunc_GetGGPlayerController_ReturnValue_1;      // 0x378(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGPlayerController*                   CallFunc_GetGGPlayerController_ReturnValue_2;      // 0x380(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGPlayerController*                   CallFunc_GetGGPlayerController_ReturnValue_3;      // 0x388(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_Contains_ReturnValue_3;             // 0x390(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_10D7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          K2Node_Select_Default_3;                           // 0x394(0x8)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_10DB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGPlayerController*                   CallFunc_GetGGPlayerController_ReturnValue_4;      // 0x3A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGPlayerController*                   CallFunc_GetGGPlayerController_ReturnValue_5;      // 0x3A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGPlayerController*                   CallFunc_GetGGPlayerController_ReturnValue_6;      // 0x3B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Temp_struct_Variable_30;                           // 0x3B8(0x8)(NoDestructor, HasGetValueTypeHash)
	enum class EStatusEffectTypes                Temp_byte_Variable_5;                              // 0x3C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_10EE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGPlayerController*                   CallFunc_Get_Local_Controller_AsGGPlayer_Controller_4; // 0x3C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class AGGPlayerController*                   CallFunc_Get_Local_Controller_AsGGPlayer_Controller_5; // 0x3D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FGameplayTag                          Temp_struct_Variable_31;                           // 0x3D8(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Temp_struct_Variable_32;                           // 0x3E0(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_6;                              // 0x3E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_10FB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGPlayerController*                   CallFunc_Get_Local_Controller_AsGGPlayer_Controller_6; // 0x3F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class AGGPlayerController*                   CallFunc_Get_Local_Controller_AsGGPlayer_Controller_7; // 0x3F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FGameplayTag                          Temp_struct_Variable_33;                           // 0x400(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue_1;         // 0x408(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1104[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGGoat*                               K2Node_Event_Goat;                                 // 0x410(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_Speed;                                // 0x418(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            K2Node_Event_Hit;                                  // 0x41C(0x88)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                        K2Node_Event_DeltaSeconds;                         // 0x4A4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetTimeSinceStartChargingHeadbutt_ReturnValue; // 0x4A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_110B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGGoat*                               CallFunc_GetLocalPossessedGoat_ReturnValue;        // 0x4B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue_2;         // 0x4B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4B9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_110E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          K2Node_Select_Default_4;                           // 0x4BC(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsChargingHeadbutt_ReturnValue;           // 0x4C4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue_3;         // 0x4C5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1114[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetTimeSinceStartChargingHeadbutt_ReturnValue_1; // 0x4C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          K2Node_Select_Default_5;                           // 0x4CC(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue_4;         // 0x4D4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1118[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGPlayerController*                   CallFunc_Get_Local_Controller_AsGGPlayer_Controller_8; // 0x4D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x4E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_111C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGGoat*                               K2Node_Event_LocalGoat_1;                          // 0x4E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_PreviousJumpCount;                    // 0x4F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               K2Node_Event_Location_2;                           // 0x4F4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsLocalGoatDriving_ReturnValue;           // 0x500(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_7;                              // 0x501(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1122[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGGoat*                               K2Node_Event_LocalGoat;                            // 0x508(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bIsHyperspeedGrinding;                // 0x510(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1124[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGGGrindableSplineComponent*           K2Node_Event_GrindSpline_1;                        // 0x518(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGGGrindableSplineComponent*           K2Node_Event_GrindSpline;                          // 0x520(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGPlayerController*                   CallFunc_GetGGPlayerController_ReturnValue_7;      // 0x528(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          K2Node_Select_Default_6;                           // 0x530(0x8)(NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_Event_GoatActor;                            // 0x538(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGGStatusEffectManager*                K2Node_Event_Manager;                              // 0x540(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGStatusEffectBase*                   K2Node_Event_NewStatusEffect;                      // 0x548(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EStatusEffectTypes                K2Node_Event_Type;                                 // 0x550(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1130[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          K2Node_Select_Default_7;                           // 0x554(0x8)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_113F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGGoat*                               K2Node_Event_GoatLicking;                          // 0x560(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_Event_LickedActor;                          // 0x568(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetActorsMass_ReturnValue;                // 0x570(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetActorsMass_ReturnValue_1;              // 0x574(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x578(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x579(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1149[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          K2Node_Select_Default_8;                           // 0x57C(0x8)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_114A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGPlayerController*                   CallFunc_GetGGPlayerController_ReturnValue_8;      // 0x588(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          K2Node_Select_Default_9;                           // 0x590(0x8)(NoDestructor, HasGetValueTypeHash)
	class AGGVehicle*                            K2Node_Event_Vehicle;                              // 0x598(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x5A0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1155[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGExplosiveActor*                     K2Node_Event_ExplosiveActor;                       // 0x5B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGGForceFeedbackComponent*             CallFunc_SpawnForceFeedbackAtLocation_ReturnValue; // 0x5B8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x5C0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_115A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGFireballProjectile*                 K2Node_Event_Fireball;                             // 0x5D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGGForceFeedbackComponent*             CallFunc_SpawnForceFeedbackAtLocation_ReturnValue_1; // 0x5D8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0x5E0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_115F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGGoat*                               K2Node_Event_LandedGoat;                           // 0x5F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               K2Node_Event_Location_1;                           // 0x5F8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1161[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGGForceFeedbackComponent*             CallFunc_SpawnForceFeedbackAtLocation_ReturnValue_2; // 0x608(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGGForceFeedbackComponent*             CallFunc_SpawnForceFeedbackAtLocation_ReturnValue_3; // 0x610(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGGoat*                               K2Node_Event_JumpingGoat;                          // 0x618(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               K2Node_Event_Location;                             // 0x620(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1167[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               K2Node_Event_HeadbuttedObject;                     // 0x630(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGGoat*                               K2Node_Event_HeadbuttingGoat;                      // 0x638(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGGForceFeedbackComponent*             CallFunc_SpawnForceFeedbackAtLocation_ReturnValue_4; // 0x640(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


