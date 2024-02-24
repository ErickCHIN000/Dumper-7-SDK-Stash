#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass IDrone_PlayerCompanionParent.IDrone_PlayerCompanionParent_C
class IIDrone_PlayerCompanionParent_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IIDrone_PlayerCompanionParent_C* GetDefaultObj();

	void CompanionDeath(bool* Res);
	void CompanionSpawn(bool* Res);
	void IsCompanionInCombat(bool* Res);
	void KillCompanion(bool* Res);
	void CompanionDespawn(bool* Res);
};

}


