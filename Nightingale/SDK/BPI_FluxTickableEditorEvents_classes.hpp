#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_FluxTickableEditorEvents.BPI_FluxTickableEditorEvents_C
class IBPI_FluxTickableEditorEvents_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_FluxTickableEditorEvents_C* GetDefaultObj();

	void SelectionLoop(double DeltaTime);
	void PostLoad(double Delay);
	void UpdateLoop(double DeltaTime);
	void StopSimulation();
	void StartSimulation(double Delay, int32 Iterations);
	void RestartSimulation();
};

}


