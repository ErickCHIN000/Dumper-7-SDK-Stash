#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_ProjectileHoldAndThrow.BPI_ProjectileHoldAndThrow_C
class IBPI_ProjectileHoldAndThrow_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_ProjectileHoldAndThrow_C* GetDefaultObj();

	void HNT_Throw();
	void HNT_Drop();
	void HNT_Prime();
};

}


