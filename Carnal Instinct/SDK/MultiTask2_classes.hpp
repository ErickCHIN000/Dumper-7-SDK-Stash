#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x98 - 0x28)
// Class MultiTask2.MultiTaskBase
class UMultiTaskBase : public UObject
{
public:
	uint8                                        Pad_140[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bIsTickable;                                       // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsTickableInEditor;                               // 0x31(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsTickableWhenPaused;                             // 0x32(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_142[0x65];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMultiTaskBase* GetDefaultObj();

	void OnComplete();
	void OnCancel();
};

// 0x28 (0xC0 - 0x98)
// Class MultiTask2.ThreadTaskBase
class UThreadTaskBase : public UMultiTaskBase
{
public:
	enum class ETaskExecutionType                ExecutionType;                                     // 0x98(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_150[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMultiTaskThreadPool*                  ThreadPool;                                        // 0xA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_152[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UThreadTaskBase* GetDefaultObj();

	void WaitToFinish();
};

// 0x18 (0xD8 - 0xC0)
// Class MultiTask2.MultiThreadTask
class UMultiThreadTask : public UThreadTaskBase
{
public:
	uint8                                        Pad_15D[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMultiThreadTask* GetDefaultObj();

	void TaskBody();
};

// 0x28 (0x100 - 0xD8)
// Class MultiTask2.DelaunayTriangulation2DTask
class UDelaunayTriangulation2DTask : public UMultiThreadTask
{
public:
	uint8                                        Pad_163[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDelaunayTriangulation2DTask* GetDefaultObj();

};

// 0x38 (0x110 - 0xD8)
// Class MultiTask2.FileToPixelDataTask
class UFileToPixelDataTask : public UMultiThreadTask
{
public:
	uint8                                        Pad_166[0x38];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFileToPixelDataTask* GetDefaultObj();

};

// 0x3C8 (0x4A0 - 0xD8)
// Class MultiTask2.GenerateMarchingCubesTask
class UGenerateMarchingCubesTask : public UMultiThreadTask
{
public:
	int32                                        ResetRunawayIterationCount;                        // 0xD8(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMarchingCubesSettings                Settings;                                          // 0xDC(0x24)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, NativeAccessSpecifierPublic)
	struct FIntVector                            ChunkSlot;                                         // 0x100(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_176[0x394];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGenerateMarchingCubesTask* GetDefaultObj();

	void ConstructDensityPoint(struct FIntVector& VoxelCoordinates, struct FMarchingCubesDensityPoint* DensityPoint);
};

// 0x28 (0xC0 - 0x98)
// Class MultiTask2.MultiFrameAsyncTask
class UMultiFrameAsyncTask : public UMultiTaskBase
{
public:
	int32                                        IterationsPerTick;                                 // 0x98(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Delay;                                             // 0x9C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_183[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMultiFrameAsyncTask* GetDefaultObj();

	void TaskBody();
};

// 0x38 (0xD0 - 0x98)
// Class MultiTask2.MultiFrameLoop1DTask
class UMultiFrameLoop1DTask : public UMultiTaskBase
{
public:
	int32                                        XSize;                                             // 0x98(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        IterationsPerTick;                                 // 0x9C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Delay;                                             // 0xA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_195[0x2C];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMultiFrameLoop1DTask* GetDefaultObj();

	void TaskBody(int32 X);
};

// 0x38 (0xD0 - 0x98)
// Class MultiTask2.MultiFrameLoop2DTask
class UMultiFrameLoop2DTask : public UMultiTaskBase
{
public:
	int32                                        XSize;                                             // 0x98(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        YSize;                                             // 0x9C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        IterationsPerTick;                                 // 0xA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Delay;                                             // 0xA4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A1[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMultiFrameLoop2DTask* GetDefaultObj();

	void TaskBody(int32 X, int32 Y);
};

// 0x48 (0xE0 - 0x98)
// Class MultiTask2.MultiFrameLoop3DTask
class UMultiFrameLoop3DTask : public UMultiTaskBase
{
public:
	int32                                        XSize;                                             // 0x98(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        YSize;                                             // 0x9C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ZSize;                                             // 0xA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        IterationsPerTick;                                 // 0xA4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Delay;                                             // 0xA8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C2[0x34];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMultiFrameLoop3DTask* GetDefaultObj();

	void TaskBody(int32 X, int32 Y, int32 Z);
};

// 0x0 (0x28 - 0x28)
// Class MultiTask2.MultiFrameTaskLibrary
class UMultiFrameTaskLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMultiFrameTaskLibrary* GetDefaultObj();

	void DoLoop3DTask(class UObject* WorldContextObject, enum class EMultiTask2BranchesWithBody* Out, const struct FLatentActionInfo& LatentInfo, TSubclassOf<class UMultiFrameLoop3DTask> Class, int32* X, int32* Y, int32* Z, class UMultiFrameLoop3DTask** Task, int32 XSize, int32 YSize, int32 ZSize, int32 IterationsPerTick, float Delay);
	void DoLoop2DTask(class UObject* WorldContextObject, enum class EMultiTask2BranchesWithBody* Out, const struct FLatentActionInfo& LatentInfo, TSubclassOf<class UMultiFrameLoop2DTask> Class, int32* X, int32* Y, class UMultiFrameLoop2DTask** Task, int32 XSize, int32 YSize, int32 IterationsPerTick, float Delay);
	void DoLoop1DTask(class UObject* WorldContextObject, enum class EMultiTask2BranchesWithBody* Out, const struct FLatentActionInfo& LatentInfo, TSubclassOf<class UMultiFrameLoop1DTask> Class, int32* X, class UMultiFrameLoop1DTask** Task, int32 XSize, int32 IterationsPerTick, float Delay);
	void DoAsyncTask(class UObject* WorldContextObject, enum class EMultiTask2BranchesNoCompleteWithBody* Out, const struct FLatentActionInfo& LatentInfo, TSubclassOf<class UMultiFrameAsyncTask> Class, class UMultiFrameAsyncTask** Task, int32 IterationsPerTick, float Delay);
};

// 0x0 (0x28 - 0x28)
// Class MultiTask2.MultiTask2TraceLibrary
class UMultiTask2TraceLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMultiTask2TraceLibrary* GetDefaultObj();

	bool SphereTraceSingleThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, float Radius, enum class ETraceTypeQuery TraceChannel, bool bTraceComplex, TArray<class AActor*>& ActorsToIgnore, struct FHitResult* OutHit);
	bool SphereTraceSingleForObjectsThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, float Radius, TArray<enum class EObjectTypeQuery>& ObjectTypes, bool bTraceComplex, TArray<class AActor*>& ActorsToIgnore, struct FHitResult* OutHit);
	bool SphereTraceSingleByProfileThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, float Radius, class FName ProfileName, bool bTraceComplex, TArray<class AActor*>& ActorsToIgnore, struct FHitResult* OutHit);
	bool SphereTraceMultiThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, float Radius, enum class ETraceTypeQuery TraceChannel, bool bTraceComplex, TArray<class AActor*>& ActorsToIgnore, TArray<struct FHitResult>* OutHits);
	bool SphereTraceMultiForObjectsThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, float Radius, TArray<enum class EObjectTypeQuery>& ObjectTypes, bool bTraceComplex, TArray<class AActor*>& ActorsToIgnore, TArray<struct FHitResult>* OutHits);
	bool SphereTraceMultiByProfileThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, float Radius, class FName ProfileName, bool bTraceComplex, TArray<class AActor*>& ActorsToIgnore, TArray<struct FHitResult>* OutHits);
	bool LineTraceSingleThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, enum class ETraceTypeQuery TraceChannel, bool bTraceComplex, TArray<class AActor*>& ActorsToIgnore, struct FHitResult* OutHit);
	bool LineTraceSingleForObjectsThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, TArray<enum class EObjectTypeQuery>& ObjectTypes, bool bTraceComplex, TArray<class AActor*>& ActorsToIgnore, struct FHitResult* OutHit);
	bool LineTraceSingleByProfileThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, class FName ProfileName, bool bTraceComplex, TArray<class AActor*>& ActorsToIgnore, struct FHitResult* OutHit);
	bool LineTraceMultiThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, enum class ETraceTypeQuery TraceChannel, bool bTraceComplex, TArray<class AActor*>& ActorsToIgnore, TArray<struct FHitResult>* OutHits);
	bool LineTraceMultiForObjectsThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, TArray<enum class EObjectTypeQuery>& ObjectTypes, bool bTraceComplex, TArray<class AActor*>& ActorsToIgnore, TArray<struct FHitResult>* OutHits);
	bool LineTraceMultiByProfileThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, class FName ProfileName, bool bTraceComplex, TArray<class AActor*>& ActorsToIgnore, TArray<struct FHitResult>* OutHits);
	bool CapsuleTraceSingleThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, enum class ETraceTypeQuery TraceChannel, bool bTraceComplex, TArray<class AActor*>& ActorsToIgnore, struct FHitResult* OutHit);
	bool CapsuleTraceSingleForObjectsThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, TArray<enum class EObjectTypeQuery>& ObjectTypes, bool bTraceComplex, TArray<class AActor*>& ActorsToIgnore, struct FHitResult* OutHit);
	bool CapsuleTraceSingleByProfileThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, class FName ProfileName, bool bTraceComplex, TArray<class AActor*>& ActorsToIgnore, struct FHitResult* OutHit);
	bool CapsuleTraceMultiThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, enum class ETraceTypeQuery TraceChannel, bool bTraceComplex, TArray<class AActor*>& ActorsToIgnore, TArray<struct FHitResult>* OutHits);
	bool CapsuleTraceMultiForObjectsThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, TArray<enum class EObjectTypeQuery>& ObjectTypes, bool bTraceComplex, TArray<class AActor*>& ActorsToIgnore, TArray<struct FHitResult>* OutHits);
	bool CapsuleTraceMultiByProfileThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, class FName ProfileName, bool bTraceComplex, TArray<class AActor*>& ActorsToIgnore, TArray<struct FHitResult>* OutHits);
	bool BoxTraceSingleThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, const struct FVector& HalfSize, const struct FRotator& Orientation, enum class ETraceTypeQuery TraceChannel, bool bTraceComplex, TArray<class AActor*>& ActorsToIgnore, struct FHitResult* OutHit);
	bool BoxTraceSingleForObjectsThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, const struct FVector& HalfSize, const struct FRotator& Orientation, TArray<enum class EObjectTypeQuery>& ObjectTypes, bool bTraceComplex, TArray<class AActor*>& ActorsToIgnore, struct FHitResult* OutHit);
	bool BoxTraceSingleByProfileThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, const struct FVector& HalfSize, const struct FRotator& Orientation, class FName ProfileName, bool bTraceComplex, TArray<class AActor*>& ActorsToIgnore, struct FHitResult* OutHit);
	bool BoxTraceMultiThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, const struct FVector& HalfSize, const struct FRotator& Orientation, enum class ETraceTypeQuery TraceChannel, bool bTraceComplex, TArray<class AActor*>& ActorsToIgnore, TArray<struct FHitResult>* OutHits);
	bool BoxTraceMultiForObjectsThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, const struct FVector& HalfSize, const struct FRotator& Orientation, TArray<enum class EObjectTypeQuery>& ObjectTypes, bool bTraceComplex, TArray<class AActor*>& ActorsToIgnore, TArray<struct FHitResult>* OutHits);
	bool BoxTraceMultiByProfileThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, const struct FVector& HalfSize, const struct FRotator& Orientation, class FName ProfileName, bool bTraceComplex, TArray<class AActor*>& ActorsToIgnore, TArray<struct FHitResult>* OutHits);
};

// 0x0 (0x28 - 0x28)
// Class MultiTask2.MultiTask2UtilitiesLibrary
class UMultiTask2UtilitiesLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMultiTask2UtilitiesLibrary* GetDefaultObj();

	void UpdateNavigationData(class UActorComponent* Component);
	bool UpdateInstancePhysicsBody(class UHierarchicalInstancedStaticMeshComponent* HISM, int32 InstanceIndex, bool bTeleport);
	void SetMaximumLoopIterations(int32 MaximumLoopIterations);
	bool SegmentTriangleIntersection(struct FVector& StartPoint, struct FVector& EndPoint, struct FVector& A, struct FVector& B, struct FVector& C, struct FVector* OutIntersectPoint, struct FVector* OutTriangleNormal);
	void ResetRunaway();
	void RemoveFromRoot(class UObject* Object);
	int32 MixThreeIntegers(int32 Integer1, int32 Integer2, int32 Integer3);
	bool IsRunning(class UMultiTaskBase* Task);
	bool IsCanceled(class UMultiTaskBase* Task);
	float GetTriangleAreaSize(struct FVector& A, struct FVector& B, struct FVector& C);
	void GetRandomScale(struct FVector& Min, struct FVector& Max, enum class EMultiTask2ScaleType Type, struct FRandomStream& RandomStream, struct FVector* Scale);
	void GetRandomPointInTriangle(struct FVector& A, struct FVector& B, struct FVector& C, struct FRandomStream& RandomStream, struct FVector* OutPoint);
	class UObject* GetContextWorld(class UObject* WorldContextObject);
	void Cancel(class UMultiTaskBase* Task);
	void AddToRoot(class UObject* Object);
};

// 0x0 (0x28 - 0x28)
// Class MultiTask2.MultiTask2VoxelLibrary
class UMultiTask2VoxelLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMultiTask2VoxelLibrary* GetDefaultObj();

	void VoxelCoordinatesToLocalLocation(struct FVector& VoxelCoordinates, struct FMarchingCubesSettings& Settings, struct FVector* ReturnValue);
	int32 VoxelCoordinatesToLinearIndex(struct FIntVector& VoxelCoordinates, struct FMarchingCubesSettings& Settings);
	void LinearIndexToVoxelCoordinates(int32& LinearIndex, struct FMarchingCubesSettings& Settings, struct FIntVector* VoxelCoordinates);
	bool IsInRange(struct FIntVector& VoxelCoordinates, struct FMarchingCubesSettings& Settings);
	void GetVoxelCoordinatesInRadius(struct FTransform& GeometryTransform, struct FVector& BrushLocation, struct FVector& Radius, struct FMarchingCubesSettings& Settings, TArray<struct FIntVector>* ReturnValue);
	void GetVoxelCoordinatesAtLocation(struct FTransform& GeometryTransform, struct FVector& Location, struct FMarchingCubesSettings& Settings, struct FIntVector* ReturnValue);
	int32 GetVerticeCount_VoxelData(struct FMarchingCubesData& VoxelData);
	bool GetVertice_VoxelData(struct FMarchingCubesData& VoxelData, int32 VerticeIndex, struct FVector* OutValue);
	int32 GetTriangleCount_VoxelData(struct FMarchingCubesData& VoxelData);
	bool GetTriangle_VoxelData(struct FMarchingCubesData& VoxelData, int32 TriangleIndex, int32* A, int32* B, int32* C);
	void GetRelevantSlots(struct FIntVector& RootSlot, int32 Radius, TArray<struct FIntVector>& ExistingChunks, struct FMarchingCubesSettings& Settings, TArray<struct FIntVector>* NewSlots, TArray<struct FIntVector>* OldRelevantSlots);
	bool GetNeighbor(struct FIntVector& VoxelCoordinates, struct FIntVector& Direction, struct FMarchingCubesSettings& Settings, struct FIntVector* Neighbor);
	void GetLocationFromChunkSlot(struct FIntVector& ChunkSlot, struct FMarchingCubesSettings& Settings, struct FVector* ReturnValue);
	void GetChunkSlotFromLocation(struct FVector& Location, struct FMarchingCubesSettings& Settings, struct FIntVector* ReturnValue);
	void DoGenerateMarchingCubesTask(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, TSubclassOf<class UGenerateMarchingCubesTask> Class, struct FIntVector& ChunkSlot, struct FMarchingCubesSettings& Settings, enum class EMarchingCubesAlgorithm Algorithm, bool bForceManifold, bool bUseSharedPoints, class UGenerateMarchingCubesTask** Task, struct FMarchingCubesData* VoxelData, enum class EMultiTask2Branches* Out, enum class ETaskExecutionType ExecutionType, class UMultiTaskThreadPool* ThreadPool);
	void DoConvertVoxelDataToMeshDataTask(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, TSubclassOf<class UGenerateMarchingCubesTask> Class, struct FIntVector& ChunkSlot, struct FMarchingCubesSettings& Settings, enum class EMarchingCubesNormal NormalType, bool bUseFlatShading, struct FMarchingCubesData& VoxelData, TArray<struct FMarchingCubesSimplifierSettings>& SimplifierSettings, class UGenerateMarchingCubesTask** Task, TArray<struct FMarchingCubesMeshData>* MeshData, enum class EMultiTask2Branches* Out, enum class ETaskExecutionType ExecutionType, class UMultiTaskThreadPool* ThreadPool);
};

// 0x28 (0x50 - 0x28)
// Class MultiTask2.MultiTaskMutex
class UMultiTaskMutex : public UObject
{
public:
	uint8                                        Pad_11D7[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMultiTaskMutex* GetDefaultObj();

	void Unlock();
	bool TryLock();
	void Lock();
};

// 0x10 (0x38 - 0x28)
// Class MultiTask2.MultiTaskThreadPool
class UMultiTaskThreadPool : public UObject
{
public:
	uint8                                        Pad_1217[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMultiTaskThreadPool* GetDefaultObj();

	int32 GetThreadsNum();
};

// 0x0 (0x28 - 0x28)
// Class MultiTask2.MultiThreadTaskLibrary
class UMultiThreadTaskLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMultiThreadTaskLibrary* GetDefaultObj();

	void Sleep(float Seconds);
	bool IsInGameThread();
	int32 GetNumberOfCoresIncludingHyperthreads();
	int32 GetNumberOfCores();
	void DoUpdateInstances4(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UHierarchicalInstancedStaticMeshComponent* HISM, int32 StartIndex, TArray<struct FTransform>& Transforms, TArray<struct FVector4>& CustomData, int32 Chunks, bool bWorldSpace, bool bTeleport, bool bUpdatePhysicsBodies, bool bMarkRenderStateDirty, bool bCreateInternalDataCopies, class UMultiTaskBase** Task, enum class EMultiTask2Branches* Out, enum class ETaskExecutionType ExecutionType, class UMultiTaskThreadPool* ThreadPool);
	void DoUpdateInstances3(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UHierarchicalInstancedStaticMeshComponent* HISM, int32 StartIndex, TArray<struct FTransform>& Transforms, TArray<struct FVector>& CustomData, int32 Chunks, bool bWorldSpace, bool bTeleport, bool bUpdatePhysicsBodies, bool bMarkRenderStateDirty, bool bCreateInternalDataCopies, class UMultiTaskBase** Task, enum class EMultiTask2Branches* Out, enum class ETaskExecutionType ExecutionType, class UMultiTaskThreadPool* ThreadPool);
	void DoUpdateInstances2(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UHierarchicalInstancedStaticMeshComponent* HISM, int32 StartIndex, TArray<struct FTransform>& Transforms, TArray<struct FVector2D>& CustomData, int32 Chunks, bool bWorldSpace, bool bTeleport, bool bUpdatePhysicsBodies, bool bMarkRenderStateDirty, bool bCreateInternalDataCopies, class UMultiTaskBase** Task, enum class EMultiTask2Branches* Out, enum class ETaskExecutionType ExecutionType, class UMultiTaskThreadPool* ThreadPool);
	void DoUpdateInstances(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UHierarchicalInstancedStaticMeshComponent* HISM, int32 StartIndex, TArray<struct FTransform>& Transforms, TArray<float>& CustomData, int32 Chunks, bool bWorldSpace, bool bTeleport, bool bUpdatePhysicsBodies, bool bMarkRenderStateDirty, bool bCreateInternalDataCopies, class UMultiTaskBase** Task, enum class EMultiTask2Branches* Out, enum class ETaskExecutionType ExecutionType, class UMultiTaskThreadPool* ThreadPool);
	void DoSpawnInstances(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UHierarchicalInstancedStaticMeshComponent* HISM, TArray<struct FTransform>& Transforms, int32 Chunks, bool bWorldSpace, bool bCreatePhysicsBodies, bool bCreateInternalDataCopies, class UMultiTaskBase** Task, TArray<int32>* NewInstances, enum class EMultiTask2Branches* Out, enum class ETaskExecutionType ExecutionType, class UMultiTaskThreadPool* ThreadPool);
	void DoSingleThreadTask2(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UMultiThreadTask** Task, enum class EMultiTask2BranchesWithBody* Out, enum class ETaskExecutionType ExecutionType, class UMultiTaskThreadPool* ThreadPool);
	void DoSingleThreadTask(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, TSubclassOf<class UMultiThreadTask> Class, class UMultiThreadTask** Task, enum class EMultiTask2Branches* Out, enum class ETaskExecutionType ExecutionType, class UMultiTaskThreadPool* ThreadPool);
	void DoMultiThreadTask(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, TSubclassOf<class UMultiThreadTask> Class, int32 Count, TArray<class UMultiThreadTask*>* Tasks, enum class EMultiTask2BranchesNoCancel* Out, enum class ETaskExecutionType ExecutionType, class UMultiTaskThreadPool* ThreadPool);
	void DoDelaunayTriangulation2D(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, TArray<struct FVector2D>& Points, class UMultiTaskBase** Task, TArray<struct FMultiTask2Delaunay2DTriangle>* Triangles, enum class EMultiTask2Branches* Out, enum class ETaskExecutionType ExecutionType, class UMultiTaskThreadPool* ThreadPool);
	void DestroyThreadPoolImmediately(class UMultiTaskThreadPool* ThreadPool);
	class UMultiTaskThreadPool* CreateThreadPool(class UObject* WorldContextObject, int32 NumQueuedThreads, int32 StackSize, enum class EMultiTaskThreadPriority ThreadPriority, const class FString& Name);
	class UMultiTaskMutex* CreateMutex(class UObject* WorldContextObject);
};

// 0x0 (0x28 - 0x28)
// Class MultiTask2.PixelReaderLibrary
class UPixelReaderLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UPixelReaderLibrary* GetDefaultObj();

	void SetsRGB(struct FPixelData& PixelData, bool NewValue);
	void SetSize(struct FPixelData& PixelData, int32 Width, int32 Height);
	bool SetPixel(struct FPixelData& PixelData, struct FIntPoint& Coordinates, struct FColor& Pixel);
	bool IsPixelDataValid(struct FPixelData& PixelData);
	int32 GetWidth(struct FPixelData& PixelData);
	bool GetPixel(struct FPixelData& PixelData, struct FIntPoint& Coordinates, struct FColor* Pixel);
	int32 GetHeight(struct FPixelData& PixelData);
	void DoReadUrlToPixelDataTask(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, enum class EMultiTask2Branches* Out, const class FString& URL, float Timeout, struct FPixelData* PixelData, class UMultiTaskBase** Task, enum class ETaskExecutionType ExecutionType, class UMultiTaskThreadPool* ThreadPool);
	void DoReadPixelsTask(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, enum class EMultiTask2BranchesNoCancel* Out, class UTexture* Texture, struct FPixelData* PixelData);
	void DoReadFileToPixelDataTask(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, enum class EMultiTask2BranchesNoCancel* Out, const class FString& File, struct FPixelData* PixelData, enum class ETaskExecutionType ExecutionType, class UMultiTaskThreadPool* ThreadPool);
	void DoPixelDataDitheringTask(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, enum class EMultiTask2Branches* Out, struct FPixelData& PixelData, int32 Scale, struct FPixelData* OutPixelData, class UMultiTaskBase** Task, enum class ETaskExecutionType ExecutionType, class UMultiTaskThreadPool* ThreadPool);
	class UTexture2D* CreateTextureFromPixelData(class UObject* Outer, struct FPixelData& PixelData);
};

// 0x38 (0x110 - 0xD8)
// Class MultiTask2.PixelReaderTask
class UPixelReaderTask : public UMultiThreadTask
{
public:
	class UTexture*                              TextureObj;                                        // 0xD8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPixelData                            PixelData;                                         // 0xE0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DEA[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPixelReaderTask* GetDefaultObj();

};

// 0x38 (0x110 - 0xD8)
// Class MultiTask2.SetDitheringTask
class USetDitheringTask : public UMultiThreadTask
{
public:
	uint8                                        Pad_1E11[0x38];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USetDitheringTask* GetDefaultObj();

};

// 0x108 (0x1E0 - 0xD8)
// Class MultiTask2.SpawnInstancesTask
class USpawnInstancesTask : public UMultiThreadTask
{
public:
	uint8                                        Pad_1EED[0x108];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USpawnInstancesTask* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MultiTask2.SyncUtilitiesLibrary
class USyncUtilitiesLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class USyncUtilitiesLibrary* GetDefaultObj();

	void ThreadSafeIntegerSetThreadSafeInteger(struct FThreadSafeInteger& A, struct FThreadSafeInteger& B);
	void ThreadSafeIntegerSetInteger(struct FThreadSafeInteger& A, int32 B);
	void ThreadSafeIntegerIncrement(struct FThreadSafeInteger& ThreadSafeInteger);
	bool ThreadSafeIntegerEqualsThreadSafeInteger(struct FThreadSafeInteger& A, struct FThreadSafeInteger& B);
	bool ThreadSafeIntegerEqualsInt32(struct FThreadSafeInteger& A, int32& B);
	void ThreadSafeIntegerDecrement(struct FThreadSafeInteger& ThreadSafeInteger);
	void ThreadSafeBooleanSetThreadSafeBoolean(struct FThreadSafeBoolean& A, struct FThreadSafeBoolean& B);
	void ThreadSafeBooleanSetBoolean(struct FThreadSafeBoolean& A, bool B);
	bool ThreadSafeBooleanEqualsThreadSafeBoolean(struct FThreadSafeBoolean& A, struct FThreadSafeBoolean& B);
	bool ThreadSafeBooleanEqualsBoolean(struct FThreadSafeBoolean& A, bool& B);
	class FString Conv_ThreadSafeIntegerToString(struct FThreadSafeInteger& ThreadSafeInteger);
	int32 Conv_ThreadSafeIntegerToInt32(struct FThreadSafeInteger& ThreadSafeInteger);
	class FString Conv_ThreadSafeBooleanToString(struct FThreadSafeBoolean& ThreadSafeBoolean);
	bool Conv_ThreadSafeBooleanToBool(struct FThreadSafeBoolean& ThreadSafeBoolean);
};

// 0x148 (0x220 - 0xD8)
// Class MultiTask2.UpdateInstancesTask
class UUpdateInstancesTask : public UMultiThreadTask
{
public:
	uint8                                        Pad_21D4[0x148];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UUpdateInstancesTask* GetDefaultObj();

};

// 0x58 (0x130 - 0xD8)
// Class MultiTask2.UrlToPixelDataTask
class UUrlToPixelDataTask : public UMultiThreadTask
{
public:
	uint8                                        Pad_21EF[0x58];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UUrlToPixelDataTask* GetDefaultObj();

};

}


