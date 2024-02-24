#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_FluxInteractionRenderer.BPI_FluxInteractionRenderer_C
class IBPI_FluxInteractionRenderer_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_FluxInteractionRenderer_C* GetDefaultObj();

	void GetCoastlineState(class UPDA_FluxCoastlineState_C** State);
	void GetSimulationState(class UPDA_FluxSimulationState_C** State);
	void SetInteractionsTexture(class UTextureRenderTarget2D* Texture);
	void SetInteractionsArea(const struct FLinearColor& Area);
	void CanRenderInteractions(bool* CanRender);
};

}


