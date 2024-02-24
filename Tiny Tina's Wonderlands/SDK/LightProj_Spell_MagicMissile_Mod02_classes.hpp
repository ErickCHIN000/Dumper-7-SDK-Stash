#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x380 - 0x380)
// BlueprintGeneratedClass LightProj_Spell_MagicMissile_Mod02.LightProj_Spell_MagicMissile_Mod02_C
class ULightProj_Spell_MagicMissile_Mod02_C : public ULightProj_Spell_MagicMissile_Base_C
{
public:

	static class UClass* StaticClass();
	static class ULightProj_Spell_MagicMissile_Mod02_C* GetDefaultObj();

	void OnImpact(class ULightProjectile* Projectile, struct FHitResult& Hit);
};

}


