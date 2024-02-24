#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x50 - 0x28)
// Class LevelSequence.AnimSequenceLevelSequenceLink
class UAnimSequenceLevelSequenceLink : public UAssetUserData
{
public:
	struct FGuid                                 SkelTrackGuid;                                     // 0x28(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                       PathToLevelSequence;                               // 0x38(0x18)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAnimSequenceLevelSequenceLink* GetDefaultObj();

};

// 0x48 (0x70 - 0x28)
// Class LevelSequence.DefaultLevelSequenceInstanceData
class UDefaultLevelSequenceInstanceData : public UObject
{
public:
	uint8                                        Pad_AA9[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                TransformOriginActor;                              // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AAB[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            TransformOrigin;                                   // 0x40(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDefaultLevelSequenceInstanceData* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class LevelSequence.LevelSequenceMetaData
class ILevelSequenceMetaData : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ILevelSequenceMetaData* GetDefaultObj();

};

// 0x168 (0x1C8 - 0x60)
// Class LevelSequence.LevelSequence
class ULevelSequence : public UMovieSceneSequence
{
public:
	uint8                                        Pad_B5D[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMovieScene*                           MovieScene;                                        // 0x68(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLevelSequenceObjectReferenceMap      ObjectReferences;                                  // 0x70(0x50)(Protected, NativeAccessSpecifierProtected)
	struct FLevelSequenceBindingReferences       BindingReferences;                                 // 0xC0(0xA0)(Protected, NativeAccessSpecifierProtected)
	TMap<class FString, struct FLevelSequenceObject> PossessedObjects;                                  // 0x160(0x50)(Deprecated, Protected, NativeAccessSpecifierProtected)
	class UClass*                                DirectorClass;                                     // 0x1B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UAssetUserData*>                AssetUserData;                                     // 0x1B8(0x10)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class ULevelSequence* GetDefaultObj();

	void RemoveMetaDataByClass(TSubclassOf<class UObject> InClass);
	class UObject* FindOrAddMetaDataByClass(TSubclassOf<class UObject> InClass);
	class UObject* FindMetaDataByClass(TSubclassOf<class UObject> InClass);
	class UObject* CopyMetaData(class UObject* InMetaData);
};

// 0x0 (0x28 - 0x28)
// Class LevelSequence.LevelSequenceBurnInInitSettings
class ULevelSequenceBurnInInitSettings : public UObject
{
public:

	static class UClass* StaticClass();
	static class ULevelSequenceBurnInInitSettings* GetDefaultObj();

};

// 0x28 (0x50 - 0x28)
// Class LevelSequence.LevelSequenceBurnInOptions
class ULevelSequenceBurnInOptions : public UObject
{
public:
	bool                                         bUseBurnIn;                                        // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BB4[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSoftClassPath                        BurnInClass;                                       // 0x30(0x18)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULevelSequenceBurnInInitSettings*      Settings;                                          // 0x48(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ULevelSequenceBurnInOptions* GetDefaultObj();

	void SetBurnIn(const struct FSoftClassPath& InBurnInClass);
};

// 0x80 (0x2A0 - 0x220)
// Class LevelSequence.LevelSequenceActor
class ALevelSequenceActor : public AActor
{
public:
	uint8                                        Pad_E48[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMovieSceneSequencePlaybackSettings   PlaybackSettings;                                  // 0x230(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_E4C[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ULevelSequencePlayer*                  SequencePlayer;                                    // 0x248(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                       LevelSequence;                                     // 0x250(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLevelSequenceCameraSettings          CameraSettings;                                    // 0x268(0x2)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_E55[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ULevelSequenceBurnInOptions*           BurnInOptions;                                     // 0x270(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMovieSceneBindingOverrides*           BindingOverrides;                                  // 0x278(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAutoPlay : 1;                                     // Mask: 0x1, PropSize: 0x10x280(0x1)(Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideInstanceData : 1;                         // Mask: 0x2, PropSize: 0x10x280(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bReplicatePlayback : 1;                            // Mask: 0x4, PropSize: 0x10x280(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_4C : 5;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_E6A[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               DefaultInstanceData;                               // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULevelSequenceBurnIn*                  BurnInInstance;                                    // 0x290(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bShowBurnin;                                       // 0x298(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_E73[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ALevelSequenceActor* GetDefaultObj();

	void ShowBurnin();
	void SetSequence(class ULevelSequence* InSequence);
	void SetReplicatePlayback(bool ReplicatePlayback);
	void SetBindingByTag(class FName BindingTag, TArray<class AActor*>& Actors, bool bAllowBindingsFromAsset);
	void SetBinding(const struct FMovieSceneObjectBindingID& Binding, TArray<class AActor*>& Actors, bool bAllowBindingsFromAsset);
	void ResetBindings();
	void ResetBinding(const struct FMovieSceneObjectBindingID& Binding);
	void RemoveBindingByTag(class FName Tag, class AActor* Actor);
	void RemoveBinding(const struct FMovieSceneObjectBindingID& Binding, class AActor* Actor);
	void OnLevelSequenceLoaded__DelegateSignature();
	class ULevelSequence* LoadSequence();
	void HideBurnin();
	class ULevelSequencePlayer* GetSequencePlayer();
	class ULevelSequence* GetSequence();
	TArray<struct FMovieSceneObjectBindingID> FindNamedBindings(class FName Tag);
	struct FMovieSceneObjectBindingID FindNamedBinding(class FName Tag);
	void AddBindingByTag(class FName BindingTag, class AActor* Actor, bool bAllowBindingsFromAsset);
	void AddBinding(const struct FMovieSceneObjectBindingID& Binding, class AActor* Actor, bool bAllowBindingsFromAsset);
};

// 0x10 (0x38 - 0x28)
// Class LevelSequence.LevelSequenceAnimSequenceLink
class ULevelSequenceAnimSequenceLink : public UAssetUserData
{
public:
	TArray<struct FLevelSequenceAnimSequenceLinkItem> AnimSequenceLinks;                                 // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ULevelSequenceAnimSequenceLink* GetDefaultObj();

};

// 0xC0 (0x320 - 0x260)
// Class LevelSequence.LevelSequenceBurnIn
class ULevelSequenceBurnIn : public UUserWidget
{
public:
	struct FLevelSequencePlayerSnapshot          FrameInformation;                                  // 0x260(0xB8)(BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	class ALevelSequenceActor*                   LevelSequenceActor;                                // 0x318(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class ULevelSequenceBurnIn* GetDefaultObj();

	void SetSettings(class UObject* InSettings);
	TSubclassOf<class ULevelSequenceBurnInInitSettings> GetSettingsClass();
};

// 0x8 (0x30 - 0x28)
// Class LevelSequence.LevelSequenceDirector
class ULevelSequenceDirector : public UObject
{
public:
	class ULevelSequencePlayer*                  Player;                                            // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ULevelSequenceDirector* GetDefaultObj();

	void OnCreated();
};

// 0x0 (0xA0 - 0xA0)
// Class LevelSequence.LegacyLevelSequenceDirectorBlueprint
class ULegacyLevelSequenceDirectorBlueprint : public UBlueprint
{
public:

	static class UClass* StaticClass();
	static class ULegacyLevelSequenceDirectorBlueprint* GetDefaultObj();

};

// 0x118 (0x798 - 0x680)
// Class LevelSequence.LevelSequencePlayer
class ULevelSequencePlayer : public UMovieSceneSequencePlayer
{
public:
	FMulticastInlineDelegateProperty_            OnCameraCut;                                       // 0x680(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_FA7[0x108];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULevelSequencePlayer* GetDefaultObj();

	class UCameraComponent* GetActiveCameraComponent();
	class ULevelSequencePlayer* CreateLevelSequencePlayer(class UObject* WorldContextObject, class ULevelSequence* LevelSequence, const struct FMovieSceneSequencePlaybackSettings& Settings, class ALevelSequenceActor** OutActor);
};

// 0x28 (0x248 - 0x220)
// Class LevelSequence.LevelSequenceMediaController
class ALevelSequenceMediaController : public AActor
{
public:
	uint8                                        Pad_1028[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ALevelSequenceActor*                   Sequence;                                          // 0x228(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMediaComponent*                       MediaComponent;                                    // 0x230(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        ServerStartTimeSeconds;                            // 0x238(0x4)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_102E[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ALevelSequenceMediaController* GetDefaultObj();

	void SynchronizeToServer(float DesyncThresholdSeconds);
	void Play();
	void OnRep_ServerStartTimeSeconds();
	class ALevelSequenceActor* GetSequence();
	class UMediaComponent* GetMediaComponent();
};

}


