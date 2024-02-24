#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_FluxCameraEvents.BPI_FluxCameraEvents_C
class IBPI_FluxCameraEvents_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_FluxCameraEvents_C* GetDefaultObj();

	void FluxCameraInFluid(bool Under);
};

}


