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

// 0x31 (0x31 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.ShouldKickAttack
struct AVampire_EnemyChar_C_ShouldKickAttack_Params
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Kick_;                                             // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_11B7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AZero_Base_C*                          As0_Base;                                          // 0x10(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AZero_Base_C*                          Local_0Base;                                       // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AZero_Base_C*                          K2Node_DynamicCast_As0_Base;                       // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x2B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_3;                // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_4;                // 0x2D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_5;                // 0x2E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_6;                // 0x2F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_7;                // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3C (0x3C - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.Death_HandleStormModeMilestones
struct AVampire_EnemyChar_C_Death_HandleStormModeMilestones_Params
{
public:
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_StormMode_PC_C>  K2Node_DynamicCast_AsBPI_Storm_Mode_PC;            // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1229[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBPI_StormMode_PC_C>  K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1;          // 0x28(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_StormMode_GetSelectedShell_HasSelected;   // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EArmorTypes                       CallFunc_StormMode_GetSelectedShell_Shell;         // 0x3A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x3B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x80 (0x80 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.DualSenseAudio
struct AVampire_EnemyChar_C_DualSenseAudio_Params
{
public:
	enum class Enum_ControllerAudio_Type         SoundType;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_128A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            Sound;                                             // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Sound_Volume;                                      // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_ControllerAudio_Type         VibrationType;                                     // 0x14(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1291[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            Vibration;                                         // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Vibration_Volume;                                  // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  SocketName;                                        // 0x24(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetSocketLocation_ReturnValue;            // 0x2C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1296[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0x40(0x30)(IsPlainOldData, NoDestructor)
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_ControllerAudio_C*                 CallFunc_FinishSpawningActor_ReturnValue;          // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.CancelPlayerStoneForm
struct AVampire_EnemyChar_C_CancelPlayerStoneForm_Params
{
public:
	class AZero_Base_C*                          CallFunc_GetCharacterAs0_Base_As0_Base;            // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimInstance*                         CallFunc_GetAnimInstance_ReturnValue;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.SetAIAllowReposition
struct AVampire_EnemyChar_C_SetAIAllowReposition_Params
{
public:
	class FName                                  CallFunc_MakeLiteralName_ReturnValue;              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBlackboardComponent*                  CallFunc_GetBlackboard_ReturnValue;                // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x16 (0x16 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.CheckPlayerInRange
struct AVampire_EnemyChar_C_CheckPlayerInRange_Params
{
public:
	float                                        Check_Distance;                                    // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsPlayerInRange;                                   // 0x4(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_130F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_GetPlayerPawn_ReturnValue;                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetDistanceTo_ReturnValue;                // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_FloatFloat_ReturnValue;              // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.CheckForStartingKickAttack
struct AVampire_EnemyChar_C_CheckForStartingKickAttack_Params
{
public:
	bool                                         StartWithKickAttack_;                              // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.CleanupKickTimerOnDeath
struct AVampire_EnemyChar_C_CleanupKickTimerOnDeath_Params
{
public:
	bool                                         CallFunc_K2_IsValidTimerHandle_ReturnValue;        // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.GetKickCooldown
struct AVampire_EnemyChar_C_GetKickCooldown_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_MakeLiteralName_ReturnValue;              // 0x4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_137F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBlackboardComponent*                  CallFunc_GetBlackboard_ReturnValue;                // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1388[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetValueAsFloat_ReturnValue;              // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x22 (0x22 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.SetKickCooldown
struct AVampire_EnemyChar_C_SetKickCooldown_Params
{
public:
	float                                        FloatValue;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_MakeLiteralName_ReturnValue;              // 0x4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_13BC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBlackboardComponent*                  CallFunc_GetBlackboard_ReturnValue;                // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x29 (0x29 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.IsKickOnCooldown?
struct AVampire_EnemyChar_C_IsKickOnCooldown__Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_13F1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_MakeLiteralName_ReturnValue;              // 0x4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_13F6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBlackboardComponent*                  CallFunc_GetBlackboard_ReturnValue;                // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1407[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetValueAsFloat_ReturnValue;              // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x189 (0x189 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.CheckForNearbyVampires
struct AVampire_EnemyChar_C_CheckForNearbyVampires_Params
{
public:
	float                                        Radius;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NumNeabyVamp;                                      // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NumNeabyVamps;                                     // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AZero_Base_C*                          CallFunc_GetCharacterAs0_Base_As0_Base;            // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                        K2Node_MakeArray_Array;                            // 0x28(0x10)(ConstParm, ReferenceParm, HasGetValueTypeHash)
	TArray<enum class EObjectTypeQuery>          K2Node_MakeArray_Array_1;                          // 0x38(0x10)(ConstParm, ReferenceParm, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x48(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x54(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FHitResult>                    CallFunc_SphereTraceMultiForObjects_OutHits;       // 0x60(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_SphereTraceMultiForObjects_ReturnValue;   // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_152E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_Array_Get_Item;                           // 0x78(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BreakHitResult_bBlockingHit;              // 0x101(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BreakHitResult_bInitialOverlap;           // 0x102(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_153E[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_BreakHitResult_Time;                      // 0x104(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakHitResult_Distance;                  // 0x108(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_Location;                  // 0x10C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactPoint;               // 0x118(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_Normal;                    // 0x124(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactNormal;              // 0x130(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1559[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPhysicalMaterial*                     CallFunc_BreakHitResult_PhysMat;                   // 0x140(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BreakHitResult_HitActor;                  // 0x148(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   CallFunc_BreakHitResult_HitComponent;              // 0x150(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_BreakHitResult_HitBoneName;               // 0x158(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_HitItem;                   // 0x160(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_FaceIndex;                 // 0x164(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_TraceStart;                // 0x168(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_TraceEnd;                  // 0x174(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                CallFunc_GetObjectClass_ReturnValue;               // 0x180(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ClassClass_ReturnValue;        // 0x188(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1C (0x1C - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.MovementSoundLoop
struct AVampire_EnemyChar_C_MovementSoundLoop_Params
{
public:
	float                                        CallFunc_VSize_ReturnValue;                        // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_VSize_ReturnValue_1;                      // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_MapRangeClamped_ReturnValue;              // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_MapRangeClamped_ReturnValue_1;            // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FInterpTo_ReturnValue;                    // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3D (0x3D - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.RotatePlayerTowardsLaunchingVampire
struct AVampire_EnemyChar_C_RotatePlayerTowardsLaunchingVampire_Params
{
public:
	class AActor*                                Player;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_K2_GetActorRotation_ReturnValue;          // 0xC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x18(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x24(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                              CallFunc_RInterpTo_ReturnValue;                    // 0x30(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_K2_SetActorRotation_ReturnValue;          // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1D0 (0x1D0 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.StunNearbyEnemies
struct AVampire_EnemyChar_C_StunNearbyEnemies_Params
{
public:
	float                                        Duration;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          Temp_object_Variable;                              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          Temp_object_Variable_1;                            // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          Temp_object_Variable_2;                            // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          Temp_object_Variable_3;                            // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          Temp_object_Variable_4;                            // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          Temp_object_Variable_5;                            // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_RandomIntegerInRange_ReturnValue;         // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                            CallFunc_GetPlayerCharacter_ReturnValue;           // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                        K2Node_MakeArray_Array;                            // 0x50(0x10)(ConstParm, ReferenceParm, HasGetValueTypeHash)
	class UAnimMontage*                          K2Node_Select_Default;                             // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<enum class EObjectTypeQuery>          K2Node_MakeArray_Array_1;                          // 0x68(0x10)(ConstParm, ReferenceParm, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x78(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x84(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FHitResult>                    CallFunc_SphereTraceMultiForObjects_OutHits;       // 0x90(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_SphereTraceMultiForObjects_ReturnValue;   // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_173C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_Array_Get_Item;                           // 0xA8(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BreakHitResult_bBlockingHit;              // 0x131(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BreakHitResult_bInitialOverlap;           // 0x132(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_174A[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_BreakHitResult_Time;                      // 0x134(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakHitResult_Distance;                  // 0x138(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_Location;                  // 0x13C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactPoint;               // 0x148(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_Normal;                    // 0x154(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactNormal;              // 0x160(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_175E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPhysicalMaterial*                     CallFunc_BreakHitResult_PhysMat;                   // 0x170(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BreakHitResult_HitActor;                  // 0x178(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   CallFunc_BreakHitResult_HitComponent;              // 0x180(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_BreakHitResult_HitBoneName;               // 0x188(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_HitItem;                   // 0x190(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_FaceIndex;                 // 0x194(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_TraceStart;                // 0x198(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_TraceEnd;                  // 0x1A4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AVampire_EnemyChar_C*                  K2Node_DynamicCast_AsVampire_Enemy_Char;           // 0x1B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x1B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1783[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AEnemyCharacter_C*                     K2Node_DynamicCast_AsEnemy_Character;              // 0x1C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x1C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1788[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_PlayAnimMontage_ReturnValue;              // 0x1CC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3C (0x3C - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.GetMeleeTraceEnd
struct AVampire_EnemyChar_C_GetMeleeTraceEnd_Params
{
public:
	class FName                                  OptionalSocketOverride;                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               TraceEnd;                                          // 0x8(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1808[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_GetSocketLocation_ReturnValue;            // 0x18(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetSocketLocation_ReturnValue_1;          // 0x24(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               K2Node_Select_Default;                             // 0x30(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3C (0x3C - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.GetMeleeTraceStart
struct AVampire_EnemyChar_C_GetMeleeTraceStart_Params
{
public:
	class FName                                  OptionalSocketOverride;                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               TraceStart;                                        // 0x8(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_187F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_GetSocketLocation_ReturnValue;            // 0x18(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetSocketLocation_ReturnValue_1;          // 0x24(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               K2Node_Select_Default;                             // 0x30(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.HandleBitingNotifies
struct AVampire_EnemyChar_C_HandleBitingNotifies_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchName_CmpSuccess;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x160 (0x160 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.TraceForPlayer
struct AVampire_EnemyChar_C_TraceForPlayer_Params
{
public:
	bool                                         bBlockingHit;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_19A4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                HitActor;                                          // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                        Temp_object_Variable;                              // 0x10(0x10)(ConstParm, ReferenceParm, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetActorForwardVector_ReturnValue;        // 0x20(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_19B1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x30(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x3C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetScaledCapsuleRadius_ReturnValue;       // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x4C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_SphereTraceSingle_OutHit;                 // 0x5C(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_SphereTraceSingle_ReturnValue;            // 0xE4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xE5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BreakHitResult_bBlockingHit;              // 0xE6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BreakHitResult_bInitialOverlap;           // 0xE7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        CallFunc_BreakHitResult_Time;                      // 0xE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakHitResult_Distance;                  // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_Location;                  // 0xF0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactPoint;               // 0xFC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_Normal;                    // 0x108(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactNormal;              // 0x114(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                     CallFunc_BreakHitResult_PhysMat;                   // 0x120(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BreakHitResult_HitActor;                  // 0x128(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   CallFunc_BreakHitResult_HitComponent;              // 0x130(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_BreakHitResult_HitBoneName;               // 0x138(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_HitItem;                   // 0x140(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_FaceIndex;                 // 0x144(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_TraceStart;                // 0x148(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_TraceEnd;                  // 0x154(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x162 (0x162 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.LerpVampToPlayer
struct AVampire_EnemyChar_C_LerpVampToPlayer_Params
{
public:
	float                                        CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BreakHitResult_bBlockingHit;              // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BreakHitResult_bInitialOverlap;           // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1B04[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_BreakHitResult_Time;                      // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakHitResult_Distance;                  // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_Location;                  // 0x1C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactPoint;               // 0x28(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_Normal;                    // 0x34(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactNormal;              // 0x40(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B19[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPhysicalMaterial*                     CallFunc_BreakHitResult_PhysMat;                   // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BreakHitResult_HitActor;                  // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   CallFunc_BreakHitResult_HitComponent;              // 0x60(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_BreakHitResult_HitBoneName;               // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_HitItem;                   // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_FaceIndex;                 // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_TraceStart;                // 0x78(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_TraceEnd;                  // 0x84(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_K2_GetActorRotation_ReturnValue;          // 0x90(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_Conv_RotatorToVector_ReturnValue;         // 0x9C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0xA8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0xB4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_VInterpTo_ReturnValue;                    // 0xC0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_Conv_VectorToRotator_ReturnValue;         // 0xCC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                            CallFunc_K2_SetActorLocation_SweepHitResult;       // 0xD8(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_K2_SetActorLocation_ReturnValue;          // 0x160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_K2_SetActorRotation_ReturnValue;          // 0x161(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x21 (0x21 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.GetVampireAnimOffset
struct AVampire_EnemyChar_C_GetVampireAnimOffset_Params
{
public:
	class UObject*                               PlayerPawn;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Offset;                                            // 0x8(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1BE5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AZero_Base_C*                          K2Node_DynamicCast_As0_Base;                       // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x68 (0x68 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.LaunchPounce
struct AVampire_EnemyChar_C_LaunchPounce_Params
{
public:
	struct FVector                               TargetPos;                                         // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               TargetVelocity;                                    // 0xC(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x18(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x24(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x34(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_SuggestProjectileVelocity_CustomArc_OutLaunchVelocity; // 0x40(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SuggestProjectileVelocity_CustomArc_ReturnValue; // 0x4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1CAA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_ProjectVectorOnToPlane_ReturnValue;       // 0x50(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Normal_ReturnValue;                       // 0x5C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.OnNotifyEnd_9B7D5B514CCF1E75C4508AA0DA33E333
struct AVampire_EnemyChar_C_OnNotifyEnd_9B7D5B514CCF1E75C4508AA0DA33E333_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.OnNotifyBegin_9B7D5B514CCF1E75C4508AA0DA33E333
struct AVampire_EnemyChar_C_OnNotifyBegin_9B7D5B514CCF1E75C4508AA0DA33E333_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.OnInterrupted_9B7D5B514CCF1E75C4508AA0DA33E333
struct AVampire_EnemyChar_C_OnInterrupted_9B7D5B514CCF1E75C4508AA0DA33E333_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.OnBlendOut_9B7D5B514CCF1E75C4508AA0DA33E333
struct AVampire_EnemyChar_C_OnBlendOut_9B7D5B514CCF1E75C4508AA0DA33E333_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.OnCompleted_9B7D5B514CCF1E75C4508AA0DA33E333
struct AVampire_EnemyChar_C_OnCompleted_9B7D5B514CCF1E75C4508AA0DA33E333_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.OnNotifyEnd_D7C10B414595F6965EC531B33FB9DB8A
struct AVampire_EnemyChar_C_OnNotifyEnd_D7C10B414595F6965EC531B33FB9DB8A_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.OnNotifyBegin_D7C10B414595F6965EC531B33FB9DB8A
struct AVampire_EnemyChar_C_OnNotifyBegin_D7C10B414595F6965EC531B33FB9DB8A_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.OnInterrupted_D7C10B414595F6965EC531B33FB9DB8A
struct AVampire_EnemyChar_C_OnInterrupted_D7C10B414595F6965EC531B33FB9DB8A_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.OnBlendOut_D7C10B414595F6965EC531B33FB9DB8A
struct AVampire_EnemyChar_C_OnBlendOut_D7C10B414595F6965EC531B33FB9DB8A_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.OnCompleted_D7C10B414595F6965EC531B33FB9DB8A
struct AVampire_EnemyChar_C_OnCompleted_D7C10B414595F6965EC531B33FB9DB8A_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.OnNotifyEnd_723BB1BA4387F9AFB2C560B0BD6C0206
struct AVampire_EnemyChar_C_OnNotifyEnd_723BB1BA4387F9AFB2C560B0BD6C0206_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.OnNotifyBegin_723BB1BA4387F9AFB2C560B0BD6C0206
struct AVampire_EnemyChar_C_OnNotifyBegin_723BB1BA4387F9AFB2C560B0BD6C0206_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.OnInterrupted_723BB1BA4387F9AFB2C560B0BD6C0206
struct AVampire_EnemyChar_C_OnInterrupted_723BB1BA4387F9AFB2C560B0BD6C0206_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.OnBlendOut_723BB1BA4387F9AFB2C560B0BD6C0206
struct AVampire_EnemyChar_C_OnBlendOut_723BB1BA4387F9AFB2C560B0BD6C0206_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.OnCompleted_723BB1BA4387F9AFB2C560B0BD6C0206
struct AVampire_EnemyChar_C_OnCompleted_723BB1BA4387F9AFB2C560B0BD6C0206_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.OnNotifyEnd_ED3D73DC4E6915B9D5AE228D71AB1EB3
struct AVampire_EnemyChar_C_OnNotifyEnd_ED3D73DC4E6915B9D5AE228D71AB1EB3_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.OnNotifyBegin_ED3D73DC4E6915B9D5AE228D71AB1EB3
struct AVampire_EnemyChar_C_OnNotifyBegin_ED3D73DC4E6915B9D5AE228D71AB1EB3_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.OnInterrupted_ED3D73DC4E6915B9D5AE228D71AB1EB3
struct AVampire_EnemyChar_C_OnInterrupted_ED3D73DC4E6915B9D5AE228D71AB1EB3_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.OnBlendOut_ED3D73DC4E6915B9D5AE228D71AB1EB3
struct AVampire_EnemyChar_C_OnBlendOut_ED3D73DC4E6915B9D5AE228D71AB1EB3_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.OnCompleted_ED3D73DC4E6915B9D5AE228D71AB1EB3
struct AVampire_EnemyChar_C_OnCompleted_ED3D73DC4E6915B9D5AE228D71AB1EB3_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.OnNotifyEnd_79A85CD74E8AE87AE43E2D913FC9248E
struct AVampire_EnemyChar_C_OnNotifyEnd_79A85CD74E8AE87AE43E2D913FC9248E_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.OnNotifyBegin_79A85CD74E8AE87AE43E2D913FC9248E
struct AVampire_EnemyChar_C_OnNotifyBegin_79A85CD74E8AE87AE43E2D913FC9248E_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.OnInterrupted_79A85CD74E8AE87AE43E2D913FC9248E
struct AVampire_EnemyChar_C_OnInterrupted_79A85CD74E8AE87AE43E2D913FC9248E_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.OnBlendOut_79A85CD74E8AE87AE43E2D913FC9248E
struct AVampire_EnemyChar_C_OnBlendOut_79A85CD74E8AE87AE43E2D913FC9248E_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.OnCompleted_79A85CD74E8AE87AE43E2D913FC9248E
struct AVampire_EnemyChar_C_OnCompleted_79A85CD74E8AE87AE43E2D913FC9248E_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.OnNotifyEnd_059261F943DA2CEB149FE6ACDA96A001
struct AVampire_EnemyChar_C_OnNotifyEnd_059261F943DA2CEB149FE6ACDA96A001_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.OnNotifyBegin_059261F943DA2CEB149FE6ACDA96A001
struct AVampire_EnemyChar_C_OnNotifyBegin_059261F943DA2CEB149FE6ACDA96A001_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.OnInterrupted_059261F943DA2CEB149FE6ACDA96A001
struct AVampire_EnemyChar_C_OnInterrupted_059261F943DA2CEB149FE6ACDA96A001_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.OnBlendOut_059261F943DA2CEB149FE6ACDA96A001
struct AVampire_EnemyChar_C_OnBlendOut_059261F943DA2CEB149FE6ACDA96A001_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.OnCompleted_059261F943DA2CEB149FE6ACDA96A001
struct AVampire_EnemyChar_C_OnCompleted_059261F943DA2CEB149FE6ACDA96A001_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.OnNotifyEnd_8B3353A349C574249A75EBAE87312816
struct AVampire_EnemyChar_C_OnNotifyEnd_8B3353A349C574249A75EBAE87312816_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.OnNotifyBegin_8B3353A349C574249A75EBAE87312816
struct AVampire_EnemyChar_C_OnNotifyBegin_8B3353A349C574249A75EBAE87312816_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.OnInterrupted_8B3353A349C574249A75EBAE87312816
struct AVampire_EnemyChar_C_OnInterrupted_8B3353A349C574249A75EBAE87312816_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.OnBlendOut_8B3353A349C574249A75EBAE87312816
struct AVampire_EnemyChar_C_OnBlendOut_8B3353A349C574249A75EBAE87312816_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.OnCompleted_8B3353A349C574249A75EBAE87312816
struct AVampire_EnemyChar_C_OnCompleted_8B3353A349C574249A75EBAE87312816_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.OnNotifyEnd_8E47280F4D14631D83E343A3E0F7BA31
struct AVampire_EnemyChar_C_OnNotifyEnd_8E47280F4D14631D83E343A3E0F7BA31_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.OnNotifyBegin_8E47280F4D14631D83E343A3E0F7BA31
struct AVampire_EnemyChar_C_OnNotifyBegin_8E47280F4D14631D83E343A3E0F7BA31_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.OnInterrupted_8E47280F4D14631D83E343A3E0F7BA31
struct AVampire_EnemyChar_C_OnInterrupted_8E47280F4D14631D83E343A3E0F7BA31_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.OnBlendOut_8E47280F4D14631D83E343A3E0F7BA31
struct AVampire_EnemyChar_C_OnBlendOut_8E47280F4D14631D83E343A3E0F7BA31_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.OnCompleted_8E47280F4D14631D83E343A3E0F7BA31
struct AVampire_EnemyChar_C_OnCompleted_8E47280F4D14631D83E343A3E0F7BA31_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.OnNotifyEnd_E697F01B4505FD986EC1C2A7A5148837
struct AVampire_EnemyChar_C_OnNotifyEnd_E697F01B4505FD986EC1C2A7A5148837_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.OnNotifyBegin_E697F01B4505FD986EC1C2A7A5148837
struct AVampire_EnemyChar_C_OnNotifyBegin_E697F01B4505FD986EC1C2A7A5148837_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.OnInterrupted_E697F01B4505FD986EC1C2A7A5148837
struct AVampire_EnemyChar_C_OnInterrupted_E697F01B4505FD986EC1C2A7A5148837_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.OnBlendOut_E697F01B4505FD986EC1C2A7A5148837
struct AVampire_EnemyChar_C_OnBlendOut_E697F01B4505FD986EC1C2A7A5148837_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.OnCompleted_E697F01B4505FD986EC1C2A7A5148837
struct AVampire_EnemyChar_C_OnCompleted_E697F01B4505FD986EC1C2A7A5148837_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.OnNotifyEnd_FBC673E540EC9960DEFC98B11A8C4EFE
struct AVampire_EnemyChar_C_OnNotifyEnd_FBC673E540EC9960DEFC98B11A8C4EFE_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.OnNotifyBegin_FBC673E540EC9960DEFC98B11A8C4EFE
struct AVampire_EnemyChar_C_OnNotifyBegin_FBC673E540EC9960DEFC98B11A8C4EFE_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.OnInterrupted_FBC673E540EC9960DEFC98B11A8C4EFE
struct AVampire_EnemyChar_C_OnInterrupted_FBC673E540EC9960DEFC98B11A8C4EFE_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.OnBlendOut_FBC673E540EC9960DEFC98B11A8C4EFE
struct AVampire_EnemyChar_C_OnBlendOut_FBC673E540EC9960DEFC98B11A8C4EFE_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.OnCompleted_FBC673E540EC9960DEFC98B11A8C4EFE
struct AVampire_EnemyChar_C_OnCompleted_FBC673E540EC9960DEFC98B11A8C4EFE_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.OnNotifyEnd_44A921EB49406F5879452AB2BE8FD4D0
struct AVampire_EnemyChar_C_OnNotifyEnd_44A921EB49406F5879452AB2BE8FD4D0_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.OnNotifyBegin_44A921EB49406F5879452AB2BE8FD4D0
struct AVampire_EnemyChar_C_OnNotifyBegin_44A921EB49406F5879452AB2BE8FD4D0_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.OnInterrupted_44A921EB49406F5879452AB2BE8FD4D0
struct AVampire_EnemyChar_C_OnInterrupted_44A921EB49406F5879452AB2BE8FD4D0_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.OnBlendOut_44A921EB49406F5879452AB2BE8FD4D0
struct AVampire_EnemyChar_C_OnBlendOut_44A921EB49406F5879452AB2BE8FD4D0_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.OnCompleted_44A921EB49406F5879452AB2BE8FD4D0
struct AVampire_EnemyChar_C_OnCompleted_44A921EB49406F5879452AB2BE8FD4D0_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.OnNotifyEnd_5E7E3C934302FC108C6FEF950A0CB680
struct AVampire_EnemyChar_C_OnNotifyEnd_5E7E3C934302FC108C6FEF950A0CB680_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.OnNotifyBegin_5E7E3C934302FC108C6FEF950A0CB680
struct AVampire_EnemyChar_C_OnNotifyBegin_5E7E3C934302FC108C6FEF950A0CB680_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.OnInterrupted_5E7E3C934302FC108C6FEF950A0CB680
struct AVampire_EnemyChar_C_OnInterrupted_5E7E3C934302FC108C6FEF950A0CB680_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.OnBlendOut_5E7E3C934302FC108C6FEF950A0CB680
struct AVampire_EnemyChar_C_OnBlendOut_5E7E3C934302FC108C6FEF950A0CB680_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.OnCompleted_5E7E3C934302FC108C6FEF950A0CB680
struct AVampire_EnemyChar_C_OnCompleted_5E7E3C934302FC108C6FEF950A0CB680_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.OnNotifyEnd_666AA31B4E7D11D77FADCA8FFA31778C
struct AVampire_EnemyChar_C_OnNotifyEnd_666AA31B4E7D11D77FADCA8FFA31778C_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.OnNotifyBegin_666AA31B4E7D11D77FADCA8FFA31778C
struct AVampire_EnemyChar_C_OnNotifyBegin_666AA31B4E7D11D77FADCA8FFA31778C_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.OnInterrupted_666AA31B4E7D11D77FADCA8FFA31778C
struct AVampire_EnemyChar_C_OnInterrupted_666AA31B4E7D11D77FADCA8FFA31778C_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.OnBlendOut_666AA31B4E7D11D77FADCA8FFA31778C
struct AVampire_EnemyChar_C_OnBlendOut_666AA31B4E7D11D77FADCA8FFA31778C_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.OnCompleted_666AA31B4E7D11D77FADCA8FFA31778C
struct AVampire_EnemyChar_C_OnCompleted_666AA31B4E7D11D77FADCA8FFA31778C_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.OnNotifyEnd_626747B049CAE088A1A7859209918E00
struct AVampire_EnemyChar_C_OnNotifyEnd_626747B049CAE088A1A7859209918E00_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.OnNotifyBegin_626747B049CAE088A1A7859209918E00
struct AVampire_EnemyChar_C_OnNotifyBegin_626747B049CAE088A1A7859209918E00_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.OnInterrupted_626747B049CAE088A1A7859209918E00
struct AVampire_EnemyChar_C_OnInterrupted_626747B049CAE088A1A7859209918E00_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.OnBlendOut_626747B049CAE088A1A7859209918E00
struct AVampire_EnemyChar_C_OnBlendOut_626747B049CAE088A1A7859209918E00_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.OnCompleted_626747B049CAE088A1A7859209918E00
struct AVampire_EnemyChar_C_OnCompleted_626747B049CAE088A1A7859209918E00_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.SpawnDualSenseAudio
struct AVampire_EnemyChar_C_SpawnDualSenseAudio_Params
{
public:
	struct FVector                               Location;                                          // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_ControllerAudio_Type         SoundType;                                         // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_289D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            Sound;                                             // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SoundVolume;                                       // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_ControllerAudio_Type         VibrationType;                                     // 0x1C(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_28AD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            Vibration;                                         // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        VibrationVolume;                                   // 0x28(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AttachToComponent;                                 // 0x2C(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         UseSocketLocation;                                 // 0x2D(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_28BC[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  SocketName;                                        // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.EnemyDeath
struct AVampire_EnemyChar_C_EnemyDeath_Params
{
public:
	class AActor*                                Killer;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bShouldPlayDeathAnim;                              // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x14 (0x14 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.SpawnDualSenseAudio_Full2D
struct AVampire_EnemyChar_C_SpawnDualSenseAudio_Full2D_Params
{
public:
	class USoundBase*                            Sound;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Volume;                                            // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Pitch;                                             // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StartTime;                                         // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.EQSLocationFound
struct AVampire_EnemyChar_C_EQSLocationFound_Params
{
public:
	class UEnvQueryInstanceBlueprintWrapper*     QueryInstance;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEnvQueryStatus                   QueryStatus;                                       // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.ForceHeavyStaggerDamage
struct AVampire_EnemyChar_C_ForceHeavyStaggerDamage_Params
{
public:
	struct FVector                               DirectionToSource;                                 // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.Set Running Anims
struct AVampire_EnemyChar_C_Set_Running_Anims_Params
{
public:
	bool                                         Should_be_Running;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.PlayAttackMontage
struct AVampire_EnemyChar_C_PlayAttackMontage_Params
{
public:
	class UAnimMontage*                          MontageToPlay;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PlayRate;                                          // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StartingPosition;                                  // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  StartingSection;                                   // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.StoneStun
struct AVampire_EnemyChar_C_StoneStun_Params
{
public:
	float                                        Duration;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DelayBeforeStart;                                  // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.HitPlayer
struct AVampire_EnemyChar_C_HitPlayer_Params
{
public:
	class AActor*                                Player;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x88 (0x88 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.OnLanded
struct AVampire_EnemyChar_C_OnLanded_Params
{
public:
	struct FHitResult                            Hit;                                               // 0x0(0x88)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// 0x8 (0x8 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.PounceAtEnemy
struct AVampire_EnemyChar_C_PounceAtEnemy_Params
{
public:
	class AActor*                                Target;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.ReceiveTick
struct AVampire_EnemyChar_C_ReceiveTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.Regenrate Health
struct AVampire_EnemyChar_C_Regenrate_Health_Params
{
public:
	float                                        Health_to_Restore;                                 // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA8 (0xA8 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.BndEvt__RepositionSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct AVampire_EnemyChar_C_BndEvt__RepositionSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
public:
	class UPrimitiveComponent*                   OverlappedComponent;                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                OtherActor;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   OtherComp;                                         // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        OtherBodyIndex;                                    // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bFromSweep;                                        // 0x1C(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2BBD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            SweepResult;                                       // 0x20(0x88)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// 0x4 (0x4 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.AI_SetWaitAfterAttack
struct AVampire_EnemyChar_C_AI_SetWaitAfterAttack_Params
{
public:
	float                                        FloatValue;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.AI_SetDivingCustomAttack
struct AVampire_EnemyChar_C_AI_SetDivingCustomAttack_Params
{
public:
	bool                                         BoolValue;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.EnableFrozenRiverLightRig
struct AVampire_EnemyChar_C_EnableFrozenRiverLightRig_Params
{
public:
	bool                                         Enable_;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x80 (0x80 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.InitAfterSpawn
struct AVampire_EnemyChar_C_InitAfterSpawn_Params
{
public:
	class AAdvancedEnemySpawner_C*               SpawnerRef;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  UniqueId;                                          // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ELevelPhases                      PhaseToSpawn;                                      // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bPermanentlyDeadOnceKilled_;                       // 0x11(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2DC5[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APatrolPoint_C*                        PatrolPointA;                                      // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bShouldWander_;                                    // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2DD5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APatrolPoint_C*                        PatrolPointB;                                      // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AggroRadius;                                       // 0x30(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2DE6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_TriggerOnEnemyAggro_C*             TriggerToActivateOnAggro;                          // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShouldPatrol_;                                     // 0x40(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2DEE[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            SpawnTransform;                                    // 0x50(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
};

// 0x1739 (0x1739 - 0x0)
// Function Vampire_EnemyChar.Vampire_EnemyChar_C.ExecuteUbergraph_Vampire_EnemyChar
struct AVampire_EnemyChar_C_ExecuteUbergraph_Vampire_EnemyChar_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_NotifyName_48;                  // 0x4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xC(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_NotifyName_47;                  // 0x1C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x24(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_NotifyName_46;                  // 0x34(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x3C(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_NotifyName_45;                  // 0x4C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x54(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  Temp_name_Variable;                                // 0x64(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x6C(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_NotifyName_44;                  // 0x7C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_NotifyName_43;                  // 0x84(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x8C(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_NotifyName_42;                  // 0x9C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0xA4(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_NotifyName_41;                  // 0xB4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_7;            // 0xBC(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_NotifyName_40;                  // 0xCC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_8;            // 0xD4(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  Temp_name_Variable_1;                              // 0xE4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_357D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        Temp_object_Variable;                              // 0xF0(0x10)(ConstParm, ReferenceParm, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_357F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x104(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_9;            // 0x108(0x10)(ZeroConstructor, NoDestructor)
	TArray<class AActor*>                        Temp_object_Variable_1;                            // 0x118(0x10)(ConstParm, ReferenceParm, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x128(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3587[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_CustomEvent_NotifyName_39;                  // 0x134(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_10;           // 0x13C(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_NotifyName_38;                  // 0x14C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_11;           // 0x154(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_NotifyName_37;                  // 0x164(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_12;           // 0x16C(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_NotifyName_36;                  // 0x17C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_13;           // 0x184(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_NotifyName_35;                  // 0x194(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_14;           // 0x19C(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  Temp_name_Variable_2;                              // 0x1AC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_15;           // 0x1B4(0x10)(ZeroConstructor, NoDestructor)
	bool                                         K2Node_SwitchName_CmpSuccess;                      // 0x1C4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x1C5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35A9[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_CustomEvent_NotifyName_34;                  // 0x1C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_NotifyName_33;                  // 0x1D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_16;           // 0x1D8(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_NotifyName_32;                  // 0x1E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_17;           // 0x1F0(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_NotifyName_31;                  // 0x200(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_18;           // 0x208(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_NotifyName_30;                  // 0x218(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_19;           // 0x220(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  Temp_name_Variable_3;                              // 0x230(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x238(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchName_CmpSuccess_1;                    // 0x239(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35BA[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Temp_name_Variable_4;                              // 0x23C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_5;                              // 0x244(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetVelocity_ReturnValue;                  // 0x24C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetSocketLocation_ReturnValue;            // 0x258(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_20;           // 0x264(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_NotifyName_29;                  // 0x274(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_NotifyName_28;                  // 0x27C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_21;           // 0x284(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_NotifyName_27;                  // 0x294(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_22;           // 0x29C(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_NotifyName_26;                  // 0x2AC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_23;           // 0x2B4(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_NotifyName_25;                  // 0x2C4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_24;           // 0x2CC(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  Temp_name_Variable_6;                              // 0x2DC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_25;           // 0x2E4(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0x2F4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35D3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_CustomEvent_NotifyName_24;                  // 0x2F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_NotifyName_23;                  // 0x300(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_26;           // 0x308(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_NotifyName_22;                  // 0x318(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_27;           // 0x320(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_NotifyName_21;                  // 0x330(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_28;           // 0x338(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_NotifyName_20;                  // 0x348(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_29;           // 0x350(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  Temp_name_Variable_7;                              // 0x360(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_30;           // 0x368(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_NotifyName_19;                  // 0x378(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_NotifyName_18;                  // 0x380(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_31;           // 0x388(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_NotifyName_17;                  // 0x398(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_32;           // 0x3A0(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_NotifyName_16;                  // 0x3B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_33;           // 0x3B8(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_NotifyName_15;                  // 0x3C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_34;           // 0x3D0(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  Temp_name_Variable_8;                              // 0x3E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_35;           // 0x3E8(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_NotifyName_14;                  // 0x3F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_NotifyName_13;                  // 0x400(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_36;           // 0x408(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_NotifyName_12;                  // 0x418(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_37;           // 0x420(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_NotifyName_11;                  // 0x430(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_38;           // 0x438(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_NotifyName_10;                  // 0x448(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_39;           // 0x450(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  Temp_name_Variable_9;                              // 0x460(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_FloatToString_ReturnValue;           // 0x468(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x478(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x488(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35FA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AVampireSpawner_Cave_C*                K2Node_DynamicCast_AsVampire_Spawner_Cave;         // 0x490(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x498(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_360A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_40;           // 0x49C(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_41;           // 0x4AC(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_42;           // 0x4BC(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_NotifyName_9;                   // 0x4CC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_NotifyName_8;                   // 0x4D4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_43;           // 0x4DC(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_NotifyName_7;                   // 0x4EC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_44;           // 0x4F4(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_NotifyName_6;                   // 0x504(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_45;           // 0x50C(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_NotifyName_5;                   // 0x51C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_46;           // 0x524(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  Temp_name_Variable_10;                             // 0x534(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_47;           // 0x53C(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_NotifyName_4;                   // 0x54C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_NotifyName_3;                   // 0x554(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_48;           // 0x55C(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_NotifyName_2;                   // 0x56C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_49;           // 0x574(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_NotifyName_1;                   // 0x584(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_50;           // 0x58C(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_NotifyName;                     // 0x59C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_51;           // 0x5A4(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  Temp_name_Variable_11;                             // 0x5B4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_NotifyName_60;                  // 0x5BC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchName_CmpSuccess_2;                    // 0x5C4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_361B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               K2Node_Event_Location;                             // 0x5C8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_ControllerAudio_Type         K2Node_Event_SoundType;                            // 0x5D4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_361F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            K2Node_Event_Sound_1;                              // 0x5D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_SoundVolume;                          // 0x5E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_ControllerAudio_Type         K2Node_Event_VibrationType;                        // 0x5E4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3623[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            K2Node_Event_Vibration;                            // 0x5E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_VibrationVolume;                      // 0x5F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_AttachToComponent;                    // 0x5F4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_UseSocketLocation;                    // 0x5F5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3628[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_Event_SocketName;                           // 0x5F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_52;           // 0x600(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_NotifyName_49;                  // 0x610(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x618(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3629[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_Event_Killer;                               // 0x620(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bShouldPlayDeathAnim;                 // 0x628(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x629(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_362C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x630(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x638(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x639(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_362E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_MakeLiteralName_ReturnValue;              // 0x63C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_363C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBlackboardComponent*                  CallFunc_GetBlackboard_ReturnValue;                // 0x648(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetValueAsInt_ReturnValue;                // 0x650(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x654(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_NotifyName_61;                  // 0x658(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_RandomBool_ReturnValue;                   // 0x660(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3646[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            K2Node_Event_Sound;                                // 0x668(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_Volume;                               // 0x670(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_Pitch;                                // 0x674(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_StartTime;                            // 0x678(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x67C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x680(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_K2_GetActorRotation_ReturnValue;          // 0x684(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_53;           // 0x690(0x10)(ZeroConstructor, NoDestructor)
	float                                        CallFunc_BreakRotator_Roll;                        // 0x6A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch;                       // 0x6A4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw;                         // 0x6A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3655[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPlayMontageCallbackProxy*             CallFunc_CreateProxyObjectForPlayMontage_ReturnValue; // 0x6B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x6B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_365A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_GetPlayerPawn_ReturnValue;                // 0x6C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_ApplyDamage_ReturnValue;                  // 0x6C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x6CC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<enum class EObjectTypeQuery>          K2Node_MakeArray_Array;                            // 0x6D8(0x10)(ConstParm, ReferenceParm, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x6E8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_NotifyName_62;                  // 0x6F4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_54;           // 0x6FC(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  Temp_name_Variable_12;                             // 0x70C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_55;           // 0x714(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_3663[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UEnvQueryInstanceBlueprintWrapper*     CallFunc_RunEQSQuery_ReturnValue;                  // 0x728(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEnvQueryInstanceBlueprintWrapper*     K2Node_CustomEvent_QueryInstance;                  // 0x730(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEnvQueryStatus                   K2Node_CustomEvent_QueryStatus;                    // 0x738(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3667[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x73C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                       CallFunc_GetQueryResultsAsLocations_ResultLocations; // 0x748(0x10)(ReferenceParm, HasGetValueTypeHash)
	bool                                         CallFunc_GetQueryResultsAsLocations_ReturnValue;   // 0x758(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_366E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_Array_Get_Item;                           // 0x75C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_GetPlayerPawn_ReturnValue_1;              // 0x768(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_1;           // 0x770(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0x77C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_FindLookAtRotation_ReturnValue;           // 0x788(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        CallFunc_BreakRotator_Roll_1;                      // 0x794(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch_1;                     // 0x798(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw_1;                       // 0x79C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue;                  // 0x7A0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_K2_SetActorRotation_ReturnValue;          // 0x7AC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_367F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_3;        // 0x7B0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3681[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_GetPlayerPawn_ReturnValue_2;              // 0x7C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetActorForwardVector_ReturnValue;        // 0x7C8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x7D4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_4;        // 0x7E0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_2;           // 0x7EC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_NotifyName_63;                  // 0x7F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDHCharacterMovementComponent*         K2Node_DynamicCast_AsDHCharacter_Movement_Component; // 0x800(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x808(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3690[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDHCharacterMovementComponent*         K2Node_DynamicCast_AsDHCharacter_Movement_Component_1; // 0x810(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x818(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3695[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x81C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_MakeLiteralName_ReturnValue_1;            // 0x820(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsPlayingParryRiposteReactOrDead__ReturnValue; // 0x828(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_369F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_56;           // 0x82C(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_36A4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPlayMontageCallbackProxy*             CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1; // 0x840(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x848(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36AA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               K2Node_Event_DirectionToSource;                    // 0x84C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPlayMontageCallbackProxy*             CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2; // 0x858(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPlayMontageCallbackProxy*             CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3; // 0x860(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_5;                    // 0x868(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_6;                    // 0x869(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36BA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           CallFunc_GetController_ReturnValue_1;              // 0x870(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_UpdateCurrentMontagePlayLength_PlayLengthAtDefaultPlaybackSpeed; // 0x878(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_7;                    // 0x87C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36C6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBlackboardComponent*                  CallFunc_GetBlackboard_ReturnValue_1;              // 0x880(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_NotifyName_64;                  // 0x888(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_NotifyName_50;                  // 0x890(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_57;           // 0x898(0x10)(ZeroConstructor, NoDestructor)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_5;        // 0x8A8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36EB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AZero_Base_C*                          CallFunc_GetCharacterAs0_Base_As0_Base;            // 0x8B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_6;        // 0x8C0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x8CC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_ProjectVectorOnToPlane_ReturnValue;       // 0x8D8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x8E4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class AZero_Base_C*                          CallFunc_GetCharacterAs0_Base_As0_Base_1;          // 0x8F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_SetActorRotation_ReturnValue_1;        // 0x8F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36F3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_GetActorForwardVector_ReturnValue_1;      // 0x8FC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetActorUpVector_ReturnValue;             // 0x908(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue_1;       // 0x914(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue_2;       // 0x920(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_3;           // 0x92C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_4;           // 0x938(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36FA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPlayMontageCallbackProxy*             CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_4; // 0x948(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_8;                    // 0x950(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CheckForStartingKickAttack_StartWithKickAttack_; // 0x951(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CheckForStartingKickAttack_StartWithKickAttack__1; // 0x952(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CheckForStartingKickAttack_StartWithKickAttack__2; // 0x953(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FName                                  Temp_name_Variable_13;                             // 0x954(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_2;        // 0x95C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3704[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetKickCooldown_ReturnValue;              // 0x960(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x964(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3707[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x968(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsKickOnCooldown__ReturnValue;            // 0x96C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_370D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AZero_Base_C*                          CallFunc_GetCharacterAs0_Base_As0_Base_2;          // 0x970(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x978(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3713[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_CheckForNearbyVampires_NumNeabyVamp;      // 0x97C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x980(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3716[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x984(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x988(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_371B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_RandomIntegerInRange_ReturnValue;         // 0x98C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Select_Default;                             // 0x990(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x994(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x995(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_Should_be_Running;              // 0x996(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3721[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimInstance*                         CallFunc_GetAnimInstance_ReturnValue;              // 0x998(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_True_if_break_was_hit_Variable_1;        // 0x9A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3726[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UVamp_Skin_Skeleton_AnimBlueprint_C*   K2Node_DynamicCast_AsVamp_Skin_Skeleton_Anim_Blueprint; // 0x9A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x9B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x9B1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3729[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EObjectTypeQuery>          K2Node_MakeArray_Array_1;                          // 0x9B8(0x10)(ConstParm, ReferenceParm, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetSocketLocation_ReturnValue_1;          // 0x9C8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_7;        // 0x9D4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_5;           // 0x9E0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_SphereTraceSingleForObjects_OutHit;       // 0x9EC(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_SphereTraceSingleForObjects_ReturnValue;  // 0xA74(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BreakHitResult_bBlockingHit;              // 0xA75(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BreakHitResult_bInitialOverlap;           // 0xA76(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3735[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_BreakHitResult_Time;                      // 0xA78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakHitResult_Distance;                  // 0xA7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_Location;                  // 0xA80(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactPoint;               // 0xA8C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_Normal;                    // 0xA98(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactNormal;              // 0xAA4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                     CallFunc_BreakHitResult_PhysMat;                   // 0xAB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BreakHitResult_HitActor;                  // 0xAB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   CallFunc_BreakHitResult_HitComponent;              // 0xAC0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_BreakHitResult_HitBoneName;               // 0xAC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_HitItem;                   // 0xAD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_FaceIndex;                 // 0xAD4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_TraceStart;                // 0xAD8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_TraceEnd;                  // 0xAE4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_AI_GetPairedAttackInstanceSynced_ReturnValue; // 0xAF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ShouldKickAttack_Kick_;                   // 0xAF1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3750[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AZero_Base_C*                          CallFunc_ShouldKickAttack_As0_Base;                // 0xAF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_RandomIntegerInRange_ReturnValue_1;       // 0xB00(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchInteger_CmpSuccess_1;                 // 0xB04(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3755[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_CustomEvent_NotifyName_65;                  // 0xB08(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_58;           // 0xB10(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_NotifyName_51;                  // 0xB20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_GetPlayerPawn_ReturnValue_3;              // 0xB28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_59;           // 0xB30(0x10)(ZeroConstructor, NoDestructor)
	float                                        CallFunc_ApplyDamage_ReturnValue_1;                // 0xB40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3761[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_GetPlayerPawn_ReturnValue_4;              // 0xB48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<enum class EObjectTypeQuery>          K2Node_MakeArray_Array_2;                          // 0xB50(0x10)(ConstParm, ReferenceParm, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_60;           // 0xB60(0x10)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue_1;        // 0xB70(0x8)(NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_NotifyName_52;                  // 0xB78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetForwardVector_ReturnValue;             // 0xB80(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GreaterGreater_VectorRotator_ReturnValue; // 0xB8C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetSocketLocation_ReturnValue_2;          // 0xB98(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue_3;       // 0xBA4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_GetPlayerPawn_ReturnValue_5;              // 0xBB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_6;           // 0xBB8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_377E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AZero_Base_C*                          K2Node_DynamicCast_As0_Base;                       // 0xBC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0xBD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_377F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FHitResult>                    CallFunc_SphereTraceMultiForObjects_OutHits;       // 0xBD8(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_SphereTraceMultiForObjects_ReturnValue;   // 0xBE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3783[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_GetSocketLocation_ReturnValue_3;          // 0xBEC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_Array_Get_Item_1;                         // 0xBF8(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xC80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BreakHitResult_bBlockingHit_1;            // 0xC84(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BreakHitResult_bInitialOverlap_1;         // 0xC85(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3788[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_BreakHitResult_Time_1;                    // 0xC88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakHitResult_Distance_1;                // 0xC8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_Location_1;                // 0xC90(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactPoint_1;             // 0xC9C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_Normal_1;                  // 0xCA8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactNormal_1;            // 0xCB4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                     CallFunc_BreakHitResult_PhysMat_1;                 // 0xCC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BreakHitResult_HitActor_1;                // 0xCC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   CallFunc_BreakHitResult_HitComponent_1;            // 0xCD0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_BreakHitResult_HitBoneName_1;             // 0xCD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_HitItem_1;                 // 0xCE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_FaceIndex_1;               // 0xCE4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_TraceStart_1;              // 0xCE8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_TraceEnd_1;                // 0xCF4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0xD00(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37BB[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_GetSocketTransform_ReturnValue;           // 0xD10(0x30)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0xD40(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0xD4C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0xD58(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_61;           // 0xD64(0x10)(ZeroConstructor, NoDestructor)
	struct FVector                               CallFunc_CalcRangeAttackVelocity_ReturnValue;      // 0xD74(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue_4;       // 0xD80(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_Conv_VectorToRotator_ReturnValue_1;       // 0xD8C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37C5[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0xDA0(0x30)(IsPlainOldData, NoDestructor)
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0xDD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABloodChunkProjectile_C*               CallFunc_FinishSpawningActor_ReturnValue;          // 0xDD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                            CallFunc_GetPlayerCharacter_ReturnValue;           // 0xDE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_9;                    // 0xDE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37CA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          K2Node_Event_MontageToPlay;                        // 0xDF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_PlayRate;                             // 0xDF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_StartingPosition;                     // 0xDFC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_Event_StartingSection;                      // 0xE00(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_NotifyName_66;                  // 0xE08(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          K2Node_Select_Default_1;                           // 0xE10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPlayMontageCallbackProxy*             CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_5; // 0xE18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0xE20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_10;                   // 0xE21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37D4[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0xE24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0xE28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue_2;        // 0xE2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue_3;        // 0xE30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue_4;        // 0xE34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue_5;        // 0xE38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue_6;        // 0xE3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue_7;        // 0xE40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_62;           // 0xE44(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_NotifyName_53;                  // 0xE54(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37E1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimInstance*                         CallFunc_GetAnimInstance_ReturnValue_1;            // 0xE60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USword_AnimBP2v3_C*                    K2Node_DynamicCast_AsSword_Anim_BP2v_3;            // 0xE68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_5;                     // 0xE70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37E7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPlayMontageCallbackProxy*             CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_6; // 0xE78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_11;                   // 0xE80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37EA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimInstance*                         CallFunc_GetAnimInstance_ReturnValue_2;            // 0xE88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USword_AnimBP2v3_C*                    K2Node_DynamicCast_AsSword_Anim_BP2v_3_1;          // 0xE90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_6;                     // 0xE98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37EF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0xE9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimInstance*                         CallFunc_GetAnimInstance_ReturnValue_3;            // 0xEA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xEA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37F5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UVamp_Skin_Skeleton_AnimBlueprint_C*   K2Node_DynamicCast_AsVamp_Skin_Skeleton_Anim_Blueprint_1; // 0xEB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_7;                     // 0xEB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0xEB9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37FB[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0xEBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue_8;        // 0xEC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue_9;        // 0xEC4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue_10;       // 0xEC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue_11;       // 0xECC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_63;           // 0xED0(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_64;           // 0xEE0(0x10)(ZeroConstructor, NoDestructor)
	float                                        K2Node_Event_Duration;                             // 0xEF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_DelayBeforeStart;                     // 0xEF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_NotifyName_54;                  // 0xEF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0xF00(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_380B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_CustomEvent_NotifyName_67;                  // 0xF04(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_65;           // 0xF0C(0x10)(ZeroConstructor, NoDestructor)
	bool                                         Temp_bool_Variable_3;                              // 0xF1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_3;                // 0xF1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3810[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_GetTransform_ReturnValue;                 // 0xF20(0x30)(ConstParm, IsPlainOldData, NoDestructor)
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1; // 0xF50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_66;           // 0xF58(0x10)(ZeroConstructor, NoDestructor)
	class ARedFlashDamage_Effect_C*              CallFunc_FinishSpawningActor_ReturnValue_1;        // 0xF68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_GetTransform_ReturnValue_1;               // 0xF70(0x30)(ConstParm, IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_GetTransform_ReturnValue_2;               // 0xFA0(0x30)(ConstParm, IsPlainOldData, NoDestructor)
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2; // 0xFD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3; // 0xFD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ARedFlashDamage_Effect_C*              CallFunc_FinishSpawningActor_ReturnValue_2;        // 0xFE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ARedFlashDamage_Effect_C*              CallFunc_FinishSpawningActor_ReturnValue_3;        // 0xFE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_ApplyDamage_ReturnValue_2;                // 0xFF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_ApplyDamage_ReturnValue_3;                // 0xFF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0xFF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_ApplyDamage_ReturnValue_4;                // 0x1000(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3826[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0x1008(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_2;        // 0x1010(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                           CallFunc_GetController_ReturnValue_2;              // 0x1018(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x1020(0x30)(IsPlainOldData, NoDestructor)
	TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface;        // 0x1050(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_8;                     // 0x1060(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3832[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_4; // 0x1068(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACamera_VampireBite_C*                 CallFunc_FinishSpawningActor_ReturnValue_4;        // 0x1070(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_12;                   // 0x1078(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3838[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_CustomEvent_NotifyName_68;                  // 0x107C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_TraceForPlayer_bBlockingHit;              // 0x1084(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_383E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_TraceForPlayer_HitActor;                  // 0x1088(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AZero_Base_C*                          K2Node_DynamicCast_As0_Base_1;                     // 0x1090(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_9;                     // 0x1098(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x1099(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x109A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_2;                  // 0x109B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FName                                  K2Node_Select_Default_2;                           // 0x109C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_3;                  // 0x10A4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3847[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Temp_name_Variable_14;                             // 0x10A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_4;                  // 0x10B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_5;                  // 0x10B1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_6;                  // 0x10B2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_384D[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_67;           // 0x10B4(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_384F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_CustomEvent_Player;                         // 0x10C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AZero_Base_C*                          K2Node_DynamicCast_As0_Base_2;                     // 0x10D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_10;                    // 0x10D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3855[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPlayMontageCallbackProxy*             CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_7; // 0x10E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_13;                   // 0x10E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_385A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_CustomEvent_NotifyName_69;                  // 0x10EC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_385E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPlayMontageCallbackProxy*             CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_8; // 0x10F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_14;                   // 0x1100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3863[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            K2Node_Event_Hit;                                  // 0x1104(0x88)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	uint8                                        Pad_3867[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPlayMontageCallbackProxy*             CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_9; // 0x1190(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_68;           // 0x1198(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_15;                   // 0x11A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_386C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPlayMontageCallbackProxy*             CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_10; // 0x11B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_CustomEvent_Target;                         // 0x11B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AZero_Base_C*                          K2Node_DynamicCast_As0_Base_3;                     // 0x11C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_11;                    // 0x11C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_16;                   // 0x11C9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3874[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Event_DeltaSeconds;                         // 0x11CC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          Temp_object_Variable_2;                            // 0x11D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable; // 0x11D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_387B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           CallFunc_GetController_ReturnValue_3;              // 0x11E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_NotifyName_55;                  // 0x11E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_17;                   // 0x11F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3881[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBlackboardComponent*                  CallFunc_GetBlackboard_ReturnValue_2;              // 0x11F8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_MakeLiteralName_ReturnValue_2;            // 0x1200(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_18;                   // 0x1208(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3889[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_69;           // 0x120C(0x10)(ZeroConstructor, NoDestructor)
	float                                        K2Node_CustomEvent_Health_to_Restore;              // 0x121C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_FloatFloat_ReturnValue;              // 0x1220(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_388F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x1224(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                           CallFunc_GetController_ReturnValue_4;              // 0x1228(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0x1230(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3896[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_SelectFloat_ReturnValue;                  // 0x1234(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_GetPlayerPawn_ReturnValue_6;              // 0x1238(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsOverlappingActor_ReturnValue;           // 0x1240(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_389E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_MakeLiteralName_ReturnValue_3;            // 0x1244(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38A2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBlackboardComponent*                  CallFunc_GetBlackboard_ReturnValue_3;              // 0x1250(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_GetPlayerPawn_ReturnValue_7;              // 0x1258(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x1260(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_ComponentBoundEvent_OtherActor;             // 0x1268(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   K2Node_ComponentBoundEvent_OtherComp;              // 0x1270(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x1278(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_bFromSweep;             // 0x127C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38B0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            K2Node_ComponentBoundEvent_SweepResult;            // 0x1280(0x88)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0x1308(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_2;    // 0x130C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38B4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_CustomEvent_NotifyName_56;                  // 0x1310(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_19;                   // 0x1318(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38F8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_PlayAnimMontage_ReturnValue;              // 0x131C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_CustomEvent_FloatValue;                     // 0x1320(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x1324(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                           CallFunc_GetController_ReturnValue_5;              // 0x1328(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_20;                   // 0x1330(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3903[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBlackboardComponent*                  CallFunc_GetBlackboard_ReturnValue_4;              // 0x1338(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_21;                   // 0x1340(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3906[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_MakeLiteralName_ReturnValue_4;            // 0x1344(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_390B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           CallFunc_GetController_ReturnValue_6;              // 0x1350(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_22;                   // 0x1358(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_390F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBlackboardComponent*                  CallFunc_GetBlackboard_ReturnValue_5;              // 0x1360(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_23;                   // 0x1368(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3914[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_MakeLiteralName_ReturnValue_5;            // 0x136C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_BoolValue;                      // 0x1374(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3917[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          Temp_object_Variable_3;                            // 0x1378(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_4;                              // 0x1380(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_391C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_70;           // 0x1384(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_3922[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          K2Node_Select_Default_3;                           // 0x1398(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPlayMontageCallbackProxy*             CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_11; // 0x13A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_24;                   // 0x13A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3928[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_CustomEvent_NotifyName_57;                  // 0x13AC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_NotifyName_58;                  // 0x13B4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_71;           // 0x13BC(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_392F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AAdvancedEnemySpawner_StormMode_C*     K2Node_DynamicCast_AsAdvanced_Enemy_Spawner_Storm_Mode; // 0x13D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_12;                    // 0x13D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3933[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_72;           // 0x13DC(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_NotifyName_59;                  // 0x13EC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_73;           // 0x13F4(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x1404(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_393C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_VLerp_ReturnValue;                        // 0x1408(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_K2_SetActorRelativeLocation_SweepHitResult; // 0x1414(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_74;           // 0x149C(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_3942[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AVampireSpawner_C*                     K2Node_DynamicCast_AsVampire_Spawner;              // 0x14B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_13;                    // 0x14B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_4;                // 0x14B9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3947[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        Temp_object_Variable_4;                            // 0x14C0(0x10)(ConstParm, ReferenceParm, HasGetValueTypeHash)
	TArray<struct FHitResult>                    CallFunc_SphereTraceMultiForObjects_OutHits_1;     // 0x14D0(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_SphereTraceMultiForObjects_ReturnValue_1; // 0x14E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_394F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            CallFunc_Array_Get_Item_2;                         // 0x14E4(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x156C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BreakHitResult_bBlockingHit_2;            // 0x1570(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BreakHitResult_bInitialOverlap_2;         // 0x1571(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3956[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_BreakHitResult_Time_2;                    // 0x1574(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakHitResult_Distance_2;                // 0x1578(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_Location_2;                // 0x157C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactPoint_2;             // 0x1588(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_Normal_2;                  // 0x1594(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactNormal_2;            // 0x15A0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3960[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPhysicalMaterial*                     CallFunc_BreakHitResult_PhysMat_2;                 // 0x15B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BreakHitResult_HitActor_2;                // 0x15B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   CallFunc_BreakHitResult_HitComponent_2;            // 0x15C0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_BreakHitResult_HitBoneName_2;             // 0x15C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_HitItem_2;                 // 0x15D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_FaceIndex_2;               // 0x15D4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_TraceStart_2;              // 0x15D8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_TraceEnd_2;                // 0x15E4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x15F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_3;    // 0x15F1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x15F2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3972[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Temp_name_Variable_15;                             // 0x15F4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_Enable_;                              // 0x15FC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_397D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimInstance*                         CallFunc_GetAnimInstance_ReturnValue_4;            // 0x1600(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVamp_Skin_Skeleton_AnimBlueprint_C*   K2Node_DynamicCast_AsVamp_Skin_Skeleton_Anim_Blueprint_2; // 0x1608(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_14;                    // 0x1610(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3981[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimInstance*                         CallFunc_GetAnimInstance_ReturnValue_5;            // 0x1618(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_RandomFloatInRange_ReturnValue_1;         // 0x1620(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3987[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UVamp_Skin_Skeleton_AnimBlueprint_C*   K2Node_DynamicCast_AsVamp_Skin_Skeleton_Anim_Blueprint_3; // 0x1628(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_15;                    // 0x1630(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_398C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_RandomFloatInRange_ReturnValue_2;         // 0x1634(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                           CallFunc_GetController_ReturnValue_7;              // 0x1638(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMyDetourCrowdAIController_C*          K2Node_DynamicCast_AsMy_Detour_Crowd_AIController; // 0x1640(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_16;                    // 0x1648(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3995[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue_1;     // 0x1650(0x30)(IsPlainOldData, NoDestructor)
	class UPlayMontageCallbackProxy*             CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_12; // 0x1680(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_5; // 0x1688(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class Abp_arm_food_C*                        CallFunc_FinishSpawningActor_ReturnValue_5;        // 0x1690(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_25;                   // 0x1698(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_399E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CallFunc_K2_SetTimer_ReturnValue;                  // 0x16A0(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetActorForwardVector_ReturnValue_2;      // 0x16A8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_39A3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AAdvancedEnemySpawner_C*               K2Node_Event_SpawnerRef;                           // 0x16B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_Event_UniqueID;                             // 0x16C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ELevelPhases                      K2Node_Event_PhaseToSpawn;                         // 0x16C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bPermanentlyDeadOnceKilled_;          // 0x16C9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_39AA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APatrolPoint_C*                        K2Node_Event_PatrolPointA;                         // 0x16D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bShouldWander_;                       // 0x16D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_39B2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APatrolPoint_C*                        K2Node_Event_PatrolPointB;                         // 0x16E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_AggroRadius;                          // 0x16E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_39B6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_TriggerOnEnemyAggro_C*             K2Node_Event_TriggerToActivateOnAggro;             // 0x16F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_ShouldPatrol_;                        // 0x16F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_39B8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            K2Node_Event_SpawnTransform;                       // 0x1700(0x30)(IsPlainOldData, NoDestructor)
	class UPlayMontageCallbackProxy*             CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_13; // 0x1730(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_26;                   // 0x1738(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


