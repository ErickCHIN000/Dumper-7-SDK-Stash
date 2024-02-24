#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// Function ARigRuntime.ARigFunctions.UpdateSkeletalMeshSection
struct UARigFunctions_UpdateSkeletalMeshSection_Params
{
public:
	class ULevelSequence*                        LevelSequence;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASkeletalMeshActor*                    SkelMeshActor;                                     // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Time;                                              // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_88[0x4];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ARigRuntime.ARigFunctions.UpdateSkeletalMeshPose
struct UARigFunctions_UpdateSkeletalMeshPose_Params
{
public:
	class USkeletalMeshComponent*                SkeletalMeshComponent;                             // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ARigRuntime.ARigFunctions.UpdateSequncerComponent
struct UARigFunctions_UpdateSequncerComponent_Params
{
public:
	class UMovieScene3DTransformSection*         TransformSection;                                  // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       SceneComponent;                                    // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Time;                                              // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8D[0x4];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ARigRuntime.ARigFunctions.UpdateSequncer
struct UARigFunctions_UpdateSequncer_Params
{
public:
	class ULevelSequence*                        LevelSequence;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Time;                                              // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_90[0x4];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function ARigRuntime.ARigFunctions.UpdateSequencerActorTransform
struct UARigFunctions_UpdateSequencerActorTransform_Params
{
public:
	class ULevelSequence*                        LevelSequence;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Actor;                                             // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Time;                                              // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_96[0x4];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function ARigRuntime.ARigFunctions.UpdateFloatSectionProperty
struct UARigFunctions_UpdateFloatSectionProperty_Params
{
public:
	class UMovieSceneFloatSection*               FloatSection;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Actor;                                             // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  PropertyName;                                      // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Time;                                              // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9E[0x4];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xF0 (0xF0 - 0x0)
// Function ARigRuntime.ARigFunctions.TwoBoneIkOpt
struct UARigFunctions_TwoBoneIkOpt_Params
{
public:
	struct FTransform                            Effector;                                          // 0x0(0x30)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               PoleVector;                                        // 0x30(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InRootPos;                                         // 0x3C(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UpperLimbLength;                                   // 0x48(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LowerLimbLength;                                   // 0x4C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StretchScale;                                      // 0x50(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoStretch;                                      // 0x54(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSoftStretch;                                      // 0x55(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A7[0x2];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StretchSoftness;                                   // 0x58(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PoleVectorLock;                                    // 0x5C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            RootBone;                                          // 0x60(0x30)(Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            MidBone;                                           // 0x90(0x30)(Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            TipBone;                                           // 0xC0(0x30)(Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x190 (0x190 - 0x0)
// Function ARigRuntime.ARigFunctions.TwoBoneIk
struct UARigFunctions_TwoBoneIk_Params
{
public:
	struct FTransform                            EffectorPos;                                       // 0x0(0x30)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               PoleVector;                                        // 0x30(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AF[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            InUpBone;                                          // 0x40(0x30)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            MidBoneLocal;                                      // 0x70(0x30)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            LowBoneLocal;                                      // 0xA0(0x30)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bUseAimSettings;                                   // 0xD0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B0[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAimSettings                          UpAimSettings;                                     // 0xD4(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FAimSettings                          MidAimSettings;                                    // 0xE4(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bAllowStretching;                                  // 0xF4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSoftStretch;                                      // 0xF5(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B1[0x2];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StretchScale;                                      // 0xF8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B3[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            UpBone;                                            // 0x100(0x30)(Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            MidBone;                                           // 0x130(0x30)(Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            LowBone;                                           // 0x160(0x30)(Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ARigRuntime.ARigFunctions.StringsToNames
struct UARigFunctions_StringsToNames_Params
{
public:
	TArray<class FString>                        Strings;                                           // 0x0(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ARigRuntime.ARigFunctions.ShiftTransformSectionAnim
struct UARigFunctions_ShiftTransformSectionAnim_Params
{
public:
	class UMovieScene3DTransformSection*         TransformSection;                                  // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ShiftAnim;                                         // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BC[0x4];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// Function ARigRuntime.ARigFunctions.SetTransformSectionKey
struct UARigFunctions_SetTransformSectionKey_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMovieScene3DTransformSection*         TransformSection;                                  // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            Transform;                                         // 0x10(0x30)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Time;                                              // 0x40(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Translation;                                       // 0x44(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Rotation;                                          // 0x45(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Scale;                                             // 0x46(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x47(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C6[0x8];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// Function ARigRuntime.ARigFunctions.SetTransformKey
struct UARigFunctions_SetTransformKey_Params
{
public:
	class ULevelSequence*                        LevelSequence;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Actor;                                             // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            Transform;                                         // 0x10(0x30)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Time;                                              // 0x40(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Translation;                                       // 0x44(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Rotation;                                          // 0x45(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Scale;                                             // 0x46(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x47(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D1[0x8];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ARigRuntime.ARigFunctions.SetSelectable
struct UARigFunctions_SetSelectable_Params
{
public:
	class UPrimitiveComponent*                   Component;                                         // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSelectable;                                       // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D5[0x7];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ARigRuntime.ARigFunctions.SetSectionStartTime
struct UARigFunctions_SetSectionStartTime_Params
{
public:
	class UMovieSceneSection*                    MovieSceneSection;                                 // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Time;                                              // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DF[0x4];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ARigRuntime.ARigFunctions.SetSectionEndTime
struct UARigFunctions_SetSectionEndTime_Params
{
public:
	class UMovieSceneSection*                    MovieSceneSection;                                 // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Time;                                              // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E4[0x4];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function ARigRuntime.ARigFunctions.SetMorphTarget
struct UARigFunctions_SetMorphTarget_Params
{
public:
	class USkeletalMeshComponent*                SkeletalMeshComponent;                             // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TargetName;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_ED[0x4];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ARigRuntime.ARigFunctions.SetActorSelectable
struct UARigFunctions_SetActorSelectable_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSelectable;                                       // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F3[0x7];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ARigRuntime.ARigFunctions.SelectActorInEditor
struct UARigFunctions_SelectActorInEditor_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsSelected;                                        // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FA[0x7];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ARigRuntime.ARigFunctions.RenameActor
struct UARigFunctions_RenameActor_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  NewName;                                           // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ARigRuntime.ARigFunctions.RemoveTrackFromBinding
struct UARigFunctions_RemoveTrackFromBinding_Params
{
public:
	class ULevelSequence*                        LevelSequence;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UMovieSceneTrack>          TrackClass;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 Guid;                                              // 0x10(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ARigRuntime.ARigFunctions.RemoveStaticCurvesForActors
struct UARigFunctions_RemoveStaticCurvesForActors_Params
{
public:
	class ULevelSequence*                        LevelSequence;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                        Actors;                                            // 0x8(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bRemoveBinding;                                    // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_124[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ARigRuntime.ARigFunctions.RemoveStaticCurves
struct UARigFunctions_RemoveStaticCurves_Params
{
public:
	class ULevelSequence*                        LevelSequence;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRemoveBinding;                                    // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_133[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function ARigRuntime.ARigFunctions.RemoveBindingFromSequencer
struct UARigFunctions_RemoveBindingFromSequencer_Params
{
public:
	class ULevelSequence*                        LevelSequence;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 Guid;                                              // 0x8(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2C (0x2C - 0x0)
// Function ARigRuntime.ARigFunctions.RemapVectorFromAim
struct UARigFunctions_RemapVectorFromAim_Params
{
public:
	float                                        RollValue;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InVector;                                          // 0x4(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAimSettings                          AimSettings;                                       // 0x10(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0x20(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function ARigRuntime.ARigFunctions.PromtDialogue
struct UARigFunctions_PromtDialogue_Params
{
public:
	class FString                                Title;                                             // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Message;                                           // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Ok;                                                // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Cancel;                                            // 0x30(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UObject*>                       Objects;                                           // 0x40(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x50(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_150[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function ARigRuntime.ARigFunctions.PreviewSetAnimPosition
struct UARigFunctions_PreviewSetAnimPosition_Params
{
public:
	class USkeletalMeshComponent*                SkelMeshComp;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SequenceIndex;                                     // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimSequenceBase*                     InAnimSequence;                                    // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InPosition;                                        // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x1C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ARigRuntime.ARigFunctions.PostProcessAnimSequence
struct UARigFunctions_PostProcessAnimSequence_Params
{
public:
	class UAnimSequence*                         AnimSequence;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                SkeletalMeshComponent;                             // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ARigRuntime.ARigFunctions.PostEditChange
struct UARigFunctions_PostEditChange_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ARigRuntime.ARigFunctions.PasteKeysToActor
struct UARigFunctions_PasteKeysToActor_Params
{
public:
	class ULevelSequence*                        LevelSequence;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Actor;                                             // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMovieScene3DTransformSection*         SourceSection;                                     // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PasteTime;                                         // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_183[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMovieScene3DTransformSection*         ReturnValue;                                       // 0x20(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x100 (0x100 - 0x0)
// Function ARigRuntime.ARigFunctions.ParentConstraintLerp
struct UARigFunctions_ParentConstraintLerp_Params
{
public:
	struct FTransform                            A;                                                 // 0x0(0x30)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            B;                                                 // 0x30(0x30)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            OffsetA;                                           // 0x60(0x30)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            OffsetB;                                           // 0x90(0x30)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Alpha;                                             // 0xC0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_196[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ReturnValue;                                       // 0xD0(0x30)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ARigRuntime.ARigFunctions.Parent
struct UARigFunctions_Parent_Params
{
public:
	class AActor*                                Child;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Parent;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ARigRuntime.ARigFunctions.OpenEditorForAsset
struct UARigFunctions_OpenEditorForAsset_Params
{
public:
	class UObject*                               Asset;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ARigRuntime.ARigFunctions.NotificationBox
struct UARigFunctions_NotificationBox_Params
{
public:
	class FString                                String;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FadeIn;                                            // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Expire;                                            // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FadeOut;                                           // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOutputLog;                                        // 0x1C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B9[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ARigRuntime.ARigFunctions.ModifyObject
struct UARigFunctions_ModifyObject_Params
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function ARigRuntime.ARigFunctions.MatchesWildcard
struct UARigFunctions_MatchesWildcard_Params
{
public:
	class FName                                  SourceName;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Wildcard;                                          // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESearchCase                       SearchCase;                                        // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x11(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D6[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function ARigRuntime.ARigFunctions.LerpVector
struct UARigFunctions_LerpVector_Params
{
public:
	struct FVector                               A;                                                 // 0x0(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               B;                                                 // 0xC(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Alpha;                                             // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0x1C(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ARigRuntime.ARigFunctions.KeyAllActiveCurves
struct UARigFunctions_KeyAllActiveCurves_Params
{
public:
	class USkeletalMeshComponent*                SkelMeshComp;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         AnimSequence;                                      // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Time;                                              // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F3[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function ARigRuntime.ARigFunctions.IsSequencerHasBindingForActor
struct UARigFunctions_IsSequencerHasBindingForActor_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULevelSequence*                        LevelSequence;                                     // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 Guid;                                              // 0x10(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_200[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ARigRuntime.ARigFunctions.GroupController
struct UARigFunctions_GroupController_Params
{
public:
	class AActor*                                Controller;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function ARigRuntime.ARigFunctions.GetWeightedAverageVector
struct UARigFunctions_GetWeightedAverageVector_Params
{
public:
	TArray<struct FVector>                       Vectors;                                           // 0x0(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                Weights;                                           // 0x10(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0x20(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_223[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// Function ARigRuntime.ARigFunctions.GetWeightedAverageTransform
struct UARigFunctions_GetWeightedAverageTransform_Params
{
public:
	TArray<struct FTransform>                    Transforms;                                        // 0x0(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                    Offsets;                                           // 0x10(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                Weights;                                           // 0x20(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FTransform                            ReturnValue;                                       // 0x30(0x30)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function ARigRuntime.ARigFunctions.GetWeightedAverageRotator
struct UARigFunctions_GetWeightedAverageRotator_Params
{
public:
	TArray<struct FRotator>                      Rotators;                                          // 0x0(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                Weights;                                           // 0x10(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FRotator                              ReturnValue;                                       // 0x20(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_248[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function ARigRuntime.ARigFunctions.GetTransformSectionsForActors
struct UARigFunctions_GetTransformSectionsForActors_Params
{
public:
	class ULevelSequence*                        LevelSequence;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                        Actors;                                            // 0x8(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UMovieScene3DTransformSection*> ReturnValue;                                       // 0x18(0x10)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ARigRuntime.ARigFunctions.GetTransformSectionFromBinding
struct UARigFunctions_GetTransformSectionFromBinding_Params
{
public:
	class ULevelSequence*                        LevelSequence;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 Guid;                                              // 0x8(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMovieScene3DTransformSection*         ReturnValue;                                       // 0x18(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ARigRuntime.ARigFunctions.GetTransformSectionFromActor
struct UARigFunctions_GetTransformSectionFromActor_Params
{
public:
	class ULevelSequence*                        LevelSequence;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Actor;                                             // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMovieScene3DTransformSection*         ReturnValue;                                       // 0x10(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ARigRuntime.ARigFunctions.GetSpaceBases
struct UARigFunctions_GetSpaceBases_Params
{
public:
	class USkinnedMeshComponent*                 SkinnedMeshComponent;                              // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                    SpaceBases;                                        // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ARigRuntime.ARigFunctions.GetSoftIkStretchDistance
struct UARigFunctions_GetSoftIkStretchDistance_Params
{
public:
	float                                        Distance;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ChainLength;                                       // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SoftPoint;                                         // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xC(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ARigRuntime.ARigFunctions.GetSequencersWithActors
struct UARigFunctions_GetSequencersWithActors_Params
{
public:
	TArray<class AActor*>                        Actors;                                            // 0x0(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UObject*>                       LevelSequences;                                    // 0x10(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A0[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ARigRuntime.ARigFunctions.GetSequencerPlaybackRange
struct UARigFunctions_GetSequencerPlaybackRange_Params
{
public:
	class ULevelSequence*                        LevelSequence;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PlaybackStart;                                     // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PlaybackEnd;                                       // 0xC(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ARigRuntime.ARigFunctions.GetSequencerFrameRate
struct UARigFunctions_GetSequencerFrameRate_Params
{
public:
	class ULevelSequence*                        LevelSequence;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BB[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ARigRuntime.ARigFunctions.GetSequencerFrameInterval
struct UARigFunctions_GetSequencerFrameInterval_Params
{
public:
	class ULevelSequence*                        LevelSequence;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C3[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function ARigRuntime.ARigFunctions.GetSequencerComponents
struct UARigFunctions_GetSequencerComponents_Params
{
public:
	class ULevelSequence*                        LevelSequence;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGuid>                         Guids;                                             // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class USceneComponent*>               SceneComponents;                                   // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ARigRuntime.ARigFunctions.GetRigMapping
struct UARigFunctions_GetRigMapping_Params
{
public:
	class USkeleton*                             Skeleton;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          BaseNames;                                         // 0x8(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          RigNames;                                          // 0x18(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x34 (0x34 - 0x0)
// Function ARigRuntime.ARigFunctions.GetPoleVectorLocation
struct UARigFunctions_GetPoleVectorLocation_Params
{
public:
	struct FVector                               Up;                                                // 0x0(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Mid;                                               // 0xC(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               End;                                               // 0x18(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Multiply;                                          // 0x24(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0x28(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ARigRuntime.ARigFunctions.GetLastRenderTime
struct UARigFunctions_GetLastRenderTime_Params
{
public:
	class UPrimitiveComponent*                   Component;                                         // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2F2[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function ARigRuntime.ARigFunctions.GetFloatSectionsFromBinding
struct UARigFunctions_GetFloatSectionsFromBinding_Params
{
public:
	class ULevelSequence*                        LevelSequence;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 Guid;                                              // 0x8(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMovieSceneFloatSection*>       FloatSections;                                     // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class FName>                          PropertyNames;                                     // 0x28(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ARigRuntime.ARigFunctions.GetControllerByName
struct UARigFunctions_GetControllerByName_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Rig;                                               // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function ARigRuntime.ARigFunctions.GetClosestAxis
struct UARigFunctions_GetClosestAxis_Params
{
public:
	struct FVector                               TargetVector;                                      // 0x0(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_31C[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x10(0x30)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class FString                                FirstAxis;                                         // 0x40(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SecondAxis;                                        // 0x50(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function ARigRuntime.ARigFunctions.GetBoneSocketTransform
struct UARigFunctions_GetBoneSocketTransform_Params
{
public:
	class USkeletalMeshComponent*                SkelMeshComp;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            ReturnValue;                                       // 0x10(0x30)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ARigRuntime.ARigFunctions.GetBonesHierarchy
struct UARigFunctions_GetBonesHierarchy_Params
{
public:
	class USkeletalMeshComponent*                SkelMeshComp;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RootBone;                                          // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TipBone;                                           // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ARigRuntime.ARigFunctions.GetAssetWithOpenedEditor
struct UARigFunctions_GetAssetWithOpenedEditor_Params
{
public:
	class UClass*                                Class;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ARigRuntime.ARigFunctions.GetAssetsByClass
struct UARigFunctions_GetAssetsByClass_Params
{
public:
	class UClass*                                Class;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UObject*>                       ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ARigRuntime.ARigFunctions.GetAnimSectionsFromActor
struct UARigFunctions_GetAnimSectionsFromActor_Params
{
public:
	class ULevelSequence*                        LevelSequence;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Actor;                                             // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMovieSceneSkeletalAnimationSection*> ReturnValue;                                       // 0x10(0x10)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function ARigRuntime.ARigFunctions.GetAimSettings
struct UARigFunctions_GetAimSettings_Params
{
public:
	struct FVector                               Aim;                                               // 0x0(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Up;                                                // 0xC(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_377[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x20(0x30)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FAimSettings                          ReturnValue;                                       // 0x50(0x10)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function ARigRuntime.ARigFunctions.GetAimAxis
struct UARigFunctions_GetAimAxis_Params
{
public:
	struct FVector                               Aim;                                               // 0x0(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Up;                                                // 0xC(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_384[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x20(0x30)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FAimSettings                          ReturnValue;                                       // 0x50(0x10)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// Function ARigRuntime.ARigFunctions.FilterAimOffsetAxis
struct UARigFunctions_FilterAimOffsetAxis_Params
{
public:
	enum class EAxisEnum                         AimAxis;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_396[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              Offset;                                            // 0x4(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              ReturnValue;                                       // 0x10(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function ARigRuntime.ARigFunctions.EvaluateTransformSection
struct UARigFunctions_EvaluateTransformSection_Params
{
public:
	class UMovieScene3DTransformSection*         TransformSection;                                  // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Time;                                              // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A7[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ReturnValue;                                       // 0x10(0x30)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ARigRuntime.ARigFunctions.EvaluateFloatSection
struct UARigFunctions_EvaluateFloatSection_Params
{
public:
	class UMovieSceneFloatSection*               FloatSection;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Time;                                              // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xC(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function ARigRuntime.ARigFunctions.CreateEmptyController
struct UARigFunctions_CreateEmptyController_Params
{
public:
	class AActor*                                Rig;                                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Name;                                              // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            Transform;                                         // 0x10(0x30)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class AActor*                                ReturnValue;                                       // 0x40(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C9[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xF0 (0xF0 - 0x0)
// Function ARigRuntime.ARigFunctions.CreateControllerFromSocket
struct UARigFunctions_CreateControllerFromSocket_Params
{
public:
	class UClass*                                Class;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Rig;                                               // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                SkelMeshComp;                                      // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Name;                                              // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Ending;                                            // 0x20(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3EA[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FControllerShapeData                  Shape;                                             // 0x30(0x50)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FControllerLimits                     Limits;                                            // 0x80(0x4C)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3EB[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                Controller;                                        // 0xD0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Group;                                             // 0xD8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Offset;                                            // 0xE0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGroup;                                            // 0xE8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWorldOrientation;                                 // 0xE9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCreateOffset;                                     // 0xEA(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F3[0x5];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x100 (0x100 - 0x0)
// Function ARigRuntime.ARigFunctions.CreateController
struct UARigFunctions_CreateController_Params
{
public:
	class UClass*                                Class;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Rig;                                               // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Name;                                              // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_425[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x20(0x30)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FControllerShapeData                  Shape;                                             // 0x50(0x50)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FControllerLimits                     Limits;                                            // 0xA0(0x4C)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              RelativeRotation;                                  // 0xEC(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class AActor*                                ReturnValue;                                       // 0xF8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function ARigRuntime.ARigFunctions.CreateConstraint
struct UARigFunctions_CreateConstraint_Params
{
public:
	class UClass*                                Class;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                        Targets;                                           // 0x8(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bVisibility;                                       // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_442[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                UpActor;                                           // 0x20(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ARigConstraint*                        ReturnValue;                                       // 0x28(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ARigRuntime.ARigFunctions.CreateAnimSequence
struct UARigFunctions_CreateAnimSequence_Params
{
public:
	class USkeletalMeshComponent*                SkeletalMeshComponent;                             // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         AnimSequence;                                      // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ARigRuntime.ARigFunctions.CopyTransformSectionCurve
struct UARigFunctions_CopyTransformSectionCurve_Params
{
public:
	class UMovieScene3DTransformSection*         SourceTransformSection;                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMovieScene3DTransformSection*         TargetTransformSection;                            // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETransformType                    TransformType;                                     // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAxis                             Axis;                                              // 0x11(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_45D[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// Function ARigRuntime.ARigFunctions.ConvertTransformToRelativeReverse
struct UARigFunctions_ConvertTransformToRelativeReverse_Params
{
public:
	struct FTransform                            WorldTransform;                                    // 0x0(0x30)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            LocalTransform;                                    // 0x30(0x30)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            ReturnValue;                                       // 0x60(0x30)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ARigRuntime.ARigFunctions.CloseAllEditorsForAsset
struct UARigFunctions_CloseAllEditorsForAsset_Params
{
public:
	class UObject*                               Asset;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ARigRuntime.ARigFunctions.AppendName
struct UARigFunctions_AppendName_Params
{
public:
	class FName                                  A;                                                 // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  B;                                                 // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function ARigRuntime.ARigFunctions.AimConstraint
struct UARigFunctions_AimConstraint_Params
{
public:
	struct FVector                               Aim;                                               // 0x0(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Up;                                                // 0xC(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Target;                                            // 0x18(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAimSettings                          AimSettings;                                       // 0x24(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              ReturnValue;                                       // 0x34(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ARigRuntime.ARigFunctions.AddTransformTrack
struct UARigFunctions_AddTransformTrack_Params
{
public:
	class ULevelSequence*                        LevelSequence;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 Guid;                                              // 0x8(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartFrame;                                        // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EndFrame;                                          // 0x1C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMovieScene3DTransformSection*         ReturnValue;                                       // 0x20(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ARigRuntime.ARigFunctions.AddToArrayOfNames
struct UARigFunctions_AddToArrayOfNames_Params
{
public:
	class FName                                  AddName;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          InNames;                                           // 0x8(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ARigRuntime.ARigFunctions.AddToArrayOfActors
struct UARigFunctions_AddToArrayOfActors_Params
{
public:
	class AActor*                                AddActor;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                        InActors;                                          // 0x8(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class AActor*>                        ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ARigRuntime.ARigFunctions.AddRawKeyFromPose
struct UARigFunctions_AddRawKeyFromPose_Params
{
public:
	class USkeletalMeshComponent*                SkeletalMeshComponent;                             // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         AnimSequence;                                      // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FrameRate;                                         // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_547[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function ARigRuntime.ARigFunctions.AddCurveValue
struct UARigFunctions_AddCurveValue_Params
{
public:
	class USkeletalMeshComponent*                SkelMeshComp;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  CurveName;                                         // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_561[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function ARigRuntime.ARigFunctions.AddCurveKey
struct UARigFunctions_AddCurveKey_Params
{
public:
	class UAnimSequence*                         AnimSequence;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TargetName;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Time;                                              // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ARigRuntime.ARigFunctions.AddBindingToSequencer
struct UARigFunctions_AddBindingToSequencer_Params
{
public:
	class ULevelSequence*                        LevelSequence;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Actor;                                             // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function ARigRuntime.ARigFunctions.AddAnimTrack
struct UARigFunctions_AddAnimTrack_Params
{
public:
	class ULevelSequence*                        LevelSequence;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         AnimSequence;                                      // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 Guid;                                              // 0x10(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartTime;                                         // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5AA[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMovieSceneSkeletalAnimationSection*   ReturnValue;                                       // 0x28(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function ARigRuntime.ARCustomCtrl.UpdateCustomControllers
struct UARCustomCtrl_UpdateCustomControllers_Params
{
public:
	TArray<struct FCustomControllerData>         CustomControllers;                                 // 0x0(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FBonesTransforms                      BonesTransforms;                                   // 0x10(0x20)(Parm, NativeAccessSpecifierPublic)
	struct FBonesTransforms                      ReturnValue;                                       // 0x30(0x20)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ARigRuntime.ARCustomCtrl.PoseCustomControllers
struct UARCustomCtrl_PoseCustomControllers_Params
{
public:
	class USkeletalMeshComponent*                SkelMeshComp;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCustomControllerData>         CustomControllers;                                 // 0x8(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ARigRuntime.ARCustomCtrl.ParentCustomControllers
struct UARCustomCtrl_ParentCustomControllers_Params
{
public:
	TArray<struct FCustomControllerData>         InCC;                                              // 0x0(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	class AActor*                                Rig;                                               // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ARigRuntime.ARCustomCtrl.KeyCustomControllers
struct UARCustomCtrl_KeyCustomControllers_Params
{
public:
	TArray<struct FCustomControllerData>         CustomControllers;                                 // 0x0(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	class ULevelSequence*                        LevelSequence;                                     // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Time;                                              // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_660[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function ARigRuntime.ARCustomCtrl.CreateCustomControllers
struct UARCustomCtrl_CreateCustomControllers_Params
{
public:
	class USkeletalMeshComponent*                SkelMeshComp;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Rig;                                               // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCustomControllerData>         InCC;                                              // 0x10(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCustomControllerData>         ReturnValue;                                       // 0x20(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x310 (0x310 - 0x0)
// Function ARigRuntime.ARFace.UpdateMorphTargets
struct UARFace_UpdateMorphTargets_Params
{
public:
	class USkeletalMeshComponent*                SkelMeshComp;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_695[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFaceSettings                         FaceSettings;                                      // 0x10(0x300)(Parm, NativeAccessSpecifierPublic)
};

// 0x350 (0x350 - 0x0)
// Function ARigRuntime.ARFace.UpdateFaceRig
struct UARFace_UpdateFaceRig_Params
{
public:
	class USkeletalMeshComponent*                SkelMeshComp;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6A9[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFaceSettings                         FaceSettings;                                      // 0x10(0x300)(Parm, NativeAccessSpecifierPublic)
	struct FBonesTransforms                      BonesTransforms;                                   // 0x310(0x20)(Parm, NativeAccessSpecifierPublic)
	struct FBonesTransforms                      ReturnValue;                                       // 0x330(0x20)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x350 (0x350 - 0x0)
// Function ARigRuntime.ARFace.UpdateEyes
struct UARFace_UpdateEyes_Params
{
public:
	struct FFaceSettings                         FaceSettings;                                      // 0x0(0x300)(Parm, NativeAccessSpecifierPublic)
	struct FBonesTransforms                      BonesTransforms;                                   // 0x300(0x20)(Parm, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                    EyesTransforms;                                    // 0x320(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FBonesTransforms                      ReturnValue;                                       // 0x330(0x20)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x350 (0x350 - 0x0)
// Function ARigRuntime.ARFace.UpdateEyelids
struct UARFace_UpdateEyelids_Params
{
public:
	struct FFaceSettings                         FaceSettings;                                      // 0x0(0x300)(Parm, NativeAccessSpecifierPublic)
	struct FBonesTransforms                      BonesTransforms;                                   // 0x300(0x20)(Parm, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                    EyesTransforms;                                    // 0x320(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FBonesTransforms                      ReturnValue;                                       // 0x330(0x20)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x310 (0x310 - 0x0)
// Function ARigRuntime.ARFace.PoseMorphTargets
struct UARFace_PoseMorphTargets_Params
{
public:
	class USkeletalMeshComponent*                SkelMeshComp;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6EC[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFaceSettings                         FaceSettings;                                      // 0x10(0x300)(Parm, NativeAccessSpecifierPublic)
};

// 0x310 (0x310 - 0x0)
// Function ARigRuntime.ARFace.PoseFaceRig
struct UARFace_PoseFaceRig_Params
{
public:
	class USkeletalMeshComponent*                SkelMeshComp;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_704[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFaceSettings                         FaceSettings;                                      // 0x10(0x300)(Parm, NativeAccessSpecifierPublic)
};

// 0x310 (0x310 - 0x0)
// Function ARigRuntime.ARFace.PoseEyes
struct UARFace_PoseEyes_Params
{
public:
	class USkeletalMeshComponent*                SkelMeshComp;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_712[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFaceSettings                         FaceSettings;                                      // 0x10(0x300)(Parm, NativeAccessSpecifierPublic)
};

// 0x310 (0x310 - 0x0)
// Function ARigRuntime.ARFace.PoseEyelids
struct UARFace_PoseEyelids_Params
{
public:
	class USkeletalMeshComponent*                SkelMeshComp;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_71E[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFaceSettings                         FaceSettings;                                      // 0x10(0x300)(Parm, NativeAccessSpecifierPublic)
};

// 0x310 (0x310 - 0x0)
// Function ARigRuntime.ARFace.KeyMorphTargets
struct UARFace_KeyMorphTargets_Params
{
public:
	struct FFaceSettings                         FaceSettings;                                      // 0x0(0x300)(Parm, NativeAccessSpecifierPublic)
	class ULevelSequence*                        LevelSequence;                                     // 0x300(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Time;                                              // 0x308(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_730[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x320 (0x320 - 0x0)
// Function ARigRuntime.ARFace.KeyMorphTargetCurves
struct UARFace_KeyMorphTargetCurves_Params
{
public:
	class USkeletalMeshComponent*                SkelMeshComp;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_73D[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFaceSettings                         FaceSettings;                                      // 0x10(0x300)(Parm, NativeAccessSpecifierPublic)
	class UAnimSequence*                         AnimSequence;                                      // 0x310(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Time;                                              // 0x318(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUpdateFromSource;                                 // 0x31C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_743[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x310 (0x310 - 0x0)
// Function ARigRuntime.ARFace.KeyFaceRig
struct UARFace_KeyFaceRig_Params
{
public:
	struct FFaceSettings                         FaceSettings;                                      // 0x0(0x300)(Parm, NativeAccessSpecifierPublic)
	class ULevelSequence*                        LevelSequence;                                     // 0x300(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Time;                                              // 0x308(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_758[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x310 (0x310 - 0x0)
// Function ARigRuntime.ARFace.KeyEyes
struct UARFace_KeyEyes_Params
{
public:
	struct FFaceSettings                         FaceSettings;                                      // 0x0(0x300)(Parm, NativeAccessSpecifierPublic)
	class ULevelSequence*                        LevelSequence;                                     // 0x300(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Time;                                              // 0x308(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_76A[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x310 (0x310 - 0x0)
// Function ARigRuntime.ARFace.KeyEyelids
struct UARFace_KeyEyelids_Params
{
public:
	struct FFaceSettings                         FaceSettings;                                      // 0x0(0x300)(Parm, NativeAccessSpecifierPublic)
	class ULevelSequence*                        LevelSequence;                                     // 0x300(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Time;                                              // 0x308(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_774[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x600 (0x600 - 0x0)
// Function ARigRuntime.ARFace.InitFaceRigData
struct UARFace_InitFaceRigData_Params
{
public:
	struct FFaceSettings                         FaceSettings;                                      // 0x0(0x300)(Parm, NativeAccessSpecifierPublic)
	struct FFaceSettings                         ReturnValue;                                       // 0x300(0x300)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x3C (0x3C - 0x0)
// Function ARigRuntime.ARFace.GetEyelidsRotation
struct UARFace_GetEyelidsRotation_Params
{
public:
	struct FVector                               CtrlPos;                                           // 0x0(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              BoneSpaceR;                                        // 0xC(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FAimSettings                          AimSettings;                                       // 0x18(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	float                                        PosMult;                                           // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Follow;                                            // 0x2C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              ReturnValue;                                       // 0x30(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x610 (0x610 - 0x0)
// Function ARigRuntime.ARFace.FaceParentController
struct UARFace_FaceParentController_Params
{
public:
	struct FFaceSettings                         FaceSettings;                                      // 0x0(0x300)(Parm, NativeAccessSpecifierPublic)
	class AActor*                                Rig;                                               // 0x300(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_792[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFaceSettings                         ReturnValue;                                       // 0x310(0x300)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x620 (0x620 - 0x0)
// Function ARigRuntime.ARFace.CreateMorphControllers
struct UARFace_CreateMorphControllers_Params
{
public:
	class USkeletalMeshComponent*                SkelMeshComp;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_79F[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFaceSettings                         FaceSettings;                                      // 0x10(0x300)(Parm, NativeAccessSpecifierPublic)
	class AActor*                                Rig;                                               // 0x310(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7A0[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFaceSettings                         ReturnValue;                                       // 0x320(0x300)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x620 (0x620 - 0x0)
// Function ARigRuntime.ARFace.CreateFaceRig
struct UARFace_CreateFaceRig_Params
{
public:
	class USkeletalMeshComponent*                SkelMeshComp;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7AD[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFaceSettings                         FaceSettings;                                      // 0x10(0x300)(Parm, NativeAccessSpecifierPublic)
	class AActor*                                Rig;                                               // 0x310(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7B1[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFaceSettings                         ReturnValue;                                       // 0x320(0x300)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x620 (0x620 - 0x0)
// Function ARigRuntime.ARFace.CreateEyes
struct UARFace_CreateEyes_Params
{
public:
	class USkeletalMeshComponent*                SkelMeshComp;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7C3[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFaceSettings                         FaceSettings;                                      // 0x10(0x300)(Parm, NativeAccessSpecifierPublic)
	class AActor*                                Rig;                                               // 0x310(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7C6[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFaceSettings                         ReturnValue;                                       // 0x320(0x300)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x620 (0x620 - 0x0)
// Function ARigRuntime.ARFace.CreateEyelids
struct UARFace_CreateEyelids_Params
{
public:
	class USkeletalMeshComponent*                SkelMeshComp;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7D7[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFaceSettings                         FaceSettings;                                      // 0x10(0x300)(Parm, NativeAccessSpecifierPublic)
	class AActor*                                Rig;                                               // 0x310(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7DE[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFaceSettings                         ReturnValue;                                       // 0x320(0x300)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ARigRuntime.ARFace.ConvertVectorToXZValues
struct UARFace_ConvertVectorToXZValues_Params
{
public:
	struct FVector                               Vector;                                            // 0x0(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Max;                                               // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function ARigRuntime.ARFkHierarchy.UpdateFkHierarchyRigs
struct UARFkHierarchy_UpdateFkHierarchyRigs_Params
{
public:
	TArray<struct FFkHierarchyData>              FkHierarchy;                                       // 0x0(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FBonesTransforms                      BonesTransforms;                                   // 0x10(0x20)(Parm, NativeAccessSpecifierPublic)
	struct FBonesTransforms                      ReturnValue;                                       // 0x30(0x20)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ARigRuntime.ARFkHierarchy.PoseFkHierarchyRigs
struct UARFkHierarchy_PoseFkHierarchyRigs_Params
{
public:
	class USkeletalMeshComponent*                SkelMeshComp;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFkHierarchyData>              FkHierarchyRigs;                                   // 0x8(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x120 (0x120 - 0x0)
// Function ARigRuntime.ARFkHierarchy.PoseFkHierarchyRig
struct UARFkHierarchy_PoseFkHierarchyRig_Params
{
public:
	class USkeletalMeshComponent*                SkelMeshComp;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_857[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFkHierarchyData                      FkHierarchyData;                                   // 0x10(0x110)(Parm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ARigRuntime.ARFkHierarchy.ParentFkHierarchyRigs
struct UARFkHierarchy_ParentFkHierarchyRigs_Params
{
public:
	TArray<struct FFkHierarchyData>              FkHRigs;                                           // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	class AActor*                                Rig;                                               // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ARigRuntime.ARFkHierarchy.KeyFkHierarchyRigs
struct UARFkHierarchy_KeyFkHierarchyRigs_Params
{
public:
	TArray<struct FFkHierarchyData>              FkHierarchyRigs;                                   // 0x0(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	class ULevelSequence*                        LevelSequence;                                     // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Time;                                              // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_870[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x120 (0x120 - 0x0)
// Function ARigRuntime.ARFkHierarchy.KeyFkHierarchyRig
struct UARFkHierarchy_KeyFkHierarchyRig_Params
{
public:
	struct FFkHierarchyData                      FkHierarchyData;                                   // 0x0(0x110)(Parm, NativeAccessSpecifierPublic)
	class ULevelSequence*                        LevelSequence;                                     // 0x110(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Time;                                              // 0x118(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_885[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function ARigRuntime.ARFkHierarchy.CreateFkHierarchyRigs
struct UARFkHierarchy_CreateFkHierarchyRigs_Params
{
public:
	class USkeletalMeshComponent*                SkelMeshComp;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Rig;                                               // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFkHierarchyData>              FkHRigs;                                           // 0x10(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FFkHierarchyData>              ReturnValue;                                       // 0x20(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x230 (0x230 - 0x0)
// Function ARigRuntime.ARFkHierarchy.CreateFkHierarchyRig
struct UARFkHierarchy_CreateFkHierarchyRig_Params
{
public:
	class USkeletalMeshComponent*                SkelMeshComp;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Rig;                                               // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFkHierarchyData                      FkH;                                               // 0x10(0x110)(Parm, NativeAccessSpecifierPublic)
	struct FFkHierarchyData                      ReturnValue;                                       // 0x120(0x110)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x990 (0x990 - 0x0)
// Function ARigRuntime.ARFkIk.UpdateTwoBoneTwistLimb
struct UARFkIk_UpdateTwoBoneTwistLimb_Params
{
public:
	struct FFkIkData                             FkIkData;                                          // 0x0(0x930)(Parm, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                    InTransforms;                                      // 0x930(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        FkIk;                                              // 0x940(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8C4[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBonesTransforms                      BonesTransforms;                                   // 0x948(0x20)(Parm, NativeAccessSpecifierPublic)
	struct FBonesTransforms                      ReturnValue;                                       // 0x968(0x20)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	uint8                                        Pad_8C8[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x9F0 (0x9F0 - 0x0)
// Function ARigRuntime.ARFkIk.UpdateTwoBoneFkIk
struct UARFkIk_UpdateTwoBoneFkIk_Params
{
public:
	struct FFkIkData                             FkIkData;                                          // 0x0(0x930)(Parm, NativeAccessSpecifierPublic)
	float                                        FkIk;                                              // 0x930(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowStretching;                                  // 0x934(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8E2[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StretchScale;                                      // 0x938(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSoftStretch;                                      // 0x93C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8E3[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StretchSoftness;                                   // 0x940(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PoleVectorLock;                                    // 0x944(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               CharScale;                                         // 0x948(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8EB[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Low;                                               // 0x960(0x30)(Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            Mid;                                               // 0x990(0x30)(Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            Up;                                                // 0x9C0(0x30)(Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1D0 (0x1D0 - 0x0)
// Function ARigRuntime.ARFkIk.UpdateTwistBones
struct UARFkIk_UpdateTwistBones_Params
{
public:
	struct FTwistBonesData                       TwistBonesData;                                    // 0x0(0x140)(Parm, NativeAccessSpecifierPublic)
	struct FTransform                            UpperT;                                            // 0x140(0x30)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            LowerT;                                            // 0x170(0x30)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FBonesTransforms                      BonesTransforms;                                   // 0x1A0(0x20)(Parm, OutParm, NativeAccessSpecifierPublic)
	struct FVector                               Scale;                                             // 0x1C0(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1CC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_90F[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x980 (0x980 - 0x0)
// Function ARigRuntime.ARFkIk.UpdateThreeBoneTwistLimb
struct UARFkIk_UpdateThreeBoneTwistLimb_Params
{
public:
	struct FFkIkData                             FkIkData;                                          // 0x0(0x930)(Parm, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                    InTransforms;                                      // 0x930(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FBonesTransforms                      BonesTransforms;                                   // 0x940(0x20)(Parm, NativeAccessSpecifierPublic)
	struct FBonesTransforms                      ReturnValue;                                       // 0x960(0x20)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0xA20 (0xA20 - 0x0)
// Function ARigRuntime.ARFkIk.UpdateThreeBoneFkIk
struct UARFkIk_UpdateThreeBoneFkIk_Params
{
public:
	struct FFkIkData                             FkIkData;                                          // 0x0(0x930)(Parm, NativeAccessSpecifierPublic)
	float                                        FkIk;                                              // 0x930(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowStretching;                                  // 0x934(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_936[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StretchScale;                                      // 0x938(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSoftStretch;                                      // 0x93C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_937[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StretchSoftness;                                   // 0x940(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PoleVectorLock;                                    // 0x944(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Bend;                                              // 0x948(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               CharScale;                                         // 0x94C(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_93B[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Tip;                                               // 0x960(0x30)(Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            Low;                                               // 0x990(0x30)(Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            Mid;                                               // 0x9C0(0x30)(Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            Up;                                                // 0x9F0(0x30)(Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// Function ARigRuntime.ARFkIk.UpdateFootRig
struct UARFkIk_UpdateFootRig_Params
{
public:
	struct FFootControllersData                  FootControllersData;                               // 0x0(0xA0)(Parm, NativeAccessSpecifierPublic)
	float                                        FootRoll;                                          // 0xA0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ToeRoll;                                           // 0xA4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HeelTwist;                                         // 0xA8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ToeTwist;                                          // 0xAC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FkIk;                                              // 0xB0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_952[0xC];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x970 (0x970 - 0x0)
// Function ARigRuntime.ARFkIk.UpdateFoot
struct UARFkIk_UpdateFoot_Params
{
public:
	struct FFkIkData                             FkIkData;                                          // 0x0(0x930)(Parm, NativeAccessSpecifierPublic)
	struct FBonesTransforms                      BonesTransforms;                                   // 0x930(0x20)(Parm, NativeAccessSpecifierPublic)
	struct FBonesTransforms                      ReturnValue;                                       // 0x950(0x20)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function ARigRuntime.ARFkIk.UpdateFkIkRigs
struct UARFkIk_UpdateFkIkRigs_Params
{
public:
	class USkeletalMeshComponent*                SkelMeshComp;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFkIkData>                     FkIkRigs;                                          // 0x8(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FVector                               CharScale;                                         // 0x18(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_971[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBonesTransforms                      BonesTransforms;                                   // 0x28(0x20)(Parm, NativeAccessSpecifierPublic)
	struct FBonesTransforms                      ReturnValue;                                       // 0x48(0x20)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x980 (0x980 - 0x0)
// Function ARigRuntime.ARFkIk.UpdateFkIkRig
struct UARFkIk_UpdateFkIkRig_Params
{
public:
	struct FFkIkData                             FkIkData;                                          // 0x0(0x930)(Parm, NativeAccessSpecifierPublic)
	struct FVector                               CharScale;                                         // 0x930(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_982[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBonesTransforms                      BonesTransforms;                                   // 0x940(0x20)(Parm, NativeAccessSpecifierPublic)
	struct FBonesTransforms                      ReturnValue;                                       // 0x960(0x20)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x970 (0x970 - 0x0)
// Function ARigRuntime.ARFkIk.UpdateFingersRig
struct UARFkIk_UpdateFingersRig_Params
{
public:
	struct FFkIkData                             FkIkData;                                          // 0x0(0x930)(Parm, NativeAccessSpecifierPublic)
	struct FBonesTransforms                      BonesTransforms;                                   // 0x930(0x20)(Parm, NativeAccessSpecifierPublic)
	struct FBonesTransforms                      ReturnValue;                                       // 0x950(0x20)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// Function ARigRuntime.ARFkIk.UpdateFingersGroups
struct UARFkIk_UpdateFingersGroups_Params
{
public:
	struct FFingersData                          FingersData;                                       // 0x0(0x88)(Parm, NativeAccessSpecifierPublic)
	bool                                         bEnableFingers;                                    // 0x88(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_99A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Curl;                                              // 0x8C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Spread;                                            // 0x90(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Relax;                                             // 0x94(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ThumbCurl;                                         // 0x98(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ThumbRoll;                                         // 0x9C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ThumbPitch;                                        // 0xA0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ThumbYaw;                                          // 0xA4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAxisEnum                         FingersAxis;                                       // 0xA8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9A0[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRotator>                      Offsets;                                           // 0xB0(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xC8 (0xC8 - 0x0)
// Function ARigRuntime.ARFkIk.UpdateFingers
struct UARFkIk_UpdateFingers_Params
{
public:
	struct FFingersData                          FingersData;                                       // 0x0(0x88)(Parm, NativeAccessSpecifierPublic)
	struct FBonesTransforms                      BonesTransforms;                                   // 0x88(0x20)(Parm, NativeAccessSpecifierPublic)
	struct FBonesTransforms                      ReturnValue;                                       // 0xA8(0x20)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1A0 (0x1A0 - 0x0)
// Function ARigRuntime.ARFkIk.ThreeBoneIkOpt
struct UARFkIk_ThreeBoneIkOpt_Params
{
public:
	struct FTransform                            EffectorPos;                                       // 0x0(0x30)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            RootPos;                                           // 0x30(0x30)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            SecondIkPos;                                       // 0x60(0x30)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              Roll;                                              // 0x90(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               UpPV;                                              // 0x9C(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LowPV;                                             // 0xA8(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UpLength;                                          // 0xB4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MidLength;                                         // 0xB8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LowLength;                                         // 0xBC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StretchScale;                                      // 0xC0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowStretching;                                  // 0xC4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSoftStretch;                                      // 0xC5(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9CB[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StretchSoftness;                                   // 0xC8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PoleVectorLock;                                    // 0xCC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Bend;                                              // 0xD0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9CD[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            UpBone;                                            // 0xE0(0x30)(Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            MidBone;                                           // 0x110(0x30)(Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            LowBone;                                           // 0x140(0x30)(Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            TipBone;                                           // 0x170(0x30)(Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x220 (0x220 - 0x0)
// Function ARigRuntime.ARFkIk.ThreeBoneIk
struct UARFkIk_ThreeBoneIk_Params
{
public:
	struct FTransform                            EffectorPos;                                       // 0x0(0x30)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               UpPV;                                              // 0x30(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LowPV;                                             // 0x3C(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9E8[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            UpBoneWorld;                                       // 0x50(0x30)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            MidBoneLocal;                                      // 0x80(0x30)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            LowBoneLocal;                                      // 0xB0(0x30)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            TipBoneLocal;                                      // 0xE0(0x30)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FAimSettings                          UpAimSettings;                                     // 0x110(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FAimSettings                          MidAimSettings;                                    // 0x120(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FAimSettings                          LowAimSettings;                                    // 0x130(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              Roll;                                              // 0x140(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bAllowStretching;                                  // 0x14C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSoftStretch;                                      // 0x14D(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9F8[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StretchScale;                                      // 0x150(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9FC[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            UpBone;                                            // 0x160(0x30)(Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            MidBone;                                           // 0x190(0x30)(Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            LowBone;                                           // 0x1C0(0x30)(Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            Tip;                                               // 0x1F0(0x30)(Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1D0 (0x1D0 - 0x0)
// Function ARigRuntime.ARFkIk.SnapTwoBoneIk
struct UARFkIk_SnapTwoBoneIk_Params
{
public:
	class USkeletalMeshComponent*                SkelMeshComp;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A09[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTwoBoneIkData                        TwoBoneIkData;                                     // 0x10(0x1C0)(Parm, NativeAccessSpecifierPublic)
};

// 0x1D0 (0x1D0 - 0x0)
// Function ARigRuntime.ARFkIk.SnapThreeBoneIk
struct UARFkIk_SnapThreeBoneIk_Params
{
public:
	class USkeletalMeshComponent*                SkelMeshComp;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A10[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTwoBoneIkData                        TwoBoneIkData;                                     // 0x10(0x1C0)(Parm, NativeAccessSpecifierPublic)
};

// 0x950 (0x950 - 0x0)
// Function ARigRuntime.ARFkIk.SnapFkIkLimb
struct UARFkIk_SnapFkIkLimb_Params
{
public:
	class USkeletalMeshComponent*                SkelMeshComp;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A17[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFkIkData                             FkIkData;                                          // 0x10(0x930)(Parm, NativeAccessSpecifierPublic)
	bool                                         bForce;                                            // 0x940(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A19[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x120 (0x120 - 0x0)
// Function ARigRuntime.ARFkIk.SnapFkHierarchyRig
struct UARFkIk_SnapFkHierarchyRig_Params
{
public:
	class USkeletalMeshComponent*                SkelMeshComp;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A22[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFkHierarchyData                      FkHierarchyData;                                   // 0x10(0x110)(Parm, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// Function ARigRuntime.ARFkIk.SetFingersProperties
struct UARFkIk_SetFingersProperties_Params
{
public:
	struct FFingersData                          FingersData;                                       // 0x0(0x88)(Parm, NativeAccessSpecifierPublic)
	class AARControllerFkIk*                     FkIkController;                                    // 0x88(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                IkController;                                      // 0x90(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1D0 (0x1D0 - 0x0)
// Function ARigRuntime.ARFkIk.PoseTwoBoneIk
struct UARFkIk_PoseTwoBoneIk_Params
{
public:
	class USkeletalMeshComponent*                SkelMeshComp;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A38[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTwoBoneIkData                        TwoBoneIkData;                                     // 0x10(0x1C0)(Parm, NativeAccessSpecifierPublic)
};

// 0x150 (0x150 - 0x0)
// Function ARigRuntime.ARFkIk.PoseTwistControllers
struct UARFkIk_PoseTwistControllers_Params
{
public:
	class USkeletalMeshComponent*                SkelMeshComp;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A3F[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTwistBonesData                       TwistBonesData;                                    // 0x10(0x140)(Parm, NativeAccessSpecifierPublic)
};

// 0x1D0 (0x1D0 - 0x0)
// Function ARigRuntime.ARFkIk.PoseThreeBoneIk
struct UARFkIk_PoseThreeBoneIk_Params
{
public:
	class USkeletalMeshComponent*                SkelMeshComp;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A46[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTwoBoneIkData                        TwoBoneIkData;                                     // 0x10(0x1C0)(Parm, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function ARigRuntime.ARFkIk.PoseFoot
struct UARFkIk_PoseFoot_Params
{
public:
	class USkeletalMeshComponent*                SkelMeshComp;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Toe;                                               // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFootControllersData                  FootControllersData;                               // 0x10(0xA0)(Parm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ARigRuntime.ARFkIk.PoseFkIkRigs
struct UARFkIk_PoseFkIkRigs_Params
{
public:
	class USkeletalMeshComponent*                SkelMeshComp;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFkIkData>                     FkIkRigs;                                          // 0x8(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function ARigRuntime.ARFkIk.PoseFingers
struct UARFkIk_PoseFingers_Params
{
public:
	class USkeletalMeshComponent*                SkelMeshComp;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFingersData                          FingersData;                                       // 0x8(0x88)(Parm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ARigRuntime.ARFkIk.ParentFkIkRigs
struct UARFkIk_ParentFkIkRigs_Params
{
public:
	TArray<struct FFkIkData>                     FkIkRigs;                                          // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	class AActor*                                Rig;                                               // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1D0 (0x1D0 - 0x0)
// Function ARigRuntime.ARFkIk.KeyTwoBoneIk
struct UARFkIk_KeyTwoBoneIk_Params
{
public:
	struct FTwoBoneIkData                        TwoBoneIkData;                                     // 0x0(0x1C0)(Parm, NativeAccessSpecifierPublic)
	class ULevelSequence*                        LevelSequence;                                     // 0x1C0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Time;                                              // 0x1C8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A6D[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x150 (0x150 - 0x0)
// Function ARigRuntime.ARFkIk.KeyTwistControllers
struct UARFkIk_KeyTwistControllers_Params
{
public:
	struct FTwistBonesData                       TwistBonesData;                                    // 0x0(0x140)(Parm, NativeAccessSpecifierPublic)
	class ULevelSequence*                        LevelSequence;                                     // 0x140(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Time;                                              // 0x148(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A7A[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1D0 (0x1D0 - 0x0)
// Function ARigRuntime.ARFkIk.KeyThreeBoneIk
struct UARFkIk_KeyThreeBoneIk_Params
{
public:
	struct FTwoBoneIkData                        TwoBoneIkData;                                     // 0x0(0x1C0)(Parm, NativeAccessSpecifierPublic)
	class ULevelSequence*                        LevelSequence;                                     // 0x1C0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Time;                                              // 0x1C8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A83[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB0 (0xB0 - 0x0)
// Function ARigRuntime.ARFkIk.KeyFoot
struct UARFkIk_KeyFoot_Params
{
public:
	struct FFootControllersData                  FootControllersData;                               // 0x0(0xA0)(Parm, NativeAccessSpecifierPublic)
	class ULevelSequence*                        LevelSequence;                                     // 0xA0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Time;                                              // 0xA8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A8D[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function ARigRuntime.ARFkIk.KeyFkIkRigs
struct UARFkIk_KeyFkIkRigs_Params
{
public:
	TArray<struct FFkIkData>                     FkIkRigs;                                          // 0x0(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	class ULevelSequence*                        LevelSequence;                                     // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Time;                                              // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A95[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x950 (0x950 - 0x0)
// Function ARigRuntime.ARFkIk.KeyFkIkLimb
struct UARFkIk_KeyFkIkLimb_Params
{
public:
	class ULevelSequence*                        Sequencer;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A9E[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFkIkData                             FkIkData;                                          // 0x10(0x930)(Parm, NativeAccessSpecifierPublic)
	float                                        Time;                                              // 0x940(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AA1[0xC];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x98 (0x98 - 0x0)
// Function ARigRuntime.ARFkIk.KeyFingers
struct UARFkIk_KeyFingers_Params
{
public:
	struct FFingersData                          FingersData;                                       // 0x0(0x88)(Parm, NativeAccessSpecifierPublic)
	class ULevelSequence*                        LevelSequence;                                     // 0x88(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Time;                                              // 0x90(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AA7[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x130 (0x130 - 0x0)
// Function ARigRuntime.ARFkIk.GetTwoBoneIkTwistOffsets
struct UARFkIk_GetTwoBoneIkTwistOffsets_Params
{
public:
	struct FTransform                            EffectorT;                                         // 0x0(0x30)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            PoleVectorT;                                       // 0x30(0x30)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            IkHelperT;                                         // 0x60(0x30)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            MidBoneLocalT;                                     // 0x90(0x30)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            LowBoneLocalT;                                     // 0xC0(0x30)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FAimSettings                          AimSettings;                                       // 0xF0(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bPoleVectorSimple;                                 // 0x100(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AB7[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAimSettings                          UpAimSettings;                                     // 0x104(0x10)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FAimSettings                          MidAimSettings;                                    // 0x114(0x10)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_ABA[0xC];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1D0 (0x1D0 - 0x0)
// Function ARigRuntime.ARFkIk.GetTwoBoneIkSettings
struct UARFkIk_GetTwoBoneIkSettings_Params
{
public:
	class USkeletalMeshComponent*                SkelMeshComp;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AC0[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTwoBoneIkData                        TwoBoneIk;                                         // 0x10(0x1C0)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0xD00 (0xD00 - 0x0)
// Function ARigRuntime.ARFkIk.GetTwistLimbSettings
struct UARFkIk_GetTwistLimbSettings_Params
{
public:
	class USkeletalMeshComponent*                SkelMeshComp;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Rig;                                               // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFkIkData                             FkIkData;                                          // 0x10(0x930)(Parm, NativeAccessSpecifierPublic)
	struct FTwistBonesData                       TwistBonesA;                                       // 0x940(0x140)(Parm, OutParm, NativeAccessSpecifierPublic)
	struct FTwistBonesData                       TwistBonesB;                                       // 0xA80(0x140)(Parm, OutParm, NativeAccessSpecifierPublic)
	struct FTwistBonesData                       TwistBonesC;                                       // 0xBC0(0x140)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x300 (0x300 - 0x0)
// Function ARigRuntime.ARFkIk.GetTwistBonesSettings
struct UARFkIk_GetTwistBonesSettings_Params
{
public:
	class USkeletalMeshComponent*                SkelMeshComp;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Rig;                                               // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTwistBonesData                       TwistBonesData;                                    // 0x10(0x140)(Parm, NativeAccessSpecifierPublic)
	struct FAimSettings                          AimSettings;                                       // 0x150(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            UpBoneT;                                           // 0x160(0x30)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            LowBoneT;                                          // 0x190(0x30)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTwistBonesData                       ReturnValue;                                       // 0x1C0(0x140)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1D0 (0x1D0 - 0x0)
// Function ARigRuntime.ARFkIk.GetThreeBoneIkTwistOffsets
struct UARFkIk_GetThreeBoneIkTwistOffsets_Params
{
public:
	struct FTransform                            EffectorT;                                         // 0x0(0x30)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               UpPoleVectorV;                                     // 0x30(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LowPoleVectorV;                                    // 0x3C(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AE6[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            IkHelperT;                                         // 0x50(0x30)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            MidBoneLocalT;                                     // 0x80(0x30)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            LowBoneLocalT;                                     // 0xB0(0x30)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            TipBoneLocalT;                                     // 0xE0(0x30)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            MidBoneT;                                          // 0x110(0x30)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            LowBoneT;                                          // 0x140(0x30)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FAimSettings                          AimSettingsA;                                      // 0x170(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FAimSettings                          AimSettingsB;                                      // 0x180(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bPoleVectorSimple;                                 // 0x190(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AED[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAimSettings                          UpAimSettings;                                     // 0x194(0x10)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FAimSettings                          MidAimSettings;                                    // 0x1A4(0x10)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FAimSettings                          LowAimSettings;                                    // 0x1B4(0x10)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_AEE[0xC];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1D0 (0x1D0 - 0x0)
// Function ARigRuntime.ARFkIk.GetThreeBoneIkSettings
struct UARFkIk_GetThreeBoneIkSettings_Params
{
public:
	class USkeletalMeshComponent*                SkelMeshComp;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AF7[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTwoBoneIkData                        TwoBoneIk;                                         // 0x10(0x1C0)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ARigRuntime.ARFkIk.GetPvPosFromMesh
struct UARFkIk_GetPvPosFromMesh_Params
{
public:
	class USkeletalMeshComponent*                SkelMeshComp;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TipBone;                                           // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Multiply;                                          // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0x14(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ARigRuntime.ARFkIk.GetPvPosFromDir
struct UARFkIk_GetPvPosFromDir_Params
{
public:
	class USkeletalMeshComponent*                SkelMeshComp;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TipBone;                                           // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Multiply;                                          // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bArm;                                              // 0x14(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B03[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ReturnValue;                                       // 0x18(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B04[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x98 (0x98 - 0x0)
// Function ARigRuntime.ARFkIk.GetFingersAxis
struct UARFkIk_GetFingersAxis_Params
{
public:
	struct FFingersData                          FingersData;                                       // 0x0(0x88)(Parm, NativeAccessSpecifierPublic)
	class AActor*                                IkController;                                      // 0x88(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAxisEnum                         ReturnValue;                                       // 0x90(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B0C[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function ARigRuntime.ARFkIk.GetFingerRotation
struct UARFkIk_GetFingerRotation_Params
{
public:
	float                                        Curl;                                              // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Spread;                                            // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAxisEnum                         FingersAxis;                                       // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B10[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              ReturnValue;                                       // 0xC(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x930 (0x930 - 0x0)
// Function ARigRuntime.ARFkIk.FkIkVis
struct UARFkIk_FkIkVis_Params
{
public:
	struct FFkIkData                             FkIkData;                                          // 0x0(0x930)(Parm, NativeAccessSpecifierPublic)
};

// 0x390 (0x390 - 0x0)
// Function ARigRuntime.ARFkIk.CreateTwoBoneIkRig
struct UARFkIk_CreateTwoBoneIkRig_Params
{
public:
	class USkeletalMeshComponent*                SkelMeshComp;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Rig;                                               // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTwoBoneIkData                        TwoBoneIk;                                         // 0x10(0x1C0)(Parm, OutParm, NativeAccessSpecifierPublic)
	struct FTwoBoneIkData                        ReturnValue;                                       // 0x1D0(0x1C0)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1D0 (0x1D0 - 0x0)
// Function ARigRuntime.ARFkIk.CreateTwoBoneIkControllers
struct UARFkIk_CreateTwoBoneIkControllers_Params
{
public:
	class USkeletalMeshComponent*                SkelMeshComp;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Rig;                                               // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTwoBoneIkData                        TwoBoneIk;                                         // 0x10(0x1C0)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x390 (0x390 - 0x0)
// Function ARigRuntime.ARFkIk.CreateThreeBoneIkRig
struct UARFkIk_CreateThreeBoneIkRig_Params
{
public:
	class USkeletalMeshComponent*                SkelMeshComp;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Rig;                                               // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTwoBoneIkData                        TwoBoneIk;                                         // 0x10(0x1C0)(Parm, OutParm, NativeAccessSpecifierPublic)
	struct FTwoBoneIkData                        ReturnValue;                                       // 0x1D0(0x1C0)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1D0 (0x1D0 - 0x0)
// Function ARigRuntime.ARFkIk.CreateThreeBoneIkControllers
struct UARFkIk_CreateThreeBoneIkControllers_Params
{
public:
	class USkeletalMeshComponent*                SkelMeshComp;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Rig;                                               // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTwoBoneIkData                        TwoBoneIk;                                         // 0x10(0x1C0)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x200 (0x200 - 0x0)
// Function ARigRuntime.ARFkIk.CreatePoleVectorController
struct UARFkIk_CreatePoleVectorController_Params
{
public:
	class USkeletalMeshComponent*                SkelMeshComp;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Rig;                                               // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                IkController;                                      // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B55[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTwoBoneIkData                        TwoBoneIk;                                         // 0x20(0x1C0)(Parm, NativeAccessSpecifierPublic)
	class FName                                  TipBone;                                           // 0x1E0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bArm;                                              // 0x1E8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B5B[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                Controller;                                        // 0x1F0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Group;                                             // 0x1F8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x9F0 (0x9F0 - 0x0)
// Function ARigRuntime.ARFkIk.CreateFootRig
struct UARFkIk_CreateFootRig_Params
{
public:
	class USkeletalMeshComponent*                SkelMeshComp;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B63[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFkIkData                             FkIkData;                                          // 0x10(0x930)(Parm, NativeAccessSpecifierPublic)
	class AActor*                                Rig;                                               // 0x940(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B65[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFootControllersData                  ReturnValue;                                       // 0x950(0xA0)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function ARigRuntime.ARFkIk.CreateFkIkRigs
struct UARFkIk_CreateFkIkRigs_Params
{
public:
	class USkeletalMeshComponent*                SkelMeshComp;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFkIkData>                     FkIkRigs;                                          // 0x8(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	class AActor*                                Rig;                                               // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFkIkData>                     ReturnValue;                                       // 0x20(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1280 (0x1280 - 0x0)
// Function ARigRuntime.ARFkIk.CreateFkIkRig
struct UARFkIk_CreateFkIkRig_Params
{
public:
	class USkeletalMeshComponent*                SkelMeshComp;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B73[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFkIkData                             FkIkData;                                          // 0x10(0x930)(Parm, NativeAccessSpecifierPublic)
	class AActor*                                Rig;                                               // 0x940(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B74[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFkIkData                             ReturnValue;                                       // 0x950(0x930)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1E0 (0x1E0 - 0x0)
// Function ARigRuntime.ARFkIk.CreateFkIkControllerRig
struct UARFkIk_CreateFkIkControllerRig_Params
{
public:
	class USkeletalMeshComponent*                SkelMeshComp;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Rig;                                               // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTwoBoneIkData                        TwoBoneIk;                                         // 0x10(0x1C0)(Parm, NativeAccessSpecifierPublic)
	class AActor*                                ReturnValue;                                       // 0x1D0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B7C[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// Function ARigRuntime.ARFkIk.CreateFkIkController
struct UARFkIk_CreateFkIkController_Params
{
public:
	class AActor*                                Rig;                                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Name;                                              // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            Transform;                                         // 0x10(0x30)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               Offset;                                            // 0x40(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0x4C(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Size;                                              // 0x5C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                ReturnValue;                                       // 0x60(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B88[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x9D0 (0x9D0 - 0x0)
// Function ARigRuntime.ARFkIk.CreateFingersRig
struct UARFkIk_CreateFingersRig_Params
{
public:
	class USkeletalMeshComponent*                SkelMeshComp;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B8E[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFkIkData                             FkIkData;                                          // 0x10(0x930)(Parm, NativeAccessSpecifierPublic)
	class AActor*                                Rig;                                               // 0x940(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFingersData                          ReturnValue;                                       // 0x948(0x88)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ARigRuntime.ARFkIk.AimIkControllerToBone
struct UARFkIk_AimIkControllerToBone_Params
{
public:
	class USkeletalMeshComponent*                SkelMeshComp;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                IkController;                                      // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                IkOffset;                                          // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Bone;                                              // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bArms;                                             // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BA3[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x490 (0x490 - 0x0)
// Function ARigRuntime.ARMFunctions.UpdateRig
struct UARMFunctions_UpdateRig_Params
{
public:
	class USkeletalMeshComponent*                SkelMeshComp;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BD4[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FModularRigData                       ModularRigData;                                    // 0x10(0x130)(Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FFaceSettings                         FaceSettings;                                      // 0x140(0x300)(Parm, NativeAccessSpecifierPublic)
	class ASkeletalMeshActor*                    SourceActor;                                       // 0x440(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Rig;                                               // 0x448(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBonesTransforms                      BonesTransforms;                                   // 0x450(0x20)(Parm, OutParm, NativeAccessSpecifierPublic)
	struct FBonesTransforms                      SourceBT;                                          // 0x470(0x20)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x160 (0x160 - 0x0)
// Function ARigRuntime.ARMFunctions.UpdatePoseFromSource
struct UARMFunctions_UpdatePoseFromSource_Params
{
public:
	class ASkeletalMeshActor*                    SourceActor;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                SkelMeshComp;                                      // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModularRigData                       ModularRigData;                                    // 0x10(0x130)(Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FBonesTransforms                      ReturnValue;                                       // 0x140(0x20)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x470 (0x470 - 0x0)
// Function ARigRuntime.ARMFunctions.UpdateModularRig
struct UARMFunctions_UpdateModularRig_Params
{
public:
	class USkeletalMeshComponent*                SkelMeshComp;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C0F[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FModularRigData                       ModularRigData;                                    // 0x10(0x130)(Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FFaceSettings                         FaceSettings;                                      // 0x140(0x300)(Parm, NativeAccessSpecifierPublic)
	class AActor*                                Rig;                                               // 0x440(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBonesTransforms                      ReturnValue;                                       // 0x448(0x20)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	uint8                                        Pad_C12[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x140 (0x140 - 0x0)
// Function ARigRuntime.ARMFunctions.UpdateCurvesFromSource
struct UARMFunctions_UpdateCurvesFromSource_Params
{
public:
	class ASkeletalMeshActor*                    SourceActor;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                SkelMeshComp;                                      // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModularRigData                       ModularRigData;                                    // 0x10(0x130)(Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x440 (0x440 - 0x0)
// Function ARigRuntime.ARMFunctions.PoseRig
struct UARMFunctions_PoseRig_Params
{
public:
	class ASkeletalMeshActor*                    SourceActor;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C21[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FModularRigData                       ModularRigData;                                    // 0x10(0x130)(Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FFaceSettings                         FaceSettings;                                      // 0x140(0x300)(Parm, NativeAccessSpecifierPublic)
};

// 0x440 (0x440 - 0x0)
// Function ARigRuntime.ARMFunctions.KeyRig
struct UARMFunctions_KeyRig_Params
{
public:
	struct FModularRigData                       ModularRigData;                                    // 0x0(0x130)(Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FFaceSettings                         FaceSettings;                                      // 0x130(0x300)(Parm, NativeAccessSpecifierPublic)
	class ULevelSequence*                        LevelSequence;                                     // 0x430(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Time;                                              // 0x438(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C2C[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x260 (0x260 - 0x0)
// Function ARigRuntime.ARMFunctions.InitModularRigData
struct UARMFunctions_InitModularRigData_Params
{
public:
	struct FModularRigData                       ModularRigData;                                    // 0x0(0x130)(Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FModularRigData                       ReturnValue;                                       // 0x130(0x130)(Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x440 (0x440 - 0x0)
// Function ARigRuntime.ARMFunctions.CreateModularRig
struct UARMFunctions_CreateModularRig_Params
{
public:
	class USkeletalMeshComponent*                SkelMeshComp;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Rig;                                               // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModularRigData                       ModularRigData;                                    // 0x10(0x130)(Parm, OutParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FFaceSettings                         FaceSettings;                                      // 0x140(0x300)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ARigRuntime.ARMFunctions.CheckSequencers
struct UARMFunctions_CheckSequencers_Params
{
public:
	TArray<class AActor*>                        Controllers;                                       // 0x0(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C41[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4B0 (0x4B0 - 0x0)
// Function ARigRuntime.ARMFunctions.BakeToAnimAssetInternal
struct UARMFunctions_BakeToAnimAssetInternal_Params
{
public:
	float                                        Time;                                              // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeZero;                                          // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FPS;                                               // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C53[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimSequence*                         NewAnimSequence;                                   // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULevelSequence*                        LevelSequence;                                     // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASkeletalMeshActor*                    SourceActor;                                       // 0x20(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                SkelMeshComp;                                      // 0x28(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Rig;                                               // 0x30(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUpdateSource;                                     // 0x38(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C57[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FModularRigData                       ModularRigData;                                    // 0x40(0x130)(Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FFaceSettings                         FaceSettings;                                      // 0x170(0x300)(Parm, NativeAccessSpecifierPublic)
	struct FBonesTransforms                      BonesTransforms;                                   // 0x470(0x20)(Parm, OutParm, NativeAccessSpecifierPublic)
	struct FBonesTransforms                      SourceBT;                                          // 0x490(0x20)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x4B0 (0x4B0 - 0x0)
// Function ARigRuntime.ARMFunctions.BakeToAnimAsset
struct UARMFunctions_BakeToAnimAsset_Params
{
public:
	class ULevelSequence*                        LevelSequence;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StartFrame;                                        // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EndFrame;                                          // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASkeletalMeshActor*                    SourceActor;                                       // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                SkelMeshComp;                                      // 0x18(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Rig;                                               // 0x20(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUpdateSource;                                     // 0x28(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C73[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FModularRigData                       ModularRigData;                                    // 0x30(0x130)(Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FFaceSettings                         FaceSettings;                                      // 0x160(0x300)(Parm, NativeAccessSpecifierPublic)
	struct FBonesTransforms                      BonesTransforms;                                   // 0x460(0x20)(Parm, OutParm, NativeAccessSpecifierPublic)
	struct FBonesTransforms                      SourceBT;                                          // 0x480(0x20)(Parm, OutParm, NativeAccessSpecifierPublic)
	class UAnimSequence*                         ReturnValue;                                       // 0x4A0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C79[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4A0 (0x4A0 - 0x0)
// Function ARigRuntime.ARMFunctions.BakeFromSequencer
struct UARMFunctions_BakeFromSequencer_Params
{
public:
	class ULevelSequence*                        LevelSequence;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StartFrame;                                        // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EndFrame;                                          // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASkeletalMeshActor*                    SourceActor;                                       // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                SkelMeshComp;                                      // 0x18(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Rig;                                               // 0x20(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C8D[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FModularRigData                       ModularRigData;                                    // 0x30(0x130)(Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FFaceSettings                         FaceSettings;                                      // 0x160(0x300)(Parm, NativeAccessSpecifierPublic)
	struct FBonesTransforms                      BonesTransforms;                                   // 0x460(0x20)(Parm, OutParm, NativeAccessSpecifierPublic)
	struct FBonesTransforms                      SourceBT;                                          // 0x480(0x20)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ARigRuntime.RigModular.PostBakeToAnim
struct ARigModular_PostBakeToAnim_Params
{
public:
	class ULevelSequence*                        LevelSequence;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StartFrame;                                        // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EndFrame;                                          // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         NewAnimSequence;                                   // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ARigRuntime.RigModular.PostBakeFromSequencer
struct ARigModular_PostBakeFromSequencer_Params
{
public:
	class ULevelSequence*                        LevelSequence;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StartFrame;                                        // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EndFrame;                                          // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function ARigRuntime.ARSplineIk.UpdateSplineIkRigs
struct UARSplineIk_UpdateSplineIkRigs_Params
{
public:
	TArray<struct FSplineIkData>                 SplineIkRigs;                                      // 0x0(0x10)(Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FVector                               CharScale;                                         // 0x10(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CD9[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBonesTransforms                      BonesTransforms;                                   // 0x20(0x20)(Parm, NativeAccessSpecifierPublic)
	struct FBonesTransforms                      ReturnValue;                                       // 0x40(0x20)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0xD0 (0xD0 - 0x0)
// Function ARigRuntime.ARSplineIk.SolveSplinePoints
struct UARSplineIk_SolveSplinePoints_Params
{
public:
	class USplineComponent*                      SplineComponent;                                   // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CE0[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Root;                                              // 0x10(0x30)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            Mid;                                               // 0x40(0x30)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            Tip;                                               // 0x70(0x30)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Curvature;                                         // 0xA0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSolveEnds;                                        // 0xA4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CE1[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAimSettings                          AimSettings;                                       // 0xA8(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               CharScale;                                         // 0xB8(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CE3[0xC];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x160 (0x160 - 0x0)
// Function ARigRuntime.ARSplineIk.SolveSplineIkComponent
struct UARSplineIk_SolveSplineIkComponent_Params
{
public:
	struct FSplineIkData                         SplineIkData;                                      // 0x0(0x150)(Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FVector                               CharScale;                                         // 0x150(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CE7[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x190 (0x190 - 0x0)
// Function ARigRuntime.ARSplineIk.SolveSplineIkBones
struct UARSplineIk_SolveSplineIkBones_Params
{
public:
	struct FSplineIkData                         SplineIkData;                                      // 0x0(0x150)(Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FBonesTransforms                      BonesTransforms;                                   // 0x150(0x20)(Parm, NativeAccessSpecifierPublic)
	struct FBonesTransforms                      ReturnValue;                                       // 0x170(0x20)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0xE0 (0xE0 - 0x0)
// Function ARigRuntime.ARSplineIk.SolveMidSplineIkCtrl
struct UARSplineIk_SolveMidSplineIkCtrl_Params
{
public:
	class AActor*                                Start;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Mid;                                               // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                End;                                               // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                MidGrp;                                            // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                EndGrp;                                            // 0x20(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CF9[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            OffsetA;                                           // 0x30(0x30)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            OffsetB;                                           // 0x60(0x30)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            OffsetUp;                                          // 0x90(0x30)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FAimSettings                          AimSettings;                                       // 0xC0(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	float                                        MidParent;                                         // 0xD0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MidLerp;                                           // 0xD4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         FkIk;                                              // 0xD8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CFD[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function ARigRuntime.ARSplineIk.PoseSplineIkRigs
struct UARSplineIk_PoseSplineIkRigs_Params
{
public:
	class USkeletalMeshComponent*                SkelMeshComp;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSplineIkData>                 SplineIkRigs;                                      // 0x8(0x10)(Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ARigRuntime.ARSplineIk.ParentSplineIkRigs
struct UARSplineIk_ParentSplineIkRigs_Params
{
public:
	TArray<struct FSplineIkData>                 SpIkRigs;                                          // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class AActor*                                Rig;                                               // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ARigRuntime.ARSplineIk.KeySplineIkRigs
struct UARSplineIk_KeySplineIkRigs_Params
{
public:
	TArray<struct FSplineIkData>                 SplineIkRigs;                                      // 0x0(0x10)(Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class ULevelSequence*                        LevelSequence;                                     // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Time;                                              // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D19[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x170 (0x170 - 0x0)
// Function ARigRuntime.ARSplineIk.GetSplineIkBoneOffsets
struct UARSplineIk_GetSplineIkBoneOffsets_Params
{
public:
	class USkeletalMeshComponent*                SkelMeshComp;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D24[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSplineIkData                         SpIk;                                              // 0x10(0x150)(Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                    ReturnValue;                                       // 0x160(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function ARigRuntime.ARSplineIk.GetPosOnSpline
struct UARSplineIk_GetPosOnSpline_Params
{
public:
	class USplineComponent*                      SplineComponent;                                   // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PosCount;                                          // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAimSettings                          AimSettings;                                       // 0x10(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            ReturnValue;                                       // 0x20(0x30)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function ARigRuntime.ARSplineIk.CreateSplineIkRigs
struct UARSplineIk_CreateSplineIkRigs_Params
{
public:
	class USkeletalMeshComponent*                SkelMeshComp;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Rig;                                               // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSplineIkData>                 SpIkRigs;                                          // 0x10(0x10)(Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<struct FSplineIkData>                 ReturnValue;                                       // 0x20(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x160 (0x160 - 0x0)
// Function ARigRuntime.ARSplineIk.CreateSplineIkControllers
struct UARSplineIk_CreateSplineIkControllers_Params
{
public:
	class USkeletalMeshComponent*                SkelMeshComp;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Rig;                                               // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSplineIkData                         SpIk;                                              // 0x10(0x150)(Parm, OutParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

}
}


