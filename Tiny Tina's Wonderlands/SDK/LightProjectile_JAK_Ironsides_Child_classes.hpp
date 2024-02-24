#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x380 - 0x378)
// BlueprintGeneratedClass LightProjectile_JAK_Ironsides_Child.LightProjectile_JAK_Ironsides_Child_C
class ULightProjectile_JAK_Ironsides_Child_C : public UOakLightProjectileData
{
public:
	uint8                                        Pad_1F2F[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULightProjectile_JAK_Ironsides_Child_C* GetDefaultObj();

	void OnRicochet(class ULightProjectile* Projectile, struct FHitResult& Hit, const struct FVector& ImpactVelocity, class APawn* CallFunc_GetInstigator_ReturnValue);
	void OnDamage(class ULightProjectile* Projectile, struct FHitResult& Hit, bool bCritical, const struct FVector& EndLocation, const struct FVector& StartLocation, class AActor* CallFunc_GetHitActor_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_GetHitLocation_ReturnValue, uint8 CallFunc_GetFiringPatternID_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class AActor* CallFunc_GetDamageCauser_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class EWeaponShotModifierType CallFunc_GetModifierType_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, const struct FLightProjectileInitializationData& K2Node_MakeStruct_LightProjectileInitializationData);
};

}


