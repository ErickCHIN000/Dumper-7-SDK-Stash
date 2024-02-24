#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass IActionSkill_GunMage_Polymorph.IActionSkill_GunMage_Polymorph_C
class IIActionSkill_GunMage_Polymorph_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IIActionSkill_GunMage_Polymorph_C* GetDefaultObj();

	void PolymorphSetFailedToFindTarget(bool* Res);
	void PolymorphSpawnDrone();
	void PolymorphFindTarget(bool* Res, class AActor** PolymorphTarget);
};

}


