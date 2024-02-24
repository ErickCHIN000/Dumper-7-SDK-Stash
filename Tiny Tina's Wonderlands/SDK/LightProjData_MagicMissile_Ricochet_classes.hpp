#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x380 - 0x380)
// BlueprintGeneratedClass LightProjData_MagicMissile_Ricochet.LightProjData_MagicMissile_Ricochet_C
class ULightProjData_MagicMissile_Ricochet_C : public ULightProj_Spell_MagicMissile_Base_C
{
public:

	static class UClass* StaticClass();
	static class ULightProjData_MagicMissile_Ricochet_C* GetDefaultObj();

	void EnableHoming(class ULightProjectile* Projectile);
	void OnLifetimeExpired(class ULightProjectile* Projectile);
};

}


