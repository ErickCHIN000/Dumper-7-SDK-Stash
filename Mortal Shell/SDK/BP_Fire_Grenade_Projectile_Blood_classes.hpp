#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x3A4 - 0x3A4)
// BlueprintGeneratedClass BP_Fire_Grenade_Projectile_Blood.BP_Fire_Grenade_Projectile_Blood_C
class ABP_Fire_Grenade_Projectile_Blood_C : public ABP_Fire_Grenade_Projectile_C
{
public:

	static class UClass* StaticClass();
	static class ABP_Fire_Grenade_Projectile_Blood_C* GetDefaultObj();

	void ExplosionFX(float Local_Scale, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AGibExplosion_C* CallFunc_FinishSpawningActor_ReturnValue);
	void CustomChargeTimeline(float Alpha, float CallFunc_Lerp_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


