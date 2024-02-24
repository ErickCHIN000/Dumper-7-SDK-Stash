#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x2F0 - 0x2A8)
// Class NWXAudio.AcousticOpeningComponent
class UAcousticOpeningComponent : public USceneComponent
{
public:
	float                                        MaxFadeDistance;                                   // 0x2A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinFadeDistance;                                   // 0x2AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SurfaceAreaM2;                                     // 0x2B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInternalFront;                                    // 0x2B4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInternalBack;                                     // 0x2B5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOpen;                                             // 0x2B6(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EBF[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             Dimensions;                                        // 0x2B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlaneOffAxisScale;                                 // 0x2C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EC3[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FReverbLocationGainInfo>       ReverbGains;                                       // 0x2D0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_EC5[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAcousticOpeningComponent* GetDefaultObj();

	bool IsInteriorToExterior();
	bool IsFullyInternal();
};

// 0x0 (0x28 - 0x28)
// Class NWXAudio.AcousticSpaceInterface
class IAcousticSpaceInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IAcousticSpaceInterface* GetDefaultObj();

};

// 0x20 (0x50 - 0x30)
// Class NWXAudio.DirectionalAuxBusses
class UDirectionalAuxBusses : public UDataAsset
{
public:
	class UAkAuxBus*                             AuxBusL;                                           // 0x30(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAuxBus*                             AuxBusR;                                           // 0x38(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ListenerMinDistance;                               // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ListenerMaxDistance;                               // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPanningLaw                       PanningLaw;                                        // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EF3[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDirectionalAuxBusses* GetDefaultObj();

};

// 0xB0 (0xE0 - 0x30)
// Class NWXAudio.ReverbData
class UReverbData : public UDataAsset
{
public:
	class FName                                  DefaultMaterialName;                               // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FName, struct FMaterialReverbProperties> MaterialReverbs;                                   // 0x38(0x50)(NativeAccessSpecifierPrivate)
	TMap<class UAkAuxBus*, struct FReverbAux>    ReverbLookupMap;                                   // 0x88(0x50)(NativeAccessSpecifierPrivate)
	class UAkRtpc*                               DistanceToInteriorSourceRtpc;                      // 0xD8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UReverbData* GetDefaultObj();

};

// 0x190 (0x1C0 - 0x30)
// Class NWXAudio.AcousticsSubsystem
class UAcousticsSubsystem : public UWorldSubsystem
{
public:
	uint8                                        Pad_104C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnAcousticOpeningsUpdated;                         // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMap<enum class EAudioTreeQuadrant, struct FOuterLayerQuadrantTreeInfo> OuterQuadrantTreeInfoMap;                          // 0x48(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	float                                        MinAuxSendGain;                                    // 0x98(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1054[0x24];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UReverbData*                           ReverbData;                                        // 0xC0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UAkLateReverbComponent*>        ListenerLateReverbComponents;                      // 0xC8(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TMap<uint32, class UBoundedAkLateReverbComponent*> LateReverbComponentsMap;                           // 0xD8(0x50)(ExportObject, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1063[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FReverbLocationGainInfo>       ListenerReverbGains;                               // 0x148(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<TWeakObjectPtr<class UAcousticOpeningComponent>> AcousticOpenings;                                  // 0x158(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	TMap<class AActor*, struct FModularAcousticZone> ModularZones;                                      // 0x168(0x50)(Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1072[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAcousticsSubsystem* GetDefaultObj();

	void UnlinkReverbAcousticSpaces(class UAkLateReverbComponent* ReverbA, class UAkLateReverbComponent* ReverbB);
	void ResetTreeQuadrants();
	void RemoveModularAcoustics(class AActor* RootActor);
	void PopulateTreesInfoMapByQuadrants(TArray<struct FVector>& Trees, float InnerRangeTreeTotal);
	void LinkReverbAcousticSpaces(class UAkLateReverbComponent* ReverbA, class UAkLateReverbComponent* ReverbB);
	void LinkAcousticSpaces(TArray<class UActorComponent*>& Spaces);
	enum class EAudioTreeQuadrant GetQuadrantByLocation(float DeltaX, float DeltaY);
	class UAcousticOpeningComponent* GetNearestAcousticOpening(struct FVector& Position, float MaxDistanceCm);
	void GetInteriorToExteriorAcousticOpeningPositions(class AActor* ParentActor, TArray<struct FVector>* Positions);
	float CalculateWeatherShelter(struct FVector& Position, bool UseRaycasts, bool UseReverbEnclosure);
	void CacheTreeInnerZoneRange(float Range);
	void AddModularAcoustics(class AActor* RootActor);
	void AddForestReverb(class UDirectionalAuxBusses* GlobalReverbType, class UDirectionalAuxBusses* ForestReverbType);
};

// 0x8 (0x38 - 0x30)
// Class NWXAudio.AudioBucket
class UAudioBucket : public UDataAsset
{
public:
	int32                                        MaxInstances;                                      // 0x30(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DrawDebug;                                         // 0x34(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10AB[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAudioBucket* GetDefaultObj();

	bool HasCapacity();
};

// 0x20 (0x58 - 0x38)
// Class NWXAudio.ActorAudioBucket
class UActorAudioBucket : public UAudioBucket
{
public:
	struct FSoftClassPath                        SoftBlueprintGeneratedClass;                       // 0x38(0x20)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UActorAudioBucket* GetDefaultObj();

};

// 0x1A8 (0x670 - 0x4C8)
// Class NWXAudio.AkMediaSoundInputComponent
class UAkMediaSoundInputComponent : public UAkAudioInputComponent
{
public:
	class UMediaPlayer*                          MediaPlayer;                                       // 0x4C8(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1115[0x1A0];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAkMediaSoundInputComponent* GetDefaultObj();

	void SetMediaPlayer(class UMediaPlayer* NewMediaPlayer);
	class UMediaPlayer* GetMediaPlayer();
};

// 0x0 (0x38 - 0x38)
// Class NWXAudio.AnimNotify_EmoteBase
class UAnimNotify_EmoteBase : public UAnimNotify
{
public:

	static class UClass* StaticClass();
	static class UAnimNotify_EmoteBase* GetDefaultObj();

};

// 0x68 (0x108 - 0xA0)
// Class NWXAudio.AudioComponentAggregatorComponent
class UAudioComponentAggregatorComponent : public UActorComponent
{
public:
	float                                        ReductionRange;                                    // 0xA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReductionRangeSquared;                             // 0xA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UComponentAudioBucket*                 ReducedComponentAudioBucket;                       // 0xA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class UComponentAudioBucket*, struct FDynamicAudioComponentInfo> DynamicAudioComponentSettings;                     // 0xB0(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_11DE[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAudioComponentAggregatorComponent* GetDefaultObj();

	void SetSwitchesOnAudioComponent(class UAkSwitchValue* SwitchToSet, class UComponentAudioBucket* RequiredComponentAudioBucket, bool bAlsoSetOnReductionComponent);
	class UScopedAkComponent* GetAudioComponent(class UComponentAudioBucket* PreferredComponentAudioBucket, bool bForcePreferredBucket);
};

// 0x58 (0x88 - 0x30)
// Class NWXAudio.EditorAudioDialogueData
class UEditorAudioDialogueData : public UDataAsset
{
public:
	TMap<class FString, class UAkAudioEvent*>    SpeakerAudioEventMap;                              // 0x30(0x50)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                         DefaultAudioEvent;                                 // 0x80(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UEditorAudioDialogueData* GetDefaultObj();

};

// 0xB0 (0xE0 - 0x30)
// Class NWXAudio.AudioDialogueSubsystem
class UAudioDialogueSubsystem : public UEngineSubsystem
{
public:
	FMulticastInlineDelegateProperty_            OnSubtitledPlaybackStarted;                        // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSubtitledPlaybackEnded;                          // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_14AD[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                DialogueAudioDataPath;                             // 0x58(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EAkCodecId                        ExternalSourceCodecID;                             // 0x68(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_14B3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ExternalSourceName;                                // 0x70(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UEditorAudioDialogueData*              Data;                                              // 0x80(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_14B5[0x58];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAudioDialogueSubsystem* GetDefaultObj();

	void StopAllDialogueAudio();
	void SkipCurrentDialogueAudio();
	void SetTextToSpeechVoicesEnabled(bool bEnabled);
	int32 PlayDialogueAudio(class UAkComponent* AkComponent, class UDialogue* Dialogue, int32 NodeId, bool ForceTTSPlayback);
	bool IsTextToSpeechVoicesEnabled();
	void HandleDialogueFinished(enum class EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo);
	class FString GetSpeakerName(class UDialogue* Dialogue, class UDialogueNodeBase* Node);
	class UAkAudioEvent* GetSpeakerExternalSource(class UDialogue* Dialogue, class UDialogueNodeBase* Node);
	void EnqueueDialogueAudioNoSource(class UDialogue* Dialogue, int32 DialogueNodeID, FDelegateProperty_& PlaybackStartedCallback, FDelegateProperty_& PlaybackEndedCallback, bool bBroadcastSubtitleCallbacks, bool InterruptQueue);
	void EnqueueDialogueAudioForActor(class AActor* Actor, class UComponentAudioBucket* VoiceBucket, class UDialogue* Dialogue, int32 DialogueNodeID, FDelegateProperty_& PlaybackStartedCallback, FDelegateProperty_& PlaybackEndedCallback, bool bBroadcastSubtitleCallbacks, bool InterruptQueue);
	void EnqueueDialogueAudio(class UAkComponent* AkComponent, class UDialogue* Dialogue, int32 DialogueNodeID, FDelegateProperty_& PlaybackStartedCallback, FDelegateProperty_& PlaybackEndedCallback, bool bBroadcastSubtitleCallbacks, bool InterruptQueue);
	class FString CalculateAudioLineID(class UDialogue* Dialogue, class UDialogueNodeBase* Node);
};

// 0x10 (0x40 - 0x30)
// Class NWXAudio.AudioEventData
class UAudioEventData : public UDataAsset
{
public:
	TArray<class UEventAudioBucket*>             EventAudioBuckets;                                 // 0x30(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UAudioEventData* GetDefaultObj();

};

// 0x108 (0x138 - 0x30)
// Class NWXAudio.AudioEventSubsystem
class UAudioEventSubsystem : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_1542[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioEventData*                       AudioEventData;                                    // 0x38(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<TSoftObjectPtr<class UAkAudioEvent>, int32> LoopStartOffsetIndices;                            // 0x40(0x50)(Transient, NativeAccessSpecifierPrivate)
	TMap<class UAkAudioEvent*, float>            CachedAudioEvents;                                 // 0x90(0x50)(Transient, NativeAccessSpecifierPrivate)
	TMap<TSoftObjectPtr<class UAkAudioEvent>, float> CacheMaxTimeMapMinutes;                            // 0xE0(0x50)(Transient, NativeAccessSpecifierPrivate)
	float                                        DefaultMaxCacheTimeMinutes;                        // 0x130(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        TimeSinceLastCacheCheckSeconds;                    // 0x134(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UAudioEventSubsystem* GetDefaultObj();

	void SetAudioEventData(class UAudioEventData* AudioEventDataIn);
	class UEventAudioBucket* GetBucketForEvent(class UAkAudioEvent* AudioEvent);
	bool CanEventPlay(class UAkAudioEvent* AudioEvent, struct FTransform& Transform);
};

// 0x8 (0x38 - 0x30)
// Class NWXAudio.AudioMemoryDebug
class UAudioMemoryDebug : public UEngineSubsystem
{
public:
	uint8                                        Pad_1584[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAudioMemoryDebug* GetDefaultObj();

};

// 0x10 (0x40 - 0x30)
// Class NWXAudio.AudioPreloadSubsystem
class UAudioPreloadSubsystem : public UWorldSubsystem
{
public:
	uint8                                        Pad_15F6[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAudioPreloadSubsystem* GetDefaultObj();

	void PreloadRow(const struct FGameplayTag& RowTag, class UAffinityTable* AffinityTable);
	void PreloadColumns(TArray<struct FGameplayTag>& ColumnTags, const struct FGameplayTag& RowTag, class UAffinityTable* AffinityTable);
};

// 0x50 (0x80 - 0x30)
// Class NWXAudio.AudioRTPCSubsystemData
class UAudioRTPCSubsystemData : public UDataAsset
{
public:
	TMap<class UAkRtpc*, struct FDecayingRTPCValue> PresetDecayingRTPCValues;                          // 0x30(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAudioRTPCSubsystemData* GetDefaultObj();

};

// 0x78 (0xA8 - 0x30)
// Class NWXAudio.AudioRTPCSubsystem
class UAudioRTPCSubsystem : public UWorldSubsystem
{
public:
	TSoftObjectPtr<class UAudioRTPCSubsystemData> InitDataPath;                                      // 0x30(0x28)(Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<class UAkRtpc*, struct FDecayingRTPCValue> DecayingRTPCValues;                                // 0x58(0x50)(Transient, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UAudioRTPCSubsystem* GetDefaultObj();

	void UnsubscribeDecayingRTPC(class UAkRtpc* Rtpc);
	void SubscribeDecayingRTPC(class UAkRtpc* Rtpc, float InitialRTPCValue, float FinalRTPCValue, float DecayTime);
	void ResetDecayingRTPC(class UAkRtpc* Rtpc);
	float GetDecayingRTPCValue(class UAkRtpc* Rtpc);
};

// 0x0 (0x330 - 0x330)
// Class NWXAudio.BoundedAkLateReverbComponent
class UBoundedAkLateReverbComponent : public UAkLateReverbComponent
{
public:

	static class UClass* StaticClass();
	static class UBoundedAkLateReverbComponent* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class NWXAudio.ComponentAudioBucket
class UComponentAudioBucket : public UAudioBucket
{
public:
	class FName                                  Tag;                                               // 0x38(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UComponentAudioBucket* GetDefaultObj();

};

// 0x70 (0x3A0 - 0x330)
// Class NWXAudio.DirectionalAkLateReverbComponent
class UDirectionalAkLateReverbComponent : public UAkLateReverbComponent
{
public:
	uint8                                        Pad_1773[0x50];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UDirectionalAuxBusses*                 DirectionalAuxBusses;                              // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDirectionalSectorAkLateReverbComponent* SectorL;                                           // 0x388(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDirectionalSectorAkLateReverbComponent* SectorR;                                           // 0x390(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1783[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDirectionalAkLateReverbComponent* GetDefaultObj();

};

// 0x0 (0x310 - 0x310)
// Class NWXAudio.DirectionalAkReverbVolume
class ADirectionalAkReverbVolume : public AAkReverbVolume
{
public:

	static class UClass* StaticClass();
	static class ADirectionalAkReverbVolume* GetDefaultObj();

};

// 0x90 (0x3C0 - 0x330)
// Class NWXAudio.DirectionalSectorAkLateReverbComponent
class UDirectionalSectorAkLateReverbComponent : public UAkLateReverbComponent
{
public:
	uint8                                        Pad_17C1[0x90];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDirectionalSectorAkLateReverbComponent* GetDefaultObj();

};

// 0x0 (0x3C0 - 0x3C0)
// Class NWXAudio.DirectionalForestSectorAkLateReverbComponent
class UDirectionalForestSectorAkLateReverbComponent : public UDirectionalSectorAkLateReverbComponent
{
public:

	static class UClass* StaticClass();
	static class UDirectionalForestSectorAkLateReverbComponent* GetDefaultObj();

};

// 0x40 (0x490 - 0x450)
// Class NWXAudio.DynamicAkGeometryComponent
class UDynamicAkGeometryComponent : public UAkGeometryComponent
{
public:
	uint8                                        Pad_1822[0x40];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDynamicAkGeometryComponent* GetDefaultObj();

	bool UpdateInRange(bool bInRange);
};

// 0x60 (0x100 - 0xA0)
// Class NWXAudio.EmoteContextComponent
class UEmoteContextComponent : public UActorComponent
{
public:
	struct FGameplayAttribute                    HealthAttribute;                                   // 0xA0(0x38)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                 PainFilterTags;                                    // 0xD8(0x20)(Edit, NativeAccessSpecifierPrivate)
	uint8                                        Pad_18C1[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEmoteContextComponent* GetDefaultObj();

	void SubmitEmoteSwitchValue(class UAkSwitchValue* SwitchValue);
	void OnHealthDecreased(float OldHealth, float NewHealth, bool SuppressEmote);
};

// 0x80 (0xB8 - 0x38)
// Class NWXAudio.EventAudioBucket
class UEventAudioBucket : public UAudioBucket
{
public:
	float                                        PriorityWeighting;                                 // 0x38(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DistanceWeighting;                                 // 0x3C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeWeighting;                                     // 0x40(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ListenerResponseWeighting;                         // 0x44(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EmitterResponseWeighting;                          // 0x48(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19AF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<uint32, float>                          AudioEventShortIdsAndPriorities;                   // 0x50(0x50)(NativeAccessSpecifierPrivate)
	TArray<struct FPlayingEvent>                 PlayingEvents;                                     // 0xA0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_19B9[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEventAudioBucket* GetDefaultObj();

	bool IsAllowedToPlay(class UAkAudioEvent* AudioEvent, struct FTransform& EventTransform, struct FTransform& ListenerTransform);
	bool Contains(class UAkAudioEvent* AudioEvent);
	float CalculateInitialPriorityScore(class UAkAudioEvent* AudioEvent, struct FTransform& EventTransform, struct FTransform& ListenerTransform);
};

// 0x20 (0x3C0 - 0x3A0)
// Class NWXAudio.ForestReverbComponent
class UForestReverbComponent : public UDirectionalAkLateReverbComponent
{
public:
	uint8                                        Pad_19DF[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UForestReverbComponent* GetDefaultObj();

};

// 0x240 (0x6D8 - 0x498)
// Class NWXAudio.ScopedAkComponent
class UScopedAkComponent : public UAkComponent
{
public:
	float                                        ScopeRange;                                        // 0x498(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsRangeChecked;                                   // 0x49C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C75[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ActiveTickInterval;                                // 0x4A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SuspendedTickInterval;                             // 0x4A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        IdleTimeOut;                                       // 0x4A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C80[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UComponentAudioBucket*                 ComponentAudioBucket;                              // 0x4B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnResumed;                                         // 0x4B8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSuspended;                                       // 0x4C8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTick;                                            // 0x4D8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	float                                        ObsOccTestAreaWidth;                               // 0x4E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         InstanceOffsetLoopSeeking;                         // 0x4EC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C93[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FPostAndStopEvents>            InfiniteEvents;                                    // 0x4F0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TMap<class UAkRtpc*, float>                  RTPCs;                                             // 0x500(0x50)(Transient, NativeAccessSpecifierPrivate)
	TMap<uint32, class UAkSwitchValue*>          Switches;                                          // 0x550(0x50)(Transient, NativeAccessSpecifierPrivate)
	TMap<uint32, float>                          AuxSendGains;                                      // 0x5A0(0x50)(Transient, NativeAccessSpecifierPrivate)
	class UAkRtpc*                               CachedInteriorDistanceRtpc;                        // 0x5F0(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1CB1[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FPlayingMaxAttenuation>        PlayingEventsMaxDistances;                         // 0x608(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<class UAkComponent*>                  CachedListeners;                                   // 0x618(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1CBA[0x34];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TWeakObjectPtr<class USceneComponent>        SavedAttachParent;                                 // 0x65C(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  SavedAttachSocket;                                 // 0x664(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1CC7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            SavedRelativeTransform;                            // 0x670(0x60)(Edit, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         IsFullyDetached;                                   // 0x6D0(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1CD3[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UScopedAkComponent* GetDefaultObj();

	bool TryResumeInfiniteEvents();
	bool TryResume(class UAkAudioEvent* PotentialEvent);
	void StopAllInfiniteEvents();
	void SetMultiPositions(TArray<struct FTransform>& MultiPositions, enum class EAkMultiPositionType MultiPositionType);
	bool Seek(class UAkAudioEvent* AkEvent, float Percentage, bool bSeekToNearestMarker);
	bool PostAsyncAkEventScoped(TSoftObjectPtr<class UAkAudioEvent> AkEvent, TSoftObjectPtr<class UAkAudioEvent> StopEvent);
	bool PostAkEventScopedWithCallback(class UAkAudioEvent* AkEvent, class UAkAudioEvent* StopEvent, int32 CallbackMask, FDelegateProperty_& PostEventCallback);
	bool PostAkEventScoped(class UAkAudioEvent* AkEvent, class UAkAudioEvent* StopEvent);
	bool IsSuspended();
	bool IsInRange(class UAkAudioEvent* PotentialEvent);
	bool IsInfiniteEventRegistered(class UAkAudioEvent* StartLoopEvent);
	bool IsIdle();
	struct FVector GetScopedAkComponentLocation();
	void DuplicateComponentSettings(class UScopedAkComponent* Other);
};

// 0x18 (0x6F0 - 0x6D8)
// Class NWXAudio.GlobalAudioAkComponent
class UGlobalAudioAkComponent : public UScopedAkComponent
{
public:
	uint8                                        Pad_1D39[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGlobalAudioAkComponent* GetDefaultObj();

};

// 0x1F0 (0x220 - 0x30)
// Class NWXAudio.GlobalAudioData
class UGlobalAudioData : public UDataAsset
{
public:
	class UAkAudioEvent*                         ResetWorldRTPCsEvent;                              // 0x30(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkStateValue*                         DefaultMixState;                                   // 0x38(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkStateValue*                         LoadingScreenState;                                // 0x40(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAudioMenuMixState>            MenuMixStates;                                     // 0x48(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UAudioEventData*                       AudioEventData;                                    // 0x58(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UReverbData*                           ReverbData;                                        // 0x60(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                            MaterialAcousticCoefficients;                      // 0x68(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMaterialPuddleOverride>       MaterialPuddleOverrides;                           // 0x70(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	float                                        MinimumSignificantAcousticOpeningSurfaceAreaM2;    // 0x80(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FreefieldAcousticOpeningSurfaceAreaM2;             // 0x84(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxHealthClampMin;                                 // 0x88(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxHealthClampMax;                                 // 0x8C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                         DebugAudioEvent;                                   // 0x90(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, float>                   MovieGainDecibels;                                 // 0x98(0x50)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<TSoftObjectPtr<class UAkAudioEvent>, float> CacheMaxTimeMapMinutes;                            // 0xE8(0x50)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	float                                        DefaultMaxCacheTimeMinutes;                        // 0x138(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DC0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGameplayTag>                  ImpactSweetenerEffectTags;                         // 0x140(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<enum class EAudioMixState, class UAkStateValue*> MixStateToEstateFocusMap;                          // 0x150(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UAkStateValue*                         DefaultEstateFocusState;                           // 0x1A0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<enum class EAudioVolumeControl, class UAkRtpc*> VolumeRtpcMap;                                     // 0x1A8(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UAkStateValue*                         ReducedVoiceEmotesState;                           // 0x1F8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkStateValue*                         DefaultVoiceEmotesState;                           // 0x200(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkRtpc*                               MonoMixRtpc;                                       // 0x208(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UAkSwitchValue*>                PreCachedSwitches;                                 // 0x210(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGlobalAudioData* GetDefaultObj();

};

// 0x1B0 (0x1E0 - 0x30)
// Class NWXAudio.GlobalAudioSubsystem
class UGlobalAudioSubsystem : public UEngineSubsystem
{
public:
	uint8                                        Pad_2338[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnRemoteVoipPlayerTransmissionChanged;             // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnVoipPlayerListeningChanged;                      // 0x48(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLocalPlayerVoipMicStatusChanged;                 // 0x58(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLocalPlayerEnteredCombat;                        // 0x68(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLocalPlayerExitedCombat;                         // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_234E[0xC0];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UGlobalAudioData*                      GlobalAudioData;                                   // 0x148(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                GlobalAudioDataPath;                               // 0x150(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAkStateValue*                         CurrentMixState;                                   // 0x160(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAkStateValue*                         CurrentEstateMixState;                             // 0x168(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FVoipRoomMemberInfo>           VoipMembers;                                       // 0x170(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	bool                                         LocalPlayerVoipMicOpen;                            // 0x180(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         LocalPlayerVoipMicTransmitting;                    // 0x181(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         IsLocalPlayerInCombat;                             // 0x182(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2371[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        InputMicLevelDecibels;                             // 0x184(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MovieVolumeScaler;                                 // 0x188(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2377[0x54];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGlobalAudioSubsystem* GetDefaultObj();

	bool TryGetPuddleOverride(class UPhysicalMaterial* PhysicalMaterial, float* PuddleOverrideOut);
	bool TryGetPhysicalMaterialObstructionOcclusionCoefficients(class UPhysicalMaterial* PhysicalMaterial, float* ObstructionCoefficientOut, float* OcclusionCoefficientOut);
	void SetVoiceChatTestInputMic(bool TestMicOn);
	void SetVoiceChatSendMode(enum class EVoiceChatMode ChatMode);
	void SetVoiceChatPushToTalk(bool PushHeld);
	void SetVoiceChatMicVolume(float MicVolume);
	void SetVoiceChatMicActivationMode(enum class EVoiceChatMicMode MicMode);
	void SetVoiceChatListenMode(enum class EVoiceChatMode ChatMode);
	void SetVoiceChatEnabled(bool Enable);
	void SetVoiceChatEffect(enum class EVoiceChatVoiceEffectMode EffectMode);
	void SetMovieVolumeMultiplier(float VolMultLinear);
	void SetMixStateActive(enum class EAudioMixState MixStateType, bool Active);
	void SetIsLocalPlayerInCombat(bool IsInCombat);
	void ResetMixStateToMenu();
	void OnRemoteVoipPlayerTransmissionChanged__DelegateSignature(const class FString& PlayerName, bool IsSpeaking, bool IsLocalPlayer, const class FString& UniqueID);
	void OnRemoteVoipPlayerListenStateChanged__DelegateSignature(const class FString& PlayerName, bool IsListening, bool IsLocalPlayer);
	void OnLocalPlayerVoipMicStatusChanged__DelegateSignature(bool MicOpen, bool MicTransmitting);
	void OnLocalPlayerExitedCombat__DelegateSignature();
	void OnLocalPlayerEnteredCombat__DelegateSignature();
	bool IsVoipPlayerTransmitting(const class FString& UniquePlayerId);
	bool IsVoipPlayerListening(const class FString& UniquePlayerId);
	bool IsMixStateActive(enum class EAudioMixState MixState);
	bool IsEventPlaying(class UAkAudioEvent* Event, int32 PlayingID);
	struct FLinearColor GetVUMeterDisplayColor(float ValueDecibels, float TargetValue, float MaxValue, float MinValue);
	float GetMovieVolume(const class FString& MovieFileURL);
	void GetLocalPlayerVoipMicStatus(bool* MicOpen, bool* MicTransmitting);
	bool GetIsLocalPlayerInCombat();
	float GetInputMicLevelDecibels();
	void GetImpactSweetenerEffectTags(TArray<struct FGameplayTag>* OutGameplayTags);
	class UAkAudioEvent* GetDebugAudioEvent();
	float GetAudioMaxHealthClamped(float MaxHealthValue);
};

// 0x28 (0x58 - 0x30)
// Class NWXAudio.GlobalMusicData
class UGlobalMusicData : public UDataAsset
{
public:
	class UAkAudioEvent*                         GlobalMusicStartEvent;                             // 0x30(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                         GlobalMusicStopEvent;                              // 0x38(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkStateValue*                         DefaultGlobalMusicState;                           // 0x40(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkStateValue*                         PlayerReadyMusicState;                             // 0x48(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CallbackMask;                                      // 0x50(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23C6[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGlobalMusicData* GetDefaultObj();

};

// 0x68 (0x98 - 0x30)
// Class NWXAudio.GlobalMusicManager
class UGlobalMusicManager : public UGameInstanceSubsystem
{
public:
	FMulticastInlineDelegateProperty_            MusicCallback;                                     // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UGlobalMusicData*                      GlobalMusicData;                                   // 0x40(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                GlobalMusicDataPath;                               // 0x48(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGlobalAudioAkComponent*               MusicComponent;                                    // 0x58(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAkStateValue*                         PrimaryMusicState;                                 // 0x60(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2555[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGlobalMusicManager* GetDefaultObj();

	void StopMusic();
	void StartMusic();
	void SetPrimaryMusicState(class UAkStateValue* MusicState);
	void SetPlayerReadyState();
	void SetMusicRTPC(class UAkRtpc* MusicRTPC, float Value, int32 InterpolationTimeMS);
	void SetDefaultMusicState();
	void PostMusicEvent(class UAkAudioEvent* MusicEvent, class UAkAudioEvent* StopMusicEvent);
	void PostEventCallbackFunc(enum class EAkCallbackType In_eType, class UAkCallbackInfo* In_pCallbackInfo);
	class UGlobalAudioAkComponent* GetMusicComponent();
	class UAkStateValue* GetCurrentPrimaryMusicState();
};

// 0x0 (0x28 - 0x28)
// Class NWXAudio.NWXAudioFunctionLibrary
class UNWXAudioFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UNWXAudioFunctionLibrary* GetDefaultObj();

	void UseComponentForDefaultListenerPosition(class USceneComponent* SceneComponent);
	class UScopedAkComponent* SpawnScopedAkComponentAtLocation(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, struct FVector& Location, const struct FRotator& Orientation, bool AutoPost, bool AutoDestroy);
	void SetMultiPositions(class UAkComponent* GameObjectAkComponent, TArray<struct FTransform>& Positions, enum class EAkMultiPositionType MultiPositionType);
	void ServerPlayOneShotForNearbyPlayers(class UObject* WorldContextObject, float PlayerRadius, TSoftObjectPtr<class UAkAudioEvent>& AudioEvent, TArray<struct FVector>& AudioLocations, TArray<TSoftObjectPtr<class UAkSwitchValue>>& Switches, TArray<struct FRTPCValuePair>& RTPCValues);
	bool SeekIntoEvent(class UAkComponent* AkComponent, class UAkAudioEvent* AkEvent, float Percentage, bool bSeekToNearestMarker);
	void LoadAndPlayAudioAtLocation(class UObject* WorldContextObject, TSoftObjectPtr<class UAkAudioEvent>& AudioEvent, TArray<struct FVector>& Locations, TArray<TSoftObjectPtr<class UAkSwitchValue>>& Switches, TArray<struct FRTPCValuePair>& RTPCValues);
	class UScopedAkComponent* GetReducedAudioComponent(class AActor* Actor);
	bool GetPrintAudioLogsToScreen();
	struct FTransform GetListenerTransform();
	struct FVector GetListenerLocation();
	float GetDynamicGeometryRangeSquared();
	float GetDynamicGeometryRange();
	class UAudioEventSubsystem* GetAudioEventSubsystem(class UObject* WorldContextObject);
	class UScopedAkComponent* GetAudioComponentForBucket(class AActor* Actor, class UComponentAudioBucket* Bucket);
	float GetAnimationEditorWaterDepth();
	class UAkSwitchValue* GetAnimationEditorSwitch();
	class FName GetAnimationEditorSocketForBucket(class UComponentAudioBucket* Bucket);
	class UScopedAkComponent* GetAnimationEditorPersistentScopedAkComponent(class UObject* WorldContextObject, class UComponentAudioBucket* Bucket);
	class UAkSwitchValue* GetAnimationEditorMaterialSwitch();
};

// 0x8 (0x30 - 0x28)
// Class NWXAudio.NWXAudioSettings
class UNWXAudioSettings : public UObject
{
public:
	float                                        DynamicGeometryRange;                              // 0x28(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DynamicGeometryRangeSquared;                       // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNWXAudioSettings* GetDefaultObj();

};

// 0x68 (0x90 - 0x28)
// Class NWXAudio.NWXAudioSettingsPerUser
class UNWXAudioSettingsPerUser : public UObject
{
public:
	struct FSoftObjectPath                       AnimationEditorSwitch;                             // 0x28(0x20)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                       AnimationEditorActorBlueprint;                     // 0x48(0x20)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                       AnimationEditorMaterialSwitch;                     // 0x68(0x20)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AnimationEditorWaterDepth;                         // 0x88(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPrintToScreen;                                    // 0x8C(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AD2[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNWXAudioSettingsPerUser* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class NWXAudio.PannableInterface
class IPannableInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IPannableInterface* GetDefaultObj();

};

// 0x0 (0x330 - 0x330)
// Class NWXAudio.PrimitiveAkLateReverbComponent
class UPrimitiveAkLateReverbComponent : public UAkLateReverbComponent
{
public:

	static class UClass* StaticClass();
	static class UPrimitiveAkLateReverbComponent* GetDefaultObj();

};

// 0x0 (0x3A0 - 0x3A0)
// Class NWXAudio.PrimitiveDirectionalAkLateReverbComponent
class UPrimitiveDirectionalAkLateReverbComponent : public UDirectionalAkLateReverbComponent
{
public:

	static class UClass* StaticClass();
	static class UPrimitiveDirectionalAkLateReverbComponent* GetDefaultObj();

};

// 0x0 (0xA0 - 0xA0)
// Class NWXAudio.ReplicatedAudioComponent
class UReplicatedAudioComponent : public UActorComponent
{
public:

	static class UClass* StaticClass();
	static class UReplicatedAudioComponent* GetDefaultObj();

	void ServerReplicateOneShotAudio(TSoftObjectPtr<class UAkAudioEvent>& AudioEvent, TArray<struct FVector>& Locations, TArray<TSoftObjectPtr<class UAkSwitchValue>>& Switches, TArray<struct FRTPCValuePair>& RTPCValues);
	void ClientReplicateOneShotAudio(TSoftObjectPtr<class UAkAudioEvent>& AudioEvent, TArray<struct FVector>& Locations, TArray<TSoftObjectPtr<class UAkSwitchValue>>& Switches, TArray<struct FRTPCValuePair>& RTPCValues);
};

// 0x18 (0xB8 - 0xA0)
// Class NWXAudio.VoiceSetSelectorComponent
class UVoiceSetSelectorComponent : public UActorComponent
{
public:
	class UComponentAudioBucket*                 VoiceComponentBucket;                              // 0xA0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UAkSwitchValue*>                VoiceSets;                                         // 0xA8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UVoiceSetSelectorComponent* GetDefaultObj();

};

// 0x50 (0x80 - 0x30)
// Class NWXAudio.VoiceSetSubsystem
class UVoiceSetSubsystem : public UWorldSubsystem
{
public:
	uint8                                        Pad_2D2C[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UVoiceSetSubsystem* GetDefaultObj();

	class UAkSwitchValue* GetRandomVoiceSet(class AActor* RequestingActor, TArray<class UAkSwitchValue*>& PossibleVoiceSets);
};

}


