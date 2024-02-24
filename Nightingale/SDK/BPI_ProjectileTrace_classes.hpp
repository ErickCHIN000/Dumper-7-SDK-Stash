#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_ProjectileTrace.BPI_ProjectileTrace_C
class IBPI_ProjectileTrace_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_ProjectileTrace_C* GetDefaultObj();

	void RegisterWhenTraceReady(class UBP_ProjectileTraceComponent_C* Registree);
	void IsReadyToTrace(bool* IsReady);
	void ShouldHideOnFirstCollision(bool* ShouldStopTrace);
	void TraceOffset(struct FTransform* TraceOffset);
	void TraceIgnoreActors(TArray<class AActor*>* TraceIgnoreActors);
	void TraceImpactDetected(double TimeToImpact, const struct FVector& HitVelocity, const struct FHitResult& HitResult, bool* bSuccess);
};

}


