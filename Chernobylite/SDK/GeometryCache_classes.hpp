#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x68 - 0x28)
// Class GeometryCache.GeometryCache
class UGeometryCache : public UObject
{
public:
	uint8                                        Pad_1C1[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMaterialInterface*>            Materials;                                         // 0x30(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UGeometryCacheTrack*>           Tracks;                                            // 0x40(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C5[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        StartFrame;                                        // 0x60(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        EndFrame;                                          // 0x64(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UGeometryCache* GetDefaultObj();

};

// 0x8 (0x228 - 0x220)
// Class GeometryCache.GeometryCacheActor
class AGeometryCacheActor : public AActor
{
public:
	class UGeometryCacheComponent*               GeometryCacheComponent;                            // 0x220(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class AGeometryCacheActor* GetDefaultObj();

	class UGeometryCacheComponent* GetGeometryCacheComponent();
};

// 0x10 (0x38 - 0x28)
// Class GeometryCache.GeometryCacheCodecBase
class UGeometryCacheCodecBase : public UObject
{
public:
	TArray<int32>                                TopologyRanges;                                    // 0x28(0x10)(Edit, ZeroConstructor, EditConst, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UGeometryCacheCodecBase* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class GeometryCache.GeometryCacheCodecRaw
class UGeometryCacheCodecRaw : public UGeometryCacheCodecBase
{
public:
	int32                                        DummyProperty;                                     // 0x38(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1EE[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGeometryCacheCodecRaw* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class GeometryCache.GeometryCacheCodecV1
class UGeometryCacheCodecV1 : public UGeometryCacheCodecBase
{
public:
	uint8                                        Pad_1F6[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGeometryCacheCodecV1* GetDefaultObj();

};

// 0x60 (0x4D0 - 0x470)
// Class GeometryCache.GeometryCacheComponent
class UGeometryCacheComponent : public UMeshComponent
{
public:
	class UGeometryCache*                        GeometryCache;                                     // 0x470(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRunning;                                          // 0x478(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bLooping;                                          // 0x479(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_291[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StartTimeOffset;                                   // 0x47C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        PlaybackSpeed;                                     // 0x480(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        NumTracks;                                         // 0x484(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ElapsedTime;                                       // 0x488(0x4)(Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_298[0x30];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Duration;                                          // 0x4BC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bManualTick;                                       // 0x4C0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_29B[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGeometryCacheComponent* GetDefaultObj();

	void TickAtThisTime(float Time, bool bInIsRunning, bool bInBackwards, bool bInIsLooping);
	void Stop();
	void SetStartTimeOffset(float NewStartTimeOffset);
	void SetPlaybackSpeed(float NewPlaybackSpeed);
	void SetLooping(bool bNewLooping);
	bool SetGeometryCache(class UGeometryCache* NewGeomCache);
	void PlayReversedFromEnd();
	void PlayReversed();
	void PlayFromStart();
	void Play();
	void Pause();
	bool IsPlayingReversed();
	bool IsPlaying();
	bool IsLooping();
	float GetStartTimeOffset();
	float GetPlaybackSpeed();
	float GetPlaybackDirection();
	int32 GetNumberOfFrames();
	float GetDuration();
	float GetAnimationTime();
};

// 0x30 (0x58 - 0x28)
// Class GeometryCache.GeometryCacheTrack
class UGeometryCacheTrack : public UObject
{
public:
	float                                        Duration;                                          // 0x28(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2B8[0x2C];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGeometryCacheTrack* GetDefaultObj();

};

// 0x28 (0x80 - 0x58)
// Class GeometryCache.GeometryCacheTrack_FlipbookAnimation
class UGeometryCacheTrack_FlipbookAnimation : public UGeometryCacheTrack
{
public:
	uint32                                       NumMeshSamples;                                    // 0x58(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2DA[0x24];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGeometryCacheTrack_FlipbookAnimation* GetDefaultObj();

	void AddMeshSample(struct FGeometryCacheMeshData& MeshData, float SampleTime);
};

// 0x78 (0xD0 - 0x58)
// Class GeometryCache.GeometryCacheTrackStreamable
class UGeometryCacheTrackStreamable : public UGeometryCacheTrack
{
public:
	class UGeometryCacheCodecBase*               Codec;                                             // 0x58(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E2[0x68];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StartSampleTime;                                   // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2E3[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGeometryCacheTrackStreamable* GetDefaultObj();

};

// 0xA8 (0x100 - 0x58)
// Class GeometryCache.GeometryCacheTrack_TransformAnimation
class UGeometryCacheTrack_TransformAnimation : public UGeometryCacheTrack
{
public:
	uint8                                        Pad_2FC[0xA8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGeometryCacheTrack_TransformAnimation* GetDefaultObj();

	void SetMesh(struct FGeometryCacheMeshData& NewMeshData);
};

// 0xA8 (0x100 - 0x58)
// Class GeometryCache.GeometryCacheTrack_TransformGroupAnimation
class UGeometryCacheTrack_TransformGroupAnimation : public UGeometryCacheTrack
{
public:
	uint8                                        Pad_314[0xA8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGeometryCacheTrack_TransformGroupAnimation* GetDefaultObj();

	void SetMesh(struct FGeometryCacheMeshData& NewMeshData);
};

}


