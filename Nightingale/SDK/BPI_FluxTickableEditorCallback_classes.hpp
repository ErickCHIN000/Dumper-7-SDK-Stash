#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_FluxTickableEditorCallback.BPI_FluxTickableEditorCallback_C
class IBPI_FluxTickableEditorCallback_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_FluxTickableEditorCallback_C* GetDefaultObj();

	void UpdateModifierMaterials(TArray<class UMaterialInstanceDynamic*>& Materials, bool UseVelocityMap);
	void ToggleUpdateSimulation();
	void TogleDebugGround();
	void OnEditorSelectionChanged(bool Selected);
	void OnEditorUpdateLoop();
	void OnEditorModifierChanged();
	void OnEditorIterateSimulation(int32 Iterations);
	void OnEditorRestartSimulation();
	void OnEditorStopSimulation();
	void OnEditorShowSimulation();
	void OnEditorPostLoad();
};

}


