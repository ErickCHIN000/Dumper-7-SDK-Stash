#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xCD (0x44D - 0x380)
// BlueprintGeneratedClass LightProjectile_Crossbow_PortableSawmill.LightProjectile_Crossbow_PortableSawmill_C
class ULightProjectile_Crossbow_PortableSawmill_C : public ULightProjectile_Crossbow_Sawblade_SR_C
{
public:
	struct FEnvQueryParams                       FindRicochetTargetEQS;                             // 0x380(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                         ShouldRicochet;                                    // 0x438(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_171D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                RicochetProjectile;                                // 0x440(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RicochetDamageScalar;                              // 0x448(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SpawnNewProjectileOnBounce;                        // 0x44C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ULightProjectile_Crossbow_PortableSawmill_C* GetDefaultObj();

	void DoRicochetBehavior(class ULightProjectile* Projectile, const struct FHitResult& Hit, class AActor* RicochetSource_Override_, class AActor* ProjectileTarget, const struct FVector& EndLocation, const struct FVector& StartLocation, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_IsClosed_Variable, const struct FVector& CallFunc_GetHitNormal_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue, TArray<struct FTransform>& CallFunc_GeneratePointsOnFan_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FVector& CallFunc_GetHitLocation_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, bool CallFunc_IsValid_ReturnValue1, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool Temp_bool_Variable, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, class AActor* CallFunc_GetHitActor_ReturnValue, class AActor* CallFunc_GetHitActor_ReturnValue1, float CallFunc_GetModifierValue_ReturnValue, enum class EWeaponShotModifierType CallFunc_GetModifierType_ReturnValue, class UImpactData* CallFunc_GetImpactData_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FLightProjectileInitializationData& K2Node_MakeStruct_LightProjectileInitializationData, TArray<class AActor*>& CallFunc_RunEnvQueryForAllActors_ResultActors, bool CallFunc_RunEnvQueryForAllActors_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue1, class AActor* K2Node_Select_Default, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue);
	void OnImpact(class ULightProjectile* Projectile, struct FHitResult& Hit, class AActor* ProjectileTarget, const struct FVector& EndLocation, const struct FVector& StartLocation);
};

}


