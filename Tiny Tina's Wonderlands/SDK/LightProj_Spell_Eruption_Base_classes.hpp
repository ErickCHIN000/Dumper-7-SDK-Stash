#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x380 - 0x378)
// BlueprintGeneratedClass LightProj_Spell_Eruption_Base.LightProj_Spell_Eruption_Base_C
class ULightProj_Spell_Eruption_Base_C : public UOakLightProjectileData
{
public:
	uint8                                        Pad_3C08[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULightProj_Spell_Eruption_Base_C* GetDefaultObj();

	void Timer_InAirExplosion(class ULightProjectile* Projectile);
};

}


