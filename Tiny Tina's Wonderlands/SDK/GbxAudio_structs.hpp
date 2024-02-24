#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EDistributedSoundDebugVisualizationMode : uint8
{
	Off                            = 0,
	ActiveLocations                = 1,
	Tree                           = 2,
	LeafNodes                      = 3,
	EDistributedSoundDebugVisualizationMode_MAX = 4,
};

enum class EWwiseNotifyComponentMethod : int32
{
	UseActorDefaultComponent       = 0,
	FindComponentsByTag            = 1,
	SpawnComponentAtSocket         = 2,
	EWwiseNotifyComponentMethod_MAX = 3,
};

enum class EOcclusionVoxelThinningAlgorithm : uint8
{
	Skeletal                       = 0,
	MedialPlane                    = 1,
	EOcclusionVoxelThinningAlgorithm_MAX = 2,
};

enum class EFilterResultOperation : int32
{
	AcceptAsNewResult              = 0,
	Add                            = 1,
	Subtract                       = 2,
	EFilterResultOperation_MAX     = 3,
};

enum class ECharacterSoundType : uint8
{
	SFX                            = 0,
	Vocalization                   = 1,
	ECharacterSoundType_MAX        = 2,
};

enum class EDistributedSoundMode : uint8
{
	Point                          = 0,
	VolumetricSphere               = 1,
	EDistributedSoundMode_MAX      = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x40 - 0x0)
// ScriptStruct GbxAudio.ActiveAmbientInstance
struct FActiveAmbientInstance
{
public:
	uint8                                        Pad_78B[0x40];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxAudio.ActiveLoopingSoundNotifyData
struct FActiveLoopingSoundNotifyData
{
public:
	TArray<struct FWwisePlaybackInstance>        Instances;                                         // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct GbxAudio.ADMSubscriberData
struct FADMSubscriberData
{
public:
	TScriptInterface<class IAudioDistanceThresholdSubscriberInterface> Subscriber;                                        // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        Pad_791[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// ScriptStruct GbxAudio.AudioPropHitFilter_DirectionLimit
struct FAudioPropHitFilter_DirectionLimit
{
public:
	struct FVector                               Direction;                                         // 0x0(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFloatInterval                        DotProductLimits;                                  // 0xC(0x8)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct GbxAudio.AudioPrepHitResultFilter
struct FAudioPrepHitResultFilter
{
public:
	TArray<class FString>                        HitAssetNameFilter;                                // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<enum class EPhysicalSurface>          SurfaceTypeFilter;                                 // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPhysicalMaterial>> PhysMatFilter;                                     // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UMaterialInterface>> MaterialFilter;                                    // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class AActor*>                        WithinActorBoundsBlueprint;                        // 0x40(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<TLazyObjectPtr<class AActor>>         WithinActorBounds;                                 // 0x50(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FAudioPropHitFilter_DirectionLimit> NormalDirectionLimits;                             // 0x60(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bAllowHitsWithinGeometry;                          // 0x70(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_79F[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct GbxAudio.AudioPrepComponentFilter
struct FAudioPrepComponentFilter
{
public:
	TArray<class FString>                        AssetNameFilter;                                   // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<enum class EPhysicalSurface>          SurfaceTypeFilter;                                 // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UPhysicalMaterial>> PhysMatFilter;                                     // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UMaterialInterface>> MaterialFilter;                                    // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class FString>                        MaterialName;                                      // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class AActor*>                        WithinActorBoundsBlueprint;                        // 0x50(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<TLazyObjectPtr<class AActor>>         WithinActorBounds;                                 // 0x60(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TLazyObjectPtr<class AActor>>         AttachedToActors;                                  // 0x70(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class FString>                        ActorClassName;                                    // 0x80(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        ComponentClassName;                                // 0x90(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bOnlyWorldGeometry;                                // 0xA0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7B2[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxAudio.ResultGridFilter
struct FResultGridFilter
{
public:
	int32                                        Iterations;                                        // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFilterResultOperation            ResultOperation;                                   // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        StructuringElements;                               // 0x8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct GbxAudio.CharacterVocalLoopImplementation
struct FCharacterVocalLoopImplementation
{
public:
	bool                                         bOriginator;                                       // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7BC[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  LoopName;                                          // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPainLoop;                                         // 0x10(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7C0[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 LoopID;                                            // 0x14(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideConditions;                               // 0x24(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7C4[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 ConditionID;                                       // 0x28(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxCondition*                         Condition;                                         // 0x38(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPlayOnce;                                         // 0x40(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7C8[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StopTryingToRunAfterXSeconds;                      // 0x44(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 WhileConditionID;                                  // 0x48(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxCondition*                         WhileCondition;                                    // 0x58(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideAudio;                                    // 0x60(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7CA[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWwiseEvent*                           StartEvent;                                        // 0x68(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseEvent*                           StopEvent;                                         // 0x70(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxAudio.InheritableVocalLoopList
struct FInheritableVocalLoopList
{
public:
	TArray<struct FCharacterVocalLoopImplementation> VocalLoops;                                        // 0x0(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GbxAudio.CharacterSoundImplementation
struct FCharacterSoundImplementation
{
public:
	bool                                         bOriginator;                                       // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7D0[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWwiseEvent*                           DefaultWwiseEvent;                                 // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideWwiseEvent;                               // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7D5[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWwiseEvent*                           WwiseEvent;                                        // 0x18(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct GbxAudio.InheritableSoundMap
struct FInheritableSoundMap
{
public:
	TMap<class UCharacterSoundTag*, struct FCharacterSoundImplementation> CharacterSounds;                                   // 0x0(0x50)(Edit, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GbxAudio.CharacterSoundLoopDetails
struct FCharacterSoundLoopDetails
{
public:
	uint8                                        Pad_7E3[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GbxAudio.CurrentVocalization
struct FCurrentVocalization
{
public:
	class UCharacterSoundTag*                    Tag;                                               // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWwisePlaybackInstance                PlayingInstance;                                   // 0x8(0x18)(NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct GbxAudio.CurrentVocalLoopInfo
struct FCurrentVocalLoopInfo
{
public:
	struct FGuid                                 LoopID;                                            // 0x0(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWwisePlaybackInstance                PlayingInstance;                                   // 0x10(0x18)(NativeAccessSpecifierPublic)
	struct FCharacterSoundLoopDetails            Details;                                           // 0x28(0x20)(NoDestructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct GbxAudio.CharacterVocalLoop
struct FCharacterVocalLoop
{
public:
	class UWwiseEvent*                           StartEvent;                                        // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseEvent*                           StopEvent;                                         // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxCondition*                         Condition;                                         // 0x10(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxCondition*                         WhileCondition;                                    // 0x18(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPainLoop;                                         // 0x20(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7F8[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct GbxAudio.FoleyEventParams
struct FFoleyEventParams
{
public:
	class UWwiseEvent*                           WwiseEvent;                                        // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseSwitch*                          OptionalMaterialSwitch;                            // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Volume;                                            // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Pitch;                                             // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          ComponentTags;                                     // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_800[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxAudio.ExtraFoleyParameter
struct FExtraFoleyParameter
{
public:
	class UWwiseRtpc*                            RtpcParam;                                         // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_803[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GbxAudio.WindLocalAxisSensitivity
struct FWindLocalAxisSensitivity
{
public:
	float                                        PositiveDirectionSensitivity;                      // 0x0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NegativeDirectionSensitivity;                      // 0x4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxAudio.WindDirectionalSensitivity
struct FWindDirectionalSensitivity
{
public:
	struct FWindLocalAxisSensitivity             LocalX;                                            // 0x0(0x8)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FWindLocalAxisSensitivity             LocalY;                                            // 0x8(0x8)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FWindLocalAxisSensitivity             LocalZ;                                            // 0x10(0x8)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
};

}


