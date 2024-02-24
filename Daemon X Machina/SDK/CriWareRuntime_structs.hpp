#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ECriFsBinderStatus : uint8
{
	Stop                           = 0,
	Binding                        = 1,
	Complete                       = 2,
	Error                          = 3,
	ECriFsBinderStatus_MAX         = 4,
};

enum class EAtomComponentStatus : uint8
{
	Stop                           = 0,
	Prep                           = 1,
	Playing                        = 2,
	PlayEnd                        = 3,
	Error                          = 4,
	EAtomComponentStatus_MAX       = 5,
};

enum class EAtomCueSheetLoaderComponentStatus : uint8
{
	Stop                           = 0,
	Loading                        = 1,
	LoadEnd                        = 2,
	Serializing                    = 3,
	SerializeEnd                   = 4,
	Binding                        = 5,
	BindEnd                        = 6,
	Complete                       = 7,
	Error                          = 8,
	EAtomCueSheetLoaderComponentStatus_MAX = 9,
};

enum class ECriFsLoaderStatus : uint8
{
	Stop                           = 0,
	Loading                        = 1,
	Complete                       = 2,
	Error                          = 3,
	ECriFsLoaderStatus_MAX         = 4,
};

enum class EManaSubtitlesEncoding : uint8
{
	Default                        = 0,
	ANSI                           = 1,
	Utf8                           = 2,
	Utf16                          = 3,
	EManaSubtitlesEncoding_MAX     = 4,
};

enum class EManaComponentStatus : uint8
{
	Stop                           = 0,
	DecHdr                         = 1,
	WaitPrep                       = 2,
	Prep                           = 3,
	Ready                          = 4,
	Playing                        = 5,
	PlayEnd                        = 6,
	Error                          = 7,
	StopProcessing                 = 8,
	EManaComponentStatus_MAX       = 9,
};

enum class EManaPlaybackTimer : uint8
{
	Default                        = 0,
	RealTime                       = 1,
	FrameTime                      = 2,
	EManaPlaybackTimer_MAX         = 3,
};

enum class EManaFrameAction : uint8
{
	Default                        = 0,
	Hold                           = 1,
	Clear                          = 2,
	EManaFrameAction_MAX           = 3,
};

enum class EAtomSortOrderType : uint8
{
	Ascending                      = 0,
	Descending                     = 1,
	EAtomSortOrderType_MAX         = 2,
};

enum class EAtomProfileSortType : uint8
{
	AtomComponentID                = 0,
	Distance                       = 1,
	Name                           = 2,
	Time                           = 3,
	EAtomProfileSortType_MAX       = 4,
};

enum class ECriWareSpeakerSystem : uint8
{
	Surround5Point1                = 0,
	Surround7Point1                = 1,
	ECriWareSpeakerSystem_MAX      = 2,
};

enum class EAtomSoundRendererType : uint8
{
	Any                            = 0,
	Native                         = 1,
	Asr                            = 2,
	Hardware1                      = 1,
	Hardware2                      = 5,
	Hardware3                      = 9,
	Hardware4                      = 13,
	Pad                            = 255,
	EAtomSoundRendererType_MAX     = 256,
};

enum class EEngineIniFileType : uint8
{
	EngBaseEngineIni               = 0,
	EngWindowsEngineIni            = 1,
	ProjDefaultEngineIni           = 4,
	ProjWindowsEngineIni           = 5,
	EEngineIniFileType_MAX         = 6,
};

enum class EManaComponentTextureType : uint8
{
	Texture_Y                      = 0,
	Texture_U                      = 1,
	Texture_V                      = 2,
	Texture_A                      = 3,
	Texture_UV                     = 4,
	Texture_RGB                    = 5,
	Texture_MAX                    = 6,
};

enum class EManaSoundType : uint8
{
	Adx                            = 0,
	HCA                            = 1,
	Num                            = 2,
	Unknown                        = 255,
	EManaSoundType_MAX             = 256,
};

enum class EManaColorSpace : uint8
{
	Rec601                         = 0,
	Rec709                         = 1,
	Num                            = 2,
	EManaColorSpace_MAX            = 3,
};

enum class EManaMovieType : uint8
{
	SofdecPrime                    = 0,
	H264                           = 1,
	VP9                            = 2,
	Num                            = 3,
	Unknown                        = 255,
	EManaMovieType_MAX             = 256,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// ScriptStruct CriWareRuntime.AtomSelectorParam
struct FAtomSelectorParam
{
public:
	class FString                                Selector;                                          // 0x0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Label;                                             // 0x10(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct CriWareRuntime.AtomAisacControlParam
struct FAtomAisacControlParam
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C99[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct CriWareRuntime.ManaEventPointInfo
struct FManaEventPointInfo
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Time;                                              // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Type;                                              // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Parameter;                                         // 0x18(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct CriWareRuntime.AtomAisacInfo
struct FAtomAisacInfo
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DefaultControlFlag;                                // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CAE[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DefaultControlValue;                               // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ControlId;                                         // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CAF[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ControlName;                                       // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct CriWareRuntime.AtomProfileItem
struct FAtomProfileItem
{
public:
	int32                                        AtomComponentID;                                   // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CB1[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                AtomCueName;                                       // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               AtomComponentLocation;                             // 0x18(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DistanceFromListener;                              // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayingTime;                                       // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CB2[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                PlayerState;                                       // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumSounds;                                         // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CB3[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ConcurrencyName;                                   // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CB4[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct CriWareRuntime.AtomSoundManager
struct FAtomSoundManager
{
public:
	uint8                                        Pad_CB6[0x1];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x20 - 0x8)
// ScriptStruct CriWareRuntime.AtomTriggerRow
struct FAtomTriggerRow : public FTableRowBase
{
public:
	float                                        Time;                                              // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CB8[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Bone;                                              // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundAtomCue*                         Cue;                                               // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct CriWareRuntime.AtomAsrRackConfig
struct FAtomAsrRackConfig
{
public:
	int32                                        SoundRendererType;                                 // 0x0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct CriWareRuntime.AtomAsrRackConfigUI
struct FAtomAsrRackConfigUI
{
public:
	enum class EAtomSoundRendererType            SoundRendererTypeUI;                               // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CBC[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ElementID;                                         // 0x4(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct CriWareRuntime.ManaAudioTrackInfo
struct FManaAudioTrackInfo
{
public:
	int32                                        NumChannels;                                       // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SamplingRate;                                      // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalSamples;                                      // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsAmbisonics;                                     // 0xC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EManaSoundType                    Type;                                              // 0xD(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CC0[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C (0x1C - 0x0)
// ScriptStruct CriWareRuntime.ManaVideoTrackInfo
struct FManaVideoTrackInfo
{
public:
	struct FIntPoint                             TextureDimensions;                                 // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FIntPoint                             DisplayDimensions;                                 // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FrameRate;                                         // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalFrames;                                       // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsAlpha;                                          // 0x18(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EManaMovieType                    Type;                                              // 0x19(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CC4[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct CriWareRuntime.AtomTrackKeyframe
struct FAtomTrackKeyframe
{
public:
	float                                        Time;                                              // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CC5[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundAtomCue*                         Cue;                                               // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct CriWareRuntime.AtomCueIdTrackKeyframe
struct FAtomCueIdTrackKeyframe
{
public:
	float                                        Time;                                              // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CueId;                                             // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct CriWareRuntime.AtomCueNameTrackKeyframe
struct FAtomCueNameTrackKeyframe
{
public:
	float                                        Time;                                              // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CC8[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CueName;                                           // 0x8(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct CriWareRuntime.AtomSelectorTrackKeyframe
struct FAtomSelectorTrackKeyframe
{
public:
	float                                        Time;                                              // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CCA[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                SelectorLabel;                                     // 0x8(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x160 (0x160 - 0x0)
// ScriptStruct CriWareRuntime.MovieSceneAtomSectionTemplateData
struct FMovieSceneAtomSectionTemplateData
{
public:
	class USoundAtomCue*                         Sound;                                             // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AtomStartOffset;                                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CCC[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       SectionStartTimeSeconds;                           // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel               AtomPitchMultiplierCurve;                          // 0x18(0xA0)(NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel               AtomVolumeCurve;                                   // 0xB8(0xA0)(NativeAccessSpecifierPublic)
	int32                                        RowIndex;                                          // 0x158(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CCD[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x160 (0x180 - 0x20)
// ScriptStruct CriWareRuntime.MovieSceneAtomSectionTemplate
struct FMovieSceneAtomSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneAtomSectionTemplateData    AtomData;                                          // 0x20(0x160)(NativeAccessSpecifierPublic)
};

}


