#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass ICriticalHitInterface.ICriticalHitInterface_C
class IICriticalHitInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IICriticalHitInterface_C* GetDefaultObj();

	bool CanKillcam();
	void GatherIntersections(class AActor* Projectile, bool Debug, bool* Return, TArray<struct FFCHCollisionStruct>* Intersections);
	void GetCHBounds(bool* Return, class UBoxComponent** Box);
	void GetTargetHealth(bool* Return, float* Health);
	void ResetPrediction(bool* Return);
	void PredictMovement(float Time, bool* Return);
};

}


