#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x380 - 0x380)
// BlueprintGeneratedClass LightProjectile_ATL_SmartBullet.LightProjectile_ATL_SmartBullet_C
class ULightProjectile_ATL_SmartBullet_C : public UWeapon_Default_LightProjectile_C
{
public:

	static class UClass* StaticClass();
	static class ULightProjectile_ATL_SmartBullet_C* GetDefaultObj();

	void HomeTo(class UOakLightProjectile* Projectile);
};

}


