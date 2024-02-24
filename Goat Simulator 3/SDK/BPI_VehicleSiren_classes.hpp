#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_VehicleSiren.BPI_VehicleSiren_C
class IBPI_VehicleSiren_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_VehicleSiren_C* GetDefaultObj();

	void ToggleSiren(bool bSirenEnabled);
};

}


