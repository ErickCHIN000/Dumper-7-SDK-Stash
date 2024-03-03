#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_Interactable.BPI_Interactable_C
class IBPI_Interactable_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_Interactable_C* GetDefaultObj();

	void Game_Load();
	void Remove_Interaction();
	void Initialize();
	void End_Interaction();
	void Interaction();
};

}


