#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x380 - 0x380)
// BlueprintGeneratedClass LightProjectile_TOR_PS_TNT_Sticky.LightProjectile_TOR_PS_TNT_Sticky_C
class ULightProjectile_TOR_PS_TNT_Sticky_C : public ULightProjectile_TOR_TNT_Master_C
{
public:

	static class UClass* StaticClass();
	static class ULightProjectile_TOR_PS_TNT_Sticky_C* GetDefaultObj();

	void OnLifetimeExpired(class ULightProjectile* Projectile);
};

}


