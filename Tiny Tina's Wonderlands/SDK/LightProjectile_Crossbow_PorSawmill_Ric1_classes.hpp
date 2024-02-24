#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x44D - 0x44D)
// BlueprintGeneratedClass LightProjectile_Crossbow_PorSawmill_Ric1.LightProjectile_Crossbow_PorSawmill_Ric1_C
class ULightProjectile_Crossbow_PorSawmill_Ric1_C : public ULightProjectile_Crossbow_PortableSawmill_C
{
public:

	static class UClass* StaticClass();
	static class ULightProjectile_Crossbow_PorSawmill_Ric1_C* GetDefaultObj();

	void OnRicochet(class ULightProjectile* Projectile, struct FHitResult& Hit, const struct FVector& ImpactVelocity, class AActor* CallFunc_GetSource_ReturnValue);
};

}


