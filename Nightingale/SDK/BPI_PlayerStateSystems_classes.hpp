#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_PlayerStateSystems.BPI_PlayerStateSystems_C
class IBPI_PlayerStateSystems_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_PlayerStateSystems_C* GetDefaultObj();

	void GetBPPlayerController(class ABP_PlayerController_C** Player_Controller);
	void GetMapTracker(class UBP_MapTracker_C** MapTracker);
	void GetGroupSystem(class UGroupComponentBase** GroupComponent);
	void GetDebugModeStateInterface(class UBP_DebugModeStateComponent_C** DebugModeState);
};

}


