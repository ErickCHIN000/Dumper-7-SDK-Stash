#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class Ansel.AnselFunctionLibrary
class UAnselFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAnselFunctionLibrary* GetDefaultObj();

	void StopSession(class UObject* WorldContextObject);
	void StartSession(class UObject* WorldContextObject);
	void SetUIControlVisibility(class UObject* WorldContextObject, enum class EUIControlEffectTarget UIControlTarget, bool bIsVisible);
	void SetSettleFrames(int32 NumSettleFrames);
	void SetIsPhotographyAllowed(bool bIsPhotographyAllowed);
	void SetCameraMovementSpeed(float TranslationSpeed);
	void SetCameraConstraintDistance(float MaxCameraDistance);
	void SetCameraConstraintCameraSize(float CameraSize);
	void SetAutoPostprocess(bool bShouldAutoPostprocess);
	void SetAutoPause(bool bShouldAutoPause);
	bool IsPhotographyAvailable();
	bool IsPhotographyAllowed();
	void ConstrainCameraByGeometry(class UObject* WorldContextObject, const struct FVector& NewCameraLocation, const struct FVector& PreviousCameraLocation, const struct FVector& OriginalCameraLocation, struct FVector* OutCameraLocation);
	void ConstrainCameraByDistance(class UObject* WorldContextObject, const struct FVector& NewCameraLocation, const struct FVector& PreviousCameraLocation, const struct FVector& OriginalCameraLocation, struct FVector* OutCameraLocation, float MaxDistance);
};

}


