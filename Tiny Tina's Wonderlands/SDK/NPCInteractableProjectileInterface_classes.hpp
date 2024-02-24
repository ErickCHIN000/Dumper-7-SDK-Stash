#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass NPCInteractableProjectileInterface.NPCInteractableProjectileInterface_C
class INPCInteractableProjectileInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class INPCInteractableProjectileInterface_C* GetDefaultObj();

	void ProjectileDetonate(bool* Success);
	void ProjectileArm(bool* Success);
	void ProjectileDisarm(bool* Success);
};

}


