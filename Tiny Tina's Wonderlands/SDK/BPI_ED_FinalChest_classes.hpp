#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_ED_FinalChest.BPI_ED_FinalChest_C
class IBPI_ED_FinalChest_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_ED_FinalChest_C* GetDefaultObj();

	void GetNonTutoCookieAmount(float* NonTutoCookieAmount);
	void GetTutoCookieAmount(float* TutoCookieAmount);
};

}


