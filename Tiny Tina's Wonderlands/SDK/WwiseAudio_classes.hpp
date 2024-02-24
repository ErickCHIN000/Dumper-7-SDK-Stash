#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class WwiseAudio.AudioParametersProviderInterface
class IAudioParametersProviderInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IAudioParametersProviderInterface* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class WwiseAudio.AudioPositioningProviderInterface
class IAudioPositioningProviderInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IAudioPositioningProviderInterface* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class WwiseAudio.InterpTrackInstWwiseAudioEvent
class UInterpTrackInstWwiseAudioEvent : public UInterpTrackInst
{
public:
	float                                        LastUpdatePosition;                                // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17A[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInterpTrackInstWwiseAudioEvent* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class WwiseAudio.InterpTrackInstWwiseAudioRTPC
class UInterpTrackInstWwiseAudioRTPC : public UInterpTrackInst
{
public:
	float                                        LastUpdatePosition;                                // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_182[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInterpTrackInstWwiseAudioRTPC* GetDefaultObj();

};

// 0x18 (0xA8 - 0x90)
// Class WwiseAudio.InterpTrackWwiseAudioEvent
class UInterpTrackWwiseAudioEvent : public UInterpTrackVectorBase
{
public:
	TArray<struct FWwiseAudioEventTrackKey>      Events;                                            // 0x90(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        bContinueEventOnMatineeEnd : 1;                    // Mask: 0x1, PropSize: 0x10xA0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_189[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInterpTrackWwiseAudioEvent* GetDefaultObj();

};

// 0x10 (0xA0 - 0x90)
// Class WwiseAudio.InterpTrackWwiseAudioRTPC
class UInterpTrackWwiseAudioRTPC : public UInterpTrackFloatBase
{
public:
	class UWwiseRtpc*                            RTPC;                                              // 0x90(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bPlayOnReverse : 1;                                // Mask: 0x1, PropSize: 0x10x98(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bContinueRTPCOnMatineeEnd : 1;                     // Mask: 0x2, PropSize: 0x10x98(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_196[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInterpTrackWwiseAudioRTPC* GetDefaultObj();

};

// 0x18 (0x70 - 0x58)
// Class WwiseAudio.MovieSceneWwiseTrack
class UMovieSceneWwiseTrack : public UMovieSceneNameableTrack
{
public:
	bool                                         bAllowRename;                                      // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMovieSceneSection*>            WwiseSections;                                     // 0x60(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMovieSceneWwiseTrack* GetDefaultObj();

};

// 0x38 (0x118 - 0xE0)
// Class WwiseAudio.MovieSceneWwiseEventSection
class UMovieSceneWwiseEventSection : public UMovieSceneSection
{
public:
	enum class EWwiseTrackDirectionality         PlaybackDirection;                                 // 0xE0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AB[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWwiseEvent*                           WwiseEventStart;                                   // 0xE8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseEvent*                           WwiseEventStop;                                    // 0xF0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EmitterRadius;                                     // 0xF8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowPlaythrough;                                 // 0xFC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsLoopingEvent;                                   // 0xFD(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B1[0x1A];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneWwiseEventSection* GetDefaultObj();

};

// 0xE0 (0x538 - 0x458)
// Class WwiseAudio.WwiseAmbientSound
class AWwiseAmbientSound : public AActor
{
public:
	uint8                                        Pad_1D1[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWwiseAudioComponent*                  AkComponent;                                       // 0x460(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseEvent*                           WwiseEvent;                                        // 0x468(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStartAutomatically;                               // 0x470(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D7[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AWwiseAmbientSound*>            ChildEmitters;                                     // 0x478(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class AWwiseAmbientSound*>            SuppressEmitters;                                  // 0x488(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bOnlyEmitWhenContainingListener;                   // 0x498(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOrientToPlayer;                                   // 0x499(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D9[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        VolumetricEmitterRadius;                           // 0x49C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VolumetricEmitterGain;                             // 0x4A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DB[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWwiseRtpc*                            VolumetricAttenuationRTPC;                         // 0x4A8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VolumetricAttenuationMaxDistance;                  // 0x4B0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DC[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AWwiseAmbientSound*>            ExternalActiveRTPCAttenuationPortals;              // 0x4B8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class AWwiseAmbientSound*>            ActiveSuppressors;                                 // 0x4C8(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TSet<class AWwiseAmbientSound*>              SuppressorPortals;                                 // 0x4D8(0x50)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E0[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AWwiseAmbientSound* GetDefaultObj();

	void ToggleAmbientSound();
	void StopAmbientSound();
	void StartAmbientSound();
	struct FVector GetAudioEmitterLocation(struct FVector& ListenerLocation);
};

// 0x20 (0x48 - 0x28)
// Class WwiseAudio.WwiseAssetSyncDestination
class UWwiseAssetSyncDestination : public UObject
{
public:
	struct FGuid                                 WwiseObjectID;                                     // 0x28(0x10)(Edit, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SyncPath;                                          // 0x38(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UWwiseAssetSyncDestination* GetDefaultObj();

};

// 0x0 (0x2D0 - 0x2D0)
// Class WwiseAudio.WwiseGameObjectComponent
class UWwiseGameObjectComponent : public USceneComponent
{
public:

	static class UClass* StaticClass();
	static class UWwiseGameObjectComponent* GetDefaultObj();

};

// 0x170 (0x440 - 0x2D0)
// Class WwiseAudio.WwiseAudioComponent
class UWwiseAudioComponent : public UWwiseGameObjectComponent
{
public:
	class UWwiseEvent*                           OnAttachEvent;                                     // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseEvent*                           OptionalBodySwitchStopEvent;                       // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWwiseAudioComponentType          WwiseComponentType;                                // 0x2E0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2FD[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        EmitterGain;                                       // 0x2E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FWwiseLocationOverride>        OverrideLocations;                                 // 0x2E8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	bool                                         bOverrideLocationsAreRelative;                     // 0x2F8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_305[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IAudioParametersProviderInterface> AudioParametersProvider;                           // 0x300(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	enum class EWwiseAudioComponentMixBehavior   WwiseMixBehavior;                                  // 0x310(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAcousticsMode                    AcousticsMode;                                     // 0x311(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_30B[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ReverbBoost;                                       // 0x314(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	UMulticastDelegateProperty_                  OnStartedNewAudio;                                 // 0x318(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnMusicPlayStarted;                                // 0x328(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnMusicBeat;                                       // 0x338(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnMusicSyncPoint;                                  // 0x348(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnRtpcSync;                                        // 0x358(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPlaybackEnded;                                   // 0x368(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_311[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IAudioPositioningProviderInterface> PositioningProvider;                               // 0x380(0x10)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	struct FVector                               PreviousRotationVector;                            // 0x390(0xC)(Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_314[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<uint32, float>                          RtpcCallbackValues;                                // 0x3A0(0x50)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_316[0x40];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EWwiseMultiPositionType           MultiPositionType;                                 // 0x430(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_317[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UWwiseAudioComponent* GetDefaultObj();

	void StopManagedLoop(class UWwiseEvent* OptionalStopEvent);
	void StopAll();
	void StartManagedLoop(class UWwiseEvent* NewLoopEvent);
	void SetSwitch(class UWwiseSwitch* WwiseSwitch);
	void SetRTPCValue(class UWwiseRtpc* GameParameter, float Value, float ValueChangeDuration, enum class EWwiseCurveInterpolation FadeCurve);
	void SetEmitterLocations(TArray<struct FWwiseLocationOverride>& NewLocations, enum class EWwiseMultiPositionType MultiPositionType, bool bLocationsAreRelative);
	void ScaleToRadius(float Radius);
	void ScaleAttenuation(float ScalingFactor);
	void RegisterRtpcValueCallback(const TArray<class UWwiseRtpc*>& CallbackRtpcs);
	struct FWwisePlaybackInstance PostWwiseEvent(class UWwiseEvent* WwiseEvent, int32 Flags);
	void PostTrigger(class UWwiseTrigger* Trigger);
	void MakeMidiNote(int32 NoteNum, int32 Velocity, int32 Channel, float Duration, float StartTime, class UWwiseEvent* AssociatedEvent);
	void Jettison();
	bool IsPossiblyAudible(class UWwiseEvent* WwiseEvent, float EventAttenuationScale);
	bool IsPlaying();
	float GetRtpcValue(class UWwiseRtpc* RTPC);
	float GetRadius();
	TArray<struct FWwisePlaybackInstance> GetPlayingInstances();
	float GetMaxAttenuationRadius();
};

// 0x18 (0x190 - 0x178)
// Class WwiseAudio.WwiseWorldComponentPool
class UWwiseWorldComponentPool : public UActorComponent
{
public:
	int32                                        DesiredPoolSize;                                   // 0x178(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        CurrentPoolSize;                                   // 0x17C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UWwiseAudioComponent*>          PooledComponents;                                  // 0x180(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UWwiseWorldComponentPool* GetDefaultObj();

};

// 0x28 (0x1A0 - 0x178)
// Class WwiseAudio.WwiseAudioComponentPool
class UWwiseAudioComponentPool : public UActorComponent
{
public:
	int32                                        MaxPoolSize;                                       // 0x178(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWwiseAudioComponentPoolMode      PoolMode;                                          // 0x17C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRecycleComponents;                                // 0x17D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_372[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UWwiseAudioComponent*>          ReservedComponents;                                // 0x180(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class UWwiseAudioComponent*>          ActiveComponents;                                  // 0x190(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UWwiseAudioComponentPool* GetDefaultObj();

	class UWwiseAudioComponent* GetPooledComponent();
};

// 0x8 (0x30 - 0x28)
// Class WwiseAudio.WwiseObject
class UWwiseObject : public UObject
{
public:
	uint32                                       ShortID;                                           // 0x28(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_390[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UWwiseObject* GetDefaultObj();

};

// 0x90 (0xC0 - 0x30)
// Class WwiseAudio.WwiseEvent
class UWwiseEvent : public UWwiseObject
{
public:
	class UWwiseBank*                            RequiredBank;                                      // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxAttenuationRadius;                              // 0x38(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEcho;                                             // 0x3C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AF[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ClosedCaptionName;                                 // 0x40(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFloatInterval                        DurationRange;                                     // 0x48(0x8)(Edit, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UWwiseSwitch*>                  ActionSetSwitches;                                 // 0x50(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        bOneShot : 1;                                      // Mask: 0x1, PropSize: 0x10x60(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSimple : 1;                                       // Mask: 0x2, PropSize: 0x10x60(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bHighImportance : 1;                               // Mask: 0x4, PropSize: 0x10x60(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bLocalizedVoice : 1;                               // Mask: 0x8, PropSize: 0x10x60(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUsesSpeedParameter : 1;                           // Mask: 0x10, PropSize: 0x10x60(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUsesApproachSpeedParameter : 1;                   // Mask: 0x20, PropSize: 0x10x60(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUsesRotationalSpeedParameter : 1;                 // Mask: 0x40, PropSize: 0x10x60(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUsesComponentRelativeSpeedParameter : 1;          // Mask: 0x80, PropSize: 0x10x60(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUsesPhysicalMaterialSwitch : 1;                   // Mask: 0x1, PropSize: 0x10x61(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSupportsLiveVoice : 1;                            // Mask: 0x2, PropSize: 0x10x61(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSupportsEchoVoice : 1;                            // Mask: 0x4, PropSize: 0x10x61(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEchoWasForcedOff : 1;                             // Mask: 0x8, PropSize: 0x10x61(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUsesPerspectiveParameter : 1;                     // Mask: 0x10, PropSize: 0x10x61(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_19 : 3;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3CB[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PrepareEventRefCount;                              // 0x64(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bPrepareEventDidLoadAllGameSyncs;                  // 0x68(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3CF[0x57];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UWwiseEvent* GetDefaultObj();

	float GetMaxDuration();
};

// 0x90 (0x150 - 0xC0)
// Class WwiseAudio.WwiseAudioInputEvent
class UWwiseAudioInputEvent : public UWwiseEvent
{
public:
	uint8                                        Pad_3E6[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWwiseEvent*                           BaseWwiseEvent;                                    // 0xD0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OverflowProtectionLimitInFrames;                   // 0xD8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E8[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint64                                       ConnectedSourceID;                                 // 0xE0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FWwisePlaybackInstance>        PlayingInstances;                                  // 0xE8(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3ED[0x58];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UWwiseAudioInputEvent* GetDefaultObj();

};

// 0x8 (0x38 - 0x30)
// Class WwiseAudio.WwiseAuxBus
class UWwiseAuxBus : public UWwiseObject
{
public:
	class UWwiseBank*                            RequiredBank;                                      // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UWwiseAuxBus* GetDefaultObj();

};

// 0x28 (0x58 - 0x30)
// Class WwiseAudio.WwiseBank
class UWwiseBank : public UWwiseObject
{
public:
	bool                                         bAutoLoad;                                         // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_402[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UWwiseBank*>                    MediaSourceBanks;                                  // 0x38(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint16                                       IncludedEventCount;                                // 0x48(0x2)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUsesPrepareEvent;                                 // 0x4A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoPrepareEvents;                                // 0x4B(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40A[0xC];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UWwiseBank* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class WwiseAudio.WwiseAudioEffect
class UWwiseAudioEffect : public UObject
{
public:
	class UWwiseAuxBus*                          AuxBus;                                            // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EffectStrengh;                                     // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_44A[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UWwiseAudioEffect* GetDefaultObj();

	void DeactivateEffect();
	void ActivateEffect();
};

// 0x18 (0x50 - 0x38)
// Class WwiseAudio.WwiseListenerEnvironmentalEffect
class UWwiseListenerEnvironmentalEffect : public UWwiseAudioEffect
{
public:
	uint8                                        Pad_455[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UWwiseListenerEnvironmentalEffect* GetDefaultObj();

};

// 0x28 (0x60 - 0x38)
// Class WwiseAudio.WwiseZoneAudioEffect
class UWwiseZoneAudioEffect : public UWwiseAudioEffect
{
public:
	uint8                                        Pad_460[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               EffectLocation;                                    // 0x48(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EffectSize;                                        // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EffectFadeDistance;                                // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_461[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UWwiseZoneAudioEffect* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class WwiseAudio.WwiseEffectProviderInterface
class IWwiseEffectProviderInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IWwiseEffectProviderInterface* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class WwiseAudio.WwiseEnvironmentalEffectProvider
class IWwiseEnvironmentalEffectProvider : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IWwiseEnvironmentalEffectProvider* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class WwiseAudio.WwiseExternalSourcesEditorData
class UWwiseExternalSourcesEditorData : public UDataAsset
{
public:

	static class UClass* StaticClass();
	static class UWwiseExternalSourcesEditorData* GetDefaultObj();

};

// 0x50 (0x80 - 0x30)
// Class WwiseAudio.WwiseExternalSourceDebugData
class UWwiseExternalSourceDebugData : public UDataAsset
{
public:
	TMap<uint32, class FString>                  UniqueIdToFilename;                                // 0x30(0x50)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UWwiseExternalSourceDebugData* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class WwiseAudio.WwiseGameplayStatics
class UWwiseGameplayStatics : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UWwiseGameplayStatics* GetDefaultObj();

	void WaitForAudioPlayback(const struct FWwisePlaybackInstance& PlaybackInstance, const struct FLatentActionInfo& LatentInfo);
	void WaitForAudioInputConnection(class UObject* WorldContextObject, class UWwiseAudioInputEvent* AudioInputEvent, const struct FLatentActionInfo& LatentInfo, float MaxWaitTime);
	void UnloadBank(class UWwiseBank* bank);
	void StopProfilerCapture();
	void StopOutputCapture();
	void StopAudio(const struct FWwisePlaybackInstance& PlaybackInstance, float TransitionDuration, enum class EWwiseCurveInterpolation FadeCurve);
	void StartProfilerCapture(const class FString& Filename);
	void StartOutputCapture(const class FString& Filename);
	class UWwiseAudioComponent* SpawnWwiseComponentAtLocation(class UObject* WorldContextObject, const struct FVector& Location, float EmitterRadius, const struct FRotator& Orientation, bool IsTemporaryComponent);
	class UWwiseAudioComponent* SpawnAttachedWwiseComponent(class AActor* Actor, class FName SocketName, bool IsTemporaryComponent, class USceneComponent* AttachmentComponent);
	void SetGlobalState(class UWwiseState* State);
	void SetGlobalRTPCValue(class UWwiseRtpc* GameParameter, float Value, float TransitionDuration, enum class EWwiseCurveInterpolation FadeCurve);
	void SetAudioPlaybackPosition(const struct FWwisePlaybackInstance& PlaybackInstance, float PlaybackPosition);
	void ResumeAudio(const struct FWwisePlaybackInstance& PlaybackInstance, float TransitionDuration, enum class EWwiseCurveInterpolation FadeCurve);
	struct FWwisePlaybackInstance PostEventAtMultipleLocations(class UObject* WorldContextObject, class UWwiseEvent* WwiseEvent, TArray<struct FWwiseLocationOverride>& NewLocations, enum class EWwiseMultiPositionType MultiPositionType);
	struct FWwisePlaybackInstance PostEventAtLocation(class UObject* WorldContextObject, class UWwiseEvent* WwiseEvent, const struct FVector& Location, float EmitterRadius, const struct FRotator& Orientation);
	struct FWwisePlaybackInstance PostAttachedEvent(class UWwiseEvent* WwiseEvent, class AActor* AttachToActor, class USceneComponent* AttachToComponent, class FName SocketName, float EmitterRadius);
	void PauseAudio(const struct FWwisePlaybackInstance& PlaybackInstance, float TransitionDuration, enum class EWwiseCurveInterpolation FadeCurve);
	void LoadBank(class UWwiseBank* bank);
	bool IsPossiblyAudible(class UObject* WorldContextObject, class UWwiseEvent* InWwiseEvent, const struct FVector& Location, float AttenuationScale, float EmitterRadius);
	bool IsAudioPlaying(struct FWwisePlaybackInstance& PlaybackInstance);
	bool IsAudioPaused(struct FWwisePlaybackInstance& PlaybackInstance);
	void GetWwiseBankEfficiencyReport(TArray<struct FWwiseBankEfficiencyReportDatum>* ReportData);
	class UWwiseEvent* GetPlayingEvent(struct FWwisePlaybackInstance& PlaybackInstance);
	float GetEstimatedAudioDuration(struct FWwisePlaybackInstance& PlaybackInstance);
	class UWwiseAudioComponent* GetDefaultWwiseComponent(class AActor* Actor, bool bCreateIfNotFound);
	void GetClosestListenerLocation(class UObject* WorldContextObject, const struct FVector& TestPosition, struct FVector* ClosestLocation, bool* bSuccess);
	float GetAudioPlaybackPosition(struct FWwisePlaybackInstance& PlaybackInstance, bool bExtrapolateSubFrameTime);
	class UWwiseAudioComponent* GetAudioComponentFromPlaybackInstance(struct FWwisePlaybackInstance& PlaybackInstance, bool bCreateIfNotFound);
	void ExecuteActionOnAudioInstance(const struct FWwisePlaybackInstance& PlaybackInstance, enum class EWwiseEventAction Action, float TransitionDuration, enum class EWwiseCurveInterpolation FadeCurve);
	class UWwiseZoneAudioEffect* CreateZoneAudioEffect(class UObject* WorldContextObject, class UWwiseAuxBus* AuxBus, const struct FVector& EffectLocation, float EffectSize, float EffectAttenuationDistance);
	class UWwiseListenerEnvironmentalEffect* CreateListenerAudioEffect(class UWwiseAuxBus* AuxBus, class AActor* TargetActor, float WetAmount);
	class UWwiseAudioEffect* CreateAudioEffect(class UWwiseAuxBus* AuxBus, enum class EWwiseEffectType EffectType, float WetAmount, class AActor* TargetActor);
	TArray<struct FWwiseLocationOverride> ConvertLocationsToWwiseLocationOverrides(TArray<struct FVector>& Locations, const struct FRotator& Orientation, float Gain, float Radius);
	void AddOutputCaptureMarker(const class FString& MarkerText);
};

// 0x0 (0x28 - 0x28)
// Class WwiseAudio.WwiseImplementerInterface
class IWwiseImplementerInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IWwiseImplementerInterface* GetDefaultObj();

};

// 0x40 (0x310 - 0x2D0)
// Class WwiseAudio.WwiseListenerComponent
class UWwiseListenerComponent : public UWwiseGameObjectComponent
{
public:
	uint8                                        Pad_71E[0x40];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UWwiseListenerComponent* GetDefaultObj();

	void SetBusRTPCValue(class UWwiseRtpc* GameParameter, float Value, float ValueChangeDuration, enum class EWwiseCurveInterpolation FadeCurve);
	class UWwiseListenerComponent* FindAssociatedListener(class AActor* TargetActor);
	void ConfigureListener(class UWwiseEvent* WwiseEvent);
};

// 0x40 (0x70 - 0x30)
// Class WwiseAudio.WwiseMediaAudioSinkProvider
class UWwiseMediaAudioSinkProvider : public UDataAsset
{
public:
	uint8                                        Pad_72B[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWwiseAudioInputEvent*                 AudioInputPlayEvent;                               // 0x38(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoPlayOnLocalPlayer;                            // 0x40(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_72E[0x2F];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UWwiseMediaAudioSinkProvider* GetDefaultObj();

};

// 0x10 (0x40 - 0x30)
// Class WwiseAudio.WwiseRtpc
class UWwiseRtpc : public UWwiseObject
{
public:
	struct FFloatInterval                        ValueRange;                                        // 0x30(0x8)(Edit, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefaultValue;                                      // 0x38(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_739[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UWwiseRtpc* GetDefaultObj();

};

// 0x220 (0x248 - 0x28)
// Class WwiseAudio.WwiseSettings
class UWwiseSettings : public UObject
{
public:
	struct FDirectoryPath                        WwiseWindowsInstallationPath;                      // 0x28(0x10)(Edit, Config, NativeAccessSpecifierPublic)
	struct FFilePath                             WwiseMacInstallationPath;                          // 0x38(0x10)(Edit, Config, NativeAccessSpecifierPublic)
	struct FFilePath                             WwiseProjectPath;                                  // 0x48(0x10)(Edit, Config, NativeAccessSpecifierPublic)
	TMap<class FString, class FString>           WwiseLocalizationEquivalents;                      // 0x58(0x50)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TMap<class FString, uint32>                  LocalizedAudioChunks;                              // 0xA8(0x50)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TMap<class FString, float>                   WwiseLocalizationGainAdjustments;                  // 0xF8(0x50)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                       LanguageVolumeRtpc;                                // 0x148(0x18)(Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                       ExternalSourcesDebugData;                          // 0x160(0x18)(Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseExternalSourceDebugData*         PExternalSourcesDebugData;                         // 0x178(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        WorldPoolSize;                                     // 0x180(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWwisePlaybackConfiguration       DefaultPlaybackConfiguration;                      // 0x184(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                DefaultSpeakerAngles;                              // 0x188(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	class FString                                PlaybackConfigurationRtpcName;                     // 0x198(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinVolumeForCaptionDB;                             // 0x1A8(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       MaxMemoryPoolsEditor;                              // 0x1AC(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       MaxMemoryPoolsCooked;                              // 0x1B0(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StreamManagerPoolSizeMB;                           // 0x1B4(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        IOMemoryPoolSizeMB;                                // 0x1B8(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       IODeviceGranularityB;                              // 0x1BC(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableStreamCache;                                // 0x1C0(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_757[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DefaultPoolSizeEditorMB;                           // 0x1C4(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefaultPoolSizeCookedMB;                           // 0x1C8(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LowerEngineDefaultPoolSizeMB;                      // 0x1CC(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MonitorPoolSizeMB;                                 // 0x1D0(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MonitorQueuePoolSizeMB;                            // 0x1D4(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PrepareEventPoolSizeMB;                            // 0x1D8(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PrepareEventPoolSizeEditorMB;                      // 0x1DC(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefaultPoolLowMemoryModeThreshold;                 // 0x1E0(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LowerEnginePoolLowMemoryModeThreshold;             // 0x1E4(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableHardwareXMADecoding;                        // 0x1E8(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_760[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        APUCachedHeapSizeMB;                               // 0x1EC(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        APUNoncachedHeapSizeMB;                            // 0x1F0(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       MaxHardwareAcceleratedXMAVoices;                   // 0x1F4(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PossiblyAudibleDetailModeScale[0x3];               // 0x1F8(0xC)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FoleyHighDetailModeScale[0x3];                     // 0x204(0xC)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_767[0x38];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UWwiseSettings* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class WwiseAudio.WwiseUserSettings
class UWwiseUserSettings : public UObject
{
public:
	enum class EWwiseAudioComponentSpriteSize    SpriteSize;                                        // 0x28(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowWwiseAudioComponents;                         // 0x29(0x1)(Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_777[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint32                                       WwiseDebugFlags;                                   // 0x2C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                ActiveComponentColor;                              // 0x30(0x4)(Edit, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                HibernatingComponentColor;                         // 0x34(0x4)(Edit, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                ComponentHighlightColor;                           // 0x38(0x4)(Edit, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                SelectionHighlightColor;                           // 0x3C(0x4)(Edit, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SelectionLineThickness;                            // 0x40(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDrawAudioThresholdManagerDebug;                   // 0x44(0x1)(Edit, ZeroConstructor, Transient, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_782[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UWwiseUserSettings* GetDefaultObj();

};

// 0x8 (0x38 - 0x30)
// Class WwiseAudio.WwiseState
class UWwiseState : public UWwiseObject
{
public:
	class UWwiseStateGroup*                      StateGroup;                                        // 0x30(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UWwiseState* GetDefaultObj();

};

// 0x18 (0x48 - 0x30)
// Class WwiseAudio.WwiseStateGroup
class UWwiseStateGroup : public UWwiseObject
{
public:
	TArray<class UWwiseState*>                   ChildStates;                                       // 0x30(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	class UWwiseState*                           NoneState;                                         // 0x40(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UWwiseStateGroup* GetDefaultObj();

};

// 0x8 (0x38 - 0x30)
// Class WwiseAudio.WwiseSwitch
class UWwiseSwitch : public UWwiseObject
{
public:
	class UWwiseSwitchGroup*                     SwitchGroup;                                       // 0x30(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UWwiseSwitch* GetDefaultObj();

};

// 0x10 (0x40 - 0x30)
// Class WwiseAudio.WwiseSwitchGroup
class UWwiseSwitchGroup : public UWwiseObject
{
public:
	TArray<class UWwiseSwitch*>                  ChildSwitches;                                     // 0x30(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UWwiseSwitchGroup* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class WwiseAudio.WwiseTrigger
class UWwiseTrigger : public UWwiseObject
{
public:

	static class UClass* StaticClass();
	static class UWwiseTrigger* GetDefaultObj();

};

}


