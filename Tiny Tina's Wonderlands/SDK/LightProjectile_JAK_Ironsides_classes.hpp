#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x4D0 - 0x4D0)
// BlueprintGeneratedClass LightProjectile_JAK_Ironsides.LightProjectile_JAK_Ironsides_C
class ULightProjectile_JAK_Ironsides_C : public ULightProjectile_JAK_C
{
public:

	static class UClass* StaticClass();
	static class ULightProjectile_JAK_Ironsides_C* GetDefaultObj();

	void OnRicochet(class ULightProjectile* Projectile, struct FHitResult& Hit, const struct FVector& ImpactVelocity, class APawn* CallFunc_GetInstigator_ReturnValue);
	void OnDamage(class ULightProjectile* Projectile, struct FHitResult& Hit, bool bCritical, const struct FVector& EndLocation, const struct FVector& StartLocation, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_GetHitLocation_ReturnValue, class AActor* CallFunc_GetHitActor_ReturnValue, class AActor* CallFunc_GetDamageCauser_ReturnValue, enum class EWeaponShotModifierType CallFunc_GetModifierType_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, const struct FLightProjectileInitializationData& K2Node_MakeStruct_LightProjectileInitializationData);
};

}


