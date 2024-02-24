#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_Melee.BPI_Melee_C
class IBPI_Melee_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_Melee_C* GetDefaultObj();

	void Notify_SpawnProj_Ragnarok(class AOakCharacter_Player* OwnerPlayer);
	void Notify_SpawnProj_MageStaff(class AOakCharacter_Player* OwnerPlayer);
	void Notify_SpawnProj_Fatebreaker(class AOakCharacter_Player* OwnerPlayer);
};

}


