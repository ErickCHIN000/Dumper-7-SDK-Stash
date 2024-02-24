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

// 0x20 (0x20 - 0x0)
// Function Dungeonhaven.CertDialog.UpdateConfirmAction
struct UCertDialog_UpdateConfirmAction_Params
{
public:
	bool                                         bActive;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_619[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Body;                                              // 0x8(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function Dungeonhaven.CertDialog.UpdateCancelAction
struct UCertDialog_UpdateCancelAction_Params
{
public:
	bool                                         bActive;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_623[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Body;                                              // 0x8(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Dungeonhaven.ConsoleBlueprintLibrary.IsGamepadAttached
struct UConsoleBlueprintLibrary_IsGamepadAttached_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Dungeonhaven.ConsoleBlueprintLibrary.IsConsole
struct UConsoleBlueprintLibrary_IsConsole_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_661[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Dungeonhaven.ConsoleBlueprintLibrary.IfPlatform
struct UConsoleBlueprintLibrary_IfPlatform_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPlatform                         OutResult;                                         // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_675[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Dungeonhaven.ConsoleBlueprintLibrary.IfMobile
struct UConsoleBlueprintLibrary_IfMobile_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoolean                          OutResult;                                         // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_68D[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Dungeonhaven.ConsoleBlueprintLibrary.IfConsole
struct UConsoleBlueprintLibrary_IfConsole_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoolean                          OutResult;                                         // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6A0[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Dungeonhaven.ConsoleBlueprintLibrary.GetPlatformGamepadType
struct UConsoleBlueprintLibrary_GetPlatformGamepadType_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPlatformGamepadType              ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6B9[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function Dungeonhaven.ConsoleBlueprintLibrary.GetPlatform
struct UConsoleBlueprintLibrary_GetPlatform_Params
{
public:
	enum class EPlatform                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function Dungeonhaven.ConsoleBlueprintLibrary.GetCompressedKeyString
struct UConsoleBlueprintLibrary_GetCompressedKeyString_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Dungeonhaven.DHAchievementSystem.IncrementAchievementProgress
struct UDHAchievementSystem_IncrementAchievementProgress_Params
{
public:
	enum class EDHAchievement                    EDHAchievement;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_744[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NCount;                                            // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Dungeonhaven.DHAchievementSystem.GetDHAchievementSystem
struct UDHAchievementSystem_GetDHAchievementSystem_Params
{
public:
	class UDHAchievementSystem*                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Dungeonhaven.DHAnimNotify_PlaySoundAndRegister.OnSoundSpawned
struct UDHAnimNotify_PlaySoundAndRegister_OnSoundSpawned_Params
{
public:
	class USkeletalMeshComponent*                MeshComp;                                          // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAudioComponent*                       Spawned;                                           // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Dungeonhaven.DHCharacter.SetSignificanceBP
struct ADHCharacter_SetSignificanceBP_Params
{
public:
	enum class EDHSignificanceLevel              SignificanceLevel;                                 // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function Dungeonhaven.DHFunctionLibrary.UpdateVFXLocationsAlongSplineFromEnd
struct UDHFunctionLibrary_UpdateVFXLocationsAlongSplineFromEnd_Params
{
public:
	class USplineComponent*                      Spline;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InitialVFXDistance;                                // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VFXDistance;                                       // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UParticleSystemComponent*>      VFXList;                                           // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                       PS;                                                // 0x20(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Dungeonhaven.DHFunctionLibrary.UpdateOverlapsOnComponent
struct UDHFunctionLibrary_UpdateOverlapsOnComponent_Params
{
public:
	class USceneComponent*                       Component;                                         // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Dungeonhaven.DHFunctionLibrary.UnpauseTimerByHandle
struct UDHFunctionLibrary_UnpauseTimerByHandle_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimerHandle                          Handle;                                            // 0x8(0x8)(Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Dungeonhaven.DHFunctionLibrary.TryToLaunchURL
struct UDHFunctionLibrary_TryToLaunchURL_Params
{
public:
	class FString                                URL;                                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCopyURLToClipboard;                               // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x11(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8F7[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function Dungeonhaven.DHFunctionLibrary.SpawnVFXAlongSplineFromEnd
struct UDHFunctionLibrary_SpawnVFXAlongSplineFromEnd_Params
{
public:
	class USplineComponent*                      Spline;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartDistance;                                     // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DistanceBetweenSpawns;                             // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                       PS;                                                // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Dungeonhaven.DHFunctionLibrary.SmoothSpline
struct UDHFunctionLibrary_SmoothSpline_Params
{
public:
	class USplineComponent*                      Spline;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       Points;                                            // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function Dungeonhaven.DHFunctionLibrary.SimulateVFXMovementAlongSplineFromEnd
struct UDHFunctionLibrary_SimulateVFXMovementAlongSplineFromEnd_Params
{
public:
	class USplineComponent*                      Spline;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DeltaSeconds;                                      // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InitialVFXDistance;                                // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VFXDistance;                                       // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Acceleration;                                      // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxVelocity;                                       // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_925[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UParticleSystemComponent*>      VFXList;                                           // 0x20(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                CurrentVelocityList;                               // 0x30(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                       PS;                                                // 0x40(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Dungeonhaven.DHFunctionLibrary.SimulateClickOnInputKeySelector
struct UDHFunctionLibrary_SimulateClickOnInputKeySelector_Params
{
public:
	class UInputKeySelector*                     Selector;                                          // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// Function Dungeonhaven.DHFunctionLibrary.SetWidgetNavigation
struct UDHFunctionLibrary_SetWidgetNavigation_Params
{
public:
	bool                                         AllowAnalog;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AllowKey;                                          // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AllowTab;                                          // 0x2(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Dungeonhaven.DHFunctionLibrary.SetRootMotionTranslationScale
struct UDHFunctionLibrary_SetRootMotionTranslationScale_Params
{
public:
	class ACharacter*                            Character;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScaleValue;                                        // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_947[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Dungeonhaven.DHFunctionLibrary.SetForceFeedbackScale
struct UDHFunctionLibrary_SetForceFeedbackScale_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScaleValue;                                        // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSaveToConfig;                                     // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_95F[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Dungeonhaven.DHFunctionLibrary.SetCameraMoveableWhenPaused
struct UDHFunctionLibrary_SetCameraMoveableWhenPaused_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNewIsMoveable;                                    // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_979[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function Dungeonhaven.DHFunctionLibrary.SetAllUsersFocusToWidget
struct UDHFunctionLibrary_SetAllUsersFocusToWidget_Params
{
public:
	class UWidget*                               PWidget;                                           // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Dungeonhaven.DHFunctionLibrary.RowName
struct UDHFunctionLibrary_RowName_Params
{
public:
	struct FDHDataTableID                        ID;                                                // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Dungeonhaven.DHFunctionLibrary.RemoveDisabledEmitters
struct UDHFunctionLibrary_RemoveDisabledEmitters_Params
{
public:
	class UParticleSystem*                       ParticleSystem;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Dungeonhaven.DHFunctionLibrary.RebuildNavMesh
struct UDHFunctionLibrary_RebuildNavMesh_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNavigationSystemV1*                   NavSystem;                                         // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Dungeonhaven.DHFunctionLibrary.PauseTimerByHandle
struct UDHFunctionLibrary_PauseTimerByHandle_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimerHandle                          Handle;                                            // 0x8(0x8)(Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Dungeonhaven.DHFunctionLibrary.IsTimerActiveByHandle
struct UDHFunctionLibrary_IsTimerActiveByHandle_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimerHandle                          Handle;                                            // 0x8(0x8)(Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A35[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function Dungeonhaven.DHFunctionLibrary.IsGOGBuild
struct UDHFunctionLibrary_IsGOGBuild_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Dungeonhaven.DHFunctionLibrary.InterpolateDeceleration
struct UDHFunctionLibrary_InterpolateDeceleration_Params
{
public:
	float                                        A;                                                 // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        B;                                                 // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        T;                                                 // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xC(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Dungeonhaven.DHFunctionLibrary.GetTimeSeconds
struct UDHFunctionLibrary_GetTimeSeconds_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A95[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function Dungeonhaven.DHFunctionLibrary.GetTimerRemainingTimebyHandle
struct UDHFunctionLibrary_GetTimerRemainingTimebyHandle_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimerHandle                          Handle;                                            // 0x8(0x8)(Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AB5[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Dungeonhaven.DHFunctionLibrary.GetScaledPlayRate
struct UDHFunctionLibrary_GetScaledPlayRate_Params
{
public:
	class UAnimInstance*                         AnimInstance;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_ACF[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function Dungeonhaven.DHFunctionLibrary.GetRootMotionVelocity
struct UDHFunctionLibrary_GetRootMotionVelocity_Params
{
public:
	class UCharacterMovementComponent*           CharMovement;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0x8(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AE5[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function Dungeonhaven.DHFunctionLibrary.GetRootMotionForwardDeltaFromSlot
struct UDHFunctionLibrary_GetRootMotionForwardDeltaFromSlot_Params
{
public:
	class USkeletalMeshComponent*                SkeletalMesh;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          Montage;                                           // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SlotName;                                          // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x18(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B0B[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Dungeonhaven.DHFunctionLibrary.GetRootMotionForwardDeltaFromAnimation
struct UDHFunctionLibrary_GetRootMotionForwardDeltaFromAnimation_Params
{
public:
	class UAnimSequence*                         Sequence;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B22[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function Dungeonhaven.DHFunctionLibrary.GetOnlineSubsystemID
struct UDHFunctionLibrary_GetOnlineSubsystemID_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Dungeonhaven.DHFunctionLibrary.GetForceFeedbackScale
struct UDHFunctionLibrary_GetForceFeedbackScale_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B54[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Dungeonhaven.DHFunctionLibrary.GetDefaultObject
struct UDHFunctionLibrary_GetDefaultObject_Params
{
public:
	class UClass*                                Class;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Dungeonhaven.DHFunctionLibrary.GetCurrentStreamingLevelName
struct UDHFunctionLibrary_GetCurrentStreamingLevelName_Params
{
public:
	class AActor*                                ReferenceActor;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Dungeonhaven.DHFunctionLibrary.GetCurrentPersistentLevelName
struct UDHFunctionLibrary_GetCurrentPersistentLevelName_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Dungeonhaven.DHFunctionLibrary.GetCurrentPersistentLevel
struct UDHFunctionLibrary_GetCurrentPersistentLevel_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULevel*                                ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function Dungeonhaven.DHFunctionLibrary.GetClosestHitLocationToPointAllBones
struct UDHFunctionLibrary_GetClosestHitLocationToPointAllBones_Params
{
public:
	class USkeletalMeshComponent*                Mesh;                                              // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SourceLocation;                                    // 0x8(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               OutLocation;                                       // 0x14(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  OutBoneName;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BD3[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function Dungeonhaven.DHFunctionLibrary.GetClosestHitLocationToPoint
struct UDHFunctionLibrary_GetClosestHitLocationToPoint_Params
{
public:
	class USkeletalMeshComponent*                Mesh;                                              // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SourceLocation;                                    // 0x8(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BF7[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          PossibleBoneNames;                                 // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               OutLocation;                                       // 0x28(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  OutBoneName;                                       // 0x34(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x3C(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BFB[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function Dungeonhaven.DHFunctionLibrary.GetBoneNameFromBodyIndex
struct UDHFunctionLibrary_GetBoneNameFromBodyIndex_Params
{
public:
	class USkeletalMeshComponent*                SkeletalMeshComponent;                             // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BodyIndex;                                         // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ReturnValue;                                       // 0xC(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C02[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Dungeonhaven.DHFunctionLibrary.GetAllRootMotionForwardDeltaFromMontage
struct UDHFunctionLibrary_GetAllRootMotionForwardDeltaFromMontage_Params
{
public:
	class UAnimMontage*                          Montage;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C17[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function Dungeonhaven.DHFunctionLibrary.GetActorNameStr
struct UDHFunctionLibrary_GetActorNameStr_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Dungeonhaven.DHFunctionLibrary.GetActorName
struct UDHFunctionLibrary_GetActorName_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Dungeonhaven.DHFunctionLibrary.GetActiveMontage
struct UDHFunctionLibrary_GetActiveMontage_Params
{
public:
	class USkeletalMeshComponent*                SkeletalMesh;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OutPosition;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C35[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function Dungeonhaven.DHFunctionLibrary.DrawSpline
struct UDHFunctionLibrary_DrawSpline_Params
{
public:
	class USplineComponent*                      Spline;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SegmentLength;                                     // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0xC(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x1C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C52[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function Dungeonhaven.DHFunctionLibrary.DrawRangeAttackPath
struct UDHFunctionLibrary_DrawRangeAttackPath_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               StartPos;                                          // 0x8(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TargetPos;                                         // 0x14(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VelocitySize;                                      // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GravityScale;                                      // 0x24(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPreferLargeArc;                                   // 0x28(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C92[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Precision;                                         // 0x2C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LifeTime;                                          // 0x30(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x34(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Dungeonhaven.DHFunctionLibrary.CopyMeshComponentVertextColors
struct UDHFunctionLibrary_CopyMeshComponentVertextColors_Params
{
public:
	class UStaticMeshComponent*                  SourceMesh;                                        // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                  DstMesh;                                           // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Dungeonhaven.DHFunctionLibrary.ClearAndInvalidateTimer
struct UDHFunctionLibrary_ClearAndInvalidateTimer_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimerHandle                          Handle;                                            // 0x8(0x8)(Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2C (0x2C - 0x0)
// Function Dungeonhaven.DHFunctionLibrary.CircleCircleIntersection
struct UDHFunctionLibrary_CircleCircleIntersection_Params
{
public:
	struct FVector2D                             P0;                                                // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        R0;                                                // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             P1;                                                // 0xC(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        R1;                                                // 0x14(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Result0;                                           // 0x18(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Result1;                                           // 0x20(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D07[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function Dungeonhaven.DHFunctionLibrary.CheckProperties
struct UDHFunctionLibrary_CheckProperties_Params
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x34 (0x34 - 0x0)
// Function Dungeonhaven.DHFunctionLibrary.CalcRangeAttackVelocityFlexible
struct UDHFunctionLibrary_CalcRangeAttackVelocityFlexible_Params
{
public:
	struct FVector                               StartPos;                                          // 0x0(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TargetPos;                                         // 0xC(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VelocitySize;                                      // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxVelocity;                                       // 0x1C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GravityScale;                                      // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPreferLargeArc;                                   // 0x24(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D56[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ReturnValue;                                       // 0x28(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function Dungeonhaven.DHFunctionLibrary.CalcRangeAttackVelocity
struct UDHFunctionLibrary_CalcRangeAttackVelocity_Params
{
public:
	struct FVector                               StartPos;                                          // 0x0(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TargetPos;                                         // 0xC(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VelocitySize;                                      // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GravityScale;                                      // 0x1C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPreferLargeArc;                                   // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D7F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ReturnValue;                                       // 0x24(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x34 (0x34 - 0x0)
// Function Dungeonhaven.DHFunctionLibrary.CalcRangeAttackTargetLocation
struct UDHFunctionLibrary_CalcRangeAttackTargetLocation_Params
{
public:
	struct FVector                               StartPos;                                          // 0x0(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TargetPos;                                         // 0xC(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TargetVel;                                         // 0x18(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VelocitySize;                                      // 0x24(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0x28(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function Dungeonhaven.DHFunctionLibrary.CalcCryptBossThrowEndLocation
struct UDHFunctionLibrary_CalcCryptBossThrowEndLocation_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               BossStartPos;                                      // 0x8(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SwordPos;                                          // 0x14(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SwordLocalDistance2D;                              // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SwordAngle2DDeg;                                   // 0x24(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDrawDebug;                                        // 0x28(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DD1[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ReturnValue;                                       // 0x2C(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Dungeonhaven.DHGameInstance.WelcomeScreenEnabled
struct UDHGameInstance_WelcomeScreenEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Dungeonhaven.DHGameInstance.UserHasStormModeDLC
struct UDHGameInstance_UserHasStormModeDLC_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Dungeonhaven.DHGameInstance.UpdateStormModeActivitiyState
struct UDHGameInstance_UpdateStormModeActivitiyState_Params
{
public:
	int32                                        NProgress;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Dungeonhaven.DHGameInstance.UpdateCampaignActivitiyState
struct UDHGameInstance_UpdateCampaignActivitiyState_Params
{
public:
	int32                                        NProgress;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Dungeonhaven.DHGameInstance.TestSeriesS30FPS
struct UDHGameInstance_TestSeriesS30FPS_Params
{
public:
	bool                                         CapAt30FPS;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Dungeonhaven.DHGameInstance.TestMusicFromDLC
struct UDHGameInstance_TestMusicFromDLC_Params
{
public:
	class FName                                  MusicName;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Dungeonhaven.DHGameInstance.ShouldForcePS4Icons
struct UDHGameInstance_ShouldForcePS4Icons_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Dungeonhaven.DHGameInstance.SetRichPresenceText
struct UDHGameInstance_SetRichPresenceText_Params
{
public:
	class FString                                PresenceID;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Dungeonhaven.DHGameInstance.ReturnRenderTarget
struct UDHGameInstance_ReturnRenderTarget_Params
{
public:
	class UTextureRenderTarget2D*                RenderTarget;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Dungeonhaven.DHGameInstance.RefreshPlatformLanguage
struct UDHGameInstance_RefreshPlatformLanguage_Params
{
public:
	class FString                                CurrentLanguage;                                   // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Dungeonhaven.DHGameInstance.OnWorldCleanup
struct UDHGameInstance_OnWorldCleanup_Params
{
public:
	class UWorld*                                World;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSessionEnded;                                     // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCleanupResources;                                 // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FDF[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Dungeonhaven.DHGameInstance.OnIdealLanguageDetermined
struct UDHGameInstance_OnIdealLanguageDetermined_Params
{
public:
	class FString                                CultureDetermined;                                 // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Dungeonhaven.DHGameInstance.OnChangeProfile
struct UDHGameInstance_OnChangeProfile_Params
{
public:
	int32                                        EventUserIndex;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Dungeonhaven.DHGameInstance.LoadMusicFromDLC
struct UDHGameInstance_LoadMusicFromDLC_Params
{
public:
	class FName                                  MusicName;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                            ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Dungeonhaven.DHGameInstance.LoadDHMap
struct UDHGameInstance_LoadDHMap_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  MapName;                                           // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Dungeonhaven.DHGameInstance.IsXboxOneSeriesS
struct UDHGameInstance_IsXboxOneSeriesS_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Dungeonhaven.DHGameInstance.IsShippingBuild
struct UDHGameInstance_IsShippingBuild_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Dungeonhaven.DHGameInstance.IsMusicDLCOwned
struct UDHGameInstance_IsMusicDLCOwned_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Dungeonhaven.DHGameInstance.IsMusicDLCInstalled
struct UDHGameInstance_IsMusicDLCInstalled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Dungeonhaven.DHGameInstance.IsMusicDLCAvailable
struct UDHGameInstance_IsMusicDLCAvailable_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Dungeonhaven.DHGameInstance.IsInKeyboardMode
struct UDHGameInstance_IsInKeyboardMode_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Dungeonhaven.DHGameInstance.IsEditor
struct UDHGameInstance_IsEditor_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function Dungeonhaven.DHGameInstance.GetUnitedTwitchDropList
struct UDHGameInstance_GetUnitedTwitchDropList_Params
{
public:
	TArray<struct FDHTwitchDrop>                 Drops;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FDHTwitchDrop>                 OutDrops;                                          // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Dungeonhaven.DHGameInstance.GetRayTracingSettings
struct UDHGameInstance_GetRayTracingSettings_Params
{
public:
	class UDHRayTracing*                         ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Dungeonhaven.DHGameInstance.GetPrimaryUserIndex
struct UDHGameInstance_GetPrimaryUserIndex_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Dungeonhaven.DHGameInstance.GetPrimaryControllerIndex
struct UDHGameInstance_GetPrimaryControllerIndex_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Dungeonhaven.DHGameInstance.GetPlatformSKU
struct UDHGameInstance_GetPlatformSKU_Params
{
public:
	enum class EPlatformSKU                      ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function Dungeonhaven.DHGameInstance.GetPathForMap
struct UDHGameInstance_GetPathForMap_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  MapName;                                           // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function Dungeonhaven.DHGameInstance.GetNewUnprocessedTwitchDrops
struct UDHGameInstance_GetNewUnprocessedTwitchDrops_Params
{
public:
	TArray<struct FDHTwitchDrop>                 ProcessedDrops;                                    // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FDHTwitchDrop>                 OutDrops;                                          // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Dungeonhaven.DHGameInstance.GetInstance
struct UDHGameInstance_GetInstance_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDHGameInstance*                       ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Dungeonhaven.DHGameInstance.GetBuildVersionString
struct UDHGameInstance_GetBuildVersionString_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Dungeonhaven.DHGameInstance.ForceSaveBackup
struct UDHGameInstance_ForceSaveBackup_Params
{
public:
	int32                                        NSlotNumber;                                       // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UserIndex;                                         // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Dungeonhaven.DHGameInstance.DetermineIdealLanguage
struct UDHGameInstance_DetermineIdealLanguage_Params
{
public:
	TArray<class FString>                        SupportedLanguages;                                // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Dungeonhaven.DHGameInstance.DebugShowAchievementProgress
struct UDHGameInstance_DebugShowAchievementProgress_Params
{
public:
	bool                                         bShow;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Dungeonhaven.DHGameInstance.DebugSetAchievementProgress
struct UDHGameInstance_DebugSetAchievementProgress_Params
{
public:
	enum class EDHAchievement                    EAchievement;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1249[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NProgress;                                         // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Dungeonhaven.DHGameInstance.DebugIncrementAchievementProgress
struct UDHGameInstance_DebugIncrementAchievementProgress_Params
{
public:
	enum class EDHAchievement                    EAchievement;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_125D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NCount;                                            // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Dungeonhaven.DHGameInstance.DebugActivity_Start
struct UDHGameInstance_DebugActivity_Start_Params
{
public:
	class FString                                ActivityId;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Dungeonhaven.DHGameInstance.DebugActivity_Resume
struct UDHGameInstance_DebugActivity_Resume_Params
{
public:
	class FString                                ActivityId;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       NProgress;                                         // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_128B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Dungeonhaven.DHGameInstance.DebugActivity_End
struct UDHGameInstance_DebugActivity_End_Params
{
public:
	class FString                                ActivityId;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Dungeonhaven.DHGameInstance.DebugActivity_Availability
struct UDHGameInstance_DebugActivity_Availability_Params
{
public:
	class FString                                ActivityId;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12A2[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function Dungeonhaven.DHGameInstance.ClaimRenderTarget
struct UDHGameInstance_ClaimRenderTarget_Params
{
public:
	int32                                        Width;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Height;                                            // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextureRenderTargetFormat        Format;                                            // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12C5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTextureRenderTarget2D*                ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function Dungeonhaven.DHGameInstance.CheckDLCEntitlementWithNamespace
struct UDHGameInstance_CheckDLCEntitlementWithNamespace_Params
{
public:
	class FString                                CatalogID;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Namespace;                                         // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Dungeonhaven.DHGameInstance.CheckDLCEntitlement
struct UDHGameInstance_CheckDLCEntitlement_Params
{
public:
	class FString                                CatalogID;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Dungeonhaven.DHGameInstance.ChangePermanentRichPresenceTextOverride
struct UDHGameInstance_ChangePermanentRichPresenceTextOverride_Params
{
public:
	class FString                                PresenceID;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSet;                                              // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_131F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function Dungeonhaven.DHGameInstance.AreConsoleCheatsEnabled
struct UDHGameInstance_AreConsoleCheatsEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Dungeonhaven.DHGameInstance.AddTemporaryRichPresenceTextOverride
struct UDHGameInstance_AddTemporaryRichPresenceTextOverride_Params
{
public:
	class FString                                PresenceID;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DurationSeconds;                                   // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1345[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function Dungeonhaven.DHGameMode.SetMyNamedInt
struct ADHGameMode_SetMyNamedInt_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  VariableName;                                      // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Value;                                             // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_140C[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Dungeonhaven.DHGameMode.SetMyInt
struct ADHGameMode_SetMyInt_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Value;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1421[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Dungeonhaven.DHGameMode.SetMeEnabled
struct ADHGameMode_SetMeEnabled_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabledByDefault;                                 // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_144C[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Dungeonhaven.DHGameMode.SecretMagic
struct ADHGameMode_SecretMagic_Params
{
public:
	class FString                                PW;                                                // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Dungeonhaven.DHGameMode.RemoveMyNameFromChangedSet
struct ADHGameMode_RemoveMyNameFromChangedSet_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Dungeonhaven.DHGameMode.RemoveActorNameFromChangedSet
struct ADHGameMode_RemoveActorNameFromChangedSet_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Dungeonhaven.DHGameMode.IsMyNameInChangedSet
struct ADHGameMode_IsMyNameInChangedSet_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14D0[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Dungeonhaven.DHGameMode.IsActorNameInChangedSet
struct ADHGameMode_IsActorNameInChangedSet_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14F4[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function Dungeonhaven.DHGameMode.GetMyNamedInt
struct ADHGameMode_GetMyNamedInt_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  VariableName;                                      // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_151C[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Dungeonhaven.DHGameMode.GetMyInt
struct ADHGameMode_GetMyInt_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1535[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Dungeonhaven.DHGameMode.GetLevelNameFromActor
struct ADHGameMode_GetLevelNameFromActor_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Dungeonhaven.DHGameMode.GetDHGameMode
struct ADHGameMode_GetDHGameMode_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ADHGameMode*                           ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function Dungeonhaven.DHGameMode.ConstructNameFromPrefixLevelAndActor
struct ADHGameMode_ConstructNameFromPrefixLevelAndActor_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PreFix;                                            // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Dungeonhaven.DHGameMode.AmIEnabled
struct ADHGameMode_AmIEnabled_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabledByDefault;                                 // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15B3[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function Dungeonhaven.DHGameMode.AddMyNameToChangedSet
struct ADHGameMode_AddMyNameToChangedSet_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Dungeonhaven.DHGameMode.AddActorNameToChangedSet
struct ADHGameMode_AddActorNameToChangedSet_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Dungeonhaven.DHGameState.RemoveSkeletalMeshComponent
struct ADHGameState_RemoveSkeletalMeshComponent_Params
{
public:
	class USkeletalMeshComponent*                SkelMeshCmp;                                       // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Dungeonhaven.DHGameState.RemoveSkeletalMesh
struct ADHGameState_RemoveSkeletalMesh_Params
{
public:
	class ASkeletalMeshActor*                    SkelMeshActor;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Dungeonhaven.DHGameState.RemoveCharacter
struct ADHGameState_RemoveCharacter_Params
{
public:
	class ADHCharacter*                          Character;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Dungeonhaven.DHGameState.RegisterSkeletalMeshComponent
struct ADHGameState_RegisterSkeletalMeshComponent_Params
{
public:
	class USkeletalMeshComponent*                SkelMeshCmp;                                       // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Dungeonhaven.DHGameState.RegisterSkeletalMesh
struct ADHGameState_RegisterSkeletalMesh_Params
{
public:
	class ASkeletalMeshActor*                    SkelMeshActor;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Dungeonhaven.DHGameState.RegisterCharacter
struct ADHGameState_RegisterCharacter_Params
{
public:
	class ADHCharacter*                          Character;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Dungeonhaven.DHItemEffectBase.StartUpdates
struct UDHItemEffectBase_StartUpdates_Params
{
public:
	float                                        Duration;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DeltaBetweenUpdates;                               // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               WorldContext;                                      // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Dungeonhaven.DHItemEffectBase.RequestOnUpdateOverCall
struct UDHItemEffectBase_RequestOnUpdateOverCall_Params
{
public:
	float                                        CallDelay;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1770[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               WorldContext;                                      // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Dungeonhaven.DHItemEffectBase.PickedUp
struct UDHItemEffectBase_PickedUp_Params
{
public:
	class FName                                  ItemId;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                PlayerCharacter;                                   // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Dungeonhaven.DHItemEffectBase.OnUpdateOverBP
struct UDHItemEffectBase_OnUpdateOverBP_Params
{
public:
	class UObject*                               WorldContext;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Dungeonhaven.DHItemEffectBase.OnUpdateBP
struct UDHItemEffectBase_OnUpdateBP_Params
{
public:
	class UObject*                               WorldContext;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Dungeonhaven.DHItemEffectBase.OnPickUp
struct UDHItemEffectBase_OnPickUp_Params
{
public:
	class FName                                  ItemId;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                PlayerCharacter;                                   // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Dungeonhaven.DHItemEffectBase.OnApplied
struct UDHItemEffectBase_OnApplied_Params
{
public:
	class FName                                  ItemId;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                PlayerCharacter;                                   // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_180A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function Dungeonhaven.DHItemEffectBase.GetUnsafeWorldContext
struct UDHItemEffectBase_GetUnsafeWorldContext_Params
{
public:
	class UObject*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Dungeonhaven.DHItemEffectBase.AreUpdatesActive
struct UDHItemEffectBase_AreUpdatesActive_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Dungeonhaven.DHItemEffectBase.Apply
struct UDHItemEffectBase_Apply_Params
{
public:
	class FName                                  ItemId;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                PlayerCharacter;                                   // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18C8[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// Function Dungeonhaven.DHItemsAsset.GetEffectCopies
struct UDHItemsAsset_GetEffectCopies_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FName, class UDHItemEffectBase*>  OutEffects;                                        // 0x8(0x50)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Dungeonhaven.DHItemsAsset.AddMissingEntries
struct UDHItemsAsset_AddMissingEntries_Params
{
public:
	TArray<class FName>                          ItemIDList;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function Dungeonhaven.DHPlayerController.SetTriggerWeaponStrength
struct ADHPlayerController_SetTriggerWeaponStrength_Params
{
public:
	enum class ETrigger                          ETrigger;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19D6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FireTriggerThreshold;                              // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Strength;                                          // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Dungeonhaven.DHPlayerController.SetTriggerVibration
struct ADHPlayerController_SetTriggerVibration_Params
{
public:
	enum class ETrigger                          ETrigger;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A0E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Position;                                          // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Frequency;                                         // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Amplitude;                                         // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Dungeonhaven.DHPlayerController.SetTriggerModeOff
struct ADHPlayerController_SetTriggerModeOff_Params
{
public:
	enum class ETrigger                          ETrigger;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// Function Dungeonhaven.DHPlayerController.SetTriggerFeedback
struct ADHPlayerController_SetTriggerFeedback_Params
{
public:
	enum class ETrigger                          ETrigger;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Position;                                          // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Strength;                                          // 0x2(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Dungeonhaven.DHPlayerController.SetGlobalCameraShakeScale
struct ADHPlayerController_SetGlobalCameraShakeScale_Params
{
public:
	float                                        Scale;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSaveToConfig;                                     // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A75[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function Dungeonhaven.DHPlayerController.SetAspectRatioAxisConstraint
struct ADHPlayerController_SetAspectRatioAxisConstraint_Params
{
public:
	enum class EAspectRatioAxisConstraint        AspectRatioAxisConstraint;                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Dungeonhaven.DHPlayerController.IsInputEnabled
struct ADHPlayerController_IsInputEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Dungeonhaven.DHPlayerController.GetCachedBarbAsPawn
struct ADHPlayerController_GetCachedBarbAsPawn_Params
{
public:
	class APawn*                                 ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Dungeonhaven.DHPlayerController.GetAspectRatioAxisConstraint
struct ADHPlayerController_GetAspectRatioAxisConstraint_Params
{
public:
	enum class EAspectRatioAxisConstraint        ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Dungeonhaven.DHRayTracing.SetRayTracingValidForZone
struct UDHRayTracing_SetRayTracingValidForZone_Params
{
public:
	bool                                         bValid;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Dungeonhaven.DHRayTracing.SetRayTracingDesired
struct UDHRayTracing_SetRayTracingDesired_Params
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Dungeonhaven.DHRayTracing.SetDX12Desired
struct UDHRayTracing_SetDX12Desired_Params
{
public:
	bool                                         bDesired;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Dungeonhaven.DHRayTracing.SetDlssMode
struct UDHRayTracing_SetDlssMode_Params
{
public:
	int32                                        Mode;                                              // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Dungeonhaven.DHRayTracing.IsRayTracingDesired
struct UDHRayTracing_IsRayTracingDesired_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Dungeonhaven.DHRayTracing.IsRayTracingCurrentlyActive
struct UDHRayTracing_IsRayTracingCurrentlyActive_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Dungeonhaven.DHRayTracing.IsDX12Desired
struct UDHRayTracing_IsDX12Desired_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Dungeonhaven.DHRayTracing.IsDX12Active
struct UDHRayTracing_IsDX12Active_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Dungeonhaven.DHRayTracing.GetDesiredDlssMode
struct UDHRayTracing_GetDesiredDlssMode_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Dungeonhaven.DHRayTracing.CanSwitchRHI
struct UDHRayTracing_CanSwitchRHI_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Dungeonhaven.DHRayTracing.ApplyLevelSettings
struct UDHRayTracing_ApplyLevelSettings_Params
{
public:
	class FString                                LevelName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Dungeonhaven.DHReflectionHelper.SetFloatVariable
struct UDHReflectionHelper_SetFloatVariable_Params
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  VariableName;                                      // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D03[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function Dungeonhaven.DHReflectionHelper.SetBoolValue
struct UDHReflectionHelper_SetBoolValue_Params
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  VariableName;                                      // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNewValue;                                         // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D3C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function Dungeonhaven.DHReflectionHelper.ModifyFloatVariable
struct UDHReflectionHelper_ModifyFloatVariable_Params
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  VariableName;                                      // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Delta;                                             // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D73[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function Dungeonhaven.DHReflectionHelper.IsFunctionBoundToDelegate
struct UDHReflectionHelper_IsFunctionBoundToDelegate_Params
{
public:
	class UObject*                               FunctionContainer;                                 // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  FunctionName;                                      // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               DelegateContainer;                                 // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  DelegateName;                                      // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DB7[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Dungeonhaven.DHReflectionHelper.CallFunctionByName
struct UDHReflectionHelper_CallFunctionByName_Params
{
public:
	class UObject*                               FunctionContainer;                                 // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  FunctionName;                                      // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function Dungeonhaven.DHReflectionHelper.BindFunctionToDelegate
struct UDHReflectionHelper_BindFunctionToDelegate_Params
{
public:
	class UObject*                               FunctionContainer;                                 // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  FunctionName;                                      // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               DelegateContainer;                                 // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  DelegateName;                                      // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBind;                                             // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E4C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function Dungeonhaven.DHSaveHelper.RestoreSaveBackup
struct UDHSaveHelper_RestoreSaveBackup_Params
{
public:
	int32                                        UserIndex;                                         // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NSlotNumber;                                       // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Dungeonhaven.DHSaveHelper.QueueSaveBackup
struct UDHSaveHelper_QueueSaveBackup_Params
{
public:
	int32                                        NSlotNumber;                                       // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UserIndex;                                         // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Dungeonhaven.DHSaveHelper.IsRestoreOperationInProgress
struct UDHSaveHelper_IsRestoreOperationInProgress_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Dungeonhaven.DHSaveHelper.ImportLastGenSave
struct UDHSaveHelper_ImportLastGenSave_Params
{
public:
	int32                                        UserIndex;                                         // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Dungeonhaven.DHSaveHelper.HasSaveBackup
struct UDHSaveHelper_HasSaveBackup_Params
{
public:
	class FString                                SlotName;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UserIndex;                                         // 0x10(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x14(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FB8[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function Dungeonhaven.DHSaveHelper.DHSaveGameToSlot_Asynch
struct UDHSaveHelper_DHSaveGameToSlot_Asynch_Params
{
public:
	class USaveGame*                             SaveGameObject;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SlotName;                                          // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UserIndex;                                         // 0x18(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         BackupSave;                                        // 0x1C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1D(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2008[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function Dungeonhaven.DHSaveHelper.DHLoadGameFromSlot
struct UDHSaveHelper_DHLoadGameFromSlot_Params
{
public:
	class FString                                SlotName;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UserIndex;                                         // 0x10(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2046[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USaveGame*                             ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Dungeonhaven.ExposedCActor.GetCurrentStreamingLevelName
struct AExposedCActor_GetCurrentStreamingLevelName_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function Dungeonhaven.KeyBindingUtil.RemoveAxisBinding
struct UKeyBindingUtil_RemoveAxisBinding_Params
{
public:
	struct FInputAxis                            BindingToRemove;                                   // 0x0(0x40)(Parm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2149[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function Dungeonhaven.KeyBindingUtil.RemoveActionBinding
struct UKeyBindingUtil_RemoveActionBinding_Params
{
public:
	struct FInputAction                          BindingToRemove;                                   // 0x0(0x40)(Parm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2172[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// Function Dungeonhaven.KeyBindingUtil.ReBindAxisKey
struct UKeyBindingUtil_ReBindAxisKey_Params
{
public:
	struct FInputAxis                            CurrentBinding;                                    // 0x0(0x40)(Parm, NativeAccessSpecifierPublic)
	struct FInputAxis                            NewBinding;                                        // 0x40(0x40)(Parm, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// Function Dungeonhaven.KeyBindingUtil.ReBindActionKey
struct UKeyBindingUtil_ReBindActionKey_Params
{
public:
	struct FInputAction                          CurrentBinding;                                    // 0x0(0x40)(Parm, NativeAccessSpecifierPublic)
	struct FInputAction                          NewBinding;                                        // 0x40(0x40)(Parm, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function Dungeonhaven.KeyBindingUtil.GetInputAxisFromMouseButtonEvent
struct UKeyBindingUtil_GetInputAxisFromMouseButtonEvent_Params
{
public:
	struct FPointerEvent                         MouseEvent;                                        // 0x0(0x70)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FInputAxis                            ReturnValue;                                       // 0x70(0x40)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function Dungeonhaven.KeyBindingUtil.GetInputAxisFromMouseAxisEvent
struct UKeyBindingUtil_GetInputAxisFromMouseAxisEvent_Params
{
public:
	struct FPointerEvent                         MouseEvent;                                        // 0x0(0x70)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FInputAxis                            ReturnValue;                                       // 0x70(0x40)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function Dungeonhaven.KeyBindingUtil.GetInputAxisFromKeyEvent
struct UKeyBindingUtil_GetInputAxisFromKeyEvent_Params
{
public:
	struct FKeyEvent                             KeyEvent;                                          // 0x0(0x38)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FInputAxis                            ReturnValue;                                       // 0x38(0x40)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function Dungeonhaven.KeyBindingUtil.GetInputActionFromMouseButtonEvent
struct UKeyBindingUtil_GetInputActionFromMouseButtonEvent_Params
{
public:
	struct FPointerEvent                         MouseEvent;                                        // 0x0(0x70)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FInputAction                          ReturnValue;                                       // 0x70(0x40)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function Dungeonhaven.KeyBindingUtil.GetInputActionFromKeyEvent
struct UKeyBindingUtil_GetInputActionFromKeyEvent_Params
{
public:
	struct FKeyEvent                             KeyEvent;                                          // 0x0(0x38)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FInputAction                          ReturnValue;                                       // 0x38(0x40)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Dungeonhaven.KeyBindingUtil.GetAllBindedInputAxis
struct UKeyBindingUtil_GetAllBindedInputAxis_Params
{
public:
	TArray<struct FInputAxis>                    InputAxis;                                         // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Dungeonhaven.KeyBindingUtil.GetAllBindedInputActions
struct UKeyBindingUtil_GetAllBindedInputActions_Params
{
public:
	TArray<struct FInputAction>                  Actions;                                           // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// Function Dungeonhaven.KeyBindingUtil.AddAxisBinding
struct UKeyBindingUtil_AddAxisBinding_Params
{
public:
	struct FInputAxis                            NewBinding;                                        // 0x0(0x40)(Parm, NativeAccessSpecifierPublic)
	struct FInputAxis                            CurrentBinding;                                    // 0x40(0x40)(Parm, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// Function Dungeonhaven.KeyBindingUtil.AddActionBinding
struct UKeyBindingUtil_AddActionBinding_Params
{
public:
	struct FInputAction                          NewBinding;                                        // 0x0(0x40)(Parm, NativeAccessSpecifierPublic)
	struct FInputAction                          CurrentBinding;                                    // 0x40(0x40)(Parm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Dungeonhaven.SignificanceActor.SetSignificanceBP
struct ASignificanceActor_SetSignificanceBP_Params
{
public:
	enum class EDHSignificanceLevel              SignificanceLevel;                                 // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Dungeonhaven.UsableIndicatorWidget.UpdateIndicatorVisibility
struct UUsableIndicatorWidget_UpdateIndicatorVisibility_Params
{
public:
	struct FVector                               VecWorldPosition;                                  // 0x0(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_248F[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}
}


