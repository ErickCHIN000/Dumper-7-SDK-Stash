#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass InterfaceTedProjectile_Base.InterfaceTedProjectile_Base_C
class IInterfaceTedProjectile_Base_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IInterfaceTedProjectile_Base_C* GetDefaultObj();

	void GetTedioreProjectileWeaponValues(class AWeapon** OwningWeapon, int32* AmmoCount, int32* MaxAmmo, float* ShotDamage, class UClass** DamageType);
};

}


