#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x380 - 0x378)
// BlueprintGeneratedClass LightProjectile_HW_VLA_Shells_Moleman.LightProjectile_HW_VLA_Shells_Moleman_C
class ULightProjectile_HW_VLA_Shells_Moleman_C : public UOakLightProjectileData
{
public:
	uint8                                        Pad_2A36[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULightProjectile_HW_VLA_Shells_Moleman_C* GetDefaultObj();

	void OnLifetimeExpired(class ULightProjectile* Projectile);
	void OnImpact(class ULightProjectile* Projectile, struct FHitResult& Hit, class AActor* CallFunc_GetHitActor_ReturnValue, uint8 CallFunc_GetFiringPatternID_ReturnValue, TArray<class AActor*>& K2Node_MakeArray_Array, bool CallFunc_LessEqual_ByteByte_ReturnValue, class AActor* CallFunc_GetSource_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ARadiateDamageActor_Fissure_Moleman_C* CallFunc_FinishSpawningActor_ReturnValue);
};

}


