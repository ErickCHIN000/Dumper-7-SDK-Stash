#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x590 (0xA10 - 0x480)
// BlueprintGeneratedClass GameInfoInstance.GameInfoInstance_C
class UGameInfoInstance_C : public UDHGameInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x480(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         SkipGameIntroWidget;                               // 0x488(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3648[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UHostMenu_C*                           HostMenuWB;                                        // 0x490(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxPlayers;                                        // 0x498(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_364B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ServerName;                                        // 0x4A0(0x18)(Edit, BlueprintVisible, Net, DisableEditOnInstance)
	class UUserWidget*                           LoadingScreenWB;                                   // 0x4B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                PlayerSettingsSave;                                // 0x4C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         CreatedSaveFile_;                                  // 0x4D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_364F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UErrorDialog_C*                        ErrorDialogWB;                                     // 0x4D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                ErrorString;                                       // 0x4E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                        GameRestartCountdown;                              // 0x4F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3654[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class APlayerController*>             PlayerControllers;                                 // 0x4F8(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                        CurrentFloor;                                      // 0x508(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3657[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUserWidget*                           MainMenuRef;                                       // 0x510(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  LoadScreenItemID;                                  // 0x518(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  LoadingScreenRowName;                              // 0x520(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftClassPtr<class UUserWidget>             LoadingScreenSoftClassRef;                         // 0x528(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UClass*                                LoadingScreenType;                                 // 0x550(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsSinglePlayer_;                                   // 0x558(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_365E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        EssenceHP_Multiplier;                              // 0x55C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        EssenceATK_Multiplier;                             // 0x560(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        EssenceAmount_Multiplier;                          // 0x564(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasShamrockBuff_;                                  // 0x568(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3661[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ReturnDamagePct;                                   // 0x56C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HP_RegenRate;                                      // 0x570(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsTrapImmune_;                                     // 0x574(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HasLichBuff;                                       // 0x575(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HasDangerZoneBuff;                                 // 0x576(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IgniteAttackBuff;                                  // 0x577(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ParalysisAttackBuff;                               // 0x578(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         MiniAttackBuff;                                    // 0x579(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         BeeAttackBuff;                                     // 0x57A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HasStaticShockBuff_;                               // 0x57B(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                        CharacterKnockbackForce;                           // 0x57C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasWendysSlowBuff;                                 // 0x580(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HasSpecterBuff_;                                   // 0x581(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3671[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DamageResist;                                      // 0x584(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsPlayerDead_;                                     // 0x588(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3674[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          CharWeaponNames;                                   // 0x590(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                         bWasHadernKilled;                                  // 0x5A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bJustTravelledBetwenMaps;                          // 0x5A1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3679[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  TravelCheckpointName;                              // 0x5A4(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EComboTypes                       CurrentHadernWeapon;                               // 0x5AC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         LoadHP_FromSaveAfterTravel_;                       // 0x5AD(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ManuallySaveTransitionCheckpoint;                  // 0x5AE(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3687[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class AActor>                 CheckPointOverride;                                // 0x5B0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class AActor>                 FallgrimWaifuSoftObjRef;                           // 0x5D8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         bEndingWillStartNGPlus_;                           // 0x600(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_368F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NewGamePlusLevel;                                  // 0x604(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  FireLevelMapName;                                  // 0x608(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bPlayerDiedInHadernMap;                            // 0x610(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3693[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            PreHadernTransform;                                // 0x620(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	class FName                                  LastUsedHadernPortalUsableName;                    // 0x650(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  PreHadernMap;                                      // 0x658(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  HadernMapName;                                     // 0x660(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  TutorialMapName;                                   // 0x668(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CurrentMap;                                        // 0x670(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  SecretMapName;                                     // 0x678(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentSaveSlot;                                   // 0x680(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36A7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPlayerSaveGame_C*                     PlayerSaveGameRef;                                 // 0x688(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnChangeForcePS4Icons;                             // 0x690(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        AspectRatioConstraint;                             // 0x6A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UWSettings_Enabled;                                // 0x6A4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         AutoLockOnNextTarget;                              // 0x6A5(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         GameStatePerformedInitialKeyboardSetup_;           // 0x6A6(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         LastKeyboardModeSetting;                           // 0x6A7(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsSequencePlaying_;                                // 0x6A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36BE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_Volumes                       Struct_Volumes;                                    // 0x6AC(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36C1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundMix*                             SoudMixMaster;                                     // 0x6C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsDialogueOnScreen;                                // 0x6D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36C7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Subtitles_Scale;                                   // 0x6D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnSubtitlesScaleChanged;                           // 0x6D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         InvertControllerYAxis;                             // 0x6E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         InvertControllerXAxis;                             // 0x6E9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         InvertMouseYAxis;                                  // 0x6EA(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         InvertMouseXAxis;                                  // 0x6EB(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         MotionBlur;                                        // 0x6EC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         FilmGrain;                                         // 0x6ED(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         PixelMode;                                         // 0x6EE(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HadernShellEnabled;                                // 0x6EF(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         RagdollCameraEnabled_;                             // 0x6F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36DA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TempPlayerBaseDamage;                              // 0x6F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class UClass*, class UBPDmgEffect_C*>   EffectMap;                                         // 0x6F8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         bIsPPTime_;                                        // 0x748(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         RadialBlur;                                        // 0x749(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         DamageNumbers;                                     // 0x74A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HoldToDismiss;                                     // 0x74B(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsInVideoSettingsDirtyWindow;                      // 0x74C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bSeasonalContent;                                  // 0x74D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsInVideoSettingsWarning;                          // 0x74E(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ConstraintCutsceneAspectRatio;                     // 0x74F(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HideTarnishedSeal;                                 // 0x750(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HideSacredGlands;                                  // 0x751(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36EA[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BallistazookaOpacity;                              // 0x754(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Resolution_Scale;                                  // 0x758(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Controller_Sensitivity;                            // 0x75C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Mouse_Sensitivity;                                 // 0x760(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Controller_Sensitivity_Ballistazooka;              // 0x764(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Mouse_Sensitivity_Ballistazooka;                   // 0x768(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Brightness;                                        // 0x76C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class FName, float>                     ActiveEffects;                                     // 0x770(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FName, float>                     RespawningItems;                                   // 0x7C0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimespan                             RespawningItems_TimeSpan;                          // 0x810(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        FOV;                                               // 0x818(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CameraShakeScale;                                  // 0x81C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ForceFeedbackScale;                                // 0x820(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Framerate_Index;                                   // 0x824(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<enum class Enum_Language, class FText>  Text_Languages;                                    // 0x828(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	enum class Enum_Language                     ELanguage;                                         // 0x878(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsWaitingForKey_;                                  // 0x879(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bIsTBTime_;                                        // 0x87A(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_370B[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class UUserWidget>             MainMenuBlackSoftClassRef;                         // 0x880(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnLanguageChanged;                                 // 0x8A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         bPlayerDiedInDarkFatherMap;                        // 0x8B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3712[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnEnemyHPVisibilityChanged;                        // 0x8C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	enum class Enum_EnemyHPVisibility            E_EnemyHPVisibility;                               // 0x8D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_EnemyHPOpacity               E_EnemyHPOpacity;                                  // 0x8D1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_371A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnEnemyHPOpacityChanged;                           // 0x8D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         bWasDarkFormBeforeTravel;                          // 0x8E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class Enum_HUD_Size                     E_HUDScale;                                        // 0x8E9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3720[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnHUDSizeChanged;                                  // 0x8F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnDamageNumbersChanged;                            // 0x900(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnHoldToDismissChanged;                            // 0x910(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	enum class Enum_NotifyDuration               ItemNotify_Duration;                               // 0x920(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_NotifyVisibility             ItemNotify_Visibility;                             // 0x921(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_NotifyDuration               ShellNotify_Duration;                              // 0x922(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_NotifyVisibility             ShellNotify_Visibility;                            // 0x923(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_NotifyDuration               WeaponNotify_Duration;                             // 0x924(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_NotifyVisibility             WeaponNotify_Visibility;                           // 0x925(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bGorfGiftsEnabled;                                 // 0x926(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class Enum_HUD_Size                     E_UIScale;                                         // 0x927(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_BossSoundtrackType           E_BossSountrackType;                               // 0x928(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bMusicDLCEnabled;                                  // 0x929(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bSeasonalContentButton;                            // 0x92A(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3736[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TestSeasonalContentMonth;                          // 0x92C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bFoundlingMenuEnabled;                             // 0x930(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bPhotoModeEnabled;                                 // 0x931(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bJustFastTraveled;                                 // 0x932(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bSaveRestoreEnabled;                               // 0x933(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_373F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnSeasonalContentChanged;                          // 0x938(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnLoadingScreenRemoved;                            // 0x948(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnRadialBlurChanged;                               // 0x958(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TSoftObjectPtr<class UObject>                HadernAsset;                                       // 0x968(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UObject*                               HadernAssetObject;                                 // 0x990(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_IsStormMode                   StormModeState;                                    // 0x998(0x3)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3765[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_StormModeDifficulty           StormMode_Difficulty;                              // 0x99C(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_IsStormMode                   StormMode_HasEnteredOnce;                          // 0x9A8(0x3)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         StormMode_Debug;                                   // 0x9AB(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         StormModeContentEnabled;                           // 0x9AC(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bDebugDualSenseAudio;                              // 0x9AD(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bDebugAdaptiveTriggers;                            // 0x9AE(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bDebugDualSenseSettings;                           // 0x9AF(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class Enum_AdaptiveTriggers_Enabled     AdaptiveTriggers_EnableType;                       // 0x9B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_377D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnAdaptiveTriggerChanged;                          // 0x9B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         DualSenseAudio_Enabled;                            // 0x9C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3780[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        HapticFeedback_Intensity;                          // 0x9CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_XboxS_Type                   EXboxSType;                                        // 0x9D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         XboxSerieSOptionDebug;                             // 0x9D1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         StormMode_HasJustStartedRun_;                      // 0x9D2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         StormMode_GiveFullHealth;                          // 0x9D3(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         StormMode_Testing;                                 // 0x9D4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         StormMode_Testing_Enemies;                         // 0x9D5(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bStormModeNoRespawnDialogue;                       // 0x9D6(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_378A[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnLoadingScreenFadeOut;                            // 0x9D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         bStormModeLoadedFromMenu;                          // 0x9E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_378C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPlayerSaveGame_C*                     PlayerSaveGame;                                    // 0x9F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FDHTwitchDrop>                 ProcessedTwitchDrops;                              // 0x9F8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	enum class Enum_Notify_StormMode_Duration    InstinctNotify_Duration;                           // 0xA08(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_Notify_StormMode_Visibility  InstinctNotify_Visibility;                         // 0xA09(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_Notify_StormMode_Duration    RunicFam_Duration;                                 // 0xA0A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_Notify_StormMode_Visibility  RunicFam_Visibility;                               // 0xA0B(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        StormMode_LastSaveSlotIndex;                       // 0xA0C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGameInfoInstance_C* GetDefaultObj();

	bool StormMode_GetGiveFullHealth();
	void StormMode_GetLastSaveSlotIndex(int32* Index);
	bool TwitchDrop_HasAnySkin(int32 Temp_int_Variable, int32 Temp_int_Variable_1, uint8 CallFunc_Conv_IntToByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, const class FString& CallFunc_SkinIDToDropID_DropID, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_MakeLiteralInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FDHTwitchDrop& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	bool TwitchDrop_CheckIfAvailable(enum class Enum_Skins ID, bool CallFunc_TwitchDrop_HasClaimedForSlot_HasClaimed_);
	void StormMode_Notify_RunicFam_GetVisibility(enum class Enum_Notify_StormMode_Visibility* Visibility);
	void StormMode_Notify_RunicFam_GetDuration(enum class Enum_Notify_StormMode_Duration* Duration);
	void StormMode_Notify_Instinct_GetVisibility(enum class Enum_Notify_StormMode_Visibility* Visibility);
	void StormMode_Notify_Instinct_GetDuration(enum class Enum_Notify_StormMode_Duration* Duration);
	int32 GetNewGamePlusLevel();
	int32 StormMode_GetDifficulty(int32 Temp_int_Variable, int32 K2Node_Select_Default);
	void StormMode_IsUnlockedForSlot(bool* Unlocked_, int32 Temp_int_Variable, bool Temp_bool_Variable, bool K2Node_Select_Default);
	void StormMode_GetIsTesting(bool* Testing_, bool* TestEnemies_);
	void GetCurrentSaveSlot(int32* Slot);
	void StormMode_GetHasJustStartedRun_(bool* Return);
	void StormMode_GetEnteredState(bool* Slot_1, bool* Slot_2, bool* Slot_3);
	void GetDebugXboxSerieSOption(bool* Debug);
	void GetXboxSType(enum class Enum_XboxS_Type* Type);
	void StormMode_GetHasEnteredOnce(bool* HasEnteredOnce, struct FStruct_IsStormMode* SlotsData, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1);
	void GetHapticFeedback_Intensity(float* Intensity);
	void GetDualSenseAudio_Enabled(bool* Enabled);
	void GetAdaptiveTriggersEnabled(enum class Enum_AdaptiveTriggers_Enabled* EnableType, enum class EPlatform CallFunc_GetPlatform_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	bool GetDebugDualSenseAudio();
	void StormModeContentIsEnabled(bool* Enabled_, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_Conv_BoolToText_ReturnValue, class FText CallFunc_Conv_BoolToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, bool CallFunc_BooleanAND_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue);
	bool StormModeIsActive(int32 Temp_int_Variable, bool CallFunc_IsValid_ReturnValue, bool K2Node_Select_Default);
	void GetHideSacredGland(bool* Hidden_);
	void GetHideTarnishedSeal(bool* Hidden_);
	enum class Enum_HUD_Size GetUIScale();
	bool GetRadialBlur();
	bool GetCutsceneAspectRatio();
	bool GetSaveRestoreEnabled();
	void GetPhotoModeEnabled(bool* Enabled);
	void GetFoundlingMenuEnabled(bool* Enabled);
	bool GetSeasonalContentButton();
	bool GetSeasonalContent();
	bool GetMusicDLCEnabled();
	void GetBossSoundtrackType(enum class Enum_BossSoundtrackType* Soundtrack);
	bool IsLoadingScreenActive(bool CallFunc_IsInViewport_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	bool GetGorfGiftsEnabled();
	void GetBallistazookaOpacity(float* Opacity);
	void GetWeaponNotify_Visibility(enum class Enum_NotifyVisibility* Visibility);
	void GetWeaponNotify_Duration(enum class Enum_NotifyDuration* Duration);
	void GetShellNotify_Visibility(enum class Enum_NotifyVisibility* Visibility);
	void GetShellNotify_Duration(enum class Enum_NotifyDuration* Duration);
	void GetItemNotify_Visibility(enum class Enum_NotifyVisibility* Visibility);
	void GetItemNotify_Duration(enum class Enum_NotifyDuration* Duration);
	void GetAspectRatioConstraint(int32* Index);
	void GetForceFeedbackScale(float* Scale);
	void GetCameraShakeScale(float* Scale);
	void GetHoldToDismiss(bool* Hold);
	void GetDamageNumbers(bool* Show);
	void GetHUDScale(enum class Enum_HUD_Size* Size);
	void GetEnemyHPOpa(enum class Enum_EnemyHPOpacity* Opacity);
	void GetEnemyHPVis(enum class Enum_EnemyHPVisibility* Visibility);
	void GetCurrentFloor(int32* CurrentFloor);
	void TwitchDrop_HasClaimedForSlot(enum class Enum_Skins ID, bool* HasClaimed_, bool Local_IDFound, const struct FDHTwitchDrop& Local_Drop, bool Temp_bool_True_if_break_was_hit_Variable, const class FString& CallFunc_SkinIDToDropID_DropID, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FDHTwitchDrop& CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	void TwitchDrop_HasUnclaimed(bool* bYes, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FDHTwitchDrop& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1);
	void TwitchDrop_Claim(const class FString& BenefitID, int32 SlotIndex, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 Temp_int_Array_Index_Variable, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FDHTwitchDrop& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void UpdateStormModeDifficulty(int32 Difficulty, int32 Local_Difficulty, bool K2Node_SwitchInteger_CmpSuccess);
	void DH_TestStormModeEnemies(const class FString& CallFunc_GetCurrentLevelName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue);
	void StormMode_Init_SaveCheck(const class FString& Local_Debug_3, const class FString& Local_Debug_2, const class FString& Local_Debug_1, int32 CallFunc_GetPrimaryUserIndex_ReturnValue, bool CallFunc_DoesSaveGameExist_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_GetPrimaryUserIndex_ReturnValue_1, bool CallFunc_DoesSaveGameExist_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, int32 CallFunc_GetPrimaryUserIndex_ReturnValue_2, bool CallFunc_DoesSaveGameExist_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_2);
	void UpdateXboxSType(enum class Enum_XboxS_Type Type, bool CallFunc_IsXboxOneSeriesS_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void DH_DebugXboxSeriesSOption(const class FString& CallFunc_Conv_BoolToString_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	void DH_PlayStormModeLevel(const class FString& CallFunc_GetCurrentLevelName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue);
	void DualSenseHaptictFeedbackVolume();
	void DualSenseAudioSetVolume(bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float K2Node_Select_Default);
	void DH_DebugDualSenseSettings(const class FString& CallFunc_Conv_BoolToString_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	void DH_DebugAdaptiveTriggers(const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void DH_DebugDualSenseAudio(const class FString& CallFunc_Conv_BoolToString_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	void DH_ControllerBoth2();
	void DH_ControllerBoth1();
	void DH_ControllerVibration();
	void DH_ControllerSound();
	void DH_EnableStormModeContent(const class FString& CallFunc_Conv_BoolToString_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	void DH_DebugStormMode(const class FString& CallFunc_Conv_BoolToString_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	bool HadernContentEnabled_(bool Local_HadernAssetValid, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5);
	void DH_EnableHadernContent(const class FString& CallFunc_Conv_BoolToString_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	void DH_EnableSaveRestore(const class FString& CallFunc_Conv_BoolToString_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	void DH_PhotoModeEnabled(const class FString& CallFunc_Conv_BoolToString_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	void DH_FoundlingMenu(const class FString& CallFunc_Conv_BoolToString_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	void DH_SeasonalButton(const class FString& CallFunc_Conv_BoolToString_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	void DH_TestSeasonalContent(int32 TestSeasonalContentMonth, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	void DH_Music_DLC(const class FString& CallFunc_Conv_BoolToString_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	void DH_SetBossSoundtrack(int32 Value, uint8 CallFunc_Conv_IntToByte_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	void DH_GorfGifts(const class FString& CallFunc_Conv_BoolToString_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	void DH_Ultrawide();
	void DH_PressPreviewLoadFallgrim(TScriptInterface<class ILoadingScreenInterface_C> K2Node_DynamicCast_AsLoading_Screen_Interface, bool K2Node_DynamicCast_bSuccess);
	void DH_SetNewGamePlusLevel(int32 NewGamePlusLevel, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	void DH_PrintPressPreview(const class FString& CallFunc_Conv_BoolToString_ReturnValue);
	void CreateLoadingScreen(bool Condition, class UClass* Local_ObjectClass, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class ILoadingScreenInterface_C> K2Node_DynamicCast_AsLoading_Screen_Interface, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UClass* CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, class UClass* CallFunc_LoadClassAsset_Blocking_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsUser_Widget, bool K2Node_ClassDynamicCast_bSuccess, class UUserWidget* CallFunc_Create_ReturnValue);
	void GetLastSupportedResolutionScreen(TArray<struct FIntPoint>& CallFunc_GetSupportedFullscreenResolutions_Resolutions, bool CallFunc_GetSupportedFullscreenResolutions_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, const struct FIntPoint& CallFunc_Array_Get_Item, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1);
	void FirstLaunchSettings(int32 Local_ResolutionY, enum class EPlatform CallFunc_GetPlatform_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const class FString& CallFunc_Concat_StrStr_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, int32 CallFunc_GetPrimaryUserIndex_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, float CallFunc_FClamp_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_1, const struct FIntPoint& CallFunc_GetScreenResolution_ReturnValue, bool CallFunc_DoesSaveGameExist_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6);
	void ApplyLanguage(bool Local_ForceCurrentLocale, const class FString& CallFunc_GetCurrentLocale_ReturnValue, bool CallFunc_SetCurrentCulture_ReturnValue, enum class EPlatform CallFunc_GetPlatform_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, bool CallFunc_SetCurrentCulture_ReturnValue_1);
	void UpdateRespawningItems(TMap<class FName, float> RespawningItems, const struct FTimespan& RespawningItems_TimeSpan);
	void SaveGraphicsSettings(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue);
	void LoadGraphicsSettings(float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, float Temp_float_Variable_4, float Temp_float_Variable_5, enum class EPlatform CallFunc_GetPlatform_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 Temp_int_Variable, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, float K2Node_Select_Default, float CallFunc_SelectFloat_ReturnValue);
	bool AreConsoleCheatsEnabled(bool CallFunc_IsShippingBuild_ReturnValue, bool CallFunc_IsEditor_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1);
	void DH_ShowInputDevice(const class FString& CallFunc_SelectString_ReturnValue);
	void DH_SetPressPreview(bool bIsPressPreview_, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	void GetDmgEffectFromClass(class UClass*& DmgEffectClass, class UBPDmgEffect_C** DmgEffect, class UBPDmgEffect_C* CallFunc_SpawnObject_ReturnValue, class UBPDmgEffect_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void DH_SetPlayerBaseDamage(float TempPlayerBaseDamage);
	void DH_RagdollCameraToggle(bool CallFunc_Not_PreBool_ReturnValue);
	void UpdateVolumeValues(float FadeInTime);
	void LoadPlayerSettings(const TArray<class FString>& Local_LanguageList, const class FString& Local_SaveSlot, enum class EPlatform CallFunc_GetPlatform_ReturnValue, enum class EPlatform CallFunc_GetPlatform_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, enum class Enum_NotifyVisibility CallFunc_GetNotifications_ItemNotify_Visibility, enum class Enum_NotifyDuration CallFunc_GetNotifications_ItemNotify_Duration, enum class Enum_NotifyVisibility CallFunc_GetNotifications_ShellNotify_Visibility, enum class Enum_NotifyDuration CallFunc_GetNotifications_ShellNotify_Duration, enum class Enum_NotifyVisibility CallFunc_GetNotifications_WeaponNotify_Visibility, enum class Enum_NotifyDuration CallFunc_GetNotifications_WeaponNotify_Duration, int32 CallFunc_GetPrimaryUserIndex_ReturnValue, int32 CallFunc_GetPrimaryUserIndex_ReturnValue_1, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class USaveGame* CallFunc_DHLoadGameFromSlot_ReturnValue, class UPlayerSaveGame_C* K2Node_DynamicCast_AsPlayer_Save_Game, bool K2Node_DynamicCast_bSuccess, bool CallFunc_DoesSaveGameExist_ReturnValue);
	void UpdateCurrentSaveSlot(int32 NewSaveSlot, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	void SavePlayerSettings(int32 CallFunc_GetPrimaryUserIndex_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPlayerSaveGame_C* CallFunc_CreateSaveGameObject_ReturnValue, bool CallFunc_DHSaveGameToSlot_Asynch_ReturnValue);
	void DH_DeleteAllSaveData(bool CallFunc_DeleteGameInSlot_ReturnValue, bool CallFunc_DeleteGameInSlot_ReturnValue_1, bool CallFunc_DeleteGameInSlot_ReturnValue_2, bool CallFunc_DeleteGameInSlot_ReturnValue_3);
	void DidPlayerTravelBetweenMaps(bool* bTravelled, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	void ResetTravelInfo();
	void SetTravelDestination(class FName CheckpointName, bool bPreMapTravel, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, TScriptInterface<class ICharacterUtilInterface_C> K2Node_DynamicCast_AsCharacter_Util_Interface, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, enum class EArmorTypes CallFunc_0_Base_GetCurrentArmor_CurrentArmorType, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	bool IsInKeyboardMode(class AGameStateBase* CallFunc_GetGameState_ReturnValue, TScriptInterface<class IGamePlayGameStateInterface_C> K2Node_DynamicCast_AsGame_Play_Game_State_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsInKeyboardMode_InKeyboardMode);
	void DH_TakeThatAssetLoader(class UObject* LoadedAsset, const struct FSoftObjectPath& Montage, class UAnimMontage* K2Node_DynamicCast_AsAnim_Montage, bool K2Node_DynamicCast_bSuccess, TArray<class ACharacter*>& CallFunc_GetAllActorsOfClass_OutActors, class ACharacter* CallFunc_Array_Get_Item, TSoftObjectPtr<class UObject> CallFunc_Conv_SoftObjPathToSoftObjRef_ReturnValue, float CallFunc_PlayAnimMontage_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue);
	void DH_DisablePhysics(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, TArray<class ACharacter*>& CallFunc_GetAllActorsOfClass_OutActors, class ACharacter* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, TArray<class AActor*>& CallFunc_GetAllActorsOfClass_OutActors_1, class AActor* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, TArray<class UPrimitiveComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UPrimitiveComponent* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2);
	void DH_SetPlayerClothSimState(bool bEnable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, TArray<class USkeletalMeshComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class USkeletalMeshComponent* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void DH_SetClothSimState(bool bEnable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, TArray<class AActor*>& CallFunc_GetAllActorsOfClass_OutActors, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<class USkeletalMeshComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class USkeletalMeshComponent* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1);
	void DH_StartOpeningCredits(class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, TScriptInterface<class ICharacterUtilInterface_C> K2Node_DynamicCast_AsCharacter_Util_Interface, bool K2Node_DynamicCast_bSuccess);
	void DH_PrintCurrentLevel(class FName CallFunc_GetCurrentPersistentLevelName_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue);
	void DH_ToggleFog(class AGameModeBase* CallFunc_GetGameMode_ReturnValue, TScriptInterface<class IGameModeUtilInterface_C> K2Node_DynamicCast_AsGame_Mode_Util_Interface, bool K2Node_DynamicCast_bSuccess);
	void DH_SetShellDeterioration(int32 GhostShellDeteriorationCounter, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess);
	void DH_LockAllWeaponUpgrades(class FName Temp_name_Variable, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, class FName Temp_name_Variable_3, class FName Temp_name_Variable_4, int32 Temp_int_Variable, enum class EComboTypes Temp_byte_Variable, class FName Temp_name_Variable_5, class FName Temp_name_Variable_6, class FName Temp_name_Variable_7, class FName Temp_name_Variable_8, class FName Temp_name_Variable_9, class FName Temp_name_Variable_10, class FName Temp_name_Variable_11, enum class EComboTypes Temp_byte_Variable_1, class FName Temp_name_Variable_12, class FName Temp_name_Variable_13, class FName Temp_name_Variable_14, class FName Temp_name_Variable_15, class FName Temp_name_Variable_16, class FName Temp_name_Variable_17, class FName Temp_name_Variable_18, int32 Temp_int_Variable_1, enum class EComboTypes Temp_byte_Variable_2, class FName Temp_name_Variable_19, class FName Temp_name_Variable_20, class FName Temp_name_Variable_21, class FName Temp_name_Variable_22, class FName Temp_name_Variable_23, class FName Temp_name_Variable_24, class FName Temp_name_Variable_25, int32 Temp_int_Variable_2, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class FName Temp_name_Variable_26, class FName Temp_name_Variable_27, enum class EComboTypes Temp_byte_Variable_3, int32 Temp_int_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_1, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue_1, class FName K2Node_Select_Default, class FName K2Node_Select_Default_1, class FName K2Node_Select_Default_2, class FName K2Node_Select_Default_3, class FName K2Node_Select_Default_4, class FName K2Node_Select_Default_5, bool CallFunc_LessEqual_IntInt_ReturnValue_1);
	void DH_UnlockAllWeaponUpgrades(int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, uint8 CallFunc_Conv_IntToByte_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1);
	void DH_UnlockWeaponSuper(uint8 WeaponIndex, int32 SpecialIndex, class FName Temp_name_Variable, uint8 CallFunc_GetValidValue_ReturnValue, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, class FName Temp_name_Variable_3, class FName Temp_name_Variable_4, class FName Temp_name_Variable_5, class FName Temp_name_Variable_6, int32 Temp_int_Variable, enum class EComboTypes Temp_byte_Variable, class FName Temp_name_Variable_7, class FName Temp_name_Variable_8, class FName Temp_name_Variable_9, class FName Temp_name_Variable_10, class FName Temp_name_Variable_11, class FName Temp_name_Variable_12, class FName Temp_name_Variable_13, enum class EComboTypes Temp_byte_Variable_1, class FName K2Node_Select_Default, class FName K2Node_Select_Default_1, class FName K2Node_Select_Default_2);
	void DH_UnlockWeaponDmgBoost(uint8 WeaponIndex, int32 UpgradeIndex, enum class EComboTypes Temp_byte_Variable, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue_1, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, class FName Temp_name_Variable_3, class FName Temp_name_Variable_4, class FName Temp_name_Variable_5, class FName Temp_name_Variable_6, int32 Temp_int_Variable, class FName K2Node_Select_Default, enum class EComboTypes Temp_byte_Variable_1, class FName Temp_name_Variable_7, class FName Temp_name_Variable_8, class FName Temp_name_Variable_9, class FName Temp_name_Variable_10, class FName Temp_name_Variable_11, class FName Temp_name_Variable_12, class FName Temp_name_Variable_13, class FName K2Node_Select_Default_1, class FName K2Node_Select_Default_2);
	void DH_LockUpgrade(class FName UpgradeName, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess);
	void DH_UnlockUpgrade(class FName UpgradeName, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess);
	void DH_SetPlayerMaxHealth(int32 NewValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess);
	void DH_CheckAbritraryNameIsInChangedSet(class FName& NameToCheck, bool* IsInSet_, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, TScriptInterface<class IGameModeUtilInterface_C> K2Node_DynamicCast_AsGame_Mode_Util_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GameModeUtils_IsAbritraryNameInSet_bIsInSet);
	void DH_RemoveAbritraryNameFromChangedSet(class FName& NameToRemove, bool* RemovedSuccessfully_, class FText CallFunc_Conv_NameToText_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TScriptInterface<class IGameModeUtilInterface_C> K2Node_DynamicCast_AsGame_Mode_Util_Interface, bool K2Node_DynamicCast_bSuccess, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_GameModeUtils_RemoveAbritraryNameFromChangedSet_bSuccessful, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue);
	void DH_SaveMapState(class AGameModeBase* CallFunc_GetGameMode_ReturnValue, TScriptInterface<class IGameModeUtilInterface_C> K2Node_DynamicCast_AsGame_Mode_Util_Interface, bool K2Node_DynamicCast_bSuccess);
	void DH_AddAbritraryNameToChangedSet(class FName& NameToAdd, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, TScriptInterface<class IGameModeUtilInterface_C> K2Node_DynamicCast_AsGame_Mode_Util_Interface, bool K2Node_DynamicCast_bSuccess);
	void DH_SetParamOnCharArmor(float ParameterValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue);
	void DH_SwitchArmor(int32 ArmorToSet, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_HadernContentEnabled__ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_1, bool K2Node_DynamicCast_bSuccess_1);
	void DH_ClearMapChangedSet(class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IGameModeUtilInterface_C> K2Node_DynamicCast_AsGame_Mode_Util_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess_1, class ADHGameMode* CallFunc_GetDHGameMode_ReturnValue);
	void DH_SetHadernPhase(int32 PhaseIndex, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess);
	void DH_Save(class AGameModeBase* CallFunc_GetGameMode_ReturnValue, TScriptInterface<class IGameModeUtilInterface_C> K2Node_DynamicCast_AsGame_Mode_Util_Interface, bool K2Node_DynamicCast_bSuccess);
	void DH_KickPlayerForward(float ImpulseStrength, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, TScriptInterface<class ICharacterUtilInterface_C> K2Node_DynamicCast_AsCharacter_Util_Interface, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue);
	void DH_LockWeapon(int32 ID, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_1, bool K2Node_DynamicCast_bSuccess_1);
	void DH_UnlockWeapon(int32 ID, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_1, bool K2Node_DynamicCast_bSuccess_1);
	void DH_SwitchWeapon(int32 Param, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_1, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_2, bool K2Node_DynamicCast_bSuccess_2);
	void DH_TestFunctionEmpty();
	void DH_TestFunction(TArray<class FString>& Params, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Array_Index_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, const class FString& CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void TravelErrorToString(enum class ETravelFailure FailureType, class FString* OutString, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	void NetErrorToString(enum class ENetworkFailure FailureType, class FString* OutString, bool K2Node_SwitchEnum_CmpSuccess);
	void OnLoaded_70CB9E9E451576C4C58B54B640D4FE8B(class UObject* Loaded);
	void OnFailure_149E5699488C7D88326F9C9B97473B4D();
	void OnSuccess_149E5699488C7D88326F9C9B97473B4D();
	void OnFailure_69C3B50546DC2170A2C9AEADC6D0CE39();
	void OnSuccess_69C3B50546DC2170A2C9AEADC6D0CE39();
	void OnFailure_8876D59F435047D05F4F2382AA769685();
	void OnSuccess_8876D59F435047D05F4F2382AA769685();
	void ReceiveShutdown();
	void ReceiveInit();
	void SaveGame();
	void SetEnemyHPVis(enum class Enum_EnemyHPVisibility Visiiblity);
	void SetEnemyHPOpa(enum class Enum_EnemyHPOpacity Opacity);
	void SetHUDScale(enum class Enum_HUD_Size Size);
	void SetDamageNumbers(bool Show);
	void SetHoldToDismiss(bool Hold);
	void SetCameraShakeScale(float Scale);
	void SetForceFeedbackScale(float Scale);
	void OnApplicationWillEnterBackground();
	void SetAspectRatioConstraint(int32 Index);
	void SetItemNotify_Visibility(enum class Enum_NotifyVisibility Visibility);
	void SetItemNotify_Duration(enum class Enum_NotifyDuration Duration);
	void SetWeaponNotify_Visibility(enum class Enum_NotifyVisibility Visibility);
	void SetWeaponNotify_Duration(enum class Enum_NotifyDuration Duration);
	void SetShellNotify_Visibility(enum class Enum_NotifyVisibility Visibility);
	void SetShellNotify_Duration(enum class Enum_NotifyDuration Duration);
	void SetBallistazookaOpacity(float Opacity);
	void SetBossSoundtrackType(enum class Enum_BossSoundtrackType Soundtrack);
	void SetSeasonalContent(bool ReturnValue);
	void SetRadialBlur(bool Enabled);
	void SetCutsceneAspectRatio(bool Constrained);
	void SetUIScale(enum class Enum_HUD_Size Scale);
	void SetHideTarnishedSeal(bool Hidden_);
	void SetHideSacredGland(bool Hidden_);
	void OnIdealLanguageDetermined(const class FString& CultureDetermined);
	void StormMode_Activate();
	void StormMode_Deactivate();
	void DebugDualSense2DAudio(class USoundBase* Sound);
	void SetAdaptiveTriggersEnabled(enum class Enum_AdaptiveTriggers_Enabled EnableType);
	void SetHapticFeedback_Intensity(float Intensity);
	void SetDualSenseAudio_Enabled(bool Enabled);
	void StormMode_SetHasEnteredOnce(bool HasEntered);
	void SetXboxSType(enum class Enum_XboxS_Type Type);
	void StormMode_SaveState_Check();
	void StormMode_SetHasJustStartedRun_(bool HasStarted_);
	void UpdateStormModeDLCEntitlement();
	void StormMode_SetDifficulty(int32 Difficulty);
	void Util_SavePlayerSettings();
	void OnUnprocessedTwitchDropsUpdatedBP();
	void StormMode_Notify_RunicFam_SetVisibility(enum class Enum_Notify_StormMode_Visibility Visibility);
	void StormMode_Notify_RunicFam_SetDuration(enum class Enum_Notify_StormMode_Duration Duration);
	void StormMode_Notify_Instinct_SetVisibility(enum class Enum_Notify_StormMode_Visibility Visibility);
	void StormMode_Notify_Instinct_SetDuration(enum class Enum_Notify_StormMode_Duration Duration);
	void OnRefreshStormMode(bool StormModeOwned);
	void StormMode_UpdateLastSaveSlotIndex(int32 Index);
	void StormMode_SetGiveFullHealth(bool Give_);
	void MainMenu_Create();
	void ClearLoadingScreenReferenceAfterLevelLoad();
	void HideLoadingScreen();
	void SaveGameCheck();
	void DestroySessionCaller(class APlayerController* PlayerController);
	void HandleTravelError(enum class ETravelFailure FailureType);
	void HandleNetworkError(enum class ENetworkFailure FailureType, bool bIsServer);
	void JoinServer(const struct FBlueprintSessionResult& SessionToJoin);
	void ShowLoadingScreen(bool IntoTheDepths, bool FadeIn);
	void LaunchLobby(int32 NumberOfPlayers, bool EnableLan_, class FText ServerName);
	void ShowHostMenu();
	void ShowMainMenu();
	void ExecuteUbergraph_GameInfoInstance(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_ControllerAudio_Debug2D_C* CallFunc_FinishSpawningActor_ReturnValue, class UErrorDialog_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsInViewport_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsInViewport_ReturnValue_1, class UObject* Temp_object_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UObject* K2Node_CustomEvent_Loaded, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsInViewport_ReturnValue_2, enum class Enum_EnemyHPVisibility K2Node_Event_Visiiblity, enum class Enum_EnemyHPOpacity K2Node_Event_Opacity_1, enum class Enum_HUD_Size K2Node_Event_Size, bool K2Node_Event_Show, bool K2Node_Event_Hold, float K2Node_Event_Scale_2, float K2Node_Event_Scale_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_1, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_2, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsConsole_ReturnValue, int32 K2Node_Event_Index_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_3, bool K2Node_DynamicCast_bSuccess_3, class APlayerController* CallFunc_GetPlayerController_ReturnValue_4, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_4, bool K2Node_DynamicCast_bSuccess_4, enum class Enum_NotifyVisibility K2Node_Event_Visibility_4, enum class Enum_NotifyDuration K2Node_Event_Duration_4, enum class Enum_NotifyVisibility K2Node_Event_Visibility_3, enum class Enum_NotifyDuration K2Node_Event_Duration_3, enum class Enum_NotifyVisibility K2Node_Event_Visibility_2, enum class Enum_NotifyDuration K2Node_Event_Duration_2, float K2Node_Event_Opacity, class APlayerController* CallFunc_GetPlayerController_ReturnValue_5, int32 Temp_int_Variable, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_5, bool K2Node_DynamicCast_bSuccess_5, int32 CallFunc_Add_IntInt_ReturnValue_1, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, enum class Enum_BossSoundtrackType K2Node_Event_Soundtrack, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool K2Node_Event_ReturnValue, bool K2Node_Event_Enabled_1, bool K2Node_Event_Constrained, enum class Enum_HUD_Size K2Node_Event_Scale, bool K2Node_Event_Hidden__1, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, bool K2Node_Event_Hidden_, TScriptInterface<class ICharacterUtilInterface_C> K2Node_DynamicCast_AsCharacter_Util_Interface, bool K2Node_DynamicCast_bSuccess_6, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_1, const class FString& K2Node_Event_CultureDetermined, TScriptInterface<class ICharacterUtilInterface_C> K2Node_DynamicCast_AsCharacter_Util_Interface_1, bool K2Node_DynamicCast_bSuccess_7, bool K2Node_SwitchInteger_CmpSuccess, bool K2Node_SwitchInteger_CmpSuccess_1, class USoundBase* K2Node_Event_Sound, enum class Enum_AdaptiveTriggers_Enabled K2Node_Event_EnableType, float K2Node_Event_Intensity, bool K2Node_Event_Enabled, bool K2Node_Event_HasEntered, bool K2Node_SwitchInteger_CmpSuccess_2, int32 Temp_int_Variable_1, enum class Enum_XboxS_Type K2Node_Event_Type, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, uint8 CallFunc_GetValidValue_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsInViewport_ReturnValue_3, bool K2Node_Event_HasStarted_, bool CallFunc_IsEditor_ReturnValue, bool CallFunc_UserHasStormModeDLC_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue_1, int32 K2Node_Event_Difficulty, bool CallFunc_BooleanOR_ReturnValue_1, const class FString& CallFunc_Conv_BoolToString_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, TArray<struct FDHTwitchDrop>& CallFunc_GetNewUnprocessedTwitchDrops_OutDrops, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, enum class Enum_Notify_StormMode_Visibility K2Node_Event_Visibility_1, enum class Enum_Notify_StormMode_Duration K2Node_Event_Duration_1, enum class Enum_Notify_StormMode_Visibility K2Node_Event_Visibility, enum class Enum_Notify_StormMode_Duration K2Node_Event_Duration, bool K2Node_CustomEvent_StormModeOwned, int32 K2Node_Event_Index, bool K2Node_Event_Give_, TScriptInterface<class ILoadingScreenInterface_C> K2Node_DynamicCast_AsLoading_Screen_Interface, bool K2Node_DynamicCast_bSuccess_8, class UClass* CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, class UClass* CallFunc_LoadClassAsset_Blocking_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsUser_Widget, bool K2Node_ClassDynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, class UErrorDialog_C* CallFunc_Create_ReturnValue_1, class APlayerController* K2Node_CustomEvent_PlayerController, class UDestroySessionCallbackProxy* CallFunc_DestroySession_ReturnValue, enum class ETravelFailure K2Node_Event_FailureType_1, const class FString& CallFunc_TravelErrorToString_OutString, bool CallFunc_IsValid_ReturnValue_6, enum class ENetworkFailure K2Node_Event_FailureType, bool K2Node_Event_bIsServer, const class FString& CallFunc_NetErrorToString_OutString, class APlayerController* CallFunc_GetPlayerController_ReturnValue_6, class UErrorDialog_C* CallFunc_Create_ReturnValue_2, const struct FBlueprintSessionResult& K2Node_CustomEvent_SessionToJoin, int32 Temp_int_Array_Index_Variable, class UJoinSessionCallbackProxy* CallFunc_JoinSession_ReturnValue, const struct FDHTwitchDrop& CallFunc_Array_Get_Item, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_IsValid_ReturnValue_7, class UErrorDialog_C* CallFunc_Create_ReturnValue_3, class APlayerController* CallFunc_GetPlayerController_ReturnValue_7, int32 CallFunc_MakeLiteralInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, bool K2Node_CustomEvent_IntoTheDepths, bool K2Node_CustomEvent_FadeIn, int32 K2Node_CustomEvent_NumberOfPlayers, bool K2Node_CustomEvent_EnableLan_, class FText K2Node_CustomEvent_ServerName, class UCreateSessionCallbackProxy* CallFunc_CreateSession_ReturnValue, bool CallFunc_IsValid_ReturnValue_8, bool CallFunc_IsValid_ReturnValue_9, class APlayerController* CallFunc_GetPlayerController_ReturnValue_8, class UHostMenu_C* CallFunc_Create_ReturnValue_4, class APlayerController* CallFunc_GetPlayerController_ReturnValue_9, class UUserWidget* CallFunc_Create_ReturnValue_5);
	void OnLoadingScreenFadeOut__DelegateSignature();
	void OnAdaptiveTriggerChanged__DelegateSignature();
	void OnRadialBlurChanged__DelegateSignature(bool Enabled);
	void OnLoadingScreenRemoved__DelegateSignature();
	void OnSeasonalContentChanged__DelegateSignature(bool Enabled);
	void OnHoldToDismissChanged__DelegateSignature(bool Hold);
	void OnDamageNumbersChanged__DelegateSignature(bool Show);
	void OnHUDSizeChanged__DelegateSignature(enum class Enum_HUD_Size Size);
	void OnEnemyHPOpacityChanged__DelegateSignature(enum class Enum_EnemyHPOpacity Opacity);
	void OnEnemyHPVisibilityChanged__DelegateSignature(enum class Enum_EnemyHPVisibility Visibility);
	void OnLanguageChanged__DelegateSignature();
	void OnSubtitlesScaleChanged__DelegateSignature(float Scale);
	void OnChangeForcePS4Icons__DelegateSignature();
};

}


