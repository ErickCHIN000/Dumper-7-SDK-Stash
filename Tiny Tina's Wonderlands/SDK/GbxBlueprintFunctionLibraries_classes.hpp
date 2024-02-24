#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class GbxBlueprintFunctionLibraries.GbxBlueprintFunctionLibrariesBPLibrary
class UGbxBlueprintFunctionLibrariesBPLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGbxBlueprintFunctionLibrariesBPLibrary* GetDefaultObj();

	void SortActorListByDistance(class AActor* TargetActor, TArray<class AActor*>& ActorList);
	float SimplexNoise4D(struct FVector4& Location);
	float SimplexNoise3D(struct FVector& Location);
	float SimplexNoise2D(struct FVector2D& Location);
	float SimplexNoise1D(float Location);
	void SetForceMipLevelsToBeResidentForMaterialArray(TArray<class UMaterialInterface*>& MaterialArray, bool OverrideForceMiplevelsToBeResident, bool bForceMiplevelsToBeResidentValue, float ForceDuration, int32 CinematicTextureGroups);
	float PerlinNoise2D(const struct FVector2D& Location, int32 Octaves, float Persistence, float Amplitude);
	float PerlinNoise1D(float X, int32 Octaves, float Persistence, float Amplitude);
	bool IsWithinRangeAndAngle(struct FTransform& Source, class AActor* Target, float Range, float Angle);
	bool IsInEditorMode();
	bool IsEditorLoadingPackage();
	float GbxBlueprintFunctionLibrariesSampleFunction(float Param);
	float FloatDamp(float Current, float Target, float& CurrentVelocity, float SmoothDuration, float MaxSpeed, float DeltaTime);
	class ACharacter* FindClosestPlayerCharacter(class UObject* WorldContextObject, struct FVector& RefLocation);
	void FindClosestActor(TArray<int32>& ActorArray, struct FVector& RefLocation, int32* ClosestActor);
	void ExecuteEditorConsoleCommand(const class FString& Command);
	class UObject* EditorLoadAsset(TSoftObjectPtr<class UObject>& Asset);
	void BroadcastRemoteEvent(class UObject* WorldContextObject, class FName EventName);
};

// 0x0 (0x28 - 0x28)
// Class GbxBlueprintFunctionLibraries.HitResultFunctionLibrary
class UHitResultFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UHitResultFunctionLibrary* GetDefaultObj();

	bool IsBlockingHit(const struct FHitResult& HitResult);
	class UPhysicalMaterial* GetPhysMaterial(const struct FHitResult& HitResult);
	struct FVector GetHitNormal(const struct FHitResult& HitResult);
	struct FVector GetHitLocation(const struct FHitResult& HitResult);
	float GetHitDistance(const struct FHitResult& HitResult);
	class UPrimitiveComponent* GetHitComponent(const struct FHitResult& HitResult);
	class AActor* GetHitActor(const struct FHitResult& HitResult);
	class FName GetBoneName(const struct FHitResult& HitResult);
};

// 0x0 (0x28 - 0x28)
// Class GbxBlueprintFunctionLibraries.TagsFunctionLibrary
class UTagsFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UTagsFunctionLibrary* GetDefaultObj();

	void RemoveTagFromComponent(class UActorComponent* Target, class FName Tag);
	void RemoveTagFromActor(class AActor* Target, class FName Tag);
	bool ComponentContainsTag(class UActorComponent* Target, class FName Tag);
	TArray<class FName> CompareComponentTags(class UActorComponent* FirstComponent, class UActorComponent* SecondComponent, enum class ECompareTag* Branches);
	TArray<class FName> CompareActorTagsWithComponent(class AActor* Actor, class UActorComponent* Component, enum class ECompareTag* Branches);
	TArray<class FName> CompareActorTags(class AActor* FirstActor, class AActor* SecondActor, enum class ECompareTag* Branches);
	void AddTagToComponent(class UActorComponent* Target, class FName Tag);
	void AddTagToActor(class AActor* Target, class FName Tag);
	bool ActorContainsTag(class AActor* Target, class FName Tag);
};

}


