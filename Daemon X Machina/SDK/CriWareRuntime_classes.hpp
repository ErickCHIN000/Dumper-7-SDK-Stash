#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x30 - 0x28)
// Class CriWareRuntime.AtomAsrRack
class UAtomAsrRack : public UObject
{
public:
	int32                                        RackId;                                            // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28B[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAtomAsrRack* GetDefaultObj();

	void SetEffectBypass(const class FString& BusName, const class FString& EffectName, bool Bypasses);
	void SetBusVolumeByName(const class FString& BusName, float Volume);
	void SetBusSendLevelByName(const class FString& SourceBusName, const class FString& DestBusName, float Level);
	class UAtomAsrRack* GetDefaultAsrRack();
	bool GetBusAnalyzerInfo(const class FString& DspBusName, int32* Num_channels, TArray<float>* Rms_levels, TArray<float>* Peak_levels, TArray<float>* Peak_hold_levels);
	class UAtomAsrRack* GetAsrRack(int32 AsrRackId);
	void DetachDspBusSetting();
	void AttachDspBusSetting(const class FString& SettingName);
	void ApplyDspBusSnapshot(const class FString& SnapshotName, int32 Milliseconds);
};

// 0x0 (0x28 - 0x28)
// Class CriWareRuntime.AtomCategory
class UAtomCategory : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAtomCategory* GetDefaultObj();

	void StopByName(const class FString& CategoryName);
	void SetVolumeByName(const class FString& CategoryName, float Volume);
	void SetAisacControlByName(const class FString& CategoryName, const class FString& AisacName, float Value);
	bool ResetAllAisacControlByName(const class FString& CategoryName);
	bool ResetAllAisacControlById(int32 CategoryID);
	void PauseByName(const class FString& CategoryName, bool bPause);
	bool IsPausedByName(const class FString& CategoryName);
	float GetVolumeByName(const class FString& CategoryName);
	int32 GetNumAttachedAisacsByName(const class FString& CategoryName);
	int32 GetNumAttachedAisacsById(int32 CategoryID);
	float GetCurrentAisacControlValueByName(const class FString& CategoryName, const class FString& AisacControlName);
	float GetCurrentAisacControlValueById(int32 CategoryID, int32 AisacControlId);
	void GetAttachedAisacInfoByName(const class FString& CategoryName, int32 AisacAttachedIndex, bool* IsSuccess, struct FAtomAisacInfo* AisacInfo);
	void GetAttachedAisacInfoById(int32 CategoryID, int32 AisacAttachedIndex, bool* IsSuccess, struct FAtomAisacInfo* AisacInfo);
};

// 0xC78 (0xEB0 - 0x238)
// Class CriWareRuntime.AtomComponent
class UAtomComponent : public USceneComponent
{
public:
	class USoundAtomCue*                         Sound;                                             // 0x238(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAutoDestroy : 1;                                  // Mask: 0x1, PropSize: 0x10x240(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_31 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_482[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bPersistAcrossLevelTransition;                     // 0x244(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_487[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bStopWhenOwnerDestroyed : 1;                       // Mask: 0x1, PropSize: 0x10x248(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsUISound : 1;                                    // Mask: 0x2, PropSize: 0x10x248(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_32 : 6;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_48A[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DefaultVolume;                                     // 0x250(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableMultipleSoundPlayback;                      // 0x254(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUsePlaylist;                                      // 0x255(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_48E[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAtomSoundObject*                      DefaultSoundObject;                                // 0x258(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DefaultBlockIndex;                                 // 0x260(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_492[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAtomAisacControlParam>        DefaultAisacControl;                               // 0x268(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FAtomSelectorParam>            DefaultSelectorLabel;                              // 0x278(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnAudioFinished;                                   // 0x288(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UWorld*                                PlayWorld;                                         // 0x298(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameViewportClient*                   GameViewport;                                      // 0x2A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_49D[0x28];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bOverrideAttenuation : 1;                          // Mask: 0x1, PropSize: 0x10x2D0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_33 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_4A0[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundAttenuation*                     AttenuationSettings;                               // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoundAttenuationSettings             AttenuationOverrides;                              // 0x2E0(0x2A8)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        Pad_4A3[0x928];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAtomComponent* GetDefaultObj();

	void Stop();
	void SetVolume(float Volume);
	void SetSoundObject(class UAtomSoundObject* SoundObject);
	void SetSound(class USoundAtomCue* NewSound);
	void SetSelectorLabel(const class FString& Selector, const class FString& Label);
	void SetPitchMultiplier(float NewPitchMultiplier);
	void SetPitch(float Pitch);
	void SetNextBlockIndex(int32 BlockIndex);
	void SetDefaultAttenuationEnable(bool bEnable);
	void SetBusSendLevelOffsetByName(const class FString& BusName, float LevelOffset);
	void SetBusSendLevelOffset(int32 BusId, float LevelOffset);
	void SetBusSendLevelByName(const class FString& BusName, float Level);
	void SetBusSendLevel(int32 BusId, float Level);
	void SetAsrRackID(int32 Asr_rack_id);
	void SetAisacByName(const class FString& ControlName, float ControlValue);
	void Play(float StartTime);
	void Pause(bool bPause);
	void OnAudioFinished__DelegateSignature();
	bool IsPlaying();
	bool IsPaused();
	float GetTime();
	enum class EAtomComponentStatus GetStatus();
	float GetSequencePosition();
	int32 GetNumQueuedSounds();
	bool GetDefaultAttenuationEnable();
	class FString GetCueName();
	int32 GetAtomComponentID();
	void FadeOut(float FadeOutDuration, float FadeVolumeLevel);
	void FadeIn(float FadeInDuration, float FadeVolumeLevel, float StartTime);
	void EnqueueSound(class USoundAtomCue* NewSound);
	void DestroyComponentByID(int32 TargetID);
};

// 0x88 (0x2C0 - 0x238)
// Class CriWareRuntime.AtomCueSheetLoaderComponent
class UAtomCueSheetLoaderComponent : public USceneComponent
{
public:
	struct FSoftObjectPath                       CueSheetReference;                                 // 0x238(0x18)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCriFsBinderComponent*                 BinderComponent;                                   // 0x250(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLoadCompleted;                                   // 0x258(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLoadError;                                       // 0x268(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_524[0x48];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAtomCueSheetLoaderComponent* GetDefaultObj();

	void OnLoadError__DelegateSignature();
	void OnLoadCompleted__DelegateSignature();
	void OnAtomCueSheetLoaded__DelegateSignature(class USoundAtomCueSheet* Loaded);
	void LoadAtomCueSheet(class UObject* WorldContextObject, TSoftObjectPtr<class USoundAtomCueSheet> Asset, UDelegateProperty_ OnLoaded, const struct FLatentActionInfo& LatentInfo);
	void Load();
	enum class EAtomCueSheetLoaderComponentStatus GetStatus();
	class USoundAtomCueSheet* GetAtomCueSheet();
};

// 0x28 (0x50 - 0x28)
// Class CriWareRuntime.AtomDeviceWatcher
class UAtomDeviceWatcher : public UObject
{
public:
	UMulticastDelegateProperty_                  OnDeviceUpdated;                                   // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_54A[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAtomDeviceWatcher* GetDefaultObj();

	void OnDeviceUpdated__DelegateSignature();
	class FString GetDeviceName();
	int32 GetDeviceChannelCount();
};

// 0x10 (0x338 - 0x328)
// Class CriWareRuntime.AtomDisposer
class AAtomDisposer : public AActor
{
public:
	uint8                                        Pad_556[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AAtomDisposer* GetDefaultObj();

};

// 0x18 (0x250 - 0x238)
// Class CriWareRuntime.AtomListenerFocusPoint
class UAtomListenerFocusPoint : public USceneComponent
{
public:
	float                                        DistanceFocusLevel;                                // 0x238(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DirectionFocusLevel;                               // 0x23C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_55B[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAtomListenerFocusPoint* GetDefaultObj();

};

// 0x8 (0xF8 - 0xF0)
// Class CriWareRuntime.AtomParameterComponent
class UAtomParameterComponent : public UActorComponent
{
public:
	class UAtomSoundObject*                      SoundObject;                                       // 0xF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAtomParameterComponent* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class CriWareRuntime.AtomProfileData
class UAtomProfileData : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAtomProfileData* GetDefaultObj();

	TArray<struct FAtomProfileItem> CriWareAdx2ProfileDataUpdate(class UObject* WorldContextObject);
	void CriWareAdx2ProfileDataSort(const TArray<struct FAtomProfileItem>& Original_item, enum class EAtomProfileSortType Sort_type, enum class EAtomSortOrderType Order_type, TArray<struct FAtomProfileItem>* Sorted_item);
};

// 0x8 (0x330 - 0x328)
// Class CriWareRuntime.AtomSound
class AAtomSound : public AActor
{
public:
	class UAtomComponent*                        AtomComponent;                                     // 0x328(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AAtomSound* GetDefaultObj();

};

// 0x10 (0x338 - 0x328)
// Class CriWareRuntime.AtomSoundData
class AAtomSoundData : public AActor
{
public:
	class USoundAtomCueSheet*                    CueSheet;                                          // 0x328(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5BF[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AAtomSoundData* GetDefaultObj();

};

// 0x18 (0x48 - 0x30)
// Class CriWareRuntime.AtomSoundObject
class UAtomSoundObject : public UDataAsset
{
public:
	bool                                         EnableVoiceLimitScope;                             // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EnableCategoryCueLimitScope;                       // 0x31(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5CD[0x16];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAtomSoundObject* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class CriWareRuntime.AtomSpectrumAnalyzer
class UAtomSpectrumAnalyzer : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAtomSpectrumAnalyzer* GetDefaultObj();

	void GetLevelsDB(float Display_range, TArray<float>* Spectra);
	void GetLevels(TArray<float>* Spectra);
	void CreateDspSpectra(class UAtomAsrRack* Asr_rack, const class FString& bus_name, int32 Num_bands);
};

// 0x0 (0x28 - 0x28)
// Class CriWareRuntime.AtomStatics
class UAtomStatics : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAtomStatics* GetDefaultObj();

	void StopAllSounds();
	class UAtomComponent* SpawnSoundAttached(class USoundAtomCue* Sound, class USceneComponent* AttachToComponent, class FName AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, enum class EAttachLocation LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, bool bAutoDestroy);
	class UAtomComponent* SpawnSoundAtLocation(class UObject* WorldContextObject, class USoundAtomCue* Sound, const struct FVector& Location, const struct FRotator& Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, bool bAutoDestroy);
	class UAtomComponent* SpawnSound2D(class UObject* WorldContextObject, class USoundAtomCue* Sound, float PitchMultiplier, float StartTime, bool bPersistAcrossLevelTransition, bool bAutoDestroy);
	void PlaySoundForAnimNotify(class USoundAtomCue* Sound, class USceneComponent* AttachToComponent, class FName AttachPointName, const struct FVector& Location, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings);
	class UAtomComponent* PlaySoundAttached(class USoundAtomCue* Sound, class USceneComponent* AttachToComponent, class FName AttachPointName, const struct FVector& Location, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings);
	void PlaySoundAtLocation(class UObject* WorldContextObject, class USoundAtomCue* Sound, const struct FVector& Location, const struct FRotator& Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings);
	void PauseAudioOutput(bool bPause);
	bool LoadAtomConfig(class USoundAtomConfig* AcfObject);
	class UAtomComponent* CreateRootedAtomComponent(class UObject* WorldContextObject, bool bAutoDestroy);
};

// 0x0 (0x28 - 0x28)
// Class CriWareRuntime.AtomTriggerTableFunctionLibrary
class UAtomTriggerTableFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAtomTriggerTableFunctionLibrary* GetDefaultObj();

	bool GetDataTableRowFromName(class UDataTable* Table, class FName RowName, struct FAtomTriggerRow* OutRow);
};

// 0x58 (0x290 - 0x238)
// Class CriWareRuntime.CriFsBinderComponent
class UCriFsBinderComponent : public USceneComponent
{
public:
	class FString                                FilePath;                                          // 0x238(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnBindCompleted;                                   // 0x248(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnBindError;                                       // 0x258(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_829[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCriFsBinderComponent* GetDefaultObj();

	void Stop();
	void OnBindError__DelegateSignature();
	void OnBindCompleted__DelegateSignature();
	enum class ECriFsBinderStatus GetStatus();
	void Bind();
};

// 0x8 (0x330 - 0x328)
// Class CriWareRuntime.CriFsLoader
class ACriFsLoader : public AActor
{
public:
	class UCriFsLoaderComponent*                 LoaderComponent;                                   // 0x328(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ACriFsLoader* GetDefaultObj();

};

// 0x78 (0x2B0 - 0x238)
// Class CriWareRuntime.CriFsLoaderComponent
class UCriFsLoaderComponent : public USceneComponent
{
public:
	class FString                                FilePath;                                          // 0x238(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLoadCompleted;                                   // 0x248(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLoadError;                                       // 0x258(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_867[0x48];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCriFsLoaderComponent* GetDefaultObj();

	void OnLoadError__DelegateSignature();
	void OnLoadCompleted__DelegateSignature();
	void Load();
	enum class ECriFsLoaderStatus GetStatus();
	TArray<uint8> GetDataArray();
};

// 0x0 (0x28 - 0x28)
// Class CriWareRuntime.CriWareFunctionLibrary
class UCriWareFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UCriWareFunctionLibrary* GetDefaultObj();

	void SetSpeakerAngleArray(enum class ECriWareSpeakerSystem SpeakerSystem, TArray<float>& Angles);
	void SetGlobalLabelToSelectorByName(const class FString& SelectorName, const class FString& LabelName);
	void SetGameVariableByName(const class FString& GameVariableName, float Value);
};

// 0x0 (0x28 - 0x28)
// Class CriWareRuntime.CriWareInitializer
class UCriWareInitializer : public UObject
{
public:

	static class UClass* StaticClass();
	static class UCriWareInitializer* GetDefaultObj();

};

// 0x268 (0x290 - 0x28)
// Class CriWareRuntime.CriWarePluginSettings
class UCriWarePluginSettings : public UObject
{
public:
	bool                                         bNoExistCriWareIni;                                // 0x28(0x1)(Edit, ZeroConstructor, Config, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8E7[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDirectoryPath                        NonAssetContentDir;                                // 0x30(0x10)(Edit, NativeAccessSpecifierPublic)
	class FString                                ContentDir;                                        // 0x40(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8EA[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NumBinders;                                        // 0x60(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8ED[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxBinds;                                          // 0x68(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8EF[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NumLoaders;                                        // 0x70(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8F0[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxPath;                                           // 0x78(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8F2[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         OutputsLogFileSystem;                              // 0x80(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8F7[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PS4_FileAccessThreadAffinityMask;                  // 0x84(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8F8[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PS4_DataDecompressionThreadAffinityMask;           // 0x8C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8FC[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PS4_MemoryFileSystemThreadAffinityMask;            // 0x94(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8FD[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PS4_FileAccessThreadPriority;                      // 0x9C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_902[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PS4_DataDecompressionThreadPriority;               // 0xA4(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_904[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PS4_MemoryFileSystemThreadPriority;                // 0xAC(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_90B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         AutomaticallyCreateCueAsset;                       // 0xB4(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UsesInGamePreview;                                 // 0xB5(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_90D[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         OutputsLogAtom;                                    // 0xB7(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_910[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxVirtualVoices;                                  // 0xBC(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_913[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NumStandardMemoryVoices;                           // 0xC4(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_918[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        StandardMemoryVoiceNumChannels;                    // 0xCC(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_91E[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        StandardMemoryVoiceSamplingRate;                   // 0xD4(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_921[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NumStandardStreamingVoices;                        // 0xDC(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_924[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        StandardStreamingVoiceNumChannels;                 // 0xE4(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_927[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        StandardStreamingVoiceSamplingRate;                // 0xEC(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_929[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSoftObjectPath                       AtomConfig;                                        // 0xF8(0x18)(Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_92A[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                AcfFileName;                                       // 0x128(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DistanceFactor;                                    // 0x138(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_930[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EAtomSoundRendererType            SoundRendererTypeUI;                               // 0x140(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_93B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SoundRendererType;                                 // 0x144(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_93E[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAtomAsrRackConfigUI>          AsrRackConfigUI;                                   // 0x150(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FAtomAsrRackConfig>            AsrRackConfig;                                     // 0x160(0x10)(ZeroConstructor, Config, NativeAccessSpecifierPublic)
	uint8                                        Pad_946[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Hardware1;                                         // 0x180(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Hardware2;                                         // 0x190(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Hardware3;                                         // 0x1A0(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Hardware4;                                         // 0x1B0(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HcaMxVoiceSamplingRate;                            // 0x1C0(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_951[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NumHcaMxMemoryVoices;                              // 0x1C8(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_953[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        HcaMxMemoryVoiceNumChannels;                       // 0x1D0(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_957[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NumHcaMxStreamingVoices;                           // 0x1D8(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_95B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        HcaMxStreamingVoiceNumChannels;                    // 0x1E0(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_95E[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         WASAPI_IsExclusive;                                // 0x1E8(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_961[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        WASAPI_BitsPerSample;                              // 0x1EC(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_962[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        WASAPI_SamplingRate;                               // 0x1F4(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_96B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        WASAPI_NumChannels;                                // 0x1FC(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_96F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PS4_ServerThreadAffinityMask;                      // 0x204(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_973[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PS4_OutputThreadAffinityMask;                      // 0x20C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_975[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PS4_ServerThreadPriority;                          // 0x214(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_977[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PS4_OutputThreadPriority;                          // 0x21C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_979[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         PS4_UseAudio3d;                                    // 0x224(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_97C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PS4_NumberOfAudio3dMemoryVoices;                   // 0x228(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_97E[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PS4_SamplingRateOfAudio3dMemoryVoices;             // 0x230(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_980[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PS4_NumberOfAudio3dStreamingVoices;                // 0x238(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_983[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PS4_SamplingRateOfAudio3dStreamingVoices;          // 0x240(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_986[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         InitializeMana;                                    // 0x248(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_988[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         EnableDecodeSkip;                                  // 0x24A(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_98B[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxDecoderHandles;                                 // 0x24C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_98E[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxManaBPS;                                        // 0x254(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_991[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxManaStreams;                                    // 0x25C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_993[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         UseH264Decoder;                                    // 0x264(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_994[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bUseManaStartupMovies;                             // 0x266(0x1)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWaitForMoviesToComplete;                          // 0x267(0x1)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMoviesAreSkippable;                               // 0x268(0x1)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9A1[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        StartupMovies;                                     // 0x270(0x10)(Edit, ZeroConstructor, Config, GlobalConfig, AdvancedDisplay, NativeAccessSpecifierPublic)
	uint8                                        Pad_9A7[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCriWarePluginSettings* GetDefaultObj();

};

// 0x130 (0x220 - 0xF0)
// Class CriWareRuntime.ManaComponent
class UManaComponent : public UActorComponent
{
public:
	class UManaTexture*                          Movie;                                             // 0xF0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnEventPoint;                                      // 0xF8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnSubtitleChanged;                                 // 0x108(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnStatusChanged;                                   // 0x118(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UDelegateProperty_                           OnRequestData;                                     // 0x128(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_B1C[0x40];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UManaPlaylist*                         Playlist;                                          // 0x178(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        PlaylistIndex;                                     // 0x180(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bLoop;                                             // 0x184(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B1E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        AudioTrack;                                        // 0x188(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        SubAudioTrack;                                     // 0x18C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        ExtraAudioTrack;                                   // 0x190(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bSubtitlesEnabled;                                 // 0x194(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B21[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SubtitlesChannel;                                  // 0x198(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EManaSubtitlesEncoding            SubtitlesEncoding;                                 // 0x19C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EManaFrameAction                  EndFrameAction;                                    // 0x19D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EManaPlaybackTimer                PlaybackTimer;                                     // 0x19E(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B27[0x81];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UManaComponent* GetDefaultObj();

	bool ToIndex(int32 Index);
	void StopAndWaitCompletion();
	void Stop();
	void SetVolume(float Volume);
	void SetTexture(class UManaTexture* Texture);
	void SetSubVolume(float Volume);
	void SetSubAudioTrack(int32 Track);
	void SetPlaybackTimer(enum class EManaPlaybackTimer InPlaybackTimer);
	void SetFile(const class FString& MovieFilePath);
	void SetExtraVolume(float Volume);
	void SetExtraAudioTrack(int32 Track);
	void SetCachedData(TArray<uint8>& DataArray);
	void SetAudioTrack(int32 Track);
	void SeekToPosition(int32 FrameNumber);
	void ResetCachedData();
	bool Previous();
	void PreparePlaylistIndex(int32 Index);
	void Prepare();
	void Play();
	void Pause(bool bPause);
	void OnSubtitleChanged__DelegateSignature(class FText Subtitle);
	void OnStatusChanged__DelegateSignature(enum class EManaComponentStatus Status, class UManaComponent* ManaComponent);
	void OnRequestData__DelegateSignature(class UManaComponent* ManaComponent);
	void OnEventPoint__DelegateSignature(const struct FManaEventPointInfo& EventPointInfo);
	bool Next();
	void Loop(bool bInLoop);
	bool IsReady();
	bool IsPreparing();
	bool IsPlaying();
	bool IsPaused();
	bool IsLooping();
	float GetVolume();
	float GetTime();
	class UManaTexture* GetTexture();
	float GetSubVolume();
	enum class EManaComponentStatus GetStatus();
	class UManaMovie* GetSource();
	int32 GetFrameNumber();
	float GetExtraVolume();
	void EnableSubtitles(bool bEnable);
	void EnableSeamless(bool bEnable);
	void ChangeSubtitlesEncoding(enum class EManaSubtitlesEncoding Encoding);
	void ChangeSubtitlesChannel(int32 Channel);
};

// 0x20 (0xD8 - 0xB8)
// Class CriWareRuntime.ManaComponentTexture
class UManaComponentTexture : public UTexture
{
public:
	int32                                        SizeX;                                             // 0xB8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SizeY;                                             // 0xBC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPixelFormat                      Format;                                            // 0xC0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EManaComponentTextureType         ComponentType;                                     // 0xC1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextureAddress                   AddressX;                                          // 0xC2(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AssetRegistrySearchable, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextureAddress                   AddressY;                                          // 0xC3(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AssetRegistrySearchable, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B37[0x14];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UManaComponentTexture* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class CriWareRuntime.ManaSource
class UManaSource : public UObject
{
public:

	static class UClass* StaticClass();
	static class UManaSource* GetDefaultObj();

};

// 0x40 (0x68 - 0x28)
// Class CriWareRuntime.ManaMovie
class UManaMovie : public UManaSource
{
public:
	TArray<struct FManaVideoTrackInfo>           VideoTracks;                                       // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, Protected, NativeAccessSpecifierProtected)
	TArray<struct FManaAudioTrackInfo>           AudioTracks;                                       // 0x38(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, Protected, NativeAccessSpecifierProtected)
	TArray<struct FManaEventPointInfo>           EventPoints;                                       // 0x48(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, Protected, NativeAccessSpecifierProtected)
	int32                                        NumSubtitleChannels;                               // 0x58(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        MaxSubtitleSize;                                   // 0x5C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bIsAlpha : 1;                                      // Mask: 0x1, PropSize: 0x10x60(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B42[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UManaMovie* GetDefaultObj();

};

// 0x18 (0x80 - 0x68)
// Class CriWareRuntime.FileManaMovie
class UFileManaMovie : public UManaMovie
{
public:
	bool                                         bPrecacheFile;                                     // 0x68(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B50[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                FilePath;                                          // 0x70(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, AssetRegistrySearchable, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFileManaMovie* GetDefaultObj();

	void SetFilePath(const class FString& Path);
};

// 0x8 (0x70 - 0x68)
// Class CriWareRuntime.DataManaMovie
class UDataManaMovie : public UManaMovie
{
public:
	uint8                                        Pad_B59[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDataManaMovie* GetDefaultObj();

	void SetDataArray(TArray<uint8>* InDataArray);
	TArray<uint8> GetDataArray();
};

// 0x18 (0x40 - 0x28)
// Class CriWareRuntime.ManaPlaylist
class UManaPlaylist : public UManaSource
{
public:
	TArray<class UManaMovie*>                    Movies;                                            // 0x28(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	bool                                         bIsAlpha;                                          // 0x38(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsMixedTypes;                                     // 0x39(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsSeamless;                                       // 0x3A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B93[0x5];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UManaPlaylist* GetDefaultObj();

	void RemoveAt(int32 Index);
	void Remove(class UManaMovie* ManaMovie);
	int32 Num();
	bool IsSeamless();
	bool IsMixedTypes();
	bool IsAlpha();
	void Insert(class UManaMovie* ManaMovie, int32 Index);
	class UManaMovie* GetRandom(int32* InOutIndex);
	class UManaMovie* GetPrevious(int32* InOutIndex);
	class UManaMovie* GetNext(int32* InOutIndex);
	class UManaMovie* Get(int32 Index);
	void Add(class UManaMovie* ManaMovie);
};

// 0x70 (0x128 - 0xB8)
// Class CriWareRuntime.ManaTexture
class UManaTexture : public UTexture
{
public:
	class UManaSource*                           MovieSource;                                       // 0xB8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                MovieFilePath;                                     // 0xC0(0x10)(ZeroConstructor, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bRenderToTexture : 1;                              // Mask: 0x1, PropSize: 0x10xD0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_54 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_B9F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TargetGamma;                                       // 0xD4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bHDR : 1;                                          // Mask: 0x1, PropSize: 0x10xD8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AssetRegistrySearchable, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_55 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_BA0[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ETextureAddress                   AddressX;                                          // 0xDC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextureAddress                   AddressY;                                          // 0xDD(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BA2[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          ClearColor;                                        // 0xE0(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, AssetRegistrySearchable, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPixelFormat                      OverrideFormat;                                    // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BA4[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UManaComponentTexture*>         ComponentTextures;                                 // 0xF8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_BA5[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UManaTexture* GetDefaultObj();

	void SetMovieSource(class UManaSource* InSource);
};

// 0xF8 (0x138 - 0x40)
// Class CriWareRuntime.MaterialExpressionManaColorSpaceConverter
class UMaterialExpressionManaColorSpaceConverter : public UMaterialExpression
{
public:
	struct FExpressionInput                      Luma;                                              // 0x40(0x30)(NoDestructor, NativeAccessSpecifierPublic)
	struct FExpressionInput                      ChromaB;                                           // 0x70(0x30)(NoDestructor, NativeAccessSpecifierPublic)
	struct FExpressionInput                      ChromaR;                                           // 0xA0(0x30)(NoDestructor, NativeAccessSpecifierPublic)
	struct FExpressionInput                      Alpha;                                             // 0xD0(0x30)(NoDestructor, NativeAccessSpecifierPublic)
	struct FExpressionInput                      Gamma;                                             // 0x100(0x30)(NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bH264;                                             // 0x130(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EManaColorSpace                   ColorSpace;                                        // 0x131(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseGammaExponent;                                 // 0x132(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BC4[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ConstGamma;                                        // 0x134(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMaterialExpressionManaColorSpaceConverter* GetDefaultObj();

};

// 0x90 (0xD0 - 0x40)
// Class CriWareRuntime.MaterialExpressionManaMovieFormatSwitch
class UMaterialExpressionManaMovieFormatSwitch : public UMaterialExpression
{
public:
	struct FExpressionInput                      Inputs[0x3];                                       // 0x40(0x90)(NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMaterialExpressionManaMovieFormatSwitch* GetDefaultObj();

};

// 0x0 (0x90 - 0x90)
// Class CriWareRuntime.MatineeTrackAtomFloatBase
class UMatineeTrackAtomFloatBase : public UInterpTrackFloatBase
{
public:

	static class UClass* StaticClass();
	static class UMatineeTrackAtomFloatBase* GetDefaultObj();

};

// 0x0 (0x90 - 0x90)
// Class CriWareRuntime.MatineeTrackAisacControlName
class UMatineeTrackAisacControlName : public UMatineeTrackAtomFloatBase
{
public:

	static class UClass* StaticClass();
	static class UMatineeTrackAisacControlName* GetDefaultObj();

};

// 0x0 (0x70 - 0x70)
// Class CriWareRuntime.MatineeTrackAtomBase
class UMatineeTrackAtomBase : public UInterpTrack
{
public:

	static class UClass* StaticClass();
	static class UMatineeTrackAtomBase* GetDefaultObj();

};

// 0x8 (0x78 - 0x70)
// Class CriWareRuntime.MatineeTrackAtomSoundBase
class UMatineeTrackAtomSoundBase : public UMatineeTrackAtomBase
{
public:
	bool                                         bContinueSoundOnMatineeEnd;                        // 0x70(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BE0[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMatineeTrackAtomSoundBase* GetDefaultObj();

};

// 0x30 (0xA8 - 0x78)
// Class CriWareRuntime.MatineeTrackAtom
class UMatineeTrackAtom : public UMatineeTrackAtomSoundBase
{
public:
	TArray<class FString>                        AisacList;                                         // 0x78(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        SelectorList;                                      // 0x88(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FAtomTrackKeyframe>            KeyframeList;                                      // 0x98(0x10)(Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMatineeTrackAtom* GetDefaultObj();

};

// 0x18 (0x88 - 0x70)
// Class CriWareRuntime.MatineeTrackAtomCategoryName
class UMatineeTrackAtomCategoryName : public UMatineeTrackAtomBase
{
public:
	class FString                                CategoryName;                                      // 0x70(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableVolumeTrack;                                // 0x80(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BF0[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMatineeTrackAtomCategoryName* GetDefaultObj();

};

// 0x0 (0x90 - 0x90)
// Class CriWareRuntime.MatineeTrackAtomCategoryVolume
class UMatineeTrackAtomCategoryVolume : public UMatineeTrackAtomFloatBase
{
public:

	static class UClass* StaticClass();
	static class UMatineeTrackAtomCategoryVolume* GetDefaultObj();

};

// 0x38 (0xB0 - 0x78)
// Class CriWareRuntime.MatineeTrackAtomCueId
class UMatineeTrackAtomCueId : public UMatineeTrackAtomSoundBase
{
public:
	TArray<class FString>                        AisacList;                                         // 0x78(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        SelectorList;                                      // 0x88(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class USoundAtomCueSheet*                    CueSheet;                                          // 0x98(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAtomCueIdTrackKeyframe>       KeyframeList;                                      // 0xA0(0x10)(Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMatineeTrackAtomCueId* GetDefaultObj();

};

// 0x38 (0xB0 - 0x78)
// Class CriWareRuntime.MatineeTrackAtomCueName
class UMatineeTrackAtomCueName : public UMatineeTrackAtomSoundBase
{
public:
	TArray<class FString>                        AisacList;                                         // 0x78(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        SelectorList;                                      // 0x88(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class USoundAtomCueSheet*                    CueSheet;                                          // 0x98(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAtomCueNameTrackKeyframe>     KeyframeList;                                      // 0xA0(0x10)(Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMatineeTrackAtomCueName* GetDefaultObj();

};

// 0x10 (0x80 - 0x70)
// Class CriWareRuntime.MatineeTrackAtomSelector
class UMatineeTrackAtomSelector : public UInterpTrack
{
public:
	TArray<struct FAtomSelectorTrackKeyframe>    KeyframeList;                                      // 0x70(0x10)(Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMatineeTrackAtomSelector* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class CriWareRuntime.MatineeTrackInstAtom
class UMatineeTrackInstAtom : public UInterpTrackInst
{
public:
	float                                        LastUpdatePosition;                                // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C0B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAtomComponent*                        AtomComponent;                                     // 0x30(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMatineeTrackAtomSoundBase*            AtomTrack;                                         // 0x38(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C0E[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMatineeTrackInstAtom* GetDefaultObj();

};

// 0x158 (0x238 - 0xE0)
// Class CriWareRuntime.MovieSceneAtomSection
class UMovieSceneAtomSection : public UMovieSceneSection
{
public:
	class USoundAtomCue*                         Sound;                                             // 0xE0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        StartOffset;                                       // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_C15[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMovieSceneFloatChannel               SoundVolume;                                       // 0xF0(0xA0)(NativeAccessSpecifierPrivate)
	struct FMovieSceneFloatChannel               PitchMultiplier;                                   // 0x190(0xA0)(NativeAccessSpecifierPrivate)
	bool                                         bSuppressSubtitles;                                // 0x230(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_C18[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneAtomSection* GetDefaultObj();

};

// 0x10 (0x68 - 0x58)
// Class CriWareRuntime.MovieSceneAtomTrack
class UMovieSceneAtomTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>            AtomSections;                                      // 0x58(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMovieSceneAtomTrack* GetDefaultObj();

};

// 0x80 (0xA8 - 0x28)
// Class CriWareRuntime.SoundAtomConfig
class USoundAtomConfig : public UObject
{
public:
	class FString                                AcfFilePath;                                       // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C28[0x70];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USoundAtomConfig* GetDefaultObj();

};

// 0x70 (0x98 - 0x28)
// Class CriWareRuntime.SoundAtomCue
class USoundAtomCue : public UObject
{
public:
	uint8                                        Pad_C41[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundAtomCueSheet*                    CueSheet;                                          // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CueName;                                           // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bApplyAtomParameter;                               // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C43[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bOverrideConcurrency : 1;                          // Mask: 0x1, PropSize: 0x10x54(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_57 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_C45[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundConcurrency*                     SoundConcurrencySettings;                          // 0x58(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoundConcurrencySettings             ConcurrencyOverrides;                              // 0x60(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Priority;                                          // 0x70(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C48[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundAttenuation*                     DefaultAttenuation;                                // 0x78(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C49[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USoundAtomCue* GetDefaultObj();

	class FString GetUserData();
	int32 GetLength();
};

// 0xD8 (0x100 - 0x28)
// Class CriWareRuntime.SoundAtomCueSheet
class USoundAtomCueSheet : public UObject
{
public:
	bool                                         Contains;                                          // 0x28(0x1)(Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C88[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                AcbFilePath;                                       // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C89[0x70];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bOverrideAwbDirectory;                             // 0xB0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C8B[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDirectoryPath                        AwbDirectory;                                      // 0xB8(0x10)(Edit, NativeAccessSpecifierPublic)
	class FString                                CueSheetName;                                      // 0xC8(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumSlots;                                          // 0xD8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C8D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCriFsBinderComponent*                 BinderComponent;                                   // 0xE0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C8E[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USoundAtomCueSheet* GetDefaultObj();

	void ReleaseAcb(class FName AcbName);
	class USoundAtomCueSheet* LoadAtomCueSheet(class USoundAtomCueSheet* CueSheet);
	class USoundAtomCueSheet* LoadAcb(class FName AcbName);
	bool IsLoaded();
	class USoundAtomCue* GetAtomCueByName(const class FString& CueName);
	class USoundAtomCue* GetAtomCueByIndex(int32 CueIndex);
	class USoundAtomCue* GetAtomCueById(int32 CueId);
	void DetachDspBusSetting();
	void AttachDspBusSetting(const class FString& SettingName);
	void ApplyDspBusSnapshot(const class FString& SnapshotName, int32 Milliseconds);
};

}


