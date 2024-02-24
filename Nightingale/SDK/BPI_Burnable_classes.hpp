#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_Burnable.BPI_Burnable_C
class IBPI_Burnable_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_Burnable_C* GetDefaultObj();

	void Extinguish();
	void Ignite();
};

}


