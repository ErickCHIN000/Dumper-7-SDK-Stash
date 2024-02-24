#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_HasTagContainer.BPI_HasTagContainer_C
class IBPI_HasTagContainer_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_HasTagContainer_C* GetDefaultObj();

	void GetTagContainer(struct FGameplayTagContainer* GameplayTagContainer);
};

}


