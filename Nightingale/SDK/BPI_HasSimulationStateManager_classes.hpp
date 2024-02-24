#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_HasSimulationStateManager.BPI_HasSimulationStateManager_C
class IBPI_HasSimulationStateManager_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_HasSimulationStateManager_C* GetDefaultObj();

	void ResolveSimulationRound(bool* bSuccess);
	void GetSimulationStateManager(class ANWXSimStateManagerBase** Simulation_State_Manager);
};

}


