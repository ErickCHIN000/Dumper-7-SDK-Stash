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

// 0x10 (0x10 - 0x0)
// Function Goat2Mobile.GGCheapCableComponent.SetAttachEndToComponent
struct UGGCheapCableComponent_SetAttachEndToComponent_Params
{
public:
	class USceneComponent*                       Component;                                         // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SocketName;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Goat2Mobile.GGCheapCableComponent.SetAttachEndTo
struct UGGCheapCableComponent_SetAttachEndTo_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ComponentProperty;                                 // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SocketName;                                        // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Goat2Mobile.GGCheapCableComponent.ReplaceWithCheapCableComponent
struct UGGCheapCableComponent_ReplaceWithCheapCableComponent_Params
{
public:
	class UCableComponent*                       CableComponent;                                    // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGGCheapCableComponent*                ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Goat2Mobile.GGMobileContextualTouchWidget.OnIntroFinished
struct UGGMobileContextualTouchWidget_OnIntroFinished_Params
{
public:
	class AGGIntro*                              Intro;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function Goat2Mobile.GGMobileControlsLayoutBike.OnMenuOpened
struct UGGMobileControlsLayoutBike_OnMenuOpened_Params
{
public:
	struct FGameplayTag                          InMenuTag;                                         // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMenuNavigationContext                Context;                                           // 0x8(0x28)(Parm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Goat2Mobile.GGMobileControlsLayoutBike.OnEnterVehicle
struct UGGMobileControlsLayoutBike_OnEnterVehicle_Params
{
public:
	class AGGVehicle*                            Vehicle;                                           // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsDriver;                                          // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7F2[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGCharacter*                          Driver;                                            // 0x10(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Goat2Mobile.GGMobileControlsLayoutBrowsing.SetBrowsingText
struct UGGMobileControlsLayoutBrowsing_SetBrowsingText_Params
{
public:
	class FText                                  BrowsingText;                                      // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Goat2Mobile.GGMobileControlsLayoutDefault.UpdateTargetInteractable
struct UGGMobileControlsLayoutDefault_UpdateTargetInteractable_Params
{
public:
	class UObject*                               Interactable;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Goat2Mobile.GGMobileControlsLayoutDefault.ToggleGoatEggVisibility
struct UGGMobileControlsLayoutDefault_ToggleGoatEggVisibility_Params
{
public:
	bool                                         bEnteredEgg;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function Goat2Mobile.GGMobileControlsLayoutDefault.OnRagdollEnabled
struct UGGMobileControlsLayoutDefault_OnRagdollEnabled_Params
{
public:
	class ULSCharacterMovementComponent*         MovementComp;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ACharacter*                            RagdollingCharacter;                               // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRagdollStateChangeSettings           StateChangeSettings;                               // 0x10(0x68)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function Goat2Mobile.GGMobileControlsLayoutDefault.OnMenuOpened
struct UGGMobileControlsLayoutDefault_OnMenuOpened_Params
{
public:
	struct FGameplayTag                          InMenuTag;                                         // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMenuNavigationContext                Context;                                           // 0x8(0x28)(Parm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Goat2Mobile.GGMobileControlsLayoutDefault.OnIntroFinished
struct UGGMobileControlsLayoutDefault_OnIntroFinished_Params
{
public:
	class AGGIntro*                              Intro;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Goat2Mobile.GGMobileControlsLayoutDefault.OnInteractButtonUpdatedVisibility
struct UGGMobileControlsLayoutDefault_OnInteractButtonUpdatedVisibility_Params
{
public:
	enum class ESlateVisibility                  NewVisibility;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Goat2Mobile.GGMobileControlsLayoutDefault.OnGoatReleased
struct UGGMobileControlsLayoutDefault_OnGoatReleased_Params
{
public:
	class AActor*                                CatchedActor;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Catcher;                                           // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// Function Goat2Mobile.GGMobileControlsLayoutDefault.OnGoatLanded
struct UGGMobileControlsLayoutDefault_OnGoatLanded_Params
{
public:
	struct FHitResult                            Hit;                                               // 0x0(0x88)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Goat2Mobile.GGMobileControlsLayoutDefault.OnGoatGearChanged
struct UGGMobileControlsLayoutDefault_OnGoatGearChanged_Params
{
public:
	class AGGGoat*                               Goat;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Goat2Mobile.GGMobileControlsLayoutDefault.OnEnterVehicle
struct UGGMobileControlsLayoutDefault_OnEnterVehicle_Params
{
public:
	class AGGVehicle*                            Vehicle;                                           // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsDriver;                                          // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8FD[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGCharacter*                          Driver;                                            // 0x10(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Goat2Mobile.GGMobileControlsLayoutDefault.OnCinematicUpdated
struct UGGMobileControlsLayoutDefault_OnCinematicUpdated_Params
{
public:
	bool                                         bCinematicFinished;                                // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function Goat2Mobile.GGMobileControlsLayoutDefault.OnCharacterTeleported
struct UGGMobileControlsLayoutDefault_OnCharacterTeleported_Params
{
public:
	class AGGCharacter*                          Character;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_94A[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            OldTransform;                                      // 0x10(0x30)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Goat2Mobile.GGMobileControlsLayoutVehicle.ReBindEnterAndExitVehicleDelegates
struct UGGMobileControlsLayoutVehicle_ReBindEnterAndExitVehicleDelegates_Params
{
public:
	class AGGGoat*                               OldGoat;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AGGGoat*                               NewGoat;                                           // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Goat2Mobile.GGMobileControlsLayoutVehicle.OnExitVehicle
struct UGGMobileControlsLayoutVehicle_OnExitVehicle_Params
{
public:
	class AGGCharacter*                          Character;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AGGVehicle*                            Vehicle;                                           // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Goat2Mobile.GGMobileControlsLayoutVehicle.OnEnterVehicle
struct UGGMobileControlsLayoutVehicle_OnEnterVehicle_Params
{
public:
	class AGGCharacter*                          Character;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AGGVehicle*                            Vehicle;                                           // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Goat2Mobile.GGMobileControlsLayoutVehicle.OnCinematicUpdated
struct UGGMobileControlsLayoutVehicle_OnCinematicUpdated_Params
{
public:
	bool                                         bCinematicFinished;                                // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Goat2Mobile.GGMobileControlsUserWidget.UpdateTeleportationProgress
struct UGGMobileControlsUserWidget_UpdateTeleportationProgress_Params
{
public:
	float                                        CurrentTimeHeld;                                   // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeToFinish;                                      // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Goat2Mobile.GGMobileControlsUserWidget.ResetUI
struct UGGMobileControlsUserWidget_ResetUI_Params
{
public:
	class AGGGoat*                               OldGoat;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AGGGoat*                               NewGoat;                                           // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Goat2Mobile.GGMobileControlsUserWidget.OnStartedBrowsing
struct UGGMobileControlsUserWidget_OnStartedBrowsing_Params
{
public:
	class FText                                  BrowsingText;                                      // 0x0(0x18)(ConstParm, Parm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Goat2Mobile.GGMobileControlsUserWidget.OnQuestDiscovered
struct UGGMobileControlsUserWidget_OnQuestDiscovered_Params
{
public:
	float                                        SplashDuration;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Goat2Mobile.GGMobileControlsUserWidget.OnMenuExited
struct UGGMobileControlsUserWidget_OnMenuExited_Params
{
public:
	class UUserWidget*                           Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Goat2Mobile.GGMobileControlsUserWidget.OnMenuEntered
struct UGGMobileControlsUserWidget_OnMenuEntered_Params
{
public:
	class UUserWidget*                           Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Goat2Mobile.GGMobileControlsUserWidget.OnLobbyUpdate
struct UGGMobileControlsUserWidget_OnLobbyUpdate_Params
{
public:
	enum class EGGLobbyUpdateType                LobbyUpdateType;                                   // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Goat2Mobile.GGMobileControlsUserWidget.OnLoadingScreenRemoved
struct UGGMobileControlsUserWidget_OnLoadingScreenRemoved_Params
{
public:
	class AGGPlayerController*                   Controller;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELoadingScreenType                Type;                                              // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERemovalReason                    RemovalReason;                                     // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BFE[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function Goat2Mobile.GGMobileControlsUserWidget.OnIntroFinished
struct UGGMobileControlsUserWidget_OnIntroFinished_Params
{
public:
	class AGGIntro*                              Intro;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Goat2Mobile.GGMobileControlsUserWidget.OnEnterVehicle
struct UGGMobileControlsUserWidget_OnEnterVehicle_Params
{
public:
	class AGGVehicle*                            Vehicle;                                           // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsDriver;                                          // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C52[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGCharacter*                          Driver;                                            // 0x10(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Goat2Mobile.GGMobileControlsUserWidget.OnEnterExitDamCannon
struct UGGMobileControlsUserWidget_OnEnterExitDamCannon_Params
{
public:
	bool                                         bIsInsideCannon;                                   // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Goat2Mobile.GGMobileControlsUserWidget.OnCinematicUpdated
struct UGGMobileControlsUserWidget_OnCinematicUpdated_Params
{
public:
	bool                                         bCinematicFinished;                                // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Goat2Mobile.GGMobileControlsUserWidget.GetImageMatchingActionInput
struct UGGMobileControlsUserWidget_GetImageMatchingActionInput_Params
{
public:
	class FName                                  ActionInput;                                       // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UImage*                                ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Goat2Mobile.GGMobileDistanceWarningWidget.OnToggleDistanceWarning
struct UGGMobileDistanceWarningWidget_OnToggleDistanceWarning_Params
{
public:
	bool                                         bShow;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


