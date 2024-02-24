#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x590 - 0x590)
// BlueprintGeneratedClass LightProjectile_ReignOfArrows_Child.LightProjectile_ReignOfArrows_Child_C
class ULightProjectile_ReignOfArrows_Child_C : public ULightProjectile_ReignOfArrows_C
{
public:

	static class UClass* StaticClass();
	static class ULightProjectile_ReignOfArrows_Child_C* GetDefaultObj();

	void OnBegin(class ULightProjectile* Projectile);
	void OnLifetimeExpired(class ULightProjectile* Projectile);
};

}


