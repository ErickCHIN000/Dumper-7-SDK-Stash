#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x380 - 0x380)
// BlueprintGeneratedClass LightProjectile_SMG_Magic_DarkMagic_Orb.LightProjectile_SMG_Magic_DarkMagic_Orb_C
class ULightProjectile_SMG_Magic_DarkMagic_Orb_C : public ULightProjectile_SMG_C
{
public:

	static class UClass* StaticClass();
	static class ULightProjectile_SMG_Magic_DarkMagic_Orb_C* GetDefaultObj();

	void DealAreaDamage();
	void OnAttached(class ULightProjectile* Projectile, class AActor* AttachedActor);
};

}


