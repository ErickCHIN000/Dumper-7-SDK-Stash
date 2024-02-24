#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EGbxTrajectoryTraceShape : uint8
{
	Line                           = 0,
	Sphere                         = 1,
	Capsule                        = 2,
	Box                            = 3,
	EGbxTrajectoryTraceShape_MAX   = 4,
};

enum class EWeaponEquipType : uint8
{
	Default                        = 0,
	Instant                        = 1,
	Custom                         = 2,
	EWeaponEquipType_MAX           = 3,
};

enum class EWeaponPutDownType : uint8
{
	Default                        = 0,
	Instant                        = 1,
	EWeaponPutDownType_MAX         = 2,
};

enum class EWeaponShotModifierType : uint8
{
	None                           = 0,
	EngineType1                    = 1,
	EngineType2                    = 2,
	EngineType3                    = 3,
	EngineType4                    = 4,
	EngineType5                    = 5,
	EngineType6                    = 6,
	EngineType7                    = 7,
	EngineType8                    = 8,
	GameType1                      = 9,
	GameType2                      = 10,
	GameType3                      = 11,
	GameType4                      = 12,
	GameType5                      = 13,
	GameType6                      = 14,
	GameType7                      = 15,
	GameType8                      = 16,
	EWeaponShotModifierType_MAX    = 17,
};

enum class ELightBeamQueryActorType : uint8
{
	Unfiltered                     = 0,
	DamageCauser                   = 1,
	Instigator                     = 2,
	Source                         = 3,
	Target                         = 4,
	SourceOrTarget                 = 5,
	SourceAndTarget                = 6,
	ELightBeamQueryActorType_MAX   = 7,
};

enum class ELightBeamLock : uint8
{
	Never                          = 0,
	Always                         = 1,
	LockOn                         = 2,
	ELightBeamLock_MAX             = 3,
};

enum class ELightBeamFlag : uint8
{
	ViewDependent                  = 0,
	Locked                         = 1,
	FollowViewPoint                = 2,
	DisableChaining                = 3,
	LagCompensation                = 4,
	EngineFlag3                    = 5,
	EngineFlag4                    = 6,
	EngineFlag5                    = 7,
	EngineFlag6                    = 8,
	EngineFlag7                    = 9,
	EngineFlag8                    = 10,
	GameFlag1                      = 11,
	GameFlag2                      = 12,
	GameFlag3                      = 13,
	GameFlag4                      = 14,
	ELightBeamFlag_MAX             = 15,
};

enum class ELightProjectileQueryActorType : uint8
{
	Unfiltered                     = 0,
	DamageCauser                   = 1,
	Instigator                     = 2,
	Source                         = 3,
	Target                         = 4,
	Attached                       = 5,
	ELightProjectileQueryActorType_MAX = 6,
};

enum class ELightProjectileAttachedLifetimeSourceContext : uint8
{
	Source                         = 0,
	DamageCauser                   = 1,
	ELightProjectileAttachedLifetimeSourceContext_MAX = 2,
};

enum class ELightProjectileSubdivisionMode : int32
{
	Distance                       = 0,
	Seconds                        = 1,
	Width                          = 2,
	Count                          = 3,
	ELightProjectileSubdivisionMode_MAX = 4,
};

enum class ELightProjectileTracerThrottleLevel : uint8
{
	None                           = 0,
	NPC                            = 1,
	RemotePlayer                   = 2,
	LocalPlayer                    = 3,
	ELightProjectileTracerThrottleLevel_MAX = 4,
};

enum class ELightProjectileFlag : uint8
{
	OverrideStartRotation          = 0,
	Homing                         = 1,
	StartFromLocalSource           = 2,
	BounceTowardsEnemy             = 3,
	Magnetism                      = 4,
	Reflected                      = 5,
	Penetrated                     = 6,
	HideTracer                     = 7,
	LagCompensation                = 8,
	TargetActorSet                 = 9,
	DisableTracerThrottling        = 10,
	EngineFlag1                    = 11,
	GameFlag1                      = 12,
	GameFlag2                      = 13,
	GameFlag3                      = 14,
	GameFlag4                      = 15,
	ELightProjectileFlag_MAX       = 16,
};

enum class ELightProjectileSplitPattern : uint8
{
	Cone                           = 0,
	Fan                            = 1,
	ELightProjectileSplitPattern_MAX = 2,
};

enum class EHitTypeEnum : uint8
{
	Friendly                       = 0,
	Enemy                          = 1,
	Neutral                        = 2,
	EHitTypeEnum_MAX               = 3,
};

enum class ERecoilEndOfPatternAction : uint8
{
	None                           = 0,
	PingPong                       = 1,
	Loop                           = 2,
	Reset                          = 3,
	ERecoilEndOfPatternAction_MAX  = 4,
};

enum class EWeaponReloadEvent : uint8
{
	Started                        = 0,
	Ended                          = 1,
	EWeaponReloadEvent_MAX         = 2,
};

enum class EWeaponUseEvent : uint8
{
	UseStarted                     = 0,
	Used                           = 1,
	UseFinished                    = 2,
	EWeaponUseEvent_MAX            = 3,
};

enum class EWeaponActionType : uint8
{
	EWAT_Default                   = 0,
	EWAT_Use                       = 1,
	EWAT_Reload                    = 2,
	EWAT_Equip                     = 3,
	EWAT_PutDown                   = 4,
	EWAT_UseModeSwitch             = 5,
	EWAT_Charge                    = 6,
	EWAT_Charged                   = 7,
	EWAT_Overcharged               = 8,
	EWAT_ResetFireSequence         = 9,
	EWAT_Discharge                 = 10,
	EWAT_EngineWeaponActionType6   = 11,
	EWAT_EngineWeaponActionType7   = 12,
	EWAT_EngineWeaponActionType8   = 13,
	EWAT_GameWeaponActionType1     = 14,
	EWAT_GameWeaponActionType2     = 15,
	EWAT_GameWeaponActionType3     = 16,
	EWAT_GameWeaponActionType4     = 17,
	EWAT_GameWeaponActionType5     = 18,
	EWAT_GameWeaponActionType6     = 19,
	EWAT_GameWeaponActionType7     = 20,
	EWAT_GameWeaponActionType8     = 21,
	EWAT_MAX                       = 22,
};

enum class EAmmoRegenType : int32
{
	Disabled                       = 0,
	GenerateAmmo                   = 1,
	RefillLoadedAmmo               = 2,
	EAmmoRegenType_MAX             = 3,
};

enum class EWeaponChargeEventType : uint8
{
	BlueprintEvent                 = 0,
	EnableParticleEmitter          = 1,
	DisableParticleEmitter         = 2,
	EWeaponChargeEventType_MAX     = 3,
};

enum class EWeaponChargeComparisonOperatorType : uint8
{
	LessThan                       = 0,
	LessThanOrEqual                = 1,
	GreaterThan                    = 2,
	GreaterThanOrEqual             = 3,
	EWeaponChargeComparisonOperatorType_MAX = 4,
};

enum class EWeaponChargeState : uint8
{
	None                           = 0,
	Discharging                    = 1,
	Charging                       = 2,
	Charged                        = 3,
	Overcharged                    = 4,
	EWeaponChargeState_MAX         = 5,
};

enum class EWeaponSkeletalControlEvent : uint8
{
	Pause                          = 0,
	Resume                         = 1,
	Reset                          = 2,
	CacheState                     = 3,
	RestoreState                   = 4,
	CacheStateAndReset             = 5,
	ResetAndPause                  = 6,
	SetInput                       = 7,
	AddInput                       = 8,
	ReturnToDefault                = 9,
	EWeaponSkeletalControlEvent_MAX = 10,
};

enum class EWeaponMaterialEffectBlendMode : uint8
{
	Multiply                       = 0,
	Add                            = 1,
	Replace                        = 2,
	AddReplace                     = 3,
	EWAVT_MAX                      = 4,
	EWeaponMaterialEffectBlendMode_MAX = 5,
};

enum class EWeaponEffectFlag : uint8
{
	AutoActivate                   = 0,
	PlayOnlyOnActiveSlot           = 1,
	IgnoredByFXCoordinator         = 2,
	HideWhenScoped                 = 3,
	SpawnOnlyWhenVisible           = 4,
	PlayersOnly                    = 5,
	EWeaponEffectFlag_MAX          = 6,
};

enum class EWeaponTextureMipsSetting : uint8
{
	Default                        = 0,
	High                           = 1,
	VeryHigh                       = 2,
	EWeaponTextureMipsSetting_MAX  = 3,
};

enum class EWeaponAttachmentVisibilityType : uint8
{
	EWAVT_Both                     = 0,
	EWAVT_FirstPerson              = 1,
	EWAVT_ThirdPerson              = 2,
	EWAVT_MAX                      = 3,
};

enum class EWeaponEffectType : uint8
{
	EWET_Default                   = 0,
	EWET_Use                       = 1,
	EWET_Charge                    = 2,
	EWET_Sight                     = 3,
	EWET_Charged                   = 4,
	EWET_Overcharged               = 5,
	EWET_Discharge                 = 6,
	EWET_EngineWeaponEffectType4   = 7,
	EWET_EngineWeaponEffectType5   = 8,
	EWET_EngineWeaponEffectType6   = 9,
	EWET_EngineWeaponEffectType7   = 10,
	EWET_EngineWeaponEffectType8   = 11,
	EWET_GameWeaponEffectType1     = 12,
	EWET_GameWeaponEffectType2     = 13,
	EWET_GameWeaponEffectType3     = 14,
	EWET_GameWeaponEffectType4     = 15,
	EWET_GameWeaponEffectType5     = 16,
	EWET_GameWeaponEffectType6     = 17,
	EWET_GameWeaponEffectType7     = 18,
	EWET_GameWeaponEffectType8     = 19,
	EWET_GameWeaponEffectType9     = 20,
	EWET_GameWeaponEffectType10    = 21,
	EWET_GameWeaponEffectType11    = 22,
	EWET_GameWeaponEffectType12    = 23,
	EWET_GameWeaponEffectType13    = 24,
	EWET_GameWeaponEffectType14    = 25,
	EWET_GameWeaponEffectType15    = 26,
	EWET_MAX                       = 27,
};

enum class EWeaponFireRateState : int32
{
	None                           = 0,
	Accelerating                   = 1,
	Decelerating                   = 2,
	EWeaponFireRateState_MAX       = 3,
};

enum class EWeaponHeatComparisonOperatorType : uint8
{
	LessThan                       = 0,
	LessThanOrEqual                = 1,
	GreaterThan                    = 2,
	GreaterThanOrEqual             = 3,
	EWeaponHeatComparisonOperatorType_MAX = 4,
};

enum class EWeaponShotDamageModifierType : int32
{
	Scale                          = 0,
	Add                            = 1,
	SimpleScale                    = 2,
	EWeaponShotDamageModifierType_MAX = 3,
};

enum class ESimpleMotionInputHandler : uint8
{
	None                           = 0,
	Set                            = 1,
	ESimpleMotionInputHandler_MAX  = 2,
};

enum class EWeaponTriggerFeedbackMode : uint8
{
	Off                            = 0,
	Feedback                       = 1,
	Weapon                         = 2,
	Vibration                      = 3,
	EWeaponTriggerFeedbackMode_MAX = 4,
};

enum class EWeaponTypeDataTableType : uint8
{
	BaseWeaponBalance              = 0,
	ManufacturerDamageScale        = 1,
	EWeaponTypeDataTableType_MAX   = 2,
};

enum class EWeaponVisibleAmmoUpdateMethod : uint8
{
	Auto                           = 0,
	Manual                         = 1,
	AutoAdd                        = 2,
	AutoRemove                     = 3,
	EWeaponVisibleAmmoUpdateMethod_MAX = 4,
};

enum class EWeaponVisibleAmmoState : uint8
{
	LoadedAmmo                     = 0,
	PendingLoadedAmmo              = 1,
	Disabled                       = 2,
	EWeaponVisibleAmmoState_MAX    = 3,
};

enum class EWeaponZoomState : uint8
{
	NotZoomed                      = 0,
	ZoomingIn                      = 1,
	Zoomed                         = 2,
	ZoomingOut                     = 3,
	EWeaponZoomState_MAX           = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// ScriptStruct GbxWeapon.GbxTrajectometerTraceData
struct FGbxTrajectometerTraceData
{
public:
	enum class ECollisionChannel                 Channel;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGbxTrajectoryTraceShape          Shape;                                             // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28D6[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ExtentX;                                           // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExtentY;                                           // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExtentZ;                                           // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28DA[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct GbxWeapon.WeaponShotModifierData
struct FWeaponShotModifierData
{
public:
	enum class EWeaponShotModifierType           ModifierType;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28E1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Damage;                                            // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UGbxDamageType>            DamageType;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UImpactData*                           ImpactData;                                        // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ProjectilesPerShot;                                // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28E6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCriticalHitDamageOverrides           CriticalHitOverrides;                              // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	float                                        ModifierValue;                                     // 0x28(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDamageGoreModifiers                  GoreModifiers;                                     // 0x2C(0x8)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_28E9[0x14];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct GbxWeapon.LightBeamAttachment
struct FLightBeamAttachment
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       Component;                                         // 0x8(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Socket;                                            // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize100                LocationOffset;                                    // 0x18(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_292A[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x128 (0x128 - 0x0)
// ScriptStruct GbxWeapon.LightBeamInitializationData
struct FLightBeamInitializationData
{
public:
	uint8                                        Pad_292E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class ULightBeamData>            DataBlueprint;                                     // 0x8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLightBeamAttachment                  Source;                                            // 0x10(0x28)(BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FLightBeamAttachment                  Target;                                            // 0x38(0x28)(BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	int32                                        Flags;                                             // 0x60(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_292F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 Instigator;                                        // 0x68(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                DamageCauser;                                      // 0x70(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damage;                                            // 0x78(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DamageIntervalOverride;                            // 0x7C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           DamageRampCurve;                                   // 0x80(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DamageRampScale;                                   // 0x88(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2939[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UGbxDamageType>            DamageType;                                        // 0x90(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UDamageSource>             DamageSource;                                      // 0x98(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DamageRadius;                                      // 0xA0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_293C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FForceSelection                       ImpactForce;                                       // 0xA8(0x20)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class UImpactData*                           ImpactDataOverride;                                // 0xC8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  NameID;                                            // 0xD0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Spread;                                            // 0xD8(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LifetimeOverride;                                  // 0xDC(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWeaponShotModifierType           ModifierType;                                      // 0xE0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2940[0x17];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ModifierValue;                                     // 0xF8(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCriticalHitDamageOverrides           CriticalHitOverrides;                              // 0xFC(0x8)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FDamageGoreModifiers                  GoreModifiers;                                     // 0x104(0x8)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2943[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ULightBeam*                            ParentBeam;                                        // 0x110(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2944[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x34 (0x34 - 0x0)
// ScriptStruct GbxWeapon.LightProjectileRingData
struct FLightProjectileRingData
{
public:
	uint8                                        Pad_2947[0x34];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x140 (0x140 - 0x0)
// ScriptStruct GbxWeapon.LightProjectileInitializationData
struct FLightProjectileInitializationData
{
public:
	uint8                                        Pad_294A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class ULightProjectileData>      DataBlueprint;                                     // 0x8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               StartLocation;                                     // 0x10(0xC)(BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               EndLocation;                                       // 0x1C(0xC)(BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Flags;                                             // 0x28(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              StartRotationOverride;                             // 0x2C(0xC)(BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class APawn*                                 Instigator;                                        // 0x38(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Source;                                            // 0x40(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Target;                                            // 0x48(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TargetOffset;                                      // 0x50(0xC)(BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damage;                                            // 0x5C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                DamageCauser;                                      // 0x60(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UGbxDamageType>            DamageType;                                        // 0x68(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UDamageSource>             DamageSource;                                      // 0x70(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DamageRadius;                                      // 0x78(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_295B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FForceSelection                       ImpactForce;                                       // 0x80(0x20)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class UImpactData*                           ImpactDataOverride;                                // 0xA0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpeedScale;                                        // 0xA8(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GravityScaleOverride;                              // 0xAC(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        FiringPatternID;                                   // 0xB0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        FireSocketID;                                      // 0xB1(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2962[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDamageModifierComponent*              DamageModifierComp;                                // 0xB8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  NameID;                                            // 0xC0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWeaponShotModifierType           ModifierType;                                      // 0xC8(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2968[0x17];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ModifierValue;                                     // 0xE0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCriticalHitDamageOverrides           CriticalHitOverrides;                              // 0xE4(0x8)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FDamageGoreModifiers                  GoreModifiers;                                     // 0xEC(0x8)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FLightProjectileRingData              RingData;                                          // 0xF4(0x34)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_296C[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C (0x1C - 0x0)
// ScriptStruct GbxWeapon.FiringPatternSample
struct FFiringPatternSample
{
public:
	struct FRotator                              StartRotation;                                     // 0x0(0xC)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              EndRotation;                                       // 0xC(0xC)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bUseEndRotation;                                   // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseID;                                            // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ID;                                                // 0x1A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2970[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x58 - 0x50)
// ScriptStruct GbxWeapon.LightBeamTickFunction
struct FLightBeamTickFunction : public FTickFunction
{
public:
	uint8                                        Pad_2978[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct GbxWeapon.LightBeamImpactFXTrackingData
struct FLightBeamImpactFXTrackingData
{
public:
	class USceneComponent*                       Component;                                         // 0x0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPhysicalMaterial*                     PhysicalMaterial;                                  // 0x8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_297B[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC8 (0xC8 - 0x0)
// ScriptStruct GbxWeapon.ClientLightBeamState
struct FClientLightBeamState
{
public:
	uint8                                        CreationID;                                        // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_297E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class ULightBeamData>            DataBlueprint;                                     // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLightBeamAttachment                  Source;                                            // 0x10(0x28)(NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FLightBeamAttachment                  Target;                                            // 0x38(0x28)(NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class APawn*                                 Instigator;                                        // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                DamageCauser;                                      // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UImpactData*                           ImpactDataOverride;                                // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Spread;                                            // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       Flags;                                             // 0x7C(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2985[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystem*                       BeamFXOverride;                                    // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                       ViewerBeamFXOverride;                              // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseEvent*                           BeamImpactAudioOverride;                           // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LifetimeOverride;                                  // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damage;                                            // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UGbxDamageType>            DamageType;                                        // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UDamageSource>             DamageSource;                                      // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DamageRadius;                                      // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_298A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           DamageRampCurve;                                   // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DamageRampScale;                                   // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ImpactForce;                                       // 0xC4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct GbxWeapon.LightBeamQueryData
struct FLightBeamQueryData
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELightBeamQueryActorType          ActorType;                                         // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2990[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                OtherActor;                                        // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ULightBeamData>            BeamClass;                                         // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  NameID;                                            // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxWeapon.LightBeamParticlePoolData
struct FLightBeamParticlePoolData
{
public:
	class UParticleSystemComponent*              PSC;                                               // 0x0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_299A[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x60 - 0x50)
// ScriptStruct GbxWeapon.LightBeamBatchTickFunction
struct FLightBeamBatchTickFunction : public FTickFunction
{
public:
	uint8                                        Pad_299F[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x58 - 0x50)
// ScriptStruct GbxWeapon.PostLightBeamTickFunction
struct FPostLightBeamTickFunction : public FTickFunction
{
public:
	uint8                                        Pad_29A1[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x58 - 0x50)
// ScriptStruct GbxWeapon.LightProjectileTickFunction
struct FLightProjectileTickFunction : public FTickFunction
{
public:
	uint8                                        Pad_29A4[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxWeapon.LightProjectileExplodeData
struct FLightProjectileExplodeData
{
public:
	bool                                         bHitActor;                                         // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29A8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector_NetQuantize                   Location;                                          // 0x4(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxWeapon.LightProjectileImpactData
struct FLightProjectileImpactData
{
public:
	bool                                         bPlayEffect;                                       // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29AB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector_NetQuantize                   Location;                                          // 0x4(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct GbxWeapon.LightProjectileAttachment
struct FLightProjectileAttachment
{
public:
	uint8                                        Pad_29B0[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                Actor;                                             // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       Component;                                         // 0x10(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Socket;                                            // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize100                RelativeLocation;                                  // 0x20(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              RelativeRotation;                                  // 0x2C(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector_NetQuantizeNormal             RelativeImpactNormal;                              // 0x38(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29B9[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct GbxWeapon.ReplicatedLightProjectileInitializationData
struct FReplicatedLightProjectileInitializationData
{
public:
	uint8                                        CreationID;                                        // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29C2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class ULightProjectileData>      DataBlueprint;                                     // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize10                 StartLocation;                                     // 0x10(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize10                 EndLocation;                                       // 0x1C(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              StartRotationOverride;                             // 0x28(0xC)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_29C8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 Instigator;                                        // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Source;                                            // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Target;                                            // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize100                TargetOffset;                                      // 0x50(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29CF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                DamageCauser;                                      // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UImpactData*                           ImpactDataOverride;                                // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpeedScale;                                        // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GravityScaleOverride;                              // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       Flags;                                             // 0x78(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWeaponShotModifierType           ModifierType;                                      // 0x7A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        FiringPatternID;                                   // 0x7B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        FireSocketID;                                      // 0x7C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        RandomSeed;                                        // 0x7D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29D9[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Damage;                                            // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29DC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UGbxDamageType>            DamageType;                                        // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UDamageSource>             DamageSource;                                      // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DamageRadius;                                      // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ImpactForce;                                       // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ModifierValue;                                     // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29DF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystem*                       TracerFXOverride;                                  // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseEvent*                           BulletByAdditiveLayer;                             // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseEvent*                           TravellingAudio;                                   // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GbxWeapon.LightProjectileQueryData
struct FLightProjectileQueryData
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELightProjectileQueryActorType    ActorType;                                         // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29E5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class ULightProjectileData>      ProjectileClass;                                   // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  NameID;                                            // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct GbxWeapon.LightProjectileAudioProperties
struct FLightProjectileAudioProperties
{
public:
	class UWwiseEvent*                           BulletByEntrance;                                  // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseEvent*                           BulletByBody;                                      // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseEvent*                           BulletByExit;                                      // 0x10(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BulletByMaxDistance;                               // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BulletByChance;                                    // 0x1C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UEffectCollectionData>     TravellingAudioFxCollection;                       // 0x20(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseEvent*                           TravellingAudio;                                   // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TravellingAudioComponentSize;                      // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29F7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWwiseRtpc*                            ListenerApproachSpeedRtpc;                         // 0x38(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct GbxWeapon.LightProjectileRingSubdivisionSettings
struct FLightProjectileRingSubdivisionSettings
{
public:
	int32                                        MaxSubdivisions;                                   // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELightProjectileSubdivisionMode   ValueMode;                                         // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct GbxWeapon.LightProjectileRingSettings
struct FLightProjectileRingSettings
{
public:
	float                                        InitialRadius;                                     // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Angle;                                             // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InitialProjectileCount;                            // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMakeSolidRing;                                    // 0xC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseBodyMeshBoundsForCollision;                    // 0xD(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A06[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLightProjectileRingSubdivisionSettings Subdivide;                                         // 0x10(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bSubdivide;                                        // 0x1C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A0A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               RingAxis;                                          // 0x20(0xC)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseRingAxis;                                      // 0x2C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A0D[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxWeapon.LightProjectileTimedEvent
struct FLightProjectileTimedEvent
{
public:
	float                                        Time;                                              // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A15[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CustomEvent;                                       // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxWeapon.LightProjectileParticlePoolData
struct FLightProjectileParticlePoolData
{
public:
	class UParticleSystemComponent*              PSC;                                               // 0x0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A19[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x60 - 0x50)
// ScriptStruct GbxWeapon.LightProjectileBatchTickFunction
struct FLightProjectileBatchTickFunction : public FTickFunction
{
public:
	uint8                                        Pad_2A1D[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x58 - 0x50)
// ScriptStruct GbxWeapon.PostLightProjectileTickFunction
struct FPostLightProjectileTickFunction : public FTickFunction
{
public:
	uint8                                        Pad_2A22[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x188 (0x188 - 0x0)
// ScriptStruct GbxWeapon.ThrowProjectileAsyncRequest
struct FThrowProjectileAsyncRequest
{
public:
	TSubclassOf<class AProjectile>               Class;                                             // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Source;                                            // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SourceSocket;                                      // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Target;                                            // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TargetSocket;                                      // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TargetOffset;                                      // 0x28(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxPrediction;                                     // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Speed;                                             // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AnglePercent;                                      // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              DirectionOffset;                                   // 0x40(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	int32                                        InstanceCount;                                     // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InstanceDelay;                                     // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A2F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxExposeOnSpawnValueCache           ExposeOnSpawnCache;                                // 0x58(0x110)(BlueprintVisible, BlueprintReadOnly, AdvancedDisplay, NativeAccessSpecifierPublic)
	UDelegateProperty_                           Spawned;                                           // 0x168(0x10)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	UDelegateProperty_                           Failed;                                            // 0x178(0x10)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
};

// 0x20 (0x80 - 0x60)
// ScriptStruct GbxWeapon.PredictProjectilePathAsyncRequest
struct FPredictProjectilePathAsyncRequest : public FPredictProjectilePathParams
{
public:
	enum class EGbxTraceAsyncMode                TraceMode;                                         // 0x60(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EObjectTypeQuery                  ObjectType;                                        // 0x61(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A32[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  TraceName;                                         // 0x68(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UDelegateProperty_                           Finished;                                          // 0x70(0x10)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxWeapon.WeaponAttachState
struct FWeaponAttachState
{
public:
	uint32                                       NetworkID;                                         // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Slot;                                              // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A35[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 Instigator;                                        // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWeaponEquipType                  EquipType;                                         // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWeaponPutDownType                PutDownType;                                       // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A38[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct GbxWeapon.WeaponUseModeState
struct FWeaponUseModeState
{
public:
	int32                                        InputChannels;                                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        PrimaryInputChannel;                               // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReloadNeeded;                                     // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A3A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWeaponUseComponent*                   UseComponent;                                      // 0x8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWeaponAmmoComponent*                  AmmoComponent;                                     // 0x10(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWeaponReloadComponent*                ReloadComponent;                                   // 0x18(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWeaponZoomComponent*                  ZoomComponent;                                     // 0x20(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWeaponAudioProviderComponent*         AudioProviderComponent;                            // 0x28(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDamageModifierComponent*              DamageModifierComponent;                           // 0x30(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UActorComponent*>               Components;                                        // 0x38(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxWeapon.ConditionalActionInfo
struct FConditionalActionInfo
{
public:
	class UGbxCondition*                         Condition;                                         // 0x0(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UGbxAction>                Action;                                            // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGbxActionNetMode                 ActionNetMode;                                     // 0x10(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A44[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxWeapon.ConditionalWeaponActionSet
struct FConditionalWeaponActionSet
{
public:
	class UGbxCondition*                         Condition;                                         // 0x0(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FConditionalActionInfo>        ConditionalActions;                                // 0x8(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct GbxWeapon.BodyWeaponActionInfo
struct FBodyWeaponActionInfo
{
public:
	enum class EWeaponActionType                 WeaponAction;                                      // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A49[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxCondition*                         Condition;                                         // 0x8(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FConditionalWeaponActionSet>   ConditionalWeaponActions;                          // 0x10(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<struct FConditionalActionInfo>        ConditionalActions;                                // 0x20(0x10)(ZeroConstructor, Deprecated, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct GbxWeapon.WeaponSkeletalControlInstance
struct FWeaponSkeletalControlInstance
{
public:
	class UWeaponSkeletalControlBase*            Data;                                              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A4D[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// ScriptStruct GbxWeapon.WeaponMaterialEffectInstance
struct FWeaponMaterialEffectInstance
{
public:
	uint8                                        Pad_2A4F[0x48];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           ValueOverTime;                                     // 0x48(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A50[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct GbxWeapon.WeaponEffectAttachment
struct FWeaponEffectAttachment
{
public:
	uint8                                        Pad_2A53[0x48];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystem*                       Effect;                                            // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UEffectCollectionData>     ConditionalEffect;                                 // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystemComponent*              PSC;                                               // 0x58(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxWeapon.WeaponChargeEventNotify
struct FWeaponChargeEventNotify
{
public:
	float                                        Threshold;                                         // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWeaponChargeComparisonOperatorType Comparision;                                       // 0x4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWeaponChargeEventType            EVENTTYPE;                                         // 0x5(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A59[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  EventName;                                         // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct GbxWeapon.WeaponChargeAttributeEffect
struct FWeaponChargeAttributeEffect
{
public:
	int32                                        StatesBitmask;                                     // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bApplyToInstigator;                                // 0x4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A66[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAttributeEffectData                  AttributeEffect;                                   // 0x8(0x48)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FGbxAttributeModifierHandle           AttributeModifier;                                 // 0x50(0x10)(Transient, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxWeapon.WeaponRegisterSkeletalControlData
struct FWeaponRegisterSkeletalControlData
{
public:
	enum class EWeaponEffectType                 Type;                                              // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWeaponAttachmentVisibilityType   Visibility;                                        // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bPlayerOnly : 1;                                   // Mask: 0x1, PropSize: 0x10x2(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_D8 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2A74[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWeaponSkeletalControlBase*            Control;                                           // 0x8(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxWeapon.WeaponEffectQueryData
struct FWeaponEffectQueryData
{
public:
	enum class EWeaponEffectType                 Type;                                              // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A77[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ID;                                                // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWeaponAttachmentVisibilityType   Visibility;                                        // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A7B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        UseModeBitmask;                                    // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct GbxWeapon.WeaponMaterialEffectData
struct FWeaponMaterialEffectData
{
public:
	class FName                                  MaterialParamName;                                 // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWeaponAttachmentVisibilityType   Visibility;                                        // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWeaponMaterialEffectBlendMode    BlendMode;                                         // 0x9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bPlayOnlyOnActiveSlot : 1;                         // Mask: 0x1, PropSize: 0x10xA(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bLoop : 1;                                         // Mask: 0x2, PropSize: 0x10xA(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bApplyAttribute : 1;                               // Mask: 0x4, PropSize: 0x10xA(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bScaleAttributeByValueOverTime : 1;                // Mask: 0x8, PropSize: 0x10xA(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bScaleAttributeByDeltaTime : 1;                    // Mask: 0x10, PropSize: 0x10xA(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_D9 : 3;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2A8B[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAttributeInitializationData          AttributeValue;                                    // 0x10(0x38)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class UCurveFloat*                           ValueOverTime;                                     // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Impulse;                                           // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DecayRate;                                         // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxValue;                                          // 0x5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct GbxWeapon.WeaponRegisterMaterialEffectData
struct FWeaponRegisterMaterialEffectData
{
public:
	enum class EWeaponEffectType                 Type;                                              // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A93[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  MaterialParamName;                                 // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ID;                                                // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWeaponAttachmentVisibilityType   Visibility;                                        // 0x14(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A96[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        UseModeBitmask;                                    // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Slot;                                              // 0x1C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWeaponMaterialEffectBlendMode    BlendMode;                                         // 0x1D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bPlayOnlyOnActiveSlot : 1;                         // Mask: 0x1, PropSize: 0x10x1E(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bLoop : 1;                                         // Mask: 0x2, PropSize: 0x10x1E(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bApplyAttribute : 1;                               // Mask: 0x4, PropSize: 0x10x1E(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bScaleAttributeByValueOverTime : 1;                // Mask: 0x8, PropSize: 0x10x1E(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bScaleAttributeByDeltaTime : 1;                    // Mask: 0x10, PropSize: 0x10x1E(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_DA : 3;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2AA6[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAttributeInitializationData          AttributeValue;                                    // 0x20(0x38)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class UCurveFloat*                           ValueOverTime;                                     // 0x58(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Impulse;                                           // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AAB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAttributeInitializationData          Duration;                                          // 0x68(0x38)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        DecayRate;                                         // 0xA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxValue;                                          // 0xA4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct GbxWeapon.WeaponRegisterAttachmentEffectData
struct FWeaponRegisterAttachmentEffectData
{
public:
	enum class EWeaponEffectType                 Type;                                              // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AB7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystem*                       Effect;                                            // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UEffectCollectionData>     ConditionalEffect;                                 // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Socket;                                            // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ScopedSocket;                                      // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ID;                                                // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWeaponAttachmentVisibilityType   Visibility;                                        // 0x2C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AC0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        UseModeBitmask;                                    // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Slot;                                              // 0x34(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AC1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Flags;                                             // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               RelativeLocation;                                  // 0x3C(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              RelativeRotation;                                  // 0x48(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        RelativeScale;                                     // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AutoActivateModeBitmask;                           // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bPlayOnlyOnActiveSlot : 1;                         // Mask: 0x1, PropSize: 0x10x5C(0x1)(Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAutoActivate : 1;                                 // Mask: 0x2, PropSize: 0x10x5C(0x1)(Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIgnoredByFXCoordinator : 1;                       // Mask: 0x4, PropSize: 0x10x5C(0x1)(Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bHideWhenScoped : 1;                               // Mask: 0x8, PropSize: 0x10x5C(0x1)(Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AD8[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxWeapon.WeaponHeatEventNotify
struct FWeaponHeatEventNotify
{
public:
	float                                        Threshold;                                         // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWeaponHeatComparisonOperatorType Comparision;                                       // 0x4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AE0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  EventName;                                         // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GbxWeapon.WeaponShotModifierTypeName
struct FWeaponShotModifierTypeName
{
public:
	enum class EWeaponShotModifierType           Type;                                              // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AE8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Name;                                              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Tooltip;                                           // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GbxWeapon.LightBeamFlagName
struct FLightBeamFlagName
{
public:
	enum class ELightBeamFlag                    Type;                                              // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AEC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Name;                                              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Tooltip;                                           // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GbxWeapon.LightProjectileFlagName
struct FLightProjectileFlagName
{
public:
	enum class ELightProjectileFlag              Type;                                              // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AF8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Name;                                              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Tooltip;                                           // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GbxWeapon.WeaponActionTypeName
struct FWeaponActionTypeName
{
public:
	enum class EWeaponActionType                 Type;                                              // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B03[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Name;                                              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Tooltip;                                           // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GbxWeapon.WeaponEffectTypeName
struct FWeaponEffectTypeName
{
public:
	enum class EWeaponEffectType                 Type;                                              // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B0A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Name;                                              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Tooltip;                                           // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct GbxWeapon.WeaponSkeletalControlState
struct FWeaponSkeletalControlState
{
public:
	uint8                                        Pad_2B0E[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// ScriptStruct GbxWeapon.WeaponTriggerFireThreasholdData
struct FWeaponTriggerFireThreasholdData
{
public:
	float                                        Position;                                          // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct GbxWeapon.WeaponTriggerVibrationData
struct FWeaponTriggerVibrationData
{
public:
	float                                        Position;                                          // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Frequency;                                         // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Amplitude;                                         // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct GbxWeapon.WeaponTriggerWeaponData
struct FWeaponTriggerWeaponData
{
public:
	float                                        StartPosition;                                     // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EndPosition;                                       // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Force;                                             // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GbxWeapon.WeaponTriggerFeedbackData
struct FWeaponTriggerFeedbackData
{
public:
	float                                        Position;                                          // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Force;                                             // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct GbxWeapon.WeaponVisibleAmmoEffectData
struct FWeaponVisibleAmmoEffectData
{
public:
	class UParticleSystem*                       Effect;                                            // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B1F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RelativeTransform;                                 // 0x10(0x30)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxWeapon.WeaponZoomLevel
struct FWeaponZoomLevel
{
public:
	float                                        Duration;                                          // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FOVScale;                                          // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FOVLerpPct;                                        // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ViewModelFOVScale;                                 // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// ScriptStruct GbxWeapon.WeaponZoomState
struct FWeaponZoomState
{
public:
	enum class EWeaponZoomState                  State;                                             // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Level;                                             // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


