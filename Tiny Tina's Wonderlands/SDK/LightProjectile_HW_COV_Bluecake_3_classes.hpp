#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x388 - 0x388)
// BlueprintGeneratedClass LightProjectile_HW_COV_Bluecake_3.LightProjectile_HW_COV_Bluecake_3_C
class ULightProjectile_HW_COV_Bluecake_3_C : public ULightProjectile_HW_COV_Bluecake_C
{
public:

	static class UClass* StaticClass();
	static class ULightProjectile_HW_COV_Bluecake_3_C* GetDefaultObj();

	void BlueCakeBehavior(class ULightProjectile* Projectile, class AActor* Source, bool HitActorSource);
	void OnLifetimeExpired(class ULightProjectile* Projectile);
};

}


