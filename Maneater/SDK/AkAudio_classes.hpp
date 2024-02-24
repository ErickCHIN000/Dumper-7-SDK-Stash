#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x308 - 0x278)
// Class AkAudio.AkAcousticPortal
class AAkAcousticPortal : public AVolume
{
public:
	enum class EAkAcousticPortalState            InitialState;                                      // 0x278(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B7[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ObstructionRefreshInterval;                        // 0x27C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionChannel                 ObstructionCollisionChannel;                       // 0x280(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B8[0x87];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AAkAcousticPortal* GetDefaultObj();

	void OpenPortal();
	enum class EAkAcousticPortalState GetCurrentState();
	void ClosePortal();
};

// 0x0 (0x1F0 - 0x1F0)
// Class AkAudio.AkPortalComponent
class UAkPortalComponent : public USceneComponent
{
public:

	static class UClass* StaticClass();
	static class UAkPortalComponent* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class AkAudio.AkAudioType
class UAkAudioType : public UObject
{
public:
	uint32                                       ShortID;                                           // 0x28(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BB[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UObject*>                       UserData;                                          // 0x30(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAkAudioType* GetDefaultObj();

};

// 0x0 (0x40 - 0x40)
// Class AkAudio.AkAcousticTexture
class UAkAcousticTexture : public UAkAudioType
{
public:

	static class UClass* StaticClass();
	static class UAkAcousticTexture* GetDefaultObj();

};

// 0x40 (0x260 - 0x220)
// Class AkAudio.AkAmbientSound
class AAkAmbientSound : public AActor
{
public:
	class UAkAudioEvent*                         AkAudioEvent;                                      // 0x220(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkComponent*                          AkComponent;                                       // 0x228(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         StopWhenOwnerIsDestroyed;                          // 0x230(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, SimpleDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AutoPost;                                          // 0x231(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, SimpleDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C5[0x2E];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AAkAmbientSound* GetDefaultObj();

	void StopAmbientSound();
	void StartAmbientSound();
};

// 0xD0 (0xF8 - 0x28)
// Class AkAudio.AkAndroidInitializationSettings
class UAkAndroidInitializationSettings : public UObject
{
public:
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;                                    // 0x28(0x68)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                             // 0x90(0x28)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkAndroidAdvancedInitializationSettings AdvancedSettings;                                  // 0xB8(0x40)(Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAkAndroidInitializationSettings* GetDefaultObj();

	void MigrateMultiCoreRendering(bool NewValue);
};

// 0x48 (0x70 - 0x28)
// Class AkAudio.AkPlatformInfo
class UAkPlatformInfo : public UObject
{
public:
	uint8                                        Pad_CF[0x48];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAkPlatformInfo* GetDefaultObj();

};

// 0x0 (0x70 - 0x70)
// Class AkAudio.AkAndroidPlatformInfo
class UAkAndroidPlatformInfo : public UAkPlatformInfo
{
public:

	static class UClass* StaticClass();
	static class UAkAndroidPlatformInfo* GetDefaultObj();

};

// 0x40 (0x68 - 0x28)
// Class AkAudio.AkAssetData
class UAkAssetData : public UObject
{
public:
	uint8                                        Pad_D1[0x40];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAkAssetData* GetDefaultObj();

};

// 0x20 (0x88 - 0x68)
// Class AkAudio.AkAssetDataWithMedia
class UAkAssetDataWithMedia : public UAkAssetData
{
public:
	TArray<TSoftObjectPtr<class UAkMediaAsset>>  MediaList;                                         // 0x68(0x10)(Edit, ZeroConstructor, EditConst, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D4[0x10];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAkAssetDataWithMedia* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class AkAudio.AkAssetPlatformData
class UAkAssetPlatformData : public UObject
{
public:
	class UAkAssetData*                          CurrentAssetData;                                  // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAkAssetPlatformData* GetDefaultObj();

};

// 0x18 (0x58 - 0x40)
// Class AkAudio.AkAssetBase
class UAkAssetBase : public UAkAudioType
{
public:
	class UAkAssetPlatformData*                  PlatformAssetData;                                 // 0x40(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DE[0x10];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAkAssetBase* GetDefaultObj();

};

// 0x70 (0xC8 - 0x58)
// Class AkAudio.AkAudioBank
class UAkAudioBank : public UAkAssetBase
{
public:
	bool                                         AutoLoad;                                          // 0x58(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EC[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FString, TSoftObjectPtr<class UAkAssetPlatformData>> LocalizedPlatformAssetDataMap;                     // 0x60(0x50)(Edit, EditConst, UObjectWrapper, NativeAccessSpecifierPublic)
	class UAkAssetPlatformData*                  CurrentLocalizedPlatformAssetData;                 // 0xB0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_ED[0x10];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAkAudioBank* GetDefaultObj();

};

// 0x60 (0x88 - 0x28)
// Class AkAudio.AkAssetDataSwitchContainerData
class UAkAssetDataSwitchContainerData : public UObject
{
public:
	TSoftObjectPtr<class UAkGroupValue>          GroupValue;                                        // 0x28(0x28)(Edit, EditConst, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkGroupValue*                         DefaultGroupValue;                                 // 0x50(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UAkMediaAsset>>  MediaList;                                         // 0x58(0x10)(Edit, ZeroConstructor, EditConst, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UAkAssetDataSwitchContainerData*> Children;                                          // 0x68(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F3[0x10];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAkAssetDataSwitchContainerData* GetDefaultObj();

};

// 0x28 (0xB0 - 0x88)
// Class AkAudio.AkAssetDataSwitchContainer
class UAkAssetDataSwitchContainer : public UAkAssetDataWithMedia
{
public:
	TArray<class UAkAssetDataSwitchContainerData*> SwitchContainers;                                  // 0x88(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkGroupValue*                         DefaultGroupValue;                                 // 0x98(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FA[0x10];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAkAssetDataSwitchContainer* GetDefaultObj();

};

// 0x1C8 (0x278 - 0xB0)
// Class AkAudio.AkAudioEventData
class UAkAudioEventData : public UAkAssetDataSwitchContainer
{
public:
	float                                        MaxAttenuationRadius;                              // 0xB0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsInfinite;                                        // 0xB4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_103[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinimumDuration;                                   // 0xB8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaximumDuration;                                   // 0xBC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, class UAkAssetDataSwitchContainer*> LocalizedMedia;                                    // 0xC0(0x50)(Edit, EditConst, NativeAccessSpecifierPublic)
	TSet<class UAkAudioEvent*>                   PostedEvents;                                      // 0x110(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic)
	TSet<class UAkAuxBus*>                       UserDefinedSends;                                  // 0x160(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic)
	TSet<class UAkTrigger*>                      PostedTriggers;                                    // 0x1B0(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic)
	TSet<class UAkGroupValue*>                   GroupValues;                                       // 0x200(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic)
	uint8                                        Pad_10A[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAkAudioEventData* GetDefaultObj();

};

// 0x80 (0xD8 - 0x58)
// Class AkAudio.AkAudioEvent
class UAkAudioEvent : public UAkAssetBase
{
public:
	TMap<class FString, TSoftObjectPtr<class UAkAssetPlatformData>> LocalizedPlatformAssetDataMap;                     // 0x58(0x50)(Edit, EditConst, UObjectWrapper, NativeAccessSpecifierPublic)
	class UAkAudioBank*                          RequiredBank;                                      // 0xA8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAssetPlatformData*                  CurrentLocalizedPlatformData;                      // 0xB0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MaxAttenuationRadius;                              // 0xB8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         IsInfinite;                                        // 0xBC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_134[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinimumDuration;                                   // 0xC0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MaximumDuration;                                   // 0xC4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_135[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAkAudioEvent* GetDefaultObj();

	float GetMinimumDuration();
	float GetMaximumDuration();
	float GetMaxAttenuationRadius();
	bool GetIsInfinite();
};

// 0x20 (0x210 - 0x1F0)
// Class AkAudio.AkGameObject
class UAkGameObject : public USceneComponent
{
public:
	class UAkAudioEvent*                         AkAudioEvent;                                      // 0x1F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EventName;                                         // 0x1F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_172[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAkGameObject* GetDefaultObj();

	void Stop();
	void PostAssociatedAkEventAsync(class UObject* WorldContextObject, int32 CallbackMask, FDelegateProperty_& PostEventCallback, TArray<struct FAkExternalSourceInfo>& ExternalSources, const struct FLatentActionInfo& LatentInfo, int32* PlayingID);
	int32 PostAssociatedAkEvent(int32 CallbackMask, FDelegateProperty_& PostEventCallback, TArray<struct FAkExternalSourceInfo>& ExternalSources);
	void PostAkEventAsync(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, int32* PlayingID, int32 CallbackMask, FDelegateProperty_& PostEventCallback, TArray<struct FAkExternalSourceInfo>& ExternalSources, const struct FLatentActionInfo& LatentInfo);
	int32 PostAkEvent(class UAkAudioEvent* AkEvent, int32 CallbackMask, FDelegateProperty_& PostEventCallback, TArray<struct FAkExternalSourceInfo>& ExternalSources, const class FString& In_EventName);
};

// 0x1C0 (0x3D0 - 0x210)
// Class AkAudio.AkComponent
class UAkComponent : public UAkGameObject
{
public:
	bool                                         bUseSpatialAudio;                                  // 0x210(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_26C[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ECollisionChannel                 OcclusionCollisionChannel;                         // 0x218(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_26E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        EnableSpotReflectors : 1;                          // Mask: 0x1, PropSize: 0x10x21C(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_19 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_274[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkAuxBus*                             EarlyReflectionAuxBus;                             // 0x220(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                EarlyReflectionAuxBusName;                         // 0x228(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        EarlyReflectionOrder;                              // 0x238(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        EarlyReflectionBusSendGain;                        // 0x23C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        EarlyReflectionMaxPathLength;                      // 0x240(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        RoomReverbAuxBusGain;                              // 0x244(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        DiffractionMaxEdges;                               // 0x248(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        DiffractionMaxPaths;                               // 0x24C(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        DiffractionMaxPathLength;                          // 0x250(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        DrawFirstOrderReflections : 1;                     // Mask: 0x1, PropSize: 0x10x254(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        DrawSecondOrderReflections : 1;                    // Mask: 0x2, PropSize: 0x10x254(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        DrawHigherOrderReflections : 1;                    // Mask: 0x4, PropSize: 0x10x254(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        DrawDiffraction : 1;                               // Mask: 0x8, PropSize: 0x10x254(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1A : 4;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_281[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         StopWhenOwnerDestroyed;                            // 0x258(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_282[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AttenuationScalingFactor;                          // 0x25C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OcclusionRefreshInterval;                          // 0x260(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseReverbVolumes;                                 // 0x264(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_283[0x16B];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAkComponent* GetDefaultObj();

	void UseReverbVolumes(bool InUseReverbVolumes);
	void UseEarlyReflections(class UAkAuxBus* AuxBus, int32 Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, const class FString& AuxBusName);
	void SetSwitch(class UAkSwitchValue* SwitchValue, const class FString& SwitchGroup, const class FString& SwitchState);
	void SetStopWhenOwnerDestroyed(bool bStopWhenOwnerDestroyed);
	void SetRTPCValue(class UAkRtpc* RTPCValue, float Value, int32 InterpolationTimeMs, const class FString& RTPC);
	void SetOutputBusVolume(float BusVolume);
	void SetListeners(TArray<class UAkComponent*>& Listeners);
	void SetEarlyReflectionsVolume(float SendVolume);
	void SetEarlyReflectionsAuxBus(const class FString& AuxBusName);
	void SetAttenuationScalingFactor(float Value);
	void PostTrigger(class UAkTrigger* TriggerValue, const class FString& Trigger);
	void PostAssociatedAkEventAndWaitForEndAsync(int32* PlayingID, TArray<struct FAkExternalSourceInfo>& ExternalSources, const struct FLatentActionInfo& LatentInfo);
	int32 PostAssociatedAkEventAndWaitForEnd(TArray<struct FAkExternalSourceInfo>& ExternalSources, const struct FLatentActionInfo& LatentInfo);
	int32 PostAkEventByName(const class FString& In_EventName);
	void PostAkEventAndWaitForEndAsync(class UAkAudioEvent* AkEvent, int32* PlayingID, TArray<struct FAkExternalSourceInfo>& ExternalSources, const struct FLatentActionInfo& LatentInfo);
	int32 PostAkEventAndWaitForEnd(class UAkAudioEvent* AkEvent, const class FString& In_EventName, TArray<struct FAkExternalSourceInfo>& ExternalSources, const struct FLatentActionInfo& LatentInfo);
	void GetRTPCValue(class UAkRtpc* RTPCValue, enum class ERTPCValueType InputValueType, float* Value, enum class ERTPCValueType* OutputValueType, const class FString& RTPC, int32 PlayingID);
	float GetAttenuationRadius();
};

// 0x10 (0x3E0 - 0x3D0)
// Class AkAudio.AkAudioInputComponent
class UAkAudioInputComponent : public UAkComponent
{
public:
	uint8                                        Pad_2AB[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAkAudioInputComponent* GetDefaultObj();

	int32 PostAssociatedAudioInputEvent();
};

// 0x8 (0x60 - 0x58)
// Class AkAudio.AkAuxBus
class UAkAuxBus : public UAkAssetBase
{
public:
	class UAkAudioBank*                          RequiredBank;                                      // 0x58(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAkAuxBus* GetDefaultObj();

};

// 0xA00 (0xB20 - 0x120)
// Class AkAudio.AkCheckBox
class UAkCheckBox : public UContentWidget
{
public:
	uint8                                        Pad_2F7[0x390];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ECheckBoxState                    CheckedState;                                      // 0x4B0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2F9[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           CheckedStateDelegate;                              // 0x4B4(0x10)(ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2FC[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCheckBoxStyle                        WidgetStyle;                                       // 0x4C8(0x580)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0xA48(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsFocusable;                                       // 0xA49(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_300[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAkBoolPropertyToControl              ThePropertyToControl;                              // 0xA50(0x10)(Edit, NativeAccessSpecifierPublic)
	struct FAkWwiseItemToControl                 ItemToControl;                                     // 0xA60(0x40)(Edit, Config, EditConst, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            AkOnCheckStateChanged;                             // 0xAA0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnItemDropped;                                     // 0xAB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPropertyDropped;                                 // 0xAC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_304[0x50];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAkCheckBox* GetDefaultObj();

	void SetIsChecked(bool InIsChecked);
	void SetCheckedState(enum class ECheckBoxState InCheckedState);
	void SetAkItemId(struct FGuid& ItemId);
	void SetAkBoolProperty(const class FString& ItemProperty);
	bool IsPressed();
	bool IsChecked();
	enum class ECheckBoxState GetCheckedState();
	class FString GetAkProperty();
	struct FGuid GetAkItemId();
};

// 0x0 (0x70 - 0x70)
// Class AkAudio.AkChinookPlatformInfo
class UAkChinookPlatformInfo : public UAkPlatformInfo
{
public:

	static class UClass* StaticClass();
	static class UAkChinookPlatformInfo* GetDefaultObj();

};

// 0x0 (0x70 - 0x70)
// Class AkAudio.AkMPXPlatformInfo
class UAkMPXPlatformInfo : public UAkChinookPlatformInfo
{
public:

	static class UClass* StaticClass();
	static class UAkMPXPlatformInfo* GetDefaultObj();

};

// 0x0 (0x70 - 0x70)
// Class AkAudio.AkXSXPlatformInfo
class UAkXSXPlatformInfo : public UAkChinookPlatformInfo
{
public:

	static class UClass* StaticClass();
	static class UAkXSXPlatformInfo* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AkAudio.AkGameplayStatics
class UAkGameplayStatics : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAkGameplayStatics* GetDefaultObj();

	void UseReverbVolumes(bool InUseReverbVolumes, class AActor* Actor);
	void UseEarlyReflections(class AActor* Actor, class UAkAuxBus* AuxBus, int32 Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, const class FString& AuxBusName);
	int32 UnlockPlayList(int32 SequenceID, class UObject* WorldContext);
	void UnloadBankByName(const class FString& BankName);
	void UnloadBankAsync(class UAkAudioBank* Bank, FDelegateProperty_& BankUnloadedCallback);
	void UnloadBank(class UAkAudioBank* Bank, const class FString& BankName, const struct FLatentActionInfo& LatentInfo, class UObject* WorldContextObject);
	void StopProfilerCapture();
	void StopOutputCapture();
	void StopAllAmbientSounds(class UObject* WorldContextObject);
	void StopAll();
	void StopActor(class AActor* Actor);
	void StartProfilerCapture(const class FString& Filename);
	void StartOutputCapture(const class FString& Filename);
	void StartAllAmbientSounds(class UObject* WorldContextObject);
	class UAkComponent* SpawnAkComponentAtLocation(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, const struct FVector& Location, const struct FRotator& Orientation, bool AutoPost, const class FString& EventName, bool AutoDestroy);
	void SetSwitch(class UAkSwitchValue* SwitchValue, class AActor* Actor, class FName SwitchGroup, class FName SwitchState);
	void SetState(class UAkStateValue* StateValue, class FName StateGroup, class FName State);
	void SetSpeakerAngles(TArray<float>& SpeakerAngles, float HeightAngle, const class FString& DeviceShareset);
	void SetRTPCValue(class UAkRtpc* RTPCValue, float Value, int32 InterpolationTimeMs, class AActor* Actor, class FName RTPC);
	void SetReflectionsOrder(int32 Order, bool RefreshPaths);
	void SetPanningRule(enum class EPanningRule PanRule);
	void SetOutputBusVolume(float BusVolume, class AActor* Actor);
	void SetOcclusionScalingFactor(float ScalingFactor);
	void SetOcclusionRefreshInterval(float RefreshInterval, class AActor* Actor);
	void SetMultiplePositions(class UAkComponent* GameObjectAkComponent, const TArray<struct FTransform>& Positions, enum class EAkMultiPositionType MultiPositionType);
	void SetMultipleChannelMaskEmitterPositions(class UAkComponent* GameObjectAkComponent, const TArray<struct FAkChannelMask>& ChannelMasks, const TArray<struct FTransform>& Positions, enum class EAkMultiPositionType MultiPositionType);
	void SetMultipleChannelEmitterPositions(class UAkComponent* GameObjectAkComponent, const TArray<enum class EAkChannelConfiguration>& ChannelMasks, const TArray<struct FTransform>& Positions, enum class EAkMultiPositionType MultiPositionType);
	void SetCurrentAudioCultureAsync(const class FString& AudioCulture, FDelegateProperty_& Completed);
	void SetCurrentAudioCulture(const class FString& AudioCulture, const struct FLatentActionInfo& LatentInfo, class UObject* WorldContextObject);
	void SetBusConfig(const class FString& BusName, enum class EAkChannelConfiguration ChannelConfiguration);
	int32 ResolveDialogueEvent(const class FString& EventName, class UAkDialogueArgumentValueNames* ArgumentValueNames, class UObject* WorldContext);
	void PostTrigger(class UAkTrigger* TriggerValue, class AActor* Actor, class FName Trigger);
	void PostEventByName(const class FString& EventName, class AActor* Actor, bool bStopWhenAttachedToDestroyed);
	int32 PostEventAttached(class UAkAudioEvent* AkEvent, class AActor* Actor, class FName AttachPointName, bool bStopWhenAttachedToDestroyed, const class FString& EventName);
	void PostEventAtLocationByName(const class FString& EventName, const struct FVector& Location, const struct FRotator& Orientation, class UObject* WorldContextObject);
	int32 PostEventAtLocation(class UAkAudioEvent* AkEvent, const struct FVector& Location, const struct FRotator& Orientation, const class FString& EventName, class UObject* WorldContextObject);
	int32 PostEvent(class UAkAudioEvent* AkEvent, class AActor* Actor, int32 CallbackMask, FDelegateProperty_& PostEventCallback, TArray<struct FAkExternalSourceInfo>& ExternalSources, bool bStopWhenAttachedToDestroyed, const class FString& EventName);
	void PostAndWaitForEndOfEventAsync(class UAkAudioEvent* AkEvent, class AActor* Actor, int32* PlayingID, bool bStopWhenAttachedToDestroyed, TArray<struct FAkExternalSourceInfo>& ExternalSources, const struct FLatentActionInfo& LatentInfo);
	int32 PostAndWaitForEndOfEvent(class UAkAudioEvent* AkEvent, class AActor* Actor, bool bStopWhenAttachedToDestroyed, TArray<struct FAkExternalSourceInfo>& ExternalSources, const class FString& EventName, const struct FLatentActionInfo& LatentInfo);
	int32 PlayDynamicSequence(int32 SequenceID, class UObject* WorldContext);
	int32 OpenDynamicSequence(class AActor* Actor, int32 CallbackMask, FDelegateProperty_& PostEventCallback);
	class UAkPlaylist* LockPlayList(int32 SequenceID, class UObject* WorldContext);
	void LoadInitBank();
	void LoadBanks(TArray<class UAkAudioBank*>& SoundBanks, bool SynchronizeSoundBanks);
	void LoadBankByName(const class FString& BankName);
	void LoadBankAsync(class UAkAudioBank* Bank, FDelegateProperty_& BankLoadedCallback);
	void LoadBank(class UAkAudioBank* Bank, const class FString& BankName, const struct FLatentActionInfo& LatentInfo, class UObject* WorldContextObject);
	bool IsGame(class UObject* WorldContextObject);
	bool IsEditor();
	void GetSpeakerAngles(TArray<float>* SpeakerAngles, float* HeightAngle, const class FString& DeviceShareset);
	void GetRTPCValue(class UAkRtpc* RTPCValue, int32 PlayingID, enum class ERTPCValueType InputValueType, float* Value, enum class ERTPCValueType* OutputValueType, class AActor* Actor, class FName RTPC);
	float GetOcclusionScalingFactor();
	class FString GetCurrentAudioCulture();
	TArray<class FString> GetAvailableAudioCultures();
	class UObject* GetAkMediaAssetUserData(class UAkMediaAsset* Instance, class UClass* Type);
	class UAkComponent* GetAkComponent(class USceneComponent* AttachToComponent, bool* ComponentCreated, class FName AttachPointName, const struct FVector& Location, enum class EAttachLocation LocationType);
	class UObject* GetAkAudioTypeUserData(class UAkAudioType* Instance, class UClass* Type);
	void ForceAudioDeviceUpdate(float DeltaTime);
	void ExecuteActionOnPlayingID(enum class EAkActionOnEventType ActionType, int32 PlayingID, int32 TransitionDuration, enum class EAkCurveInterpolation FadeCurve);
	void ExecuteActionOnEvent(class UAkAudioEvent* AkEvent, enum class EAkActionOnEventType ActionType, class AActor* Actor, int32 TransitionDuration, enum class EAkCurveInterpolation FadeCurve, int32 PlayingID);
	int32 CloseDynamicSequence(int32 SequenceID, class UObject* WorldContext);
	void ClearBanks();
	void CancelEventCallback(FDelegateProperty_& PostEventCallback);
	void AddOutputCaptureMarker(const class FString& MarkerText);
};

// 0x8 (0x30 - 0x28)
// Class AkAudio.AkCallbackInfo
class UAkCallbackInfo : public UObject
{
public:
	class UAkComponent*                          AkComponent;                                       // 0x28(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAkCallbackInfo* GetDefaultObj();

};

// 0x8 (0x38 - 0x30)
// Class AkAudio.AkEventCallbackInfo
class UAkEventCallbackInfo : public UAkCallbackInfo
{
public:
	int32                                        PlayingID;                                         // 0x30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EventID;                                           // 0x34(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAkEventCallbackInfo* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class AkAudio.AkDialogueArgumentValueNames
class UAkDialogueArgumentValueNames : public UObject
{
public:
	TArray<class FString>                        ArgumentValueNames;                                // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7E7[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAkDialogueArgumentValueNames* GetDefaultObj();

	void BeginDestroy();
	void AddArgumentValueName(class FString* ArgumentValueName);
};

// 0x8 (0x40 - 0x38)
// Class AkAudio.AkMIDIEventCallbackInfo
class UAkMIDIEventCallbackInfo : public UAkEventCallbackInfo
{
public:
	uint8                                        Pad_864[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAkMIDIEventCallbackInfo* GetDefaultObj();

	enum class EAkMidiEventType GetType();
	bool GetProgramChange(struct FAkMidiProgramChange* AsProgramChange);
	bool GetPitchBend(struct FAkMidiPitchBend* AsPitchBend);
	bool GetNoteOn(struct FAkMidiNoteOnOff* AsNoteOn);
	bool GetNoteOff(struct FAkMidiNoteOnOff* AsNoteOff);
	bool GetNoteAftertouch(struct FAkMidiNoteAftertouch* AsNoteAftertouch);
	bool GetGeneric(struct FAkMidiGeneric* AsGeneric);
	bool GetChannelAftertouch(struct FAkMidiChannelAftertouch* AsChannelAftertouch);
	uint8 GetChannel();
	bool GetCc(struct FAkMidiCc* AsCc);
};

// 0x18 (0x50 - 0x38)
// Class AkAudio.AkMarkerCallbackInfo
class UAkMarkerCallbackInfo : public UAkEventCallbackInfo
{
public:
	int32                                        Identifier;                                        // 0x38(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Position;                                          // 0x3C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Label;                                             // 0x40(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAkMarkerCallbackInfo* GetDefaultObj();

};

// 0x18 (0x50 - 0x38)
// Class AkAudio.AkDurationCallbackInfo
class UAkDurationCallbackInfo : public UAkEventCallbackInfo
{
public:
	float                                        Duration;                                          // 0x38(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EstimatedDuration;                                 // 0x3C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AudioNodeID;                                       // 0x40(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MediaID;                                           // 0x44(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStreaming;                                        // 0x48(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_87D[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAkDurationCallbackInfo* GetDefaultObj();

};

// 0x40 (0x70 - 0x30)
// Class AkAudio.AkMusicSyncCallbackInfo
class UAkMusicSyncCallbackInfo : public UAkCallbackInfo
{
public:
	int32                                        PlayingID;                                         // 0x30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAkSegmentInfo                        SegmentInfo;                                       // 0x34(0x24)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	enum class EAkCallbackType                   MusicSyncType;                                     // 0x58(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_88A[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                UserCueName;                                       // 0x60(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAkMusicSyncCallbackInfo* GetDefaultObj();

};

// 0x130 (0x320 - 0x1F0)
// Class AkAudio.AkGeometryComponent
class UAkGeometryComponent : public USceneComponent
{
public:
	enum class EAkMeshType                       MeshType;                                          // 0x1F0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_89A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        LOD;                                               // 0x1F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class UMaterialInterface*, struct FAkGeometrySurfaceOverride> StaticMeshSurfaceOverride;                         // 0x1F8(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FAkGeometrySurfaceOverride            CollisionMeshSurfaceOverride;                      // 0x248(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        bEnableDiffraction : 1;                            // Mask: 0x1, PropSize: 0x10x258(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEnableDiffractionOnBoundaryEdges : 1;             // Mask: 0x2, PropSize: 0x10x258(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_5F : 6;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_8A3[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                AssociatedRoom;                                    // 0x260(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A4[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAkGeometryData                       GeometryData;                                      // 0x278(0x50)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_8A5[0x58];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAkGeometryComponent* GetDefaultObj();

	void UpdateGeometry();
	void RemoveGeometry();
	void ConvertMesh();
};

// 0x18 (0x58 - 0x40)
// Class AkAudio.AkGroupValue
class UAkGroupValue : public UAkAudioType
{
public:
	uint32                                       GroupShortID;                                      // 0x40(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B0[0x14];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAkGroupValue* GetDefaultObj();

};

// 0xD0 (0xF8 - 0x28)
// Class AkAudio.AkHololensInitializationSettings
class UAkHololensInitializationSettings : public UObject
{
public:
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;                                    // 0x28(0x68)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                             // 0x90(0x28)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkHololensAdvancedInitializationSettings AdvancedSettings;                                  // 0xB8(0x40)(Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAkHololensInitializationSettings* GetDefaultObj();

	void MigrateMultiCoreRendering(bool NewValue);
};

// 0x0 (0x70 - 0x70)
// Class AkAudio.AkHololensPlatformInfo
class UAkHololensPlatformInfo : public UAkPlatformInfo
{
public:

	static class UClass* StaticClass();
	static class UAkHololensPlatformInfo* GetDefaultObj();

};

// 0x10 (0x98 - 0x88)
// Class AkAudio.AkInitBankAssetData
class UAkInitBankAssetData : public UAkAssetDataWithMedia
{
public:
	TArray<struct FAkPluginInfo>                 PluginInfos;                                       // 0x88(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAkInitBankAssetData* GetDefaultObj();

};

// 0x20 (0x78 - 0x58)
// Class AkAudio.AkInitBank
class UAkInitBank : public UAkAssetBase
{
public:
	TArray<class FString>                        AvailableAudioCultures;                            // 0x58(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DefaultLanguage;                                   // 0x68(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAkInitBank* GetDefaultObj();

};

// 0xD8 (0x100 - 0x28)
// Class AkAudio.AkIOSInitializationSettings
class UAkIOSInitializationSettings : public UObject
{
public:
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;                                    // 0x28(0x68)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkAudioSession                       AudioSession;                                      // 0x90(0xC)(Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_8EB[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                             // 0xA0(0x28)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkAdvancedInitializationSettings     AdvancedSettings;                                  // 0xC8(0x34)(Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	uint8                                        Pad_8EF[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAkIOSInitializationSettings* GetDefaultObj();

};

// 0x0 (0x70 - 0x70)
// Class AkAudio.AkIOSPlatformInfo
class UAkIOSPlatformInfo : public UAkPlatformInfo
{
public:

	static class UClass* StaticClass();
	static class UAkIOSPlatformInfo* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AkAudio.AkItemBoolPropertiesConv
class UAkItemBoolPropertiesConv : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAkItemBoolPropertiesConv* GetDefaultObj();

	class FText Conv_FAkBoolPropertyToControlToText(struct FAkBoolPropertyToControl& INAkBoolPropertyToControl);
	class FString Conv_FAkBoolPropertyToControlToString(struct FAkBoolPropertyToControl& INAkBoolPropertyToControl);
};

// 0x40 (0x148 - 0x108)
// Class AkAudio.AkItemBoolProperties
class UAkItemBoolProperties : public UWidget
{
public:
	FMulticastInlineDelegateProperty_            OnSelectionChanged;                                // 0x108(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPropertyDragged;                                 // 0x118(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_96E[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAkItemBoolProperties* GetDefaultObj();

	void SetSearchText(const class FString& NewText);
	class FString GetSelectedProperty();
	class FString GetSearchText();
};

// 0x0 (0x28 - 0x28)
// Class AkAudio.AkItemPropertiesConv
class UAkItemPropertiesConv : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAkItemPropertiesConv* GetDefaultObj();

	class FText Conv_FAkPropertyToControlToText(struct FAkPropertyToControl& INAkPropertyToControl);
	class FString Conv_FAkPropertyToControlToString(struct FAkPropertyToControl& INAkPropertyToControl);
};

// 0x40 (0x148 - 0x108)
// Class AkAudio.AkItemProperties
class UAkItemProperties : public UWidget
{
public:
	FMulticastInlineDelegateProperty_            OnSelectionChanged;                                // 0x108(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPropertyDragged;                                 // 0x118(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_9C1[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAkItemProperties* GetDefaultObj();

	void SetSearchText(const class FString& NewText);
	class FString GetSelectedProperty();
	class FString GetSearchText();
};

// 0x40 (0x230 - 0x1F0)
// Class AkAudio.AkLateReverbComponent
class UAkLateReverbComponent : public USceneComponent
{
public:
	uint8                                        bEnable : 1;                                       // Mask: 0x1, PropSize: 0x10x1F0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_68 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_9CD[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkAuxBus*                             AuxBus;                                            // 0x1F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AuxBusName;                                        // 0x200(0x10)(Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SendLevel;                                         // 0x210(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FadeRate;                                          // 0x214(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Priority;                                          // 0x218(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9D2[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkLateReverbComponent*                NextLowerPriorityComponent;                        // 0x220(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9D3[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAkLateReverbComponent* GetDefaultObj();

};

// 0xC8 (0xF0 - 0x28)
// Class AkAudio.AkLinuxInitializationSettings
class UAkLinuxInitializationSettings : public UObject
{
public:
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;                                    // 0x28(0x68)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                             // 0x90(0x28)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;                                  // 0xB8(0x38)(Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAkLinuxInitializationSettings* GetDefaultObj();

	void MigrateMultiCoreRendering(bool NewValue);
};

// 0x0 (0x70 - 0x70)
// Class AkAudio.AkLinuxPlatformInfo
class UAkLinuxPlatformInfo : public UAkPlatformInfo
{
public:

	static class UClass* StaticClass();
	static class UAkLinuxPlatformInfo* GetDefaultObj();

};

// 0xC8 (0xF0 - 0x28)
// Class AkAudio.AkLuminInitializationSettings
class UAkLuminInitializationSettings : public UObject
{
public:
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;                                    // 0x28(0x68)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                             // 0x90(0x28)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;                                  // 0xB8(0x38)(Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAkLuminInitializationSettings* GetDefaultObj();

	void MigrateMultiCoreRendering(bool NewValue);
};

// 0x0 (0x70 - 0x70)
// Class AkAudio.AkLuminPlatformInfo
class UAkLuminPlatformInfo : public UAkPlatformInfo
{
public:

	static class UClass* StaticClass();
	static class UAkLuminPlatformInfo* GetDefaultObj();

};

// 0xC8 (0xF0 - 0x28)
// Class AkAudio.AkMacInitializationSettings
class UAkMacInitializationSettings : public UObject
{
public:
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;                                    // 0x28(0x68)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                             // 0x90(0x28)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;                                  // 0xB8(0x38)(Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAkMacInitializationSettings* GetDefaultObj();

	void MigrateMultiCoreRendering(bool NewValue);
};

// 0x0 (0x70 - 0x70)
// Class AkAudio.AkMacPlatformInfo
class UAkMacPlatformInfo : public UAkPlatformInfo
{
public:

	static class UClass* StaticClass();
	static class UAkMacPlatformInfo* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class AkAudio.AkMediaAssetData
class UAkMediaAssetData : public UObject
{
public:
	bool                                         IsStreamed;                                        // 0x28(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseDeviceMemory;                                   // 0x29(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A09[0x16];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAkMediaAssetData* GetDefaultObj();

};

// 0x30 (0x58 - 0x28)
// Class AkAudio.AkMediaAsset
class UAkMediaAsset : public UObject
{
public:
	uint32                                       ID;                                                // 0x28(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A0C[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UObject*>                       UserData;                                          // 0x30(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkMediaAssetData*                     CurrentMediaAssetData;                             // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_A0D[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAkMediaAsset* GetDefaultObj();

};

// 0x0 (0x58 - 0x58)
// Class AkAudio.AkLocalizedMediaAsset
class UAkLocalizedMediaAsset : public UAkMediaAsset
{
public:

	static class UClass* StaticClass();
	static class UAkLocalizedMediaAsset* GetDefaultObj();

};

// 0x8 (0x60 - 0x58)
// Class AkAudio.AkExternalMediaAsset
class UAkExternalMediaAsset : public UAkMediaAsset
{
public:
	uint8                                        Pad_A14[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAkExternalMediaAsset* GetDefaultObj();

};

// 0x0 (0x70 - 0x70)
// Class AkAudio.AkPellegrinoPlatformInfo
class UAkPellegrinoPlatformInfo : public UAkPlatformInfo
{
public:

	static class UClass* StaticClass();
	static class UAkPellegrinoPlatformInfo* GetDefaultObj();

};

// 0x0 (0x70 - 0x70)
// Class AkAudio.AkDPXPlatformInfo
class UAkDPXPlatformInfo : public UAkPellegrinoPlatformInfo
{
public:

	static class UClass* StaticClass();
	static class UAkDPXPlatformInfo* GetDefaultObj();

};

// 0x0 (0x70 - 0x70)
// Class AkAudio.AkPS5PlatformInfo
class UAkPS5PlatformInfo : public UAkPellegrinoPlatformInfo
{
public:

	static class UClass* StaticClass();
	static class UAkPS5PlatformInfo* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class AkAudio.AkPlaylist
class UAkPlaylist : public UObject
{
public:
	uint8                                        Pad_A1F[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAkPlaylist* GetDefaultObj();

};

// 0xC8 (0xF0 - 0x28)
// Class AkAudio.AkPS4InitializationSettings
class UAkPS4InitializationSettings : public UObject
{
public:
	struct FAkCommonInitializationSettings       CommonSettings;                                    // 0x28(0x60)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                             // 0x88(0x28)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkPS4AdvancedInitializationSettings  AdvancedSettings;                                  // 0xB0(0x40)(Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAkPS4InitializationSettings* GetDefaultObj();

	void MigrateMultiCoreRendering(bool NewValue);
};

// 0x0 (0x70 - 0x70)
// Class AkAudio.AkPS4PlatformInfo
class UAkPS4PlatformInfo : public UAkPlatformInfo
{
public:

	static class UClass* StaticClass();
	static class UAkPS4PlatformInfo* GetDefaultObj();

};

// 0xC8 (0xF0 - 0x28)
// Class AkAudio.AkPS5InitializationSettings
class UAkPS5InitializationSettings : public UObject
{
public:
	struct FAkCommonInitializationSettings       CommonSettings;                                    // 0x28(0x60)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                             // 0x88(0x28)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkPS5AdvancedInitializationSettings  AdvancedSettings;                                  // 0xB0(0x3C)(Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	uint8                                        Pad_A3B[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAkPS5InitializationSettings* GetDefaultObj();

};

// 0x0 (0xF0 - 0xF0)
// Class AkAudio.AkDPXInitializationSettings
class UAkDPXInitializationSettings : public UAkPS5InitializationSettings
{
public:

	static class UClass* StaticClass();
	static class UAkDPXInitializationSettings* GetDefaultObj();

};

// 0x38 (0x2B0 - 0x278)
// Class AkAudio.AkReverbVolume
class AAkReverbVolume : public AVolume
{
public:
	uint8                                        bEnabled : 1;                                      // Mask: 0x1, PropSize: 0x10x278(0x1)(Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_6E : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_A4B[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkAuxBus*                             AuxBus;                                            // 0x280(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AuxBusName;                                        // 0x288(0x10)(ZeroConstructor, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SendLevel;                                         // 0x298(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FadeRate;                                          // 0x29C(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Priority;                                          // 0x2A0(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A50[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkLateReverbComponent*                LateReverbComponent;                               // 0x2A8(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AAkReverbVolume* GetDefaultObj();

};

// 0x30 (0x240 - 0x210)
// Class AkAudio.AkRoomComponent
class UAkRoomComponent : public UAkGameObject
{
public:
	uint8                                        bEnable : 1;                                       // Mask: 0x1, PropSize: 0x10x210(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_6F : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_A5D[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkRoomComponent*                      NextLowerPriorityComponent;                        // 0x218(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Priority;                                          // 0x220(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WallOcclusion;                                     // 0x224(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AuxSendLevel;                                      // 0x228(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AutoPost;                                          // 0x22C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, SimpleDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A62[0x13];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAkRoomComponent* GetDefaultObj();

};

// 0x0 (0x40 - 0x40)
// Class AkAudio.AkRtpc
class UAkRtpc : public UAkAudioType
{
public:

	static class UClass* StaticClass();
	static class UAkRtpc* GetDefaultObj();

};

// 0x130 (0x158 - 0x28)
// Class AkAudio.AkSettings
class UAkSettings : public UObject
{
public:
	uint8                                        MaxSimultaneousReverbVolumes;                      // 0x28(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A69[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFilePath                             WwiseProjectPath;                                  // 0x30(0x10)(Edit, Config, NativeAccessSpecifierPublic)
	struct FDirectoryPath                        WwiseSoundDataFolder;                              // 0x40(0x10)(Edit, Config, NativeAccessSpecifierPublic)
	bool                                         bAutoConnectToWAAPI;                               // 0x50(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionChannel                 DefaultOcclusionCollisionChannel;                  // 0x51(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A6E[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DefaultOcclusionRefreshInterval;                   // 0x54(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<TSoftObjectPtr<class UPhysicalMaterial>, struct FAkGeometrySurfacePropertiesToMap> AkGeometryMap;                                     // 0x58(0x50)(Edit, EditFixedSize, Config, NativeAccessSpecifierPublic)
	bool                                         SplitSwitchContainerMedia;                         // 0xA8(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseEventBasedPackaging;                            // 0xA9(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EnableAutomaticAssetSynchronization;               // 0xAA(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A71[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CommandletCommitMessage;                           // 0xB0(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, class FString>           UnrealCultureToWwiseCulture;                       // 0xC0(0x50)(Edit, Config, NativeAccessSpecifierPublic)
	bool                                         AskedToUseNewAssetManagement;                      // 0x110(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableMultiCoreRendering;                         // 0x111(0x1)(ZeroConstructor, Config, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         MigratedEnableMultiCoreRendering;                  // 0x112(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         FixupRedirectorsDuringMigration;                   // 0x113(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A76[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDirectoryPath                        WwiseWindowsInstallationPath;                      // 0x118(0x10)(Config, Deprecated, NativeAccessSpecifierPublic)
	struct FFilePath                             WwiseMacInstallationPath;                          // 0x128(0x10)(Config, Deprecated, NativeAccessSpecifierPublic)
	uint8                                        Pad_A79[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAkSettings* GetDefaultObj();

};

// 0x38 (0x60 - 0x28)
// Class AkAudio.AkSettingsPerUser
class UAkSettingsPerUser : public UObject
{
public:
	struct FDirectoryPath                        WwiseWindowsInstallationPath;                      // 0x28(0x10)(Edit, Config, NativeAccessSpecifierPublic)
	struct FFilePath                             WwiseMacInstallationPath;                          // 0x38(0x10)(Edit, Config, NativeAccessSpecifierPublic)
	class FString                                WaapiIPAddress;                                    // 0x48(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       WaapiPort;                                         // 0x58(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AutoSyncSelection;                                 // 0x5C(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SuppressWwiseProjectPathWarnings;                  // 0x5D(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SoundDataGenerationSkipLanguage;                   // 0x5E(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A80[0x1];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAkSettingsPerUser* GetDefaultObj();

};

// 0x428 (0x530 - 0x108)
// Class AkAudio.AkSlider
class UAkSlider : public UWidget
{
public:
	float                                        Value;                                             // 0x108(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           ValueDelegate;                                     // 0x10C(0x10)(ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_ABA[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSliderStyle                          WidgetStyle;                                       // 0x120(0x340)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class EOrientation                      Orientation;                                       // 0x460(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_ABD[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          SliderBarColor;                                    // 0x464(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          SliderHandleColor;                                 // 0x474(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IndentHandle;                                      // 0x484(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Locked;                                            // 0x485(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_ABF[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StepSize;                                          // 0x488(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsFocusable;                                       // 0x48C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AC0[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAkPropertyToControl                  ThePropertyToControl;                              // 0x490(0x10)(Edit, EditConst, NativeAccessSpecifierPublic)
	struct FAkWwiseItemToControl                 ItemToControl;                                     // 0x4A0(0x40)(Edit, Config, EditConst, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnValueChanged;                                    // 0x4E0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnItemDropped;                                     // 0x4F0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPropertyDropped;                                 // 0x500(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_AC1[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAkSlider* GetDefaultObj();

	void SetValue(float InValue);
	void SetStepSize(float InValue);
	void SetSliderHandleColor(const struct FLinearColor& InValue);
	void SetSliderBarColor(const struct FLinearColor& InValue);
	void SetLocked(bool InValue);
	void SetIndentHandle(bool InValue);
	void SetAkSliderItemProperty(const class FString& ItemProperty);
	void SetAkSliderItemId(struct FGuid& ItemId);
	float GetValue();
	class FString GetAkSliderItemProperty();
	struct FGuid GetAkSliderItemId();
};

// 0x18 (0x290 - 0x278)
// Class AkAudio.AkSpatialAudioVolume
class AAkSpatialAudioVolume : public AVolume
{
public:
	class UAkSurfaceReflectorSetComponent*       SurfaceReflectorSet;                               // 0x278(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkLateReverbComponent*                LateReverb;                                        // 0x280(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkRoomComponent*                      Room;                                              // 0x288(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AAkSpatialAudioVolume* GetDefaultObj();

};

// 0x28 (0x248 - 0x220)
// Class AkAudio.AkSpotReflector
class AAkSpotReflector : public AActor
{
public:
	class UAkAuxBus*                             EarlyReflectionAuxBus;                             // 0x220(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EarlyReflectionAuxBusName;                         // 0x228(0x10)(Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAcousticTexture*                    AcousticTexture;                                   // 0x238(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DistanceScalingFactor;                             // 0x240(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Level;                                             // 0x244(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AAkSpotReflector* GetDefaultObj();

};

// 0x0 (0x58 - 0x58)
// Class AkAudio.AkStateValue
class UAkStateValue : public UAkGroupValue
{
public:

	static class UClass* StaticClass();
	static class UAkStateValue* GetDefaultObj();

};

// 0x40 (0x230 - 0x1F0)
// Class AkAudio.AkSurfaceReflectorSetComponent
class UAkSurfaceReflectorSetComponent : public USceneComponent
{
public:
	uint8                                        bEnableSurfaceReflectors : 1;                      // Mask: 0x1, PropSize: 0x10x1F0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_7A : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_AE4[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAkPoly>                       AcousticPolys;                                     // 0x1F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEnableDiffraction : 1;                            // Mask: 0x1, PropSize: 0x10x208(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEnableDiffractionOnBoundaryEdges : 1;             // Mask: 0x2, PropSize: 0x10x208(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_7B : 6;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_AE6[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                AssociatedRoom;                                    // 0x210(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AE7[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAkSurfaceReflectorSetComponent* GetDefaultObj();

	void UpdateSurfaceReflectorSet();
	void SendSurfaceReflectorSet();
	void RemoveSurfaceReflectorSet();
};

// 0xC8 (0xF0 - 0x28)
// Class AkAudio.AkSwitchInitializationSettings
class UAkSwitchInitializationSettings : public UObject
{
public:
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;                                    // 0x28(0x68)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkCommunicationSettingsWithCommSelection CommunicationSettings;                             // 0x90(0x28)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;                                  // 0xB8(0x38)(Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAkSwitchInitializationSettings* GetDefaultObj();

	void MigrateMultiCoreRendering(bool NewValue);
};

// 0x0 (0x70 - 0x70)
// Class AkAudio.AkSwitchPlatformInfo
class UAkSwitchPlatformInfo : public UAkPlatformInfo
{
public:

	static class UClass* StaticClass();
	static class UAkSwitchPlatformInfo* GetDefaultObj();

};

// 0x0 (0x58 - 0x58)
// Class AkAudio.AkSwitchValue
class UAkSwitchValue : public UAkGroupValue
{
public:

	static class UClass* StaticClass();
	static class UAkSwitchValue* GetDefaultObj();

};

// 0x0 (0x40 - 0x40)
// Class AkAudio.AkTrigger
class UAkTrigger : public UAkAudioType
{
public:

	static class UClass* StaticClass();
	static class UAkTrigger* GetDefaultObj();

};

// 0xD8 (0x100 - 0x28)
// Class AkAudio.AkTVOSInitializationSettings
class UAkTVOSInitializationSettings : public UObject
{
public:
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;                                    // 0x28(0x68)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkAudioSession                       AudioSession;                                      // 0x90(0xC)(Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_AF4[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                             // 0xA0(0x28)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkAdvancedInitializationSettings     AdvancedSettings;                                  // 0xC8(0x34)(Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	uint8                                        Pad_AF5[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAkTVOSInitializationSettings* GetDefaultObj();

};

// 0x0 (0x70 - 0x70)
// Class AkAudio.AkTVOSPlatformInfo
class UAkTVOSPlatformInfo : public UAkPlatformInfo
{
public:

	static class UClass* StaticClass();
	static class UAkTVOSPlatformInfo* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AkAudio.AkWaapiCalls
class UAkWaapiCalls : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAkWaapiCalls* GetDefaultObj();

	struct FAKWaapiJsonObject Unsubscribe(struct FAkWaapiSubscriptionId& SubscriptionId, bool* UnsubscriptionDone);
	struct FAKWaapiJsonObject SubscribeToWaapi(struct FAkWaapiUri& WaapiUri, struct FAKWaapiJsonObject& WaapiOptions, FDelegateProperty_& Callback, struct FAkWaapiSubscriptionId* SubscriptionId, bool* SubscriptionDone);
	void SetSubscriptionID(struct FAkWaapiSubscriptionId& Subscription, int32 ID);
	bool RegisterWaapiProjectLoadedCallback(FDelegateProperty_& Callback);
	bool RegisterWaapiConnectionLostCallback(FDelegateProperty_& Callback);
	int32 GetSubscriptionID(struct FAkWaapiSubscriptionId& Subscription);
	class FText Conv_FAkWaapiSubscriptionIdToText(struct FAkWaapiSubscriptionId& INAkWaapiSubscriptionId);
	class FString Conv_FAkWaapiSubscriptionIdToString(struct FAkWaapiSubscriptionId& INAkWaapiSubscriptionId);
	struct FAKWaapiJsonObject CallWaapi(struct FAkWaapiUri& WaapiUri, struct FAKWaapiJsonObject& WaapiArgs, struct FAKWaapiJsonObject& WaapiOptions);
};

// 0x0 (0x28 - 0x28)
// Class AkAudio.SAkWaapiFieldNamesConv
class USAkWaapiFieldNamesConv : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class USAkWaapiFieldNamesConv* GetDefaultObj();

	class FText Conv_FAkWaapiFieldNamesToText(struct FAkWaapiFieldNames& INAkWaapiFieldNames);
	class FString Conv_FAkWaapiFieldNamesToString(struct FAkWaapiFieldNames& INAkWaapiFieldNames);
};

// 0x0 (0x28 - 0x28)
// Class AkAudio.AkWaapiJsonManager
class UAkWaapiJsonManager : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAkWaapiJsonManager* GetDefaultObj();

	struct FAKWaapiJsonObject SetStringField(struct FAkWaapiFieldNames& FieldName, const class FString& FieldValue, const struct FAKWaapiJsonObject& Target);
	struct FAKWaapiJsonObject SetObjectField(struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& FieldValue, const struct FAKWaapiJsonObject& Target);
	struct FAKWaapiJsonObject SetNumberField(struct FAkWaapiFieldNames& FieldName, float FieldValue, const struct FAKWaapiJsonObject& Target);
	struct FAKWaapiJsonObject SetBoolField(struct FAkWaapiFieldNames& FieldName, bool FieldValue, const struct FAKWaapiJsonObject& Target);
	struct FAKWaapiJsonObject SetArrayStringFields(struct FAkWaapiFieldNames& FieldName, TArray<class FString>& FieldStringValues, const struct FAKWaapiJsonObject& Target);
	struct FAKWaapiJsonObject SetArrayObjectFields(struct FAkWaapiFieldNames& FieldName, TArray<struct FAKWaapiJsonObject>& FieldObjectValues, const struct FAKWaapiJsonObject& Target);
	class FString GetStringField(struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target);
	struct FAKWaapiJsonObject GetObjectField(struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target);
	float GetNumberField(struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target);
	int32 GetIntegerField(struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target);
	bool GetBoolField(struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target);
	TArray<struct FAKWaapiJsonObject> GetArrayField(struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target);
	class FText Conv_FAKWaapiJsonObjectToText(const struct FAKWaapiJsonObject& INAKWaapiJsonObject);
	class FString Conv_FAKWaapiJsonObjectToString(const struct FAKWaapiJsonObject& INAKWaapiJsonObject);
};

// 0x0 (0x28 - 0x28)
// Class AkAudio.AkWaapiUriConv
class UAkWaapiUriConv : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAkWaapiUriConv* GetDefaultObj();

	class FText Conv_FAkWaapiUriToText(struct FAkWaapiUri& INAkWaapiUri);
	class FString Conv_FAkWaapiUriToString(struct FAkWaapiUri& INAkWaapiUri);
};

// 0xD0 (0xF8 - 0x28)
// Class AkAudio.AkWindowsInitializationSettings
class UAkWindowsInitializationSettings : public UObject
{
public:
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;                                    // 0x28(0x68)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                             // 0x90(0x28)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkWindowsAdvancedInitializationSettings AdvancedSettings;                                  // 0xB8(0x40)(Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAkWindowsInitializationSettings* GetDefaultObj();

	void MigrateMultiCoreRendering(bool NewValue);
};

// 0x0 (0x70 - 0x70)
// Class AkAudio.AkWin32PlatformInfo
class UAkWin32PlatformInfo : public UAkPlatformInfo
{
public:

	static class UClass* StaticClass();
	static class UAkWin32PlatformInfo* GetDefaultObj();

};

// 0x0 (0x70 - 0x70)
// Class AkAudio.AkWin64PlatformInfo
class UAkWin64PlatformInfo : public UAkPlatformInfo
{
public:

	static class UClass* StaticClass();
	static class UAkWin64PlatformInfo* GetDefaultObj();

};

// 0x0 (0x70 - 0x70)
// Class AkAudio.AkWindowsPlatformInfo
class UAkWindowsPlatformInfo : public UAkWin64PlatformInfo
{
public:

	static class UClass* StaticClass();
	static class UAkWindowsPlatformInfo* GetDefaultObj();

};

// 0xD0 (0xF8 - 0x28)
// Class AkAudio.AkWinGDKInitializationSettings
class UAkWinGDKInitializationSettings : public UObject
{
public:
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;                                    // 0x28(0x68)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                             // 0x90(0x28)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkWinGDKAdvancedInitializationSettings AdvancedSettings;                                  // 0xB8(0x40)(Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAkWinGDKInitializationSettings* GetDefaultObj();

	void MigrateMultiCoreRendering(bool NewValue);
};

// 0x0 (0xF8 - 0xF8)
// Class AkAudio.AkWinAnvilInitializationSettings
class UAkWinAnvilInitializationSettings : public UAkWinGDKInitializationSettings
{
public:

	static class UClass* StaticClass();
	static class UAkWinAnvilInitializationSettings* GetDefaultObj();

};

// 0x0 (0x70 - 0x70)
// Class AkAudio.AkWinGDKPlatformInfo
class UAkWinGDKPlatformInfo : public UAkPlatformInfo
{
public:

	static class UClass* StaticClass();
	static class UAkWinGDKPlatformInfo* GetDefaultObj();

};

// 0x0 (0x70 - 0x70)
// Class AkAudio.AkWinAnvilPlatformInfo
class UAkWinAnvilPlatformInfo : public UAkWinGDKPlatformInfo
{
public:

	static class UClass* StaticClass();
	static class UAkWinAnvilPlatformInfo* GetDefaultObj();

};

// 0x40 (0x148 - 0x108)
// Class AkAudio.AkWwiseTree
class UAkWwiseTree : public UWidget
{
public:
	FMulticastInlineDelegateProperty_            OnSelectionChanged;                                // 0x108(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnItemDragged;                                     // 0x118(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_BDC[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAkWwiseTree* GetDefaultObj();

	void SetSearchText(const class FString& NewText);
	struct FAkWwiseObjectDetails GetSelectedItem();
	class FString GetSearchText();
};

// 0x60 (0x168 - 0x108)
// Class AkAudio.AkWwiseTreeSelector
class UAkWwiseTreeSelector : public UWidget
{
public:
	FMulticastInlineDelegateProperty_            OnSelectionChanged;                                // 0x108(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnItemDragged;                                     // 0x118(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_BDD[0x40];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAkWwiseTreeSelector* GetDefaultObj();

};

// 0xD0 (0xF8 - 0x28)
// Class AkAudio.AkXboxOneGDKInitializationSettings
class UAkXboxOneGDKInitializationSettings : public UObject
{
public:
	struct FAkCommonInitializationSettings       CommonSettings;                                    // 0x28(0x60)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkXboxOneGDKApuHeapInitializationSettings ApuHeapSettings;                                   // 0x88(0x8)(Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                             // 0x90(0x28)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkXboxOneGDKAdvancedInitializationSettings AdvancedSettings;                                  // 0xB8(0x3C)(Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	uint8                                        Pad_BED[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAkXboxOneGDKInitializationSettings* GetDefaultObj();

	void MigrateMultiCoreRendering(bool NewValue);
};

// 0x0 (0xF8 - 0xF8)
// Class AkAudio.AkXboxOneAnvilInitializationSettings
class UAkXboxOneAnvilInitializationSettings : public UAkXboxOneGDKInitializationSettings
{
public:

	static class UClass* StaticClass();
	static class UAkXboxOneAnvilInitializationSettings* GetDefaultObj();

};

// 0x0 (0x70 - 0x70)
// Class AkAudio.AkXboxOneGDKPlatformInfo
class UAkXboxOneGDKPlatformInfo : public UAkPlatformInfo
{
public:

	static class UClass* StaticClass();
	static class UAkXboxOneGDKPlatformInfo* GetDefaultObj();

};

// 0x0 (0x70 - 0x70)
// Class AkAudio.AkXboxOneAnvilPlatformInfo
class UAkXboxOneAnvilPlatformInfo : public UAkXboxOneGDKPlatformInfo
{
public:

	static class UClass* StaticClass();
	static class UAkXboxOneAnvilPlatformInfo* GetDefaultObj();

};

// 0xD0 (0xF8 - 0x28)
// Class AkAudio.AkXboxOneInitializationSettings
class UAkXboxOneInitializationSettings : public UObject
{
public:
	struct FAkCommonInitializationSettings       CommonSettings;                                    // 0x28(0x60)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkXboxOneApuHeapInitializationSettings ApuHeapSettings;                                   // 0x88(0x8)(Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                             // 0x90(0x28)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkXboxOneAdvancedInitializationSettings AdvancedSettings;                                  // 0xB8(0x3C)(Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	uint8                                        Pad_C09[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAkXboxOneInitializationSettings* GetDefaultObj();

	void MigrateMultiCoreRendering(bool NewValue);
};

// 0x0 (0x70 - 0x70)
// Class AkAudio.AkXboxOnePlatformInfo
class UAkXboxOnePlatformInfo : public UAkPlatformInfo
{
public:

	static class UClass* StaticClass();
	static class UAkXboxOnePlatformInfo* GetDefaultObj();

};

// 0xD0 (0xF8 - 0x28)
// Class AkAudio.AkXSXInitializationSettings
class UAkXSXInitializationSettings : public UObject
{
public:
	struct FAkCommonInitializationSettings       CommonSettings;                                    // 0x28(0x60)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkXSXApuHeapInitializationSettings   ApuHeapSettings;                                   // 0x88(0x8)(Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                             // 0x90(0x28)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkXSXAdvancedInitializationSettings  AdvancedSettings;                                  // 0xB8(0x3C)(Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	uint8                                        Pad_C15[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAkXSXInitializationSettings* GetDefaultObj();

	void MigrateMultiCoreRendering(bool NewValue);
};

// 0x0 (0xF8 - 0xF8)
// Class AkAudio.AkMPXInitializationSettings
class UAkMPXInitializationSettings : public UAkXSXInitializationSettings
{
public:

	static class UClass* StaticClass();
	static class UAkMPXInitializationSettings* GetDefaultObj();

};

// 0x18 (0xA8 - 0x90)
// Class AkAudio.InterpTrackAkAudioEvent
class UInterpTrackAkAudioEvent : public UInterpTrackVectorBase
{
public:
	TArray<struct FAkAudioEventTrackKey>         Events;                                            // 0x90(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bContinueEventOnMatineeEnd : 1;                    // Mask: 0x1, PropSize: 0x10xA0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C1C[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInterpTrackAkAudioEvent* GetDefaultObj();

};

// 0x18 (0xA8 - 0x90)
// Class AkAudio.InterpTrackAkAudioRTPC
class UInterpTrackAkAudioRTPC : public UInterpTrackFloatBase
{
public:
	class FString                                Param;                                             // 0x90(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bPlayOnReverse : 1;                                // Mask: 0x1, PropSize: 0x10xA0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bContinueRTPCOnMatineeEnd : 1;                     // Mask: 0x2, PropSize: 0x10xA0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C1F[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInterpTrackAkAudioRTPC* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class AkAudio.InterpTrackInstAkAudioEvent
class UInterpTrackInstAkAudioEvent : public UInterpTrackInst
{
public:
	float                                        LastUpdatePosition;                                // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C21[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInterpTrackInstAkAudioEvent* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class AkAudio.InterpTrackInstAkAudioRTPC
class UInterpTrackInstAkAudioRTPC : public UInterpTrackInst
{
public:
	float                                        LastUpdatePosition;                                // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C24[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInterpTrackInstAkAudioRTPC* GetDefaultObj();

};

// 0xE8 (0x1C8 - 0xE0)
// Class AkAudio.MovieSceneAkAudioEventSection
class UMovieSceneAkAudioEventSection : public UMovieSceneSection
{
public:
	uint8                                        Pad_C26[0x12];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         PlayThroughTwDialogueSystem;                       // 0xF2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C28[0x2D];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkAudioEvent*                         Event;                                             // 0x120(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         RetriggerEvent;                                    // 0x128(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_C29[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ScrubTailLengthMs;                                 // 0x12C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         StopAtSectionEnd;                                  // 0x130(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_C2A[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                EventName;                                         // 0x138(0x10)(Edit, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_C2B[0x20];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxSourceDuration;                                 // 0x168(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_C2D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                MaxDurationSourceID;                               // 0x170(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_C2E[0x48];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneAkAudioEventSection* GetDefaultObj();

};

// 0x18 (0x70 - 0x58)
// Class AkAudio.MovieSceneAkTrack
class UMovieSceneAkTrack : public UMovieSceneTrack
{
public:
	TArray<class UMovieSceneSection*>            Sections;                                          // 0x58(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bIsAMasterTrack : 1;                               // Mask: 0x1, PropSize: 0x10x68(0x1)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_C31[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneAkTrack* GetDefaultObj();

};

// 0x0 (0x70 - 0x70)
// Class AkAudio.MovieSceneAkAudioEventTrack
class UMovieSceneAkAudioEventTrack : public UMovieSceneAkTrack
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneAkAudioEventTrack* GetDefaultObj();

};

// 0x168 (0x248 - 0xE0)
// Class AkAudio.MovieSceneAkAudioRTPCSection
class UMovieSceneAkAudioRTPCSection : public UMovieSceneSection
{
public:
	class UAkRtpc*                               RTPC;                                              // 0xE0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                Name;                                              // 0xE8(0x10)(Edit, ZeroConstructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FRichCurve                            FloatCurve;                                        // 0xF8(0x80)(Protected, NativeAccessSpecifierProtected)
	struct FMovieSceneFloatChannelSerializationHelper FloatChannelSerializationHelper;                   // 0x178(0x30)(Protected, NativeAccessSpecifierProtected)
	struct FMovieSceneFloatChannel               RTPCChannel;                                       // 0x1A8(0xA0)(Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UMovieSceneAkAudioRTPCSection* GetDefaultObj();

};

// 0x0 (0x70 - 0x70)
// Class AkAudio.MovieSceneAkAudioRTPCTrack
class UMovieSceneAkAudioRTPCTrack : public UMovieSceneAkTrack
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneAkAudioRTPCTrack* GetDefaultObj();

};

// 0x70 (0xA0 - 0x30)
// Class AkAudio.PostEventAsync
class UPostEventAsync : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            Completed;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_C44[0x60];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPostEventAsync* GetDefaultObj();

	class UPostEventAsync* PostEventAsync(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, class AActor* Actor, int32 CallbackMask, FDelegateProperty_& PostEventCallback, TArray<struct FAkExternalSourceInfo>& ExternalSources, bool bStopWhenAttachedToDestroyed);
	void PollPostEventFuture();
};

// 0x50 (0x80 - 0x30)
// Class AkAudio.PostEventAtLocationAsync
class UPostEventAtLocationAsync : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            Completed;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_C53[0x40];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPostEventAtLocationAsync* GetDefaultObj();

	class UPostEventAtLocationAsync* PostEventAtLocationAsync(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, const struct FVector& Location, const struct FRotator& Orientation);
	void PollPostEventFuture();
};

}


