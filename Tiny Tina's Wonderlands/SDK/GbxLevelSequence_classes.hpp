#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x490 - 0x490)
// Class GbxLevelSequence.GbxLevelSequence
class UGbxLevelSequence : public ULevelSequence
{
public:

	static class UClass* StaticClass();
	static class UGbxLevelSequence* GetDefaultObj();

};

// 0xD8 (0x608 - 0x530)
// Class GbxLevelSequence.GbxLevelSequenceActor
class AGbxLevelSequenceActor : public ALevelSequenceActor
{
public:
	uint8                                        Pad_5BC[0x20];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnPlay;                                            // 0x550(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPause;                                           // 0x560(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnFinished;                                        // 0x570(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnStop;                                            // 0x580(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UGameplayTasksComponent*               GameplayTasksComponent;                            // 0x590(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bClearCameraFadeOnEnd;                             // 0x598(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C6[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxLevelSequencePlayer*               GbxLevelSequencePlayer;                            // 0x5A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGbxLevelSequenceBindingSlot>  BindingSlots;                                      // 0x5A8(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                       ReplicatedLevelSequence;                           // 0x5B8(0x18)(Net, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMovieScenePlayerStatus           ReplicatedPlaybackStatus;                          // 0x5D0(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReplicatedReversePlayback;                        // 0x5D1(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReplicatedGoToEndAndStop;                         // 0x5D2(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5CD[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ReplicatedPlaybackPosition;                        // 0x5D4(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReplicatedPlaybackRate;                            // 0x5D8(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReplicatedLoopCount;                               // 0x5DC(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGbxLevelSequenceBoundActorSlot> BoundActors;                                       // 0x5E0(0x10)(Net, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bIgnoreReplicatedPlaybackState;                    // 0x5F0(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D7[0x13];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bPendingReplicatedCutsceneSkip;                    // 0x604(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWasCutsceneSkipped;                               // 0x605(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D8[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AGbxLevelSequenceActor* GetDefaultObj();

	void Stop();
	void SetPlayRate(float PlayRate);
	void PlayLooping(int32 NumLoops);
	void PlayFromStart();
	void Play();
	void Pause();
	void OnRep_ReplicatedCutsceneSkip();
	void OnLevelSequenceStop();
	void OnLevelSequencePlay();
	void OnLevelSequencePause();
	void OnLevelSequenceFinished();
	bool IsPlaying();
	bool IsPaused();
	bool IsFinished();
	void GoToEndAndStop();
	float GetPlayRate();
};

// 0x18 (0x8A8 - 0x890)
// Class GbxLevelSequence.GbxLevelSequencePlayer
class UGbxLevelSequencePlayer : public ULevelSequencePlayer
{
public:
	uint8                                        Pad_604[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGbxLevelSequenceActor*                GbxLevelSequenceActor;                             // 0x8A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGbxLevelSequencePlayer* GetDefaultObj();

	void OnStarted();
	bool IsFinished();
	class UGbxLevelSequencePlayer* CreateGbxLevelSequencePlayer(class UObject* WorldContextObject, class ULevelSequence* LevelSequence, bool bPlay, const struct FMovieSceneSequencePlaybackSettings& Settings, class AGbxLevelSequenceActor** OutActor);
};

// 0x0 (0x28 - 0x28)
// Class GbxLevelSequence.GbxLevelSequenceThrottleLibrary
class UGbxLevelSequenceThrottleLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGbxLevelSequenceThrottleLibrary* GetDefaultObj();

	void UnlimitSequenceActor(class AGbxLevelSequenceActor* Player);
	bool ShouldLimitSequenceGroup(class FName InGroup);
	void LimitSequenceActor(class AGbxLevelSequenceActor* Player, class FName Group);
	void ClearLimitGroup(class FName Group);
};

// 0x0 (0x98 - 0x98)
// Class GbxLevelSequence.GbxMovieSceneBindingOverrides
class UGbxMovieSceneBindingOverrides : public UMovieSceneBindingOverrides
{
public:

	static class UClass* StaticClass();
	static class UGbxMovieSceneBindingOverrides* GetDefaultObj();

};

}


