#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_GenericAction.BPI_GenericAction_C
class IBPI_GenericAction_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_GenericAction_C* GetDefaultObj();

	void GenericActionWithCharacter(class AIcarusPlayerCharacter* Character);
	void GenericAction();
};

}


