#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_ResourceNodeIIMInterfaces.BPI_ResourceNodeIIMInterfaces_C
class IBPI_ResourceNodeIIMInterfaces_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_ResourceNodeIIMInterfaces_C* GetDefaultObj();

	void GetResourceNodeInteractionInterface(TScriptInterface<class IBPI_ResourceInteraction_C>* ResourceInteraction);
};

}


