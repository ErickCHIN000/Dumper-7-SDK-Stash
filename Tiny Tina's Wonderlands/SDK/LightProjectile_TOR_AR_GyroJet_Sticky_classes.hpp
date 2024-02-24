#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x380 - 0x380)
// BlueprintGeneratedClass LightProjectile_TOR_AR_GyroJet_Sticky.LightProjectile_TOR_AR_GyroJet_Sticky_C
class ULightProjectile_TOR_AR_GyroJet_Sticky_C : public ULightProjectile_TOR_GyroJet_Master_C
{
public:

	static class UClass* StaticClass();
	static class ULightProjectile_TOR_AR_GyroJet_Sticky_C* GetDefaultObj();

	void OnLifetimeExpired(class ULightProjectile* Projectile);
};

}


