#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_Quest.BPI_Quest_C
class IBPI_Quest_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_Quest_C* GetDefaultObj();

	void GetQuestArgument(const class FString& Argument);
};

}


