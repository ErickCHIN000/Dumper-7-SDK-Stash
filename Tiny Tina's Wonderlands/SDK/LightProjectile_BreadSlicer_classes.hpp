#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x388 - 0x380)
// BlueprintGeneratedClass LightProjectile_BreadSlicer.LightProjectile_BreadSlicer_C
class ULightProjectile_BreadSlicer_C : public ULightProjectile_HW_COV_SawBlade_C
{
public:
	struct FRandomStream                         RandStreamBounce;                                  // 0x380(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class ULightProjectile_BreadSlicer_C* GetDefaultObj();

	void OnRicochet(class ULightProjectile* Projectile, struct FHitResult& Hit, const struct FVector& ImpactVelocity, float Temp_float_Variable, float Temp_float_Variable1, float Temp_float_Variable2, float Temp_float_Variable3, float Temp_float_Variable4, float Temp_float_Variable5, float Temp_float_Variable6, float Temp_float_Variable7, float Temp_float_Variable8, int32 Temp_int_Variable, float K2Node_Select_Default, bool CallFunc_RandomBoolWithWeightFromStream_ReturnValue, bool CallFunc_RandomBoolWithWeight_ReturnValue);
	void OnImpact(class ULightProjectile* Projectile, struct FHitResult& Hit);
};

}


