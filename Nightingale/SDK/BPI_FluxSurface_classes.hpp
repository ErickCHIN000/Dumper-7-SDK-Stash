#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_FluxSurface.BPI_FluxSurface_C
class IBPI_FluxSurface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_FluxSurface_C* GetDefaultObj();

	void InitializeAllStates();
	void ApplyColorProfiles();
	void ApplyMask();
	void ApplyPainter();
	void SetCoastlineState(class UPDA_FluxCoastlineState_C* State);
	void SetSimulationState(class UPDA_FluxSimulationState_C* State);
	void SpawnSplashAtLocation(const struct FVector& Location, int32 Type);
	void SetStateHeightWetMap(class UTexture* Texture);
	void GetVolumeCollision(class UPrimitiveComponent** Volume);
	void ApplySurfaceMaterialData(TArray<class UMaterialInstanceDynamic*>& Materials);
	void ApplySurfaceNiagaraData(class UNiagaraComponent* ParticleSystem, bool RequiredGround, bool RequiredWave);
};

}


