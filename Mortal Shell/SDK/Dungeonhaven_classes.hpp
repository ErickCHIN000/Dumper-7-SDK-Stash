#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x268 - 0x230)
// Class Dungeonhaven.CertDialog
class UCertDialog : public UUserWidget
{
public:
	uint8                                        Pad_642[0x30];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class URichTextBlock*                        DialogText;                                        // 0x260(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UCertDialog* GetDefaultObj();

	void UpdateConfirmAction(bool bActive, class FText& Body);
	void UpdateCancelAction(bool bActive, class FText& Body);
	void OnActionConfirm();
	void OnActionCancel();
};

// 0x0 (0x28 - 0x28)
// Class Dungeonhaven.ConsoleBlueprintLibrary
class UConsoleBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UConsoleBlueprintLibrary* GetDefaultObj();

	bool IsGamepadAttached();
	bool IsConsole(class UObject* WorldContextObject);
	void IfPlatform(class UObject* WorldContextObject, enum class EPlatform* OutResult);
	void IfMobile(class UObject* WorldContextObject, enum class EBoolean* OutResult);
	void IfConsole(class UObject* WorldContextObject, enum class EBoolean* OutResult);
	enum class EPlatformGamepadType GetPlatformGamepadType(class UObject* WorldContextObject);
	enum class EPlatform GetPlatform();
	class FString GetCompressedKeyString(struct FKey& Key);
};

// 0x58 (0x80 - 0x28)
// Class Dungeonhaven.DHAchievementSaveGame
class UDHAchievementSaveGame : public USaveGame
{
public:
	int32                                        M_nVersion;                                        // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6F9[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EDHAchievement, struct FDHAchievementProgress> M_achievementProgress;                             // 0x30(0x50)(NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDHAchievementSaveGame* GetDefaultObj();

};

// 0x98 (0xC0 - 0x28)
// Class Dungeonhaven.DHAchievementSystem
class UDHAchievementSystem : public UBlueprintFunctionLibrary
{
public:
	uint8                                        Pad_75F[0x58];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDHAchievementSaveGame*                M_pCurrentAchievementSave;                         // 0x80(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_762[0x38];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDHAchievementSystem* GetDefaultObj();

	void SaveAchievementProgress();
	void LoadAchievementProgress();
	void IncrementAchievementProgress(enum class EDHAchievement EDHAchievement, int32 NCount);
	class UDHAchievementSystem* GetDHAchievementSystem();
};

// 0x28 (0x60 - 0x38)
// Class Dungeonhaven.DHAnimNotify_ActivateComponent
class UDHAnimNotify_ActivateComponent : public UAnimNotify
{
public:
	struct FDHComponentName                      ComponentName;                                     // 0x38(0x20)(Edit, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	bool                                         bReset;                                            // 0x58(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_77B[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDHAnimNotify_ActivateComponent* GetDefaultObj();

};

// 0x0 (0x60 - 0x60)
// Class Dungeonhaven.DHAnimNotify_ActivateComponentAudio
class UDHAnimNotify_ActivateComponentAudio : public UDHAnimNotify_ActivateComponent
{
public:

	static class UClass* StaticClass();
	static class UDHAnimNotify_ActivateComponentAudio* GetDefaultObj();

};

// 0x70 (0x100 - 0x90)
// Class Dungeonhaven.DHAnimNotify_PlayParticleEffectIfBool
class UDHAnimNotify_PlayParticleEffectIfBool : public UAnimNotify_PlayParticleEffect
{
public:
	TMap<class FName, class UParticleSystem*>    PSTemplateMap;                                     // 0x90(0x50)(Edit, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FDHBoolName                           BoolName;                                          // 0xE0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class UClass*                                OwnerClassRestriction;                             // 0xF0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7A3[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDHAnimNotify_PlayParticleEffectIfBool* GetDefaultObj();

};

// 0x0 (0x58 - 0x58)
// Class Dungeonhaven.DHAnimNotify_PlaySoundAndRegister
class UDHAnimNotify_PlaySoundAndRegister : public UAnimNotify_PlaySound
{
public:

	static class UClass* StaticClass();
	static class UDHAnimNotify_PlaySoundAndRegister* GetDefaultObj();

	void OnSoundSpawned(class USkeletalMeshComponent* MeshComp, class UAudioComponent* Spawned);
};

// 0x90 (0xC0 - 0x30)
// Class Dungeonhaven.DHAnimNotify_PlayParticleEffect
class UDHAnimNotify_PlayParticleEffect : public UAnimNotifyState
{
public:
	struct FDHBoolName                           ConditionName;                                     // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	class UParticleSystem*                       PSTemplate;                                        // 0x40(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FName, class UParticleSystem*>    PSTemplateMap;                                     // 0x48(0x50)(Edit, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FName                                  SocketName;                                        // 0x98(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LocationOffset;                                    // 0xA0(0xC)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              RotationOffset;                                    // 0xAC(0xC)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bDestroyAtEnd;                                     // 0xB8(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7FD[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDHAnimNotify_PlayParticleEffect* GetDefaultObj();

};

// 0x18 (0x70 - 0x58)
// Class Dungeonhaven.DHAnimNotifyState_TrailIf
class UDHAnimNotifyState_TrailIf : public UAnimNotifyState_Trail
{
public:
	struct FDHBoolName                           BoolName;                                          // 0x58(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class UClass*                                OwnerClassRestriction;                             // 0x68(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UDHAnimNotifyState_TrailIf* GetDefaultObj();

};

// 0x18 (0x4D0 - 0x4B8)
// Class Dungeonhaven.DHCharacter
class ADHCharacter : public ACharacter
{
public:
	bool                                         SignificanceEnabled;                               // 0x4B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DowngradeSignificanceFromFacing;                   // 0x4B9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_838[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SignificanceRangeMultiplier;                       // 0x4BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                CurrentLockOnTarget;                               // 0x4C0(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AudioRange;                                        // 0x4C8(0x4)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_83D[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ADHCharacter* GetDefaultObj();

	void SetSignificanceBP(enum class EDHSignificanceLevel SignificanceLevel);
	void FadeOutAudio();
	void FadeInAudio();
};

// 0x20 (0x630 - 0x610)
// Class Dungeonhaven.DHCharacterMovementComponent
class UDHCharacterMovementComponent : public UCharacterMovementComponent
{
public:
	float                                        RotationSwitchSpeed;                               // 0x610(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInterpolateRotationOutOfOrientToMovement;         // 0x614(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStopRootMotionIfCharWouldFallDown;                // 0x615(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_883[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ADHCharacter*                          DHOwner;                                           // 0x618(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_884[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDHCharacterMovementComponent* GetDefaultObj();

	void SwitchToOrientToMovement();
	void SwitchToControllerRotation();
};

// 0x40 (0xF0 - 0xB0)
// Class Dungeonhaven.DHConsoleExtensionComponent
class UDHConsoleExtensionComponent : public UActorComponent
{
public:
	class FString                                PreFix;                                            // 0xB0(0x10)(Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class FString>                        AdditionalFunctionsToRegister;                     // 0xC0(0x10)(Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRegisterForThisActorInstance;                     // 0xD0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_890[0x1F];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDHConsoleExtensionComponent* GetDefaultObj();

};

// 0x18 (0x238 - 0x220)
// Class Dungeonhaven.DHFrogBase
class ADHFrogBase : public AActor
{
public:
	uint8                                        Pad_8A2[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMeshComponent*                  FrogMesh;                                          // 0x230(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class ADHFrogBase* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Dungeonhaven.DHFunctionLibrary
class UDHFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UDHFunctionLibrary* GetDefaultObj();

	void UpdateVFXLocationsAlongSplineFromEnd(class USplineComponent* Spline, float InitialVFXDistance, float VFXDistance, TArray<class UParticleSystemComponent*>& VFXList, class UParticleSystem* PS);
	void UpdateOverlapsOnComponent(class USceneComponent* Component);
	void UnpauseTimerByHandle(class AActor* Actor, struct FTimerHandle& Handle);
	bool TryToLaunchURL(const class FString& URL, bool bCopyURLToClipboard);
	void SpawnVFXAlongSplineFromEnd(class USplineComponent* Spline, float StartDistance, float DistanceBetweenSpawns, class UParticleSystem* PS);
	void SmoothSpline(class USplineComponent* Spline, TArray<struct FVector>& Points);
	void SimulateVFXMovementAlongSplineFromEnd(class USplineComponent* Spline, float DeltaSeconds, float InitialVFXDistance, float VFXDistance, float Acceleration, float MaxVelocity, TArray<class UParticleSystemComponent*>& VFXList, TArray<float>& CurrentVelocityList, class UParticleSystem* PS);
	void SimulateClickOnInputKeySelector(class UInputKeySelector* Selector);
	void SetWidgetNavigation(bool AllowAnalog, bool AllowKey, bool AllowTab);
	void SetRootMotionTranslationScale(class ACharacter* Character, float ScaleValue);
	void SetForceFeedbackScale(class UObject* WorldContextObject, float ScaleValue, bool bSaveToConfig);
	void SetCameraMoveableWhenPaused(class UObject* WorldContextObject, bool bNewIsMoveable);
	void SetAllUsersFocusToWidget(class UWidget* PWidget);
	class FName RowName(struct FDHDataTableID& ID);
	void RemoveDisabledEmitters(class UParticleSystem* ParticleSystem);
	void RebuildNavMesh(class UObject* WorldContextObject, class UNavigationSystemV1* NavSystem);
	void PauseTimerByHandle(class AActor* Actor, struct FTimerHandle& Handle);
	bool IsTimerActiveByHandle(class AActor* Actor, struct FTimerHandle& Handle);
	bool IsGOGBuild();
	float InterpolateDeceleration(float A, float B, float T);
	float GetTimeSeconds(class AActor* Actor);
	float GetTimerRemainingTimebyHandle(class AActor* Actor, struct FTimerHandle& Handle);
	float GetScaledPlayRate(class UAnimInstance* AnimInstance);
	struct FVector GetRootMotionVelocity(class UCharacterMovementComponent* CharMovement);
	float GetRootMotionForwardDeltaFromSlot(class USkeletalMeshComponent* SkeletalMesh, class UAnimMontage* Montage, class FName SlotName);
	float GetRootMotionForwardDeltaFromAnimation(class UAnimSequence* Sequence);
	class FString GetOnlineSubsystemID(class UObject* WorldContextObject);
	float GetForceFeedbackScale(class UObject* WorldContextObject);
	class UObject* GetDefaultObject(class UClass* Class);
	class FString GetCurrentStreamingLevelName(class AActor* ReferenceActor);
	class FName GetCurrentPersistentLevelName(class UObject* WorldContextObject);
	class ULevel* GetCurrentPersistentLevel(class UObject* WorldContextObject);
	bool GetClosestHitLocationToPointAllBones(class USkeletalMeshComponent* Mesh, struct FVector& SourceLocation, struct FVector* OutLocation, class FName* OutBoneName);
	bool GetClosestHitLocationToPoint(class USkeletalMeshComponent* Mesh, struct FVector& SourceLocation, const TArray<class FName>& PossibleBoneNames, struct FVector* OutLocation, class FName* OutBoneName);
	class FName GetBoneNameFromBodyIndex(class USkeletalMeshComponent* SkeletalMeshComponent, int32 BodyIndex);
	float GetAllRootMotionForwardDeltaFromMontage(class UAnimMontage* Montage);
	class FString GetActorNameStr(class UObject* WorldContextObject);
	class FName GetActorName(class UObject* WorldContextObject);
	class UAnimMontage* GetActiveMontage(class USkeletalMeshComponent* SkeletalMesh, float* OutPosition);
	void DrawSpline(class USplineComponent* Spline, float SegmentLength, struct FLinearColor& Color, float Thickness, float Duration);
	void DrawRangeAttackPath(class UObject* WorldContextObject, struct FVector& StartPos, struct FVector& TargetPos, float VelocitySize, float GravityScale, bool bPreferLargeArc, int32 Precision, float LifeTime, float Thickness);
	void CopyMeshComponentVertextColors(class UStaticMeshComponent* SourceMesh, class UStaticMeshComponent* DstMesh);
	void ClearAndInvalidateTimer(class AActor* Actor, struct FTimerHandle& Handle);
	bool CircleCircleIntersection(struct FVector2D& P0, float R0, struct FVector2D& P1, float R1, struct FVector2D* Result0, struct FVector2D* Result1);
	TArray<class FName> CheckProperties(class UObject* Object);
	struct FVector CalcRangeAttackVelocityFlexible(struct FVector& StartPos, struct FVector& TargetPos, float VelocitySize, float MaxVelocity, float GravityScale, bool bPreferLargeArc);
	struct FVector CalcRangeAttackVelocity(struct FVector& StartPos, struct FVector& TargetPos, float VelocitySize, float GravityScale, bool bPreferLargeArc);
	struct FVector CalcRangeAttackTargetLocation(struct FVector& StartPos, struct FVector& TargetPos, struct FVector& TargetVel, float VelocitySize);
	struct FVector CalcCryptBossThrowEndLocation(class UObject* WorldContextObject, struct FVector& BossStartPos, struct FVector& SwordPos, float SwordLocalDistance2D, float SwordAngle2DDeg, bool bDrawDebug);
};

// 0x0 (0xE30 - 0xE30)
// Class Dungeonhaven.DHGameEngine
class UDHGameEngine : public UGameEngine
{
public:

	static class UClass* StaticClass();
	static class UDHGameEngine* GetDefaultObj();

};

// 0x2E8 (0x480 - 0x198)
// Class Dungeonhaven.DHGameInstance
class UDHGameInstance : public UGameInstance
{
public:
	uint8                                        Pad_134D[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnRefreshProfileDisplayName;                       // 0x1A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class FString                                CachedProfileDisplayName;                          // 0x1B0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLaunchedFromActivity;                             // 0x1C0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLaunchedFromStormModeActivity;                    // 0x1C1(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1357[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CurrentActivity;                                   // 0x1C8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1358[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, class FString>             MapList;                                           // 0x1E0(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, Protected, NativeAccessSpecifierProtected)
	TArray<class UTextureRenderTarget2D*>        RenderTargetPool;                                  // 0x230(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UTextureRenderTarget2D*>        RenderTargetPoolAll;                               // 0x240(0x10)(ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1361[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bForcePS4Icons;                                    // 0x254(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bForceEnableCheatConsoleCommands;                  // 0x255(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1366[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                MainMenuMap;                                       // 0x258(0x10)(ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_136B[0xF8];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class ULocalPlayer*                          M_pLocalPlayerControllerPull;                      // 0x360(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1370[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnTwitchDropEvent;                                 // 0x370(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnRefeshStormModeEntitlement;                      // 0x380(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1376[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDHAchievementSystem*                  M_pDHAchievementSystem;                            // 0x398(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                M_pDHRayTracingSettingsBlueprint;                  // 0x3A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDHRayTracing*                         M_pDHRayTracingSettings;                           // 0x3A8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bMusicDLCAvailableInPIE;                           // 0x3B0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_137B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                MusicDlcAssetPath;                                 // 0x3B8(0x10)(Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                MusicDLCTestAsset;                                 // 0x3C8(0x10)(Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1381[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<struct FSoftObjectPath, class FString>  RichPresenceMapping;                               // 0x3E0(0x50)(Edit, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1383[0x34];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bForceEnableStormMode;                             // 0x464(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1387[0xB];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FDHTwitchDrop>                 UnprocessedTwitchDrops;                            // 0x470(0x10)(BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UDHGameInstance* GetDefaultObj();

	bool WelcomeScreenEnabled();
	bool UserHasStormModeDLC();
	void UpdateStormModeDLCEntitlement();
	void UpdateStormModeActivitiyState(int32 NProgress);
	void UpdateCampaignActivitiyState(int32 NProgress);
	void TestSeriesS30FPS(bool CapAt30FPS);
	void TestMusicFromDLC(class FName MusicName);
	void TestControllerDisconnect();
	void TestChangeProfile();
	void TestAdvancedTrigger();
	void SmokeTest_Stop();
	void SmokeTest_Start();
	void ShowStorePage_MusicDLC();
	bool ShouldForcePS4Icons();
	void SetSeriesS60FPS();
	void SetSeriesS30FPS();
	void SetRichPresenceText(const class FString& PresenceID);
	void SaveGame();
	void ReturnRenderTarget(class UTextureRenderTarget2D* RenderTarget);
	void RefreshPlatformLanguage(const class FString& CurrentLanguage);
	void RefreshMapList();
	void QueryTwitchEntitlements();
	void OnWorldCleanup(class UWorld* World, bool bSessionEnded, bool bCleanupResources);
	void OnUnprocessedTwitchDropsUpdatedBP();
	void OnLogosComplete();
	void OnIdealLanguageDetermined(const class FString& CultureDetermined);
	void OnChangeProfile(int32 EventUserIndex);
	void OnApplicationWillEnterBackground();
	class USoundBase* LoadMusicFromDLC(class FName MusicName);
	void LoadDHMap(class UObject* WorldContextObject, class FName MapName);
	bool IsXboxOneSeriesS();
	bool IsShippingBuild();
	bool IsMusicDLCOwned();
	bool IsMusicDLCInstalled();
	bool IsMusicDLCAvailable();
	bool IsInKeyboardMode();
	bool IsEditor();
	void GetUnitedTwitchDropList(TArray<struct FDHTwitchDrop>& Drops, TArray<struct FDHTwitchDrop>* OutDrops);
	class UDHRayTracing* GetRayTracingSettings();
	int32 GetPrimaryUserIndex();
	int32 GetPrimaryControllerIndex();
	enum class EPlatformSKU GetPlatformSKU();
	class FString GetPathForMap(class UObject* WorldContextObject, class FName MapName);
	void GetNewUnprocessedTwitchDrops(TArray<struct FDHTwitchDrop>& ProcessedDrops, TArray<struct FDHTwitchDrop>* OutDrops);
	class UDHGameInstance* GetInstance(class UObject* WorldContextObject);
	class FString GetBuildVersionString();
	void ForceSaveBackup(int32 NSlotNumber, int32 UserIndex);
	void DetermineIdealLanguage(TArray<class FString>& SupportedLanguages);
	void DebugShowStorePage();
	void DebugShowAchievementProgress(bool bShow);
	void DebugSetAchievementProgress(enum class EDHAchievement EAchievement, int32 NProgress);
	void DebugIncrementAchievementProgress(enum class EDHAchievement EAchievement, int32 NCount);
	void DebugClearAchievements();
	void DebugActivity_Start(const class FString& ActivityId);
	void DebugActivity_Resume(const class FString& ActivityId, uint32 NProgress);
	void DebugActivity_ResetAll();
	void DebugActivity_End(const class FString& ActivityId);
	void DebugActivity_Availability(const class FString& ActivityId, bool bEnabled);
	void ClearQueuedActivity();
	class UTextureRenderTarget2D* ClaimRenderTarget(int32 Width, int32 Height, enum class ETextureRenderTargetFormat Format);
	void CheckDLCEntitlementWithNamespace(const class FString& CatalogID, const class FString& Namespace);
	void CheckDLCEntitlement(const class FString& CatalogID);
	void ChangePermanentRichPresenceTextOverride(const class FString& PresenceID, bool bSet);
	bool AreConsoleCheatsEnabled();
	void AddTemporaryRichPresenceTextOverride(const class FString& PresenceID, float DurationSeconds);
};

// 0x100 (0x408 - 0x308)
// Class Dungeonhaven.DHGameMode
class ADHGameMode : public AGameMode
{
public:
	TSet<class FName>                            CurrentChangedActorSet;                            // 0x308(0x50)(BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	TMap<class FName, struct FDHActorData>       CurrentActorData;                                  // 0x358(0x50)(BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	float                                        FrogInactiveCheckTimeDelta;                        // 0x3A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        FrogMinHopCount;                                   // 0x3AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        FrogMaxHopCount;                                   // 0x3B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        FrogJumpStartTime;                                 // 0x3B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        FrogJumpEndTime;                                   // 0x3B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        FrogHorizontalMovementStartTime;                   // 0x3BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        FrogHorizontalMovementEndTime;                     // 0x3C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        FrogWaitBetweenHopsMin;                            // 0x3C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        FrogWaitBetweenHopsMax;                            // 0x3C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        FrogHopDuration;                                   // 0x3CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        FrogJumpHorizontalDelta;                           // 0x3D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        FrogMaxDistanceFromStartLocation;                  // 0x3D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        FrogActiveDistanceThreshold;                       // 0x3D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_161A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FDHFrog>                       ActiveFrogs;                                       // 0x3E0(0x10)(BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class ADHFrogBase*>                   InactiveFrogs;                                     // 0x3F0(0x10)(BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_161E[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ADHGameMode* GetDefaultObj();

	void SetMyNamedInt(class UObject* WorldContextObject, class FName VariableName, int32 Value);
	void SetMyInt(class UObject* WorldContextObject, int32 Value);
	void SetMeEnabled(class UObject* WorldContextObject, bool bEnabledByDefault, bool bEnabled);
	void SecretMagic(const class FString& PW);
	void RemoveMyNameFromChangedSet(class UObject* WorldContextObject);
	void RemoveActorNameFromChangedSet(class AActor* Actor);
	void OnPreBeginPlay();
	bool IsMyNameInChangedSet(class UObject* WorldContextObject);
	bool IsActorNameInChangedSet(class AActor* Actor);
	int32 GetMyNamedInt(class UObject* WorldContextObject, class FName VariableName);
	int32 GetMyInt(class UObject* WorldContextObject);
	class FName GetLevelNameFromActor(class AActor* Actor);
	class ADHGameMode* GetDHGameMode(class UObject* WorldContextObject);
	class FName ConstructNameFromPrefixLevelAndActor(class AActor* Actor, const class FString& PreFix);
	void CheckInactiveFrogs();
	bool AmIEnabled(class UObject* WorldContextObject, bool bEnabledByDefault);
	void AddMyNameToChangedSet(class UObject* WorldContextObject);
	void AddActorNameToChangedSet(class AActor* Actor);
};

// 0x150 (0x3C0 - 0x270)
// Class Dungeonhaven.DHGameState
class ADHGameState : public AGameStateBase
{
public:
	TMap<class ADHCharacter*, struct FSignifiganceInfo> SignificanceCharacters;                            // 0x270(0x50)(Transient, Protected, NativeAccessSpecifierProtected)
	TMap<class ASkeletalMeshActor*, struct FSkelSignifiganceInfo> SignificanceSkelActors;                            // 0x2C0(0x50)(Transient, Protected, NativeAccessSpecifierProtected)
	TMap<class USkeletalMeshComponent*, struct FSkelCompSignifiganceInfo> SignificanceSkelComponents;                        // 0x310(0x50)(Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TMap<class ASignificanceActor*, struct FActorSignifiganceInfo> SignificanceActors;                                // 0x360(0x50)(Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1702[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ADHGameState* GetDefaultObj();

	void RemoveSkeletalMeshComponent(class USkeletalMeshComponent* SkelMeshCmp);
	void RemoveSkeletalMesh(class ASkeletalMeshActor* SkelMeshActor);
	void RemoveCharacter(class ADHCharacter* Character);
	void RegisterSkeletalMeshComponent(class USkeletalMeshComponent* SkelMeshCmp);
	void RegisterSkeletalMesh(class ASkeletalMeshActor* SkelMeshActor);
	void RegisterCharacter(class ADHCharacter* Character);
};

// 0x28 (0x358 - 0x330)
// Class Dungeonhaven.DHGameViewportClient
class UDHGameViewportClient : public UGameViewportClient
{
public:
	uint8                                        Pad_1718[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FDialogEntry>                  M_aDialogStack;                                    // 0x340(0x10)(ZeroConstructor, Transient, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_171B[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDHGameViewportClient* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class Dungeonhaven.DHItemEffectBase
class UDHItemEffectBase : public UObject
{
public:
	struct FTimerHandle                          InternalTimer;                                     // 0x28(0x8)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FTimerHandle                          InternalTimerEnd;                                  // 0x30(0x8)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UObject*                               WorldContextObject;                                // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        CachedIconIndex;                                   // 0x40(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bCachedFamiliarity;                                // 0x44(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_18EF[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDHItemEffectBase* GetDefaultObj();

	void StartUpdates(float Duration, float DeltaBetweenUpdates, class UObject* WorldContext);
	void RequestOnUpdateOverCall(float CallDelay, class UObject* WorldContext);
	void PickedUp(class FName ItemId, class AActor* PlayerCharacter);
	void OnUpdateOverBP(class UObject* WorldContext);
	void OnUpdateOver();
	void OnUpdateBP(class UObject* WorldContext);
	void OnUpdate();
	void OnPickUp(class FName ItemId, class AActor* PlayerCharacter);
	bool OnApplied(class FName ItemId, class AActor* PlayerCharacter);
	class UObject* GetUnsafeWorldContext();
	bool AreUpdatesActive();
	bool Apply(class FName ItemId, class AActor* PlayerCharacter);
};

// 0x10 (0x58 - 0x48)
// Class Dungeonhaven.DHItemEffects
class UDHItemEffects : public UDHItemEffectBase
{
public:
	TArray<class UDHItemEffectBase*>             Effects;                                           // 0x48(0x10)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UDHItemEffects* GetDefaultObj();

};

// 0x50 (0x80 - 0x30)
// Class Dungeonhaven.DHItemsAsset
class UDHItemsAsset : public UDataAsset
{
public:
	TMap<class FName, class UDHItemEffectBase*>  Effects;                                           // 0x30(0x50)(Edit, BlueprintVisible, ExportObject, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDHItemsAsset* GetDefaultObj();

	void RemoveEmptyEntries();
	void GetEffectCopies(class UObject* WorldContextObject, TMap<class FName, class UDHItemEffectBase*>* OutEffects);
	void AddMissingEntries(const TArray<class FName>& ItemIDList);
};

// 0x0 (0x28 - 0x28)
// Class Dungeonhaven.DHObjectWithActorOuter
class UDHObjectWithActorOuter : public UObject
{
public:

	static class UClass* StaticClass();
	static class UDHObjectWithActorOuter* GetDefaultObj();

};

// 0x8 (0x578 - 0x570)
// Class Dungeonhaven.DHPlayerController
class ADHPlayerController : public APlayerController
{
public:
	float                                        GlobalCameraShakeScale;                            // 0x570(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1B09[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ADHPlayerController* GetDefaultObj();

	void SetTriggerWeaponStrength(enum class ETrigger ETrigger, float FireTriggerThreshold, int32 Strength);
	void SetTriggerVibration(enum class ETrigger ETrigger, int32 Position, int32 Frequency, int32 Amplitude);
	void SetTriggerModeOff(enum class ETrigger ETrigger);
	void SetTriggerFeedback(enum class ETrigger ETrigger, uint8 Position, uint8 Strength);
	void SetGlobalCameraShakeScale(float Scale, bool bSaveToConfig);
	void SetAspectRatioAxisConstraint(enum class EAspectRatioAxisConstraint AspectRatioAxisConstraint);
	bool IsInputEnabled();
	class APawn* GetCachedBarbAsPawn();
	enum class EAspectRatioAxisConstraint GetAspectRatioAxisConstraint();
};

// 0x30 (0x58 - 0x28)
// Class Dungeonhaven.DHRayTracing
class UDHRayTracing : public UObject
{
public:
	class UDHGameInstance*                       GameInstance;                                      // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRayTracingDesired;                                // 0x30(0x1)(ZeroConstructor, Transient, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bDlssAvailable;                                    // 0x31(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1C9E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        DlssMode;                                          // 0x34(0x4)(ZeroConstructor, Transient, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRayTracingValidForZone;                           // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1CA4[0x1F];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDHRayTracing* GetDefaultObj();

	void SetRayTracingValidForZone(bool bValid);
	void SetRayTracingDesired(bool bEnabled);
	void SetDX12Desired(bool bDesired);
	void SetDlssMode(int32 Mode);
	void ReenableDofIfDlssIsActive();
	void ReapplyLevelSettings();
	bool IsRayTracingDesired();
	bool IsRayTracingCurrentlyActive();
	bool IsDX12Desired();
	bool IsDX12Active();
	int32 GetDesiredDlssMode();
	void DisableDofIfDlssIsActive();
	bool CanSwitchRHI();
	void ApplySettings();
	void ApplyMaterialSettings();
	void ApplyLevelSettings(const class FString& LevelName);
};

// 0x0 (0x28 - 0x28)
// Class Dungeonhaven.DHReflectionHelper
class UDHReflectionHelper : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UDHReflectionHelper* GetDefaultObj();

	void SetFloatVariable(class UObject* Object, class FName VariableName, float Value);
	void SetBoolValue(class UObject* Object, class FName VariableName, bool bNewValue);
	void ModifyFloatVariable(class UObject* Object, class FName VariableName, float Delta);
	bool IsFunctionBoundToDelegate(class UObject* FunctionContainer, class FName FunctionName, class UObject* DelegateContainer, class FName DelegateName);
	void CallFunctionByName(class UObject* FunctionContainer, class FName FunctionName);
	void BindFunctionToDelegate(class UObject* FunctionContainer, class FName FunctionName, class UObject* DelegateContainer, class FName DelegateName, bool bBind);
};

// 0x78 (0xA8 - 0x30)
// Class Dungeonhaven.DHRichTextBlockImageDecorator
class UDHRichTextBlockImageDecorator : public URichTextBlockImageDecorator
{
public:
	class UDataTable*                            ImageSetPS4;                                       // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDataTable*                            ImageSetXboxOne;                                   // 0x38(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDataTable*                            ImageSetKeyboard;                                  // 0x40(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          MissingImgTextColor;                               // 0x48(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                        MissingImgTextFontInfo;                            // 0x58(0x50)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDHRichTextBlockImageDecorator* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Dungeonhaven.DHSaveHelper
class UDHSaveHelper : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UDHSaveHelper* GetDefaultObj();

	void RestoreSaveBackup(int32 UserIndex, int32 NSlotNumber);
	void QueueSaveBackup(int32 NSlotNumber, int32 UserIndex);
	bool IsRestoreOperationInProgress();
	void ImportLastGenSave(int32 UserIndex);
	bool HasSaveBackup(const class FString& SlotName, int32 UserIndex);
	bool DHSaveGameToSlot_Asynch(class USaveGame* SaveGameObject, const class FString& SlotName, int32 UserIndex, bool BackupSave);
	class USaveGame* DHLoadGameFromSlot(const class FString& SlotName, int32 UserIndex);
};

// 0x20 (0x2A0 - 0x280)
// Class Dungeonhaven.DHSpringArmComponent
class UDHSpringArmComponent : public USpringArmComponent
{
public:
	class UCurveFloat*                           CameraLagCurve;                                    // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MinLagCurveDistance;                               // 0x288(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxLagCurveDistance;                               // 0x28C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveFloat*                           CameraRotationLagCurve;                            // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_20B2[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDHSpringArmComponent* GetDefaultObj();

	void ForceUpdateWithoutLag();
};

// 0x0 (0x2C0 - 0x2C0)
// Class Dungeonhaven.DungeonhavenGameModeBase
class ADungeonhavenGameModeBase : public AGameModeBase
{
public:

	static class UClass* StaticClass();
	static class ADungeonhavenGameModeBase* GetDefaultObj();

};

// 0x0 (0x220 - 0x220)
// Class Dungeonhaven.ExposedCActor
class AExposedCActor : public AActor
{
public:

	static class UClass* StaticClass();
	static class AExposedCActor* GetDefaultObj();

	class FString GetCurrentStreamingLevelName();
};

// 0x0 (0x28 - 0x28)
// Class Dungeonhaven.KeyBindingUtil
class UKeyBindingUtil : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UKeyBindingUtil* GetDefaultObj();

	bool RemoveAxisBinding(const struct FInputAxis& BindingToRemove);
	bool RemoveActionBinding(const struct FInputAction& BindingToRemove);
	void ReBindAxisKey(const struct FInputAxis& CurrentBinding, const struct FInputAxis& NewBinding);
	void ReBindActionKey(const struct FInputAction& CurrentBinding, const struct FInputAction& NewBinding);
	struct FInputAxis GetInputAxisFromMouseButtonEvent(struct FPointerEvent& MouseEvent);
	struct FInputAxis GetInputAxisFromMouseAxisEvent(struct FPointerEvent& MouseEvent);
	struct FInputAxis GetInputAxisFromKeyEvent(struct FKeyEvent& KeyEvent);
	struct FInputAction GetInputActionFromMouseButtonEvent(struct FPointerEvent& MouseEvent);
	struct FInputAction GetInputActionFromKeyEvent(struct FKeyEvent& KeyEvent);
	void GetAllBindedInputAxis(TArray<struct FInputAxis>* InputAxis);
	void GetAllBindedInputActions(TArray<struct FInputAction>* Actions);
	void AddAxisBinding(const struct FInputAxis& NewBinding, const struct FInputAxis& CurrentBinding);
	void AddActionBinding(const struct FInputAction& NewBinding, const struct FInputAction& CurrentBinding);
};

// 0x10 (0x230 - 0x220)
// Class Dungeonhaven.MainMenuActor
class AMainMenuActor : public AActor
{
public:
	class UTitleScreenWidget*                    M_pTitleScreenWidget;                              // 0x220(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCertDialog*                           M_pControllerPullDialog;                           // 0x228(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AMainMenuActor* GetDefaultObj();

	void ShowTitleScreen();
	void ShowStartupLogos();
	void ShowMainMenu();
	void CreateControllerDisconnectDialog();
};

// 0x10 (0x230 - 0x220)
// Class Dungeonhaven.SignificanceActor
class ASignificanceActor : public AActor
{
public:
	float                                        SignificanceRangeHidden;                           // 0x220(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SignificanceRangeLow;                              // 0x224(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SignificanceRangeMedium;                           // 0x228(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_244C[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASignificanceActor* GetDefaultObj();

	void SetSignificanceBP(enum class EDHSignificanceLevel SignificanceLevel);
};

// 0x8 (0x238 - 0x230)
// Class Dungeonhaven.TitleScreenWidget
class UTitleScreenWidget : public UUserWidget
{
public:
	uint8                                        Pad_2468[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTitleScreenWidget* GetDefaultObj();

	void OnAdvancePastTileScreenForActivity();
};

// 0x0 (0x230 - 0x230)
// Class Dungeonhaven.UsableIndicatorWidget
class UUsableIndicatorWidget : public UUserWidget
{
public:

	static class UClass* StaticClass();
	static class UUsableIndicatorWidget* GetDefaultObj();

	bool UpdateIndicatorVisibility(struct FVector& VecWorldPosition);
};

// 0x0 (0x220 - 0x220)
// Class Dungeonhaven.UtilitiesActor
class AUtilitiesActor : public AActor
{
public:

	static class UClass* StaticClass();
	static class AUtilitiesActor* GetDefaultObj();

};

}


