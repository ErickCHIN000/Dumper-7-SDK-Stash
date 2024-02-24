#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x380 - 0x380)
// BlueprintGeneratedClass LightProj_TOR_Butbm_Ch.LightProj_TOR_Butbm_Ch_C
class ULightProj_TOR_Butbm_Ch_C : public ULightProjectile_TOR_GyroJet_Master_C
{
public:

	static class UClass* StaticClass();
	static class ULightProj_TOR_Butbm_Ch_C* GetDefaultObj();

	void OnLifetimeExpired(class ULightProjectile* Projectile);
};

}


