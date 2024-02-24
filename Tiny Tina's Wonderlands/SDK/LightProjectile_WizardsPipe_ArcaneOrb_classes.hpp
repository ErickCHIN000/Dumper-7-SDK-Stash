#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x380 - 0x378)
// BlueprintGeneratedClass LightProjectile_WizardsPipe_ArcaneOrb.LightProjectile_WizardsPipe_ArcaneOrb_C
class ULightProjectile_WizardsPipe_ArcaneOrb_C : public UOakLightProjectileData
{
public:
	uint8                                        Pad_12B8[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULightProjectile_WizardsPipe_ArcaneOrb_C* GetDefaultObj();

	void StartHoming(class ULightProjectile* Projectile);
};

}


