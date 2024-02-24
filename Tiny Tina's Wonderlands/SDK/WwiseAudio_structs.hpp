#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EWwiseTrackDirectionality : int32
{
	ForwardsAndBackwards           = 0,
	OnlyForwards                   = 1,
	OnlyBackwards                  = 2,
	EWwiseTrackDirectionality_MAX  = 3,
};

enum class EWwiseAudioComponentPoolMode : uint8
{
	Fixed                          = 0,
	Steal                          = 1,
	EWwiseAudioComponentPoolMode_MAX = 2,
};

enum class EWwisePlaybackConfiguration : int32
{
	Hifi                           = 0,
	Small                          = 1,
	Headphones                     = 2,
	NightTime                      = 3,
	Mono                           = 4,
	Spatial                        = 5,
	EWwisePlaybackConfiguration_MAX = 6,
};

enum class EBankLoadState : uint8
{
	Unloaded                       = 0,
	AsyncLoading                   = 1,
	Loaded                         = 2,
	EBankLoadState_MAX             = 3,
};

enum class EAcousticsMode : uint8
{
	Disabled                       = 0,
	Enabled                        = 1,
	EnabledUnconditionalSampleMode = 2,
	EnabledOmnidirectional         = 3,
	UsePlayerLocationForAcoustics  = 4,
	EAcousticsMode_MAX             = 5,
};

enum class EWwiseMultiPositionType : uint8
{
	MultiSources                   = 1,
	MultiDirections                = 2,
	EWwiseMultiPositionType_MAX    = 3,
};

enum class EWwiseCurveInterpolation : uint8
{
	Log3                           = 0,
	Sine                           = 1,
	Log1                           = 2,
	InvSCurve                      = 3,
	Linear                         = 4,
	SCurve                         = 5,
	Exp1                           = 6,
	SineRecip                      = 7,
	Exp3                           = 8,
	EWwiseCurveInterpolation_MAX   = 9,
};

enum class EWwiseEventAction : uint8
{
	Stop                           = 0,
	Pause                          = 1,
	Resume                         = 2,
	Break                          = 3,
	ReleaseEnvelope                = 4,
	EWwiseEventAction_MAX          = 5,
};

enum class EWwisePostEventFlags : uint8
{
	MarkerCallbacks                = 0,
	SupportDuration                = 1,
	SupportPlaybackPosition        = 2,
	MusicSyncCallbacks             = 3,
	EWwisePostEventFlags_MAX       = 4,
};

enum class EWwiseAudioComponentMixBehavior : uint8
{
	Standard                       = 0,
	DirectToMasterMix              = 1,
	MixGroup                       = 2,
	EWwiseAudioComponentMixBehavior_MAX = 3,
};

enum class EWwiseAudioComponentType : uint8
{
	Standard                       = 0,
	ActorDefault                   = 1,
	Temporary                      = 2,
	Pooled                         = 3,
	EWwiseAudioComponentType_MAX   = 4,
};

enum class EWwiseEffectType : uint8
{
	ListenerEnvironmentalEffect    = 0,
	EWwiseEffectType_MAX           = 1,
};

enum class EWwiseDebugFlags : uint8
{
	ShowOwner                      = 0,
	ShowComponentType              = 1,
	ShowEventNames                 = 2,
	ShowDistanceToListener         = 3,
	HideActiveComponents           = 4,
	ShowHibernatingComponents      = 5,
	ShowDetailedLocations          = 6,
	EWwiseDebugFlags_MAX           = 7,
};

enum class EWwiseAudioComponentSpriteSize : uint8
{
	Large                          = 0,
	Small                          = 1,
	None                           = 2,
	EWwiseAudioComponentSpriteSize_MAX = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// ScriptStruct WwiseAudio.WwisePlaybackInstance
struct FWwisePlaybackInstance
{
public:
	uint8                                        Pad_7AD[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// ScriptStruct WwiseAudio.WwiseMusicTiming
struct FWwiseMusicTiming
{
public:
	float                                        CurrentPositionInBeats;                            // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BeatDurationInSeconds;                             // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BarLengthInBeats;                                  // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SegementLengthInBeats;                             // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GridLengthInBeats;                                 // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct WwiseAudio.WwiseAudioEventTrackKey
struct FWwiseAudioEventTrackKey
{
public:
	float                                        Time;                                              // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7D6[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWwiseEvent*                           AkAudioEvent;                                      // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EventName;                                         // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct WwiseAudio.MovieSceneWwiseSectionTemplateData
struct FMovieSceneWwiseSectionTemplateData
{
public:
	enum class EWwiseTrackDirectionality         PlaybackDirection;                                 // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7E1[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWwiseEvent*                           WwiseEventStart;                                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseEvent*                           WwiseEventStop;                                    // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EmitterRadius;                                     // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowPlaythrough;                                 // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsLoopingEvent;                                   // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7E9[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        RowIdx;                                            // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                          SectionStartFrame;                                 // 0x24(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                          SectionEndFrame;                                   // 0x28(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameRate                            CachedFrameRate;                                   // 0x2C(0x8)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7EE[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x58 - 0x20)
// ScriptStruct WwiseAudio.MovieSceneWwiseSectionTemplate
struct FMovieSceneWwiseSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneWwiseSectionTemplateData   TemplateData;                                      // 0x20(0x38)(NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct WwiseAudio.WwiseAmbSoundCheckpointRecord
struct FWwiseAmbSoundCheckpointRecord
{
public:
	bool                                         bCurrentlyPlaying;                                 // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct WwiseAudio.WwiseLocationOverride
struct FWwiseLocationOverride
{
public:
	struct FVector                               Location;                                          // 0x0(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Rotation;                                          // 0xC(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Gain;                                              // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct WwiseAudio.WwiseExternalSourceMediaInfo
struct FWwiseExternalSourceMediaInfo
{
public:
	uint32                                       ExternalSourceCookie;                              // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       FileID;                                            // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLocalize;                                         // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7FF[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct WwiseAudio.WwiseEventConfiguration
struct FWwiseEventConfiguration
{
public:
	class UWwiseEvent*                           Event;                                             // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FWwiseExternalSourceMediaInfo> ExternalSourceMedia;                               // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct WwiseAudio.WwiseEmitterAcousticData
struct FWwiseEmitterAcousticData
{
public:
	float                                        DryVolume;                                         // 0x0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ERVolume;                                          // 0x4(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LRVolume;                                          // 0x8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LRDuration;                                        // 0xC(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DirectionAmbiX;                                    // 0x10(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DirectionAmbiY;                                    // 0x14(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_809[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct WwiseAudio.WwiseEffectInfo
struct FWwiseEffectInfo
{
public:
	int32                                        EffectID;                                          // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WetVolume;                                         // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DryVolume;                                         // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2F0 (0x2F0 - 0x0)
// ScriptStruct WwiseAudio.WwiseEmitter
struct FWwiseEmitter
{
public:
	uint8                                        Pad_80F[0x2D8];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UWwiseAudioComponent*                  OwnerComponent;                                    // 0x2D8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_810[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct WwiseAudio.WwiseEmitterSource
struct FWwiseEmitterSource
{
public:
	struct FTransform                            Transform;                                         // 0x0(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Gain;                                              // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_815[0xC];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct WwiseAudio.WwiseExternalAssetData
struct FWwiseExternalAssetData
{
public:
	TSoftObjectPtr<class UWwiseEvent>            WwiseEventPtr;                                     // 0x0(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EstimatedDuration;                                 // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_81A[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// ScriptStruct WwiseAudio.WwiseBankEfficiencyReportDatum
struct FWwiseBankEfficiencyReportDatum
{
public:
	class FString                                BankName;                                          // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalEvents;                                       // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_81F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<class UWwiseEvent*>                     LoadedEvents;                                      // 0x18(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct WwiseAudio.WwiseAcousticEmulationParameters
struct FWwiseAcousticEmulationParameters
{
public:
	int32                                        EarlyReflectionsOffsetTimeMs;                      // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GlobalWetnessScaleDB;                              // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DecayDistance;                                     // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EarlyReflectionDecay;                              // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LateReflectionDecay;                               // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DryVolumeCorrectionDistance;                       // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


