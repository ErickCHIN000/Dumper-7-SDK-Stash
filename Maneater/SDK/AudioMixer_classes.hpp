#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4E0 (0x6D0 - 0x1F0)
// Class AudioMixer.SynthComponent
class USynthComponent : public USceneComponent
{
public:
	uint8                                        bAutoDestroy : 1;                                  // Mask: 0x1, PropSize: 0x10x1F0(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bStopWhenOwnerDestroyed : 1;                       // Mask: 0x2, PropSize: 0x10x1F0(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAllowSpatialization : 1;                          // Mask: 0x4, PropSize: 0x10x1F0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideAttenuation : 1;                          // Mask: 0x8, PropSize: 0x10x1F0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_10 : 4;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_19B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bOutputToBusOnly : 1;                              // Mask: 0x1, PropSize: 0x10x1F4(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_11 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_19C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundAttenuation*                     AttenuationSettings;                               // 0x1F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoundAttenuationSettings             AttenuationOverrides;                              // 0x200(0x3A0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class USoundConcurrency*                     ConcurrencySettings;                               // 0x5A0(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSet<class USoundConcurrency*>               ConcurrencySet;                                    // 0x5A8(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class USoundClass*                           SoundClass;                                        // 0x5F8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundEffectSourcePresetChain*         SourceEffectChain;                                 // 0x600(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundSubmixBase*                      SoundSubmix;                                       // 0x608(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSoundSubmixSendInfo>          SoundSubmixSends;                                  // 0x610(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSoundSourceBusSendInfo>       BusSends;                                          // 0x620(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoundModulation                      Modulation;                                        // 0x630(0x10)(Edit, NativeAccessSpecifierPublic)
	TArray<struct FSoundSourceBusSendInfo>       PreEffectBusSends;                                 // 0x640(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsUISound : 1;                                    // Mask: 0x1, PropSize: 0x10x650(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsPreviewSound : 1;                               // Mask: 0x2, PropSize: 0x10x650(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_13 : 6;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1AA[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        EnvelopeFollowerAttackTime;                        // 0x654(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EnvelopeFollowerReleaseTime;                       // 0x658(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AD[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnAudioEnvelopeValue;                              // 0x660(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AF[0x20];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USynthSound*                           Synth;                                             // 0x690(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAudioComponent*                       AudioComponent;                                    // 0x698(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1B2[0x30];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USynthComponent* GetDefaultObj();

	void Stop();
	void Start();
	void SetVolumeMultiplier(float VolumeMultiplier);
	void SetSubmixSend(class USoundSubmixBase* Submix, float SendLevel);
	bool IsPlaying();
};

// 0x80 (0xA8 - 0x28)
// Class AudioMixer.AudioGenerator
class UAudioGenerator : public UObject
{
public:
	uint8                                        Pad_1BF[0x80];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAudioGenerator* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AudioMixer.AudioMixerBlueprintLibrary
class UAudioMixerBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAudioMixerBlueprintLibrary* GetDefaultObj();

	float TrimAudioCache(float InMegabytesToFree);
	class USoundWave* StopRecordingOutput(class UObject* WorldContextObject, enum class EAudioRecordingExportType ExportType, const class FString& Name, const class FString& Path, class USoundSubmix* SubmixToRecord, class USoundWave* ExistingSoundWaveToOverwrite);
	void StopAnalyzingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToStopAnalyzing);
	void StartRecordingOutput(class UObject* WorldContextObject, float ExpectedDuration, class USoundSubmix* SubmixToRecord);
	void StartAnalyzingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToAnalyze, enum class EFFTSize FFTSize, enum class EFFTPeakInterpolationMethod InterpolationMethod, enum class EFFTWindowType WindowType, float HopSize);
	void SetBypassSourceEffectChainEntry(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int32 EntryIndex, bool bBypassed);
	void ResumeRecordingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToPause);
	void ReplaceSoundEffectSubmix(class UObject* WorldContextObject, class USoundSubmix* InSoundSubmix, int32 SubmixChainIndex, class USoundEffectSubmixPreset* SubmixEffectPreset);
	void RemoveSubmixEffectPresetAtIndex(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, int32 SubmixChainIndex);
	void RemoveSubmixEffectPreset(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset);
	void RemoveSourceEffectFromPresetChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int32 EntryIndex);
	void RemoveMasterSubmixEffect(class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset);
	void PrimeSoundForPlayback(class USoundWave* SoundWave, FDelegateProperty_ OnLoadCompletion);
	void PrimeSoundCueForPlayback(class USoundCue* SoundCue);
	void PauseRecordingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToPause);
	void GetPhaseForFrequencies(class UObject* WorldContextObject, TArray<float>& Frequencies, TArray<float>* Phases, class USoundSubmix* SubmixToAnalyze);
	int32 GetNumberOfEntriesInSourceEffectChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain);
	void GetMagnitudeForFrequencies(class UObject* WorldContextObject, TArray<float>& Frequencies, TArray<float>* Magnitudes, class USoundSubmix* SubmixToAnalyze);
	void ClearSubmixEffects(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix);
	void ClearMasterSubmixEffects(class UObject* WorldContextObject);
	int32 AddSubmixEffect(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset);
	void AddSourceEffectToPresetChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, const struct FSourceEffectChainEntry& Entry);
	void AddMasterSubmixEffect(class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset);
};

// 0xC8 (0x108 - 0x40)
// Class AudioMixer.SubmixEffectDynamicsProcessorPreset
class USubmixEffectDynamicsProcessorPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_358[0x78];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSubmixEffectDynamicsProcessorSettings Settings;                                          // 0xB8(0x50)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USubmixEffectDynamicsProcessorPreset* GetDefaultObj();

	void SetSettings(struct FSubmixEffectDynamicsProcessorSettings& Settings);
	void SetExternalSubmix(class USoundSubmix* Submix);
};

// 0x48 (0x88 - 0x40)
// Class AudioMixer.SubmixEffectSubmixEQPreset
class USubmixEffectSubmixEQPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_368[0x38];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSubmixEffectSubmixEQSettings         Settings;                                          // 0x78(0x10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USubmixEffectSubmixEQPreset* GetDefaultObj();

	void SetSettings(struct FSubmixEffectSubmixEQSettings& InSettings);
};

// 0x90 (0xD0 - 0x40)
// Class AudioMixer.SubmixEffectReverbPreset
class USubmixEffectReverbPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_38D[0x5C];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSubmixEffectReverbSettings           Settings;                                          // 0x9C(0x34)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USubmixEffectReverbPreset* GetDefaultObj();

	void SetSettingsWithReverbEffect(class UReverbEffect* InReverbEffect, float WetLevel, float DryLevel);
	void SetSettings(struct FSubmixEffectReverbSettings& InSettings);
};

// 0x98 (0xD8 - 0x40)
// Class AudioMixer.SubmixEffectReverbFastPreset
class USubmixEffectReverbFastPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_3C5[0x60];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSubmixEffectReverbFastSettings       Settings;                                          // 0xA0(0x38)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USubmixEffectReverbFastPreset* GetDefaultObj();

	void SetSettingsWithReverbEffect(class UReverbEffect* InReverbEffect, float WetLevel, float DryLevel);
	void SetSettings(struct FSubmixEffectReverbFastSettings& InSettings);
};

// 0x20 (0x380 - 0x360)
// Class AudioMixer.SynthSound
class USynthSound : public USoundWaveProcedural
{
public:
	class USynthComponent*                       OwningSynthComponent;                              // 0x360(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3CF[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USynthSound* GetDefaultObj();

};

}


