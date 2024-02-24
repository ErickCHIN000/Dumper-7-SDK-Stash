#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EFMODEventProperty : uint8
{
	ChannelPriority                = 0,
	ScheduleDelay                  = 1,
	ScheduleLookahead              = 2,
	MinimumDistance                = 3,
	MaximumDistance                = 4,
	Count                          = 5,
	EFMODEventProperty_MAX         = 6,
};

enum class EFMODValid : uint8
{
	Valid                          = 0,
	NotValid                       = 1,
	EFMODValid_MAX                 = 2,
};

enum class EFMOD_STUDIO_STOP_MODE : uint8
{
	ALLOWFADEOUT                   = 0,
	IMMEDIATE                      = 1,
	EFMOD_STUDIO_STOP_MODE_MAX     = 2,
};

enum class EFMODEventControlKey : uint8
{
	Stop                           = 0,
	Play                           = 1,
	EFMODEventControlKey_MAX       = 2,
};

enum class EFMODSpeakerMode : uint8
{
	Stereo                         = 0,
	Surround_5_1                   = 1,
	Surround_7_1                   = 2,
	EFMODSpeakerMode_MAX           = 3,
};

enum class EFMODLogging : uint8
{
	LEVEL_NONE                     = 0,
	LEVEL_ERROR                    = 1,
	LEVEL_WARNING                  = 2,
	LEVEL_LOG                      = 4,
	LEVEL_MAX                      = 5,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x28 - 0x8)
// ScriptStruct FMODStudio.FMODAssetLookupRow
struct FFMODAssetLookupRow : public FTableRowBase
{
public:
	class FString                                PackageName;                                       // 0x8(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AssetName;                                         // 0x18(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// ScriptStruct FMODStudio.FMODOcclusionDetails
struct FFMODOcclusionDetails
{
public:
	bool                                         bEnableOcclusion;                                  // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionChannel                 OcclusionTraceChannel;                             // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseComplexCollisionForOcclusion;                  // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct FMODStudio.FMODAttenuationDetails
struct FFMODAttenuationDetails
{
public:
	uint8                                        bOverrideAttenuation : 1;                          // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_19 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_596[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinimumDistance;                                   // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaximumDistance;                                   // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct FMODStudio.FMODLocalizedBankTable
struct FFMODLocalizedBankTable : public FTableRowBase
{
public:
	class UDataTable*                            Banks;                                             // 0x8(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct FMODStudio.FMODLocalizedBankRow
struct FFMODLocalizedBankRow : public FTableRowBase
{
public:
	class FString                                Path;                                              // 0x8(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct FMODStudio.FMODEventInstance
struct FFMODEventInstance
{
public:
	uint8                                        Pad_5AB[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x98 - 0x98)
// ScriptStruct FMODStudio.FMODEventControlChannel
struct FFMODEventControlChannel : public FMovieSceneByteChannel
{
public:
};

// 0x98 (0xB8 - 0x20)
// ScriptStruct FMODStudio.FMODEventControlSectionTemplate
struct FFMODEventControlSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FFMODEventControlChannel              ControlKeys;                                       // 0x20(0x98)(NativeAccessSpecifierPublic)
};

// 0x0 (0x80 - 0x80)
// ScriptStruct FMODStudio.FMODEventParameterSectionTemplate
struct FFMODEventParameterSectionTemplate : public FMovieSceneParameterSectionTemplate
{
public:
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FMODStudio.FMODProjectLocale
struct FFMODProjectLocale
{
public:
	class FString                                LocaleName;                                        // 0x0(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LocaleCode;                                        // 0x10(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDefault;                                          // 0x20(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5BD[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// ScriptStruct FMODStudio.CustomPoolSizes
struct FCustomPoolSizes
{
public:
	int32                                        Desktop;                                           // 0x0(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Mobile;                                            // 0x4(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PS4;                                               // 0x8(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SWITCH;                                            // 0xC(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        XboxOne;                                           // 0x10(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


