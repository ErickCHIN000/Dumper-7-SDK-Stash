#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_FluxWaveRenderer.BPI_FluxWaveRenderer_C
class IBPI_FluxWaveRenderer_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_FluxWaveRenderer_C* GetDefaultObj();

	void SetWaveProfile(class UPDA_FluxWaveProfile_C* Profile);
	void SetWaveTexture();
	void GetWaveTextureMaterials(TArray<class UMaterialInstanceDynamic*>* MaterialInstances);
	void SetWaveTextureAndArea(class UTextureRenderTarget2D* Texture, const struct FLinearColor& Area);
	void CanRenderWave(bool* CanRender);
};

}


