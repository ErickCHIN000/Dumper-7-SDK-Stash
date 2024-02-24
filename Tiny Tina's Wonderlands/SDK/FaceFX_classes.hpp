#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class FaceFX.FaceFXAsset
class UFaceFXAsset : public UObject
{
public:

	static class UClass* StaticClass();
	static class UFaceFXAsset* GetDefaultObj();

};

// 0x28 (0x50 - 0x28)
// Class FaceFX.FaceFXActor
class UFaceFXActor : public UFaceFXAsset
{
public:
	TArray<struct FFaceFXActorData>              PlatformData;                                      // 0x28(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPrivate)
	TArray<class UFaceFXAnim*>                   Animations;                                        // 0x38(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPrivate)
	bool                                         bHasBonesFromMultipleSkeletons;                    // 0x48(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F1[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFaceFXActor* GetDefaultObj();

};

// 0x38 (0x60 - 0x28)
// Class FaceFX.FaceFXAnim
class UFaceFXAnim : public UFaceFXAsset
{
public:
	TArray<struct FFaceFXAnimData>               PlatformData;                                      // 0x28(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPrivate)
	struct FFaceFXAnimId                         ID;                                                // 0x38(0x10)(Edit, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPrivate)
	struct FFaceFXAudioAsset                     Audio;                                             // 0x48(0x18)(Edit, DisableEditOnTemplate, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFaceFXAnim* GetDefaultObj();

};

// 0x58 (0x138 - 0xE0)
// Class FaceFX.FaceFXAnimationSection
class UFaceFXAnimationSection : public UMovieSceneSection
{
public:
	struct FFaceFXSkelMeshComponentId            SkelMeshComponentId;                               // 0xE0(0x10)(Edit, NoDestructor, NativeAccessSpecifierPrivate)
	struct FFaceFXAnimId                         AnimationId;                                       // 0xF0(0x10)(Edit, NoDestructor, NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class UFaceFXAnim>            Animation;                                         // 0x100(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        StartOffset;                                       // 0x128(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        EndOffset;                                         // 0x12C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bIsAnimationDurationLoaded : 1;                    // Mask: 0x1, PropSize: 0x10x130(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_13 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1FE[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AnimationDuration;                                 // 0x134(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFaceFXAnimationSection* GetDefaultObj();

};

// 0x10 (0x68 - 0x58)
// Class FaceFX.FaceFXAnimationTrack
class UFaceFXAnimationTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>            AnimationSections;                                 // 0x58(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFaceFXAnimationTrack* GetDefaultObj();

};

// 0x10 (0x40 - 0x30)
// Class FaceFX.FaceFXAnimSet
class UFaceFXAnimSet : public UDataAsset
{
public:
	struct FGbxFaceFXAnimSetData                 FaceFXAnimSetData;                                 // 0x30(0x10)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFaceFXAnimSet* GetDefaultObj();

};

// 0x28 (0x1A0 - 0x178)
// Class FaceFX.FaceFXAudioComponent
class UFaceFXAudioComponent : public UActorComponent
{
public:
	TWeakObjectPtr<class UWwiseAudioComponent>   WwiseAudioComponent;                               // 0x178(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_20F[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFaceFXAudioComponent* GetDefaultObj();

};

// 0x158 (0x180 - 0x28)
// Class FaceFX.FaceFXCharacter
class UFaceFXCharacter : public UObject
{
public:
	uint8                                        Pad_219[0x68];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFaceFXActor*                          FaceFXActor;                                       // 0x90(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFaceFXAudioComponent*                 AudioComponent;                                    // 0x98(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_21F[0x98];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFaceFXAnim*                           CurrentAnim;                                       // 0x138(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_222[0x30];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFaceFXAnimSet*                        CurrentAnimSet;                                    // 0x170(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_223[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFaceFXCharacter* GetDefaultObj();

};

// 0x40 (0x1B8 - 0x178)
// Class FaceFX.FaceFXComponent
class UFaceFXComponent : public UActorComponent
{
public:
	UMulticastDelegateProperty_                  OnPlaybackAudioStart;                              // 0x178(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPlaybackStopped;                                 // 0x188(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<struct FFaceFXEntry>                  Entries;                                           // 0x198(0x10)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_35C[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFaceFXComponent* GetDefaultObj();

	void StopAll();
	bool Stop(class USkeletalMeshComponent* SkelMeshComp, class UObject* Caller);
	bool Setup(class USkeletalMeshComponent* SkelMeshComp, class UFaceFXAudioComponent* AudioComponent, class UFaceFXActor* Asset, bool IsAutoPlaySound, bool IsDisableMorphTargets, class UObject* Caller);
	bool Resume(class USkeletalMeshComponent* SkelMeshComp, class UObject* Caller);
	bool PlayById(class FName Group, class FName AnimName, class USkeletalMeshComponent* SkelMeshComp, bool Loop, class UObject* Caller);
	bool Play(class UFaceFXAnim* Animation, class USkeletalMeshComponent* SkelMeshComp, bool Loop, class UObject* Caller);
	bool Pause(class USkeletalMeshComponent* SkelMeshComp, class UObject* Caller);
	void OnCharacterPlaybackStopped(class UFaceFXCharacter* Character, struct FFaceFXAnimId& AnimId);
	void OnCharacterAudioStart(class UFaceFXCharacter* Character, struct FFaceFXAnimId& AnimId, bool IsAudioStarted, class UFaceFXAudioComponent* AudioComponentStartedOn);
	bool JumpToById(float Position, bool Pause, class FName Group, class FName AnimName, bool LoopAnimation, class USkeletalMeshComponent* SkelMeshComp, class UObject* Caller);
	bool JumpTo(float Position, bool Pause, class UFaceFXAnim* Animation, bool LoopAnimation, class USkeletalMeshComponent* SkelMeshComp, class UObject* Caller);
	bool IsPlayingAnimation(struct FFaceFXAnimId& AnimId, class USkeletalMeshComponent* SkelMeshComp, class UObject* Caller);
	bool IsPlaying(class USkeletalMeshComponent* SkelMeshComp, class UObject* Caller);
	bool IsPaused(class USkeletalMeshComponent* SkelMeshComp, class UObject* Caller);
	float GetFaceFXBlendWeight(class USkeletalMeshComponent* SkeletalMeshComponent, float DeltaTime, float BlendTime);
};

// 0x10 (0x80 - 0x70)
// Class FaceFX.FaceFXMatineeControl
class UFaceFXMatineeControl : public UInterpTrack
{
public:
	TArray<struct FFaceFXTrackKey>               Keys;                                              // 0x70(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFaceFXMatineeControl* GetDefaultObj();

};

// 0x58 (0x80 - 0x28)
// Class FaceFX.FaceFXMatineeControlInst
class UFaceFXMatineeControlInst : public UInterpTrackInst
{
public:
	float                                        LastUpdatePosition;                                // 0x28(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38A[0x54];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFaceFXMatineeControlInst* GetDefaultObj();

};

// 0x50 (0x78 - 0x28)
// Class FaceFX.FaceFXSettings
class UFaceFXSettings : public UObject
{
public:
	TMap<class FString, struct FFaceFXLocalizationData> FaceFXLocalizationEquivalents;                     // 0x28(0x50)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFaceFXSettings* GetDefaultObj();

};

// 0x50 (0x78 - 0x28)
// Class FaceFX.FaceFXEditorSettings
class UFaceFXEditorSettings : public UObject
{
public:
	TMap<class FString, struct FFaceFXDLCPathSettings> FaceFXDLCSettings;                                 // 0x28(0x50)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFaceFXEditorSettings* GetDefaultObj();

};

}


