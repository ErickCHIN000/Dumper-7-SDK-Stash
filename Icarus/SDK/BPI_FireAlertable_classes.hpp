#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_FireAlertable.BPI_FireAlertable_C
class IBPI_FireAlertable_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_FireAlertable_C* GetDefaultObj();

	void NotifyOfFire(const struct FVector& FireLocation, bool* WasNotified);
};

}


