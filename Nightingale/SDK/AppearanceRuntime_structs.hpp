#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EPlayerBackground : uint8
{
	Academic                       = 0,
	Statesman                      = 1,
	Tradesperson                   = 2,
	Hermit                         = 3,
	Officer                        = 4,
	Criminal                       = 5,
	Vagrant                        = 6,
	EPlayerBackground_MAX          = 7,
};

enum class EBodyType : uint8
{
	BodyTypeA                      = 0,
	BodyTypeB                      = 1,
	BodyTypeC                      = 2,
	BodyTypeD                      = 3,
	EBodyType_MAX                  = 4,
};

enum class EEyeSide : uint8
{
	Left                           = 0,
	Right                          = 1,
	EEyeSide_MAX                   = 2,
};

enum class EEyeLashType : uint8
{
	Natural                        = 0,
	Fake                           = 1,
	EEyeLashType_MAX               = 2,
};

enum class EEyebrowStyle : uint8
{
	Curly                          = 0,
	Straight                       = 1,
	Stylized                       = 2,
	Wavy                           = 3,
	EEyebrowStyle_MAX              = 4,
};

enum class EHairAssetType : uint8
{
	Hair                           = 0,
	FacialHair                     = 1,
	EyeBrow                        = 2,
	EHairAssetType_MAX             = 3,
};

enum class EMakeupType : uint8
{
	Blush                          = 0,
	Eyeshadow                      = 1,
	Eyeliner                       = 2,
	Lipstick                       = 3,
	EMakeupType_MAX                = 4,
};

enum class EMakeupOption : uint8
{
	Mask                           = 0,
	Color1                         = 1,
	Color2                         = 2,
	Glitter                        = 3,
	EMakeupOption_MAX              = 4,
};

enum class EHatType : uint8
{
	Cone                           = 0,
	Crown                          = 1,
	Headwrap                       = 2,
	Fascinator                     = 3,
	EHatType_MAX                   = 4,
};

enum class ECostumeRegions : uint8
{
	MaterialRegion_1               = 0,
	MaterialRegion_2               = 1,
	MaterialRegion_3               = 2,
	MaterialRegion_4               = 3,
	MaterialRegion_5               = 4,
	MaterialRegion_6               = 5,
	COUNT                          = 6,
	ECostumeRegions_MAX            = 7,
};

enum class EMetalRegions : uint8
{
	MetalRegion_1                  = 0,
	MetalRegion_2                  = 1,
	COUNT                          = 2,
	EMetalRegions_MAX              = 3,
};

enum class EGemRegions : uint8
{
	GemRegion_1                    = 0,
	COUNT                          = 1,
	EGemRegions_MAX                = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0xC - 0x0)
// ScriptStruct AppearanceRuntime.FoundationAppearance
struct FFoundationAppearance
{
public:
	float                                        Opacity;                                           // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Bias;                                              // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Roughness;                                         // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct AppearanceRuntime.CharacterAppearance_OutfitData
struct FCharacterAppearance_OutfitData
{
public:
	struct FItemDataReference                    ItemReference;                                     // 0x0(0x80)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x138 (0x138 - 0x0)
// ScriptStruct AppearanceRuntime.BodyAppearance
struct FBodyAppearance
{
public:
	enum class EBodyType                         BodyType;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11A5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   DefaultSkinColor;                                  // 0x8(0x10)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefaultRedness;                                    // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefaultAge;                                        // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FName, float>                     DefaultMorphTargets;                               // 0x20(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             BaseColor;                                         // 0x70(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             AMMR_Mask;                                         // 0x98(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             NH_Mask;                                           // 0xC0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             FaceSwatch;                                        // 0xE8(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             HandSwatch;                                        // 0x110(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct AppearanceRuntime.EyeAppearance
struct FEyeAppearance
{
public:
	struct FDataTableRowHandle                   InnerColor;                                        // 0x0(0x10)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   MiddleColor;                                       // 0x10(0x10)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   OuterColor;                                        // 0x20(0x10)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   EmissiveColor;                                     // 0x30(0x10)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   ScleraColor;                                       // 0x40(0x10)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   ScleraCornerColor;                                 // 0x50(0x10)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BloodshotAmount;                                   // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VeinOpacity;                                       // 0x64(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PupilScale;                                        // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        IrisScale;                                         // 0x6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        IrisDetail;                                        // 0x70(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LimbusOpacity;                                     // 0x74(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct AppearanceRuntime.MakeupAppearance
struct FMakeupAppearance
{
public:
	struct FDataTableRowHandle                   Mask;                                              // 0x0(0x10)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   Color1;                                            // 0x10(0x10)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Color1Roughness;                                   // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1202[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   Color2;                                            // 0x28(0x10)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Color2Roughness;                                   // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ColorAlpha;                                        // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   GlitterColor;                                      // 0x40(0x10)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GlitterColorAlpha;                                 // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_120F[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct AppearanceRuntime.EyeLashSettings
struct FEyeLashSettings
{
public:
	float                                        Length;                                            // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_121F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   RootColor;                                         // 0x8(0x10)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   TipColor;                                          // 0x18(0x10)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct AppearanceRuntime.EyeLashAppearance
struct FEyeLashAppearance
{
public:
	struct FEyeLashSettings                      NaturalLashSettings;                               // 0x0(0x28)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FEyeLashSettings                      FakeLashSettings;                                  // 0x28(0x28)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct AppearanceRuntime.HairAppearance
struct FHairAppearance
{
public:
	TSoftObjectPtr<class UHairDataAsset>         HairAsset;                                         // 0x0(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   Color;                                             // 0x28(0x10)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct AppearanceRuntime.TeethAppearance
struct FTeethAppearance
{
public:
	float                                        ToothDecay;                                        // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MetalToothIndex;                                   // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ToothMetalIndex;                                   // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4B8 (0x4C0 - 0x8)
// ScriptStruct AppearanceRuntime.CharacterAppearance_Preset
struct FCharacterAppearance_Preset : public FTableRowBase
{
public:
	class FText                                  DevName;                                           // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  DevDescription;                                    // 0x20(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x38(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DebugAppearance;                                   // 0x60(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_125E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBodyAppearance                       DefaultBody;                                       // 0x68(0x138)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FEyeAppearance                        DefaultEye;                                        // 0x1A0(0x78)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               DefaultEyeOffset;                                  // 0x218(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefaultEyeScale;                                   // 0x230(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_126F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEyeLashAppearance                    DefaultEyeLash;                                    // 0x238(0x50)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FHairAppearance                       DefaultHair;                                       // 0x288(0x38)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FHairAppearance                       DefaultFacialHair;                                 // 0x2C0(0x38)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FHairAppearance                       DefaultEyeBrowHair;                                // 0x2F8(0x38)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FMakeupAppearance                     DefaultBlush;                                      // 0x330(0x58)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FMakeupAppearance                     DefaultEyeshadow;                                  // 0x388(0x58)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FMakeupAppearance                     DefaultEyeLiner;                                   // 0x3E0(0x58)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FMakeupAppearance                     DefaultLipstick;                                   // 0x438(0x58)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        DefaultLipGloss;                                   // 0x490(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFoundationAppearance                 DefaultFoundation;                                 // 0x494(0xC)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FTeethAppearance                      DefaultTeeth;                                      // 0x4A0(0xC)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_129B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCharacterAppearance_OutfitData> DefaultOutfitItems;                                // 0x4B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct AppearanceRuntime.AppearanceAncestorData
struct FAppearanceAncestorData
{
public:
	struct FDataTableRowHandle                   Archetype;                                         // 0x0(0x10)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Contribution;                                      // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12AA[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct AppearanceRuntime.AppearanceMorphTarget
struct FAppearanceMorphTarget
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xF8 (0x100 - 0x8)
// ScriptStruct AppearanceRuntime.PresetEyeLashSettings
struct FPresetEyeLashSettings : public FTableRowBase
{
public:
	class FText                                  Name;                                              // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x20(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x38(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEyeLashAppearance                    LeftEyeLash;                                       // 0x60(0x50)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FEyeLashAppearance                    RightEyeLash;                                      // 0xB0(0x50)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x148 (0x150 - 0x8)
// ScriptStruct AppearanceRuntime.PresetEyeSettings
struct FPresetEyeSettings : public FTableRowBase
{
public:
	class FText                                  Name;                                              // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x20(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x38(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEyeAppearance                        LeftEye;                                           // 0x60(0x78)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FEyeAppearance                        RightEye;                                          // 0xD8(0x78)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct AppearanceRuntime.EyeBrowStyleOverrides
struct FEyeBrowStyleOverrides
{
public:
	TSoftObjectPtr<class UTexture2D>             EyebrowMask;                                       // 0x0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             EyebrowSkinMask;                                   // 0x28(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x158 (0x158 - 0x0)
// ScriptStruct AppearanceRuntime.HairData
struct FHairData
{
public:
	class FText                                  Name;                                              // 0x0(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x18(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         bAvailableInCharacterCreate;                       // 0x30(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_130B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x38(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class USkeletalMesh>          Mesh;                                              // 0x60(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UAnimInstance>           MeshAnimationClass;                                // 0x88(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<enum class EHatType, struct FTransform> HatOffsetData;                                     // 0xB0(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class EEyebrowStyle                     EyebrowStyle;                                      // 0x100(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1318[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EEyebrowStyle, struct FEyeBrowStyleOverrides> EyebrowMaskOverrides;                              // 0x108(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x28 (0x70 - 0x48)
// ScriptStruct AppearanceRuntime.HairDataReference
struct FHairDataReference : public FUniquelyIdentifiableAssetReference
{
public:
	struct FGuid                                 AssetUID;                                          // 0x48(0x10)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EHairAssetType                    HairType;                                          // 0x58(0x1)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1330[0x17];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct AppearanceRuntime.VoiceSetData
struct FVoiceSetData
{
public:
	class FText                                  Name;                                              // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UAkSwitchValue*                        SetValue;                                          // 0x18(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x60 - 0x48)
// ScriptStruct AppearanceRuntime.VoiceSetDataReference
struct FVoiceSetDataReference : public FUniquelyIdentifiableAssetReference
{
public:
	struct FGuid                                 AssetUID;                                          // 0x48(0x10)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1351[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}


