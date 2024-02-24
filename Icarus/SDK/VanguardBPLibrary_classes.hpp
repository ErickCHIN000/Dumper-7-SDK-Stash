#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class VanguardBPLibrary.VanguardBPFunctionLibrary
class UVanguardBPFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UVanguardBPFunctionLibrary* GetDefaultObj();

	void SpawnActorOfClass(class AActor* WorldContext, TSubclassOf<class AActor> Class, const struct FTransform& SpawnTransform, enum class ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, class AActor* Owner, class APawn* Instigator, class AActor** OutActor);
	TArray<struct FVector> SortVectorArrayByDistanceFromOrigin(TArray<struct FVector>& Locations, struct FVector& Origin, bool bUseMinDistance, float MinDistance, bool bUseMaxDistance, float MaxDistance, bool bIgnoreZ);
	TArray<struct FTransform> SortTransformArrayByDistanceFromOrigin(TArray<struct FTransform>& Transforms, struct FVector& Origin, bool bUseMinDistance, float MinDistance, bool bUseMaxDistance, float MaxDistance, bool bIgnoreZ);
	TArray<class FString> SortStringArrayAlphabetically(TArray<class FString>& InStringArray);
	TArray<class USceneComponent*> SortComponentsByDistanceFromOrigin(TArray<class USceneComponent*>& SceneComponents, struct FVector& Origin);
	TArray<class AActor*> SortActorsByPathCostFromOrigin(class UObject* WorldContextObject, TArray<class AActor*>& Actors, struct FVector& Origin, bool bIgnoreUnreachable);
	TArray<class AActor*> SortActorsByDistanceFromOrigin(TArray<class AActor*>& Actors, struct FVector& Origin, bool bUseMinDistance, float MinDistance, bool bUseMaxDistance, float MaxDistance, bool bIgnoreZ);
	TArray<class UActorComponent*> SortActorComponentsByDistanceFromOrigin(TArray<class UActorComponent*>& ActorComponents, struct FVector& Origin, bool bUseMaxDistance, float MaxDistance, bool bIgnoreZ);
	void SetSplineMeshSmoothInterpRollScale(class USplineMeshComponent* SplineMeshComponent, bool bUseSmoothInterpRollScale, bool bUpdateMesh);
	void SetRenderInDepthPass(class UPrimitiveComponent* Component, bool Value);
	void SetRenderFocusOutline(bool bEnable);
	void SetLandscapeRVTSettings(class ALandscapeProxy* LandscapeProxy, TArray<class URuntimeVirtualTexture*>& VirtualTextures, int32 NumLOD, int32 LODBias);
	void SetFixedPathBrakingDistance(class UNavMovementComponent* NavMovementComponent, float FixedPathBrakingDistance);
	void SetCanEverAffectNavigation(class UActorComponent* InActorComponent, bool bCanEverAffect);
	void SetBoneCollisionEnabled(class USkeletalMeshComponent* SkeletalMeshComponent, class FName BoneName, enum class ECollisionEnabled CollisionEnabled);
	void SetAllowAnyoneToDestroyComponent(class UActorComponent* InComponent, bool AllowAnyone);
	void ReconstructActor(class AActor* Target);
	void QuickLog(class FName LogCategory, const class FString& Message);
	bool ProjectWorldToScreenOrEdge(class APlayerController* Player, struct FVector& WorldPosition, struct FVector2D* ScreenOrEdgePosition, struct FVector2D* DirFromCentre, bool* IsOffScreen, bool* IsBehindCamera);
	bool ProjectReachablePointAtLocation(class AActor* WorldContext, struct FVector& StartPoint, struct FVector& EndPoint, struct FVector* OutProjectedPoint, const struct FVector& ProjectionExtent, class ANavigationData* NavData, TSubclassOf<class UNavigationQueryFilter> FilterClass);
	bool ProjectOrTraceToNavigablePoint(class AActor* WorldContextObject, struct FVector& InLocation, struct FVector* OutProjectedPoint, enum class ETraceTypeQuery TraceChannel, bool bTraceComplex, TArray<class AActor*>& ActorsToIgnore, bool bIgnoreSelf, const struct FVector& ProjectionExtent, class ANavigationData* NavData, TSubclassOf<class UNavigationQueryFilter> FilterClass);
	TArray<TSoftObjectPtr<class UWorld>> ObjectsToWorlds(TArray<class UObject*>& Objects);
	float MaxInt();
	float MaxFloat();
	void MarkObjectDirty(class UObject* Object);
	void MakeComponentStablyNamed(class UActorComponent* Component, class FName NewName);
	void MakeActorStablyNamed(class AActor* Actor, class FName NewName);
	TArray<class ULevelStreaming*> LoadAllStreamingLevels(class UObject* WorldContextObject);
	bool IsWithEditor();
	bool IsUsingFixedPathBrakingDistance(class UNavMovementComponent* NavMovementComponent);
	bool IsInEditorViewport(class UObject* WorldContextObject);
	bool IsActorReplicatingMovement(class AActor* Actor);
	TSoftObjectPtr<class UWorld> GetWorldFromStreamingAsset(class ULevelStreaming* StreamingLevel);
	bool GetTileInfoFromStreamingLevel(class UObject* WorldContextObject, class ULevelStreaming* StreamingLevel, struct FVector* OutLocation);
	void GetStreamingLevelFromActor(class UObject* WorldContextObject, class AActor* Actor, class ULevelStreaming** OutStreamingLevel);
	TArray<class FName> GetStreamedLevelPackageNames(class UObject* WorldContextObject);
	TArray<class FName> GetStreamedLevelNames(class UObject* WorldContextObject);
	void GetPathFollowingBrakingDistance(class UNavMovementComponent* NavMovementComponent, float* OutBrakingDistance);
	TArray<class UClass*> GetLoadedChildClasses(class UClass* ParentClass);
	class FName GetLevelNameFromStreamingAsset(class ULevelStreaming* StreamingLevel);
	int32 GetHashFromString(class FString& String);
	float GetClosestPlayerDistanceFromLocation(class UObject* WorldContextObject, const struct FVector& Location, enum class EFunctionResult* Result);
	class UObject* GetClassDefaultObject(class UClass* ObjectClass, bool* IsValid);
	void GetChildWidgetsOfClass(TSubclassOf<class UWidget> WidgetClass, class UPanelWidget* InParent, TArray<class UWidget*>* ChildWidgets, bool SearchRecursively);
	TArray<class UClass*> GetChildClassesInPath(class FName& FolderPath, class UClass* ParentClass);
	TArray<class FString> GetAllMapNames(const class FString& OverrideSearchPath);
	void GetActorsOfClassInWorld(class AActor* WorldContext, TSubclassOf<class AActor> ActorClass, TArray<class AActor*>* OutActors);
	TArray<class AActor*> GetActorsInWorld(class UWorld* World);
	bool FindSocketOrTagOnActor(class AActor* InActor, class FName& SocketOrTagName, class UActorComponent** FoundComponent, struct FTransform* FoundWorldTransform);
	void FilterActorsByTags(TArray<class AActor*>& InActorArray, TArray<class FName>& Tags);
	bool DuplicateActorComponent(class UActorComponent* Source, class AActor* Parent, class UActorComponent** OutComponent, class FName Name);
	class AActor* DuplicateActor(class AActor* InputActor, bool bDetachOriginal);
	void DebugLog(enum class EBPLogVerbosity Verbosity, class FName LogCategory, const class FString& Message, bool bOutputToMessageLog);
	bool ComponentOverlapComponentsAgainstObjectType(class UPrimitiveComponent* Component, struct FTransform& ComponentTransform, TArray<enum class EObjectTypeQuery>& ObjectTypes, class UClass* ComponentClassFilter, TArray<class AActor*>& ActorsToIgnore, TArray<class UPrimitiveComponent*>* OutComponents);
	bool BlueprintSuggestProjectileVelocityByChannel(class UObject* WorldContextObject, struct FVector* TossVelocity, const struct FVector& StartLocation, const struct FVector& EndLocation, float LaunchSpeed, float OverrideGravityZ, enum class ESuggestProjVelocityTraceOption TraceOption, float CollisionRadius, TArray<class AActor*>& ActorsToIgnore, TArray<enum class EObjectTypeQuery>& ObjectTypes, bool bTraceComplex, bool bFavorHighArc, bool bDrawDebug);
	void AddActorComponentWithName(class AActor* Owner, TSubclassOf<class UActorComponent> ActorComponentClass, class FName ComponentName, class UActorComponent** OutComponent);
	void AddActorComponent(class AActor* Owner, TSubclassOf<class UActorComponent> ActorComponentClass, class UActorComponent** OutComponent);
	bool ActorLineTraceSingle(class UObject* WorldContextObject, class AActor* TargetActor, const struct FVector& Start, const struct FVector& End, enum class ETraceTypeQuery TraceChannel, bool bTraceComplex, enum class EDrawDebugTrace DrawDebugType, struct FHitResult* OutHit, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime);
};

}


