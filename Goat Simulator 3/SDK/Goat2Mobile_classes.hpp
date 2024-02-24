#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x5E0 - 0x588)
// Class Goat2Mobile.GGCheapCableComponent
class UGGCheapCableComponent : public UStaticMeshComponent
{
public:
	struct FComponentReference                   AttachEndTo;                                       // 0x588(0x28)(Edit, NativeAccessSpecifierPublic)
	class FName                                  AttachEndToSocketName;                             // 0x5B0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               EndLocation;                                       // 0x5B8(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x5C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InitialLocation;                                   // 0x5C8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_78F[0xC];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGGCheapCableComponent* GetDefaultObj();

	void SetAttachEndToComponent(class USceneComponent* Component, class FName SocketName);
	void SetAttachEndTo(class AActor* Actor, class FName ComponentProperty, class FName SocketName);
	class UGGCheapCableComponent* ReplaceWithCheapCableComponent(class UCableComponent* CableComponent);
};

// 0x38 (0x68 - 0x30)
// Class Goat2Mobile.GGLevelStreamingGridAsset
class UGGLevelStreamingGridAsset : public UDataAsset
{
public:
	TSoftObjectPtr<class UWorld>                 StreamingManagerWorld;                             // 0x30(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GridSizeUnrealCM;                                  // 0x58(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GridCountX;                                        // 0x5C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GridCountY;                                        // 0x60(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_79C[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGGLevelStreamingGridAsset* GetDefaultObj();

};

// 0x220 (0x250 - 0x30)
// Class Goat2Mobile.GGLevelStreamingGridSubsystem
class UGGLevelStreamingGridSubsystem : public UEngineSubsystem
{
public:
	uint8                                        Pad_7A6[0x1F0];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UGGLevelStreamingGridAsset*            LevelStreamingGridAsset;                           // 0x220(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7A7[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGGLevelStreamingGridSubsystem* GetDefaultObj();

};

// 0x38 (0x298 - 0x260)
// Class Goat2Mobile.GGMobileContextualTouchWidget
class UGGMobileContextualTouchWidget : public UUserWidget
{
public:
	class UButton*                               ContextualButton;                                  // 0x260(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             IntroSequenceContextualButtonSize;                 // 0x268(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        IntroSequenceContextualButtonVerticalOffset;       // 0x270(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7BE[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGGMobileControlsLayoutDefault*        LayoutDefaultWidget;                               // 0x278(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGGIntroComponent*                     PCIntroComponent;                                  // 0x280(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7C2[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGGMobileContextualTouchWidget* GetDefaultObj();

	void OnIntroFinished(class AGGIntro* Intro);
	void ContextualButtonPressed();
};

// 0x0 (0x260 - 0x260)
// Class Goat2Mobile.GGMobileControlsLayoutBase
class UGGMobileControlsLayoutBase : public UUserWidget
{
public:

	static class UClass* StaticClass();
	static class UGGMobileControlsLayoutBase* GetDefaultObj();

};

// 0x18 (0x278 - 0x260)
// Class Goat2Mobile.GGMobileControlsLayoutBike
class UGGMobileControlsLayoutBike : public UGGMobileControlsLayoutBase
{
public:
	class UButton*                               JumpButton;                                        // 0x260(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UButton*                               ExitButton;                                        // 0x268(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGGVirtualJoystickWidget*              VirtualJoystickWidget;                             // 0x270(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGGMobileControlsLayoutBike* GetDefaultObj();

	void OnMenuOpened(const struct FGameplayTag& InMenuTag, const struct FMenuNavigationContext& Context);
	void OnExitVehicle();
	void OnEnterVehicle(class AGGVehicle* Vehicle, bool IsDriver, class AGGCharacter* Driver);
	void JumpReleased();
	void JumpPressed();
	void ExitPressed();
};

// 0x18 (0x278 - 0x260)
// Class Goat2Mobile.GGMobileControlsLayoutBrowsing
class UGGMobileControlsLayoutBrowsing : public UGGMobileControlsLayoutBase
{
public:
	class UButton*                               BrowseRightButton;                                 // 0x260(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UButton*                               BrowseLeftButton;                                  // 0x268(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UButton*                               BackButton;                                        // 0x270(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGGMobileControlsLayoutBrowsing* GetDefaultObj();

	void SetBrowsingText(class FText& BrowsingText);
	void BrowseRightButtonPressed();
	void BrowseLeftButtonPressed();
	void BackButtonPressed();
};

// 0x16D8 (0x1938 - 0x260)
// Class Goat2Mobile.GGMobileControlsLayoutDefault
class UGGMobileControlsLayoutDefault : public UGGMobileControlsLayoutBase
{
public:
	class UButton*                               JumpButton;                                        // 0x260(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UButton*                               HeadbuttButton;                                    // 0x268(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UButton*                               RagdollButton;                                     // 0x270(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UButton*                               AbilityButton;                                     // 0x278(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UButton*                               LickButton;                                        // 0x280(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UButton*                               TrickToggleButton;                                 // 0x288(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UButton*                               PassengerSeatButton;                               // 0x290(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UButton*                               InteractButton;                                    // 0x298(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGGVirtualJoystickWidget*              VirtualJoystickWidget;                             // 0x2A0(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UUserWidget*                           SkipIntroButton;                                   // 0x2A8(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UImage*                                JumpTutorialOverlay;                               // 0x2B0(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UImage*                                LickTutorialOverlay;                               // 0x2B8(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UImage*                                HeadbuttTutorialOverlay;                           // 0x2C0(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FButtonStyle                          InteractDefaultStyle;                              // 0x2C8(0x278)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FButtonStyle                          InteractVehicleStyle;                              // 0x540(0x278)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	uint8                                        Pad_9B0[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FButtonStyle                          JumpButtonDefaultStyle;                            // 0x7D0(0x278)(BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FButtonStyle                          JumpButtonGrindStyle;                              // 0xA48(0x278)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FButtonStyle                          TrickToggleButtonDisabledStyle;                    // 0xCC0(0x278)(BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FButtonStyle                          TrickToggleButtonEnabledStyle;                     // 0xF38(0x278)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FButtonStyle                          BikeInteractButtonStyle;                           // 0x11B0(0x278)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FButtonStyle                          PassengerButtonDefaultStyle;                       // 0x1428(0x278)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FButtonStyle                          BikePassengerButtonStyle;                          // 0x16A0(0x278)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class AActor>                    DamItCannon;                                       // 0x1918(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AGGGoat*                               ControlledGoat;                                    // 0x1920(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGGIntroComponent*                     PCIntroComponent;                                  // 0x1928(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_9C0[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGGMobileControlsLayoutDefault* GetDefaultObj();

	void UpdateTargetInteractable(class UObject* Interactable);
	void TrickTogglePressed();
	void ToggleGoatEggVisibility(bool bEnteredEgg);
	void PassengerSeatPressed();
	void OnRagdollEnabled(class ULSCharacterMovementComponent* MovementComp, class ACharacter* RagdollingCharacter, struct FRagdollStateChangeSettings& StateChangeSettings);
	void OnMenuOpened(const struct FGameplayTag& InMenuTag, const struct FMenuNavigationContext& Context);
	void OnIntroFinished(class AGGIntro* Intro);
	void OnInteractButtonUpdatedVisibility(enum class ESlateVisibility NewVisibility);
	void OnGoatReleased(class AActor* CatchedActor, class AActor* Catcher);
	void OnGoatLanded(struct FHitResult& Hit);
	void OnGoatGearChanged(class AGGGoat* Goat);
	void OnEnterVehicle(class AGGVehicle* Vehicle, bool IsDriver, class AGGCharacter* Driver);
	void OnCinematicUpdated(bool bCinematicFinished);
	void OnCharacterTeleported(class AGGCharacter* Character, struct FTransform& OldTransform);
	void JumpReleased();
	void JumpPressed();
	void InteractReleased();
	void InteractPressed();
	void HeadbuttUp();
	void Headbutt();
	void AbilityDown();
};

// 0x38 (0x298 - 0x260)
// Class Goat2Mobile.GGMobileControlsLayoutUFO
class UGGMobileControlsLayoutUFO : public UGGMobileControlsLayoutBase
{
public:
	class UButton*                               UFOEjectButton;                                    // 0x260(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UButton*                               UFOUpButton;                                       // 0x268(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UButton*                               UFODownButton;                                     // 0x270(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UButton*                               UFOShootButton;                                    // 0x278(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UButton*                               UFOBeamButton;                                     // 0x280(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGGVirtualJoystickWidget*              VirtualJoystickWidget;                             // 0x288(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A29[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGGMobileControlsLayoutUFO* GetDefaultObj();

	void UpButtonPressed();
	void ShootButtonPressed();
	void MovementButtonReleased();
	void EjectButtonPressed();
	void DownButtonPressed();
	void BeamButtonPressed();
};

// 0x48 (0x2A8 - 0x260)
// Class Goat2Mobile.GGMobileControlsLayoutVehicle
class UGGMobileControlsLayoutVehicle : public UGGMobileControlsLayoutBase
{
public:
	class UButton*                               GasButton;                                         // 0x260(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UButton*                               ReverseButton;                                     // 0x268(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UButton*                               BoostButton;                                       // 0x270(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UButton*                               AbilityButton;                                     // 0x278(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UButton*                               ExitVehicleButton;                                 // 0x280(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             PassengerBoostButtonLocation;                      // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AEC[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGGMobileControlsLayoutVehicle* GetDefaultObj();

	void ReverseReleased();
	void ReversePressed();
	void ReBindEnterAndExitVehicleDelegates(class AGGGoat* OldGoat, class AGGGoat* NewGoat);
	void OnExitVehicle(class AGGCharacter* Character, class AGGVehicle* Vehicle);
	void OnEnterVehicle(class AGGCharacter* Character, class AGGVehicle* Vehicle);
	void OnCinematicUpdated(bool bCinematicFinished);
	void GasReleased();
	void GasPressed();
	void ExitVehiclePressed();
};

// 0x68 (0x2C8 - 0x260)
// Class Goat2Mobile.GGMobileControlsUserWidget
class UGGMobileControlsUserWidget : public UUserWidget
{
public:
	class UButton*                               PauseButton;                                       // 0x260(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UButton*                               SettingsButton;                                    // 0x268(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UButton*                               SlowMotionButton;                                  // 0x270(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGGMobileControlsLayoutDefault*        DefaultControlsWidget;                             // 0x278(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGGMobileControlsLayoutVehicle*        VehicleControlsWidget;                             // 0x280(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGGMobileControlsLayoutUFO*            UFOControlsWidget;                                 // 0x288(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGGMobileControlsLayoutBike*           BikeControlsWidget;                                // 0x290(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGGMobileContextualTouchWidget*        ContextualTouchWidget;                             // 0x298(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGGMobileControlsLayoutBrowsing*       BrowsingControlsWidget;                            // 0x2A0(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGGIntroComponent*                     PCIntroComponent;                                  // 0x2A8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_CF6[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinTouchTime;                                      // 0x2BC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_CF8[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGGMobileControlsUserWidget* GetDefaultObj();

	void UpdateTeleportationProgress(float CurrentTimeHeld, float TimeToFinish);
	void SettingsButtonPressed();
	void ResetUI(class AGGGoat* OldGoat, class AGGGoat* NewGoat);
	void PauseButtonReleased();
	void PauseButtonPressed();
	void OnStoppedBrowsing();
	void OnStartedBrowsing(class FText BrowsingText);
	void OnQuestDiscovered(float SplashDuration);
	void OnMenuExited(class UUserWidget* Widget);
	void OnMenuEntered(class UUserWidget* Widget);
	void OnLobbyUpdate(enum class EGGLobbyUpdateType LobbyUpdateType);
	void OnLoadingScreenRemoved(class AGGPlayerController* Controller, enum class ELoadingScreenType Type, enum class ERemovalReason RemovalReason);
	void OnIntroFinished(class AGGIntro* Intro);
	void OnExitVehicle();
	void OnExitUFO();
	void OnEnterVehicle(class AGGVehicle* Vehicle, bool IsDriver, class AGGCharacter* Driver);
	void OnEnterUFO();
	void OnEnterExitDamCannon(bool bIsInsideCannon);
	void OnCinematicUpdated(bool bCinematicFinished);
	class UImage* GetImageMatchingActionInput(class FName& ActionInput);
	void DisableAllTutorialOverlays();
};

// 0x8 (0x268 - 0x260)
// Class Goat2Mobile.GGMobileDistanceWarningWidget
class UGGMobileDistanceWarningWidget : public UUserWidget
{
public:
	uint8                                        Pad_D8C[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGGMobileDistanceWarningWidget* GetDefaultObj();

	void OnToggleDistanceWarning(bool bShow);
};

// 0x8 (0x398 - 0x390)
// Class Goat2Mobile.GGMobileHUDUserWidget
class UGGMobileHUDUserWidget : public UGGHUDUserWidget
{
public:
	uint8                                        Pad_DAE[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGGMobileHUDUserWidget* GetDefaultObj();

};

// 0x50 (0x308 - 0x2B8)
// Class Goat2Mobile.GGMobileLODActor
class AGGMobileLODActor : public ALODActor
{
public:
	TMap<class FName, struct FMobileLODActorLevelData> SubActorNamesPerLevel;                             // 0x2B8(0x50)(NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AGGMobileLODActor* GetDefaultObj();

};

// 0x50 (0x280 - 0x230)
// Class Goat2Mobile.GGMobileLODRedirector
class AGGMobileLODRedirector : public AActor
{
public:
	TMap<class FName, struct FMobileLODRedirectorLevelData> LodActorToRedirectedSubActors;                     // 0x230(0x50)(NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AGGMobileLODRedirector* GetDefaultObj();

};

// 0x20 (0x50 - 0x30)
// Class Goat2Mobile.GGMobilePerformanceWarnings
class UGGMobilePerformanceWarnings : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_DFB[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxRenderFrameTimeMS;                              // 0x38(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MaxGameFrameTimeMS;                                // 0x3C(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MaxRHIFrameTimeMS;                                 // 0x40(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        MaxDrawCalls;                                      // 0x44(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        MaxDrawnPrimitives;                                // 0x48(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MaxUsedPhysicalMemoryMB;                           // 0x4C(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UGGMobilePerformanceWarnings* GetDefaultObj();

};

// 0x0 (0x7E0 - 0x7E0)
// Class Goat2Mobile.GGMobilePostProcessVolume
class AGGMobilePostProcessVolume : public APostProcessVolume
{
public:

	static class UClass* StaticClass();
	static class AGGMobilePostProcessVolume* GetDefaultObj();

};

// 0x0 (0x40 - 0x40)
// Class Goat2Mobile.GGPhysicsDebuggerSubsystem
class UGGPhysicsDebuggerSubsystem : public UTickableWorldSubsystem
{
public:

	static class UClass* StaticClass();
	static class UGGPhysicsDebuggerSubsystem* GetDefaultObj();

};

// 0x60 (0x290 - 0x230)
// Class Goat2Mobile.GGSeasonalContentManager
class AGGSeasonalContentManager : public AActor
{
public:
	TMap<struct FGameplayTag, struct FSeasonalLevels> SeasonalLevels;                                    // 0x230(0x50)(Edit, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UWorld>>         LevelsToLoad;                                      // 0x280(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AGGSeasonalContentManager* GetDefaultObj();

};

// 0x20 (0x50 - 0x30)
// Class Goat2Mobile.StaticMeshLoadingSubsystem
class UStaticMeshLoadingSubsystem : public UEngineSubsystem
{
public:
	uint8                                        Pad_E74[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UStaticMeshLoadingSubsystem* GetDefaultObj();

};

}


