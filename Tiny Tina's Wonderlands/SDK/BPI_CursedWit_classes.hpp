#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_CursedWit.BPI_CursedWit_C
class IBPI_CursedWit_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_CursedWit_C* GetDefaultObj();

	void CursedWit_Unequip(class AOakCharacter* UnequippedBy);
	void CursedWit_OnEquip(class AOakCharacter* EquippedBy);
};

}


