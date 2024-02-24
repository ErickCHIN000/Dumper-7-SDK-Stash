#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass Interface_Swordsplosion.Interface_Swordsplosion_C
class IInterface_Swordsplosion_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IInterface_Swordsplosion_C* GetDefaultObj();

	void SwordsplosionExternalStartExplosion();
	void SwordsplosionAttachedToCharacter(class AActor* AttachedActor);
};

}


