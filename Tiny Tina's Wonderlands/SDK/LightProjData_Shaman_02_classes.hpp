#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x380 - 0x378)
// BlueprintGeneratedClass LightProjData_Shaman_02.LightProjData_Shaman_02_C
class ULightProjData_Shaman_02_C : public UOakLightProjectileData
{
public:
	uint8                                        Pad_18D4[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULightProjData_Shaman_02_C* GetDefaultObj();

	void OnLifetimeExpired(class ULightProjectile* Projectile);
	void EnableHoming(class ULightProjectile* Projectile);
};

}


