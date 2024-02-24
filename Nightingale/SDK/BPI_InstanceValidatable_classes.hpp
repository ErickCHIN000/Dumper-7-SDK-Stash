#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_InstanceValidatable.BPI_InstanceValidatable_C
class IBPI_InstanceValidatable_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_InstanceValidatable_C* GetDefaultObj();

	void ValidateInstance(bool* PassedValidation, TArray<class FText>* ValidationErrors);
};

}


