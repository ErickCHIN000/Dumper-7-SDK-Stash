#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_FluxWorldPainter.BPI_FluxWorldPainter_C
class IBPI_FluxWorldPainter_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_FluxWorldPainter_C* GetDefaultObj();

	void OnRepaintBrushes();
	void ApplyMaterialParameters(TArray<class UMaterialInstanceDynamic*>& Materials);
	void RenderScenePainter();
};

}


