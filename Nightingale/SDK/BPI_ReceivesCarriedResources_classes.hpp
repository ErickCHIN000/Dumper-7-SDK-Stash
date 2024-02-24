#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_ReceivesCarriedResources.BPI_ReceivesCarriedResources_C
class IBPI_ReceivesCarriedResources_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_ReceivesCarriedResources_C* GetDefaultObj();

	void OnReceiveCarriedResources(class AController* Controller);
};

}


