#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x380 - 0x378)
// BlueprintGeneratedClass LightProjData_DemiLich_DefaultAttack.LightProjData_DemiLich_DefaultAttack_C
class ULightProjData_DemiLich_DefaultAttack_C : public UOakLightProjectileData
{
public:
	uint8                                        Pad_12A3[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULightProjData_DemiLich_DefaultAttack_C* GetDefaultObj();

	void OnLifetimeExpired(class ULightProjectile* Projectile);
	void EnableHoming(class ULightProjectile* Projectile);
};

}


