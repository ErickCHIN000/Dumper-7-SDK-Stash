#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_Consumer.BPI_Consumer_C
class IBPI_Consumer_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_Consumer_C* GetDefaultObj();

	void HasHungrySquadMember(bool* bHasHungrySquadMember);
	void IsHungry(bool* bIsHungry);
};

}


