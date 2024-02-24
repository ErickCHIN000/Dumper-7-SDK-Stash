#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EFaceFXTargetPlatform : uint8
{
	PC                             = 0,
	PS4                            = 1,
	XBoxOne                        = 2,
	GGP                            = 3,
	MAX                            = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x90 - 0x30)
// ScriptStruct FaceFX.AnimNode_BlendFaceFXAnimation
struct FAnimNode_BlendFaceFXAnimation : public FAnimNode_Base
{
public:
	struct FComponentSpacePoseLink               ComponentPose;                                     // 0x30(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Alpha;                                             // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneModificationMode             TranslationMode;                                   // 0x4C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneModificationMode             RotationMode;                                      // 0x4D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneModificationMode             ScaleMode;                                         // 0x4E(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B2[0x29];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          BoneNamesToExclude;                                // 0x78(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B4[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FaceFX.FaceFXSkelMeshComponentId
struct FFaceFXSkelMeshComponentId
{
public:
	int32                                        Index;                                             // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B7[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Name;                                              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FaceFX.FaceFXAnimId
struct FFaceFXAnimId
{
public:
	class FName                                  Group;                                             // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Name;                                              // 0x8(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct FaceFX.FaceFXAnimComponentSet
struct FFaceFXAnimComponentSet
{
public:
	struct FFaceFXSkelMeshComponentId            SkelMeshComponentId;                               // 0x0(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FFaceFXAnimId                         AnimationId;                                       // 0x10(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFaceFXAnim>            Animation;                                         // 0x20(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct FaceFX.FaceFXAnimationSectionData
struct FFaceFXAnimationSectionData
{
public:
	struct FGuid                                 TrackId;                                           // 0x0(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RowIndex;                                          // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D1[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFaceFXAnimId                         AnimationId;                                       // 0x18(0x10)(NoDestructor, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFaceFXAnim>            Animation;                                         // 0x28(0x28)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFaceFXSkelMeshComponentId            ComponentId;                                       // 0x50(0x10)(NoDestructor, NativeAccessSpecifierPublic)
	float                                        AnimDuration;                                      // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartOffset;                                       // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EndOffset;                                         // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                          StartTime;                                         // 0x6C(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                          EndTime;                                           // 0x70(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCachedAnimDuration;                               // 0x74(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E2[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x98 - 0x20)
// ScriptStruct FaceFX.FaceFXAnimationSectionTemplate
struct FFaceFXAnimationSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FFaceFXAnimationSectionData           SectionData;                                       // 0x20(0x78)(NativeAccessSpecifierPrivate)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FaceFX.FaceFXAnimExportData
struct FFaceFXAnimExportData
{
public:
	struct FFaceFXAnimId                         FaceFXAnimId;                                      // 0x0(0x10)(Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	class FString                                FaceFXActorName;                                   // 0x10(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FaceFX.FaceFXAudioAsset
struct FFaceFXAudioAsset
{
public:
	uint8                                        Pad_3F5[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWwiseEvent*                           WwiseEvent;                                        // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       WwiseID;                                           // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F6[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct FaceFX.FaceFXEntry
struct FFaceFXEntry
{
public:
	class USkeletalMeshComponent*                SkelMeshComp;                                      // 0x0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFaceFXAudioComponent*                 AudioComp;                                         // 0x8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFaceFXActor>           Asset;                                             // 0x10(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFaceFXCharacter*                      Character;                                         // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsAutoPlaySound : 1;                              // Mask: 0x1, PropSize: 0x10x40(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsDisableMorphTargets : 1;                        // Mask: 0x2, PropSize: 0x10x40(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bHasBonesFromMultipleSkeletons : 1;                // Mask: 0x4, PropSize: 0x10x40(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_400[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FaceFX.FaceFXAnimData
struct FFaceFXAnimData
{
public:
	TArray<uint8>                                RawData;                                           // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct FaceFX.GbxFaceFXAnimData
struct FGbxFaceFXAnimData
{
public:
	struct FFaceFXAnimId                         FaceFXAnimId;                                      // 0x0(0x10)(Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FFaceFXAudioAsset                     Audio;                                             // 0x10(0x18)(Edit, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FFaceFXAnimData>               AnimationRawData;                                  // 0x28(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FaceFX.GbxFaceFXAnimSetData
struct FGbxFaceFXAnimSetData
{
public:
	TArray<struct FGbxFaceFXAnimData>            FaceFXAnimDataList;                                // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FaceFX.FaceFXIdData
struct FFaceFXIdData
{
public:
	uint64                                       ID;                                                // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Name;                                              // 0x8(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FaceFX.FaceFXActorData
struct FFaceFXActorData
{
public:
	TArray<uint8>                                ActorRawData;                                      // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<uint8>                                BonesRawData;                                      // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FFaceFXIdData>                 Ids;                                               // 0x20(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FaceFX.FaceFXAnimSetData
struct FFaceFXAnimSetData
{
public:
	TArray<struct FFaceFXAnimData>               Animations;                                        // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct FaceFX.FaceFXTrackKey
struct FFaceFXTrackKey
{
public:
	struct FFaceFXSkelMeshComponentId            SkelMeshComponentId;                               // 0x0(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FFaceFXAnimId                         AnimationId;                                       // 0x10(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFaceFXAnim>            Animation;                                         // 0x20(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Time;                                              // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bLoop : 1;                                         // Mask: 0x1, PropSize: 0x10x4C(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsAnimationDurationLoaded : 1;                    // Mask: 0x2, PropSize: 0x10x4C(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_1B : 6;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_42A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AnimationDuration;                                 // 0x50(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_42B[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct FaceFX.FaceFXDLCPathSettings
struct FFaceFXDLCPathSettings
{
public:
	class FString                                PatchContentPath;                                  // 0x0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PluginContentPath;                                 // 0x10(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ProductionFolderExtension;                         // 0x20(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                WwiseFolderExtension;                              // 0x30(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        AdditionalWwiseFolderExtensions;                   // 0x40(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FaceFX.FaceFXLocalizationData
struct FFaceFXLocalizationData
{
public:
	class FString                                GroupName;                                         // 0x0(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ExportLanguage;                                    // 0x10(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


