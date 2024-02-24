#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass IDrone_KnightOfTheClaw_DragonPet.IDrone_KnightOfTheClaw_DragonPet_C
class IIDrone_KnightOfTheClaw_DragonPet_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IIDrone_KnightOfTheClaw_DragonPet_C* GetDefaultObj();

	void ExternalDragonCompanionCreateFireBoltSplat(const struct FTransform& TransformData, bool* Res);
	void ExternalDragonCompanionStopShockBreath(bool* Res);
	void ExternalDragonCompanionStopFireBolt(bool* Res);
	void ExternalDragonCompanionStopFireBreath(bool* Res);
	void ExternalDragonCompanionCreateShockBreath(bool* Res);
	void ExternalDragonCompanionCreateFireBolt(bool* Res);
	void ExternalDragonCompanionCreateFireBreath(bool* Res);
	void DragonCompanionPauseAttacking(bool Pause, bool* Res);
	void FinishInteract(bool* Res);
	void GetDragonCompanionTarget(class AActor** Res);
	void RequestDragonCompanionShockBreathAttack(bool* Res);
};

}


