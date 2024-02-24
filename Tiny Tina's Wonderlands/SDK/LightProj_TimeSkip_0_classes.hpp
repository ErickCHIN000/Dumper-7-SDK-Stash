#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x380 - 0x378)
// BlueprintGeneratedClass LightProj_TimeSkip_0.LightProj_TimeSkip_0_C
class ULightProj_TimeSkip_0_C : public UOakLightProjectileData
{
public:
	uint8                                        Pad_F3D[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULightProj_TimeSkip_0_C* GetDefaultObj();

	void OnBegin(class ULightProjectile* Projectile);
	void OnExplode(class ULightProjectile* Projectile, const struct FVector& EndLoc, class AActor* ProjTarget, const struct FVector& StartLoc, class USpellLightProjectile* K2Node_DynamicCast_AsSpell_Light_Projectile, bool K2Node_DynamicCast_bSuccess, class UGbxAbilityManagerComponent* CallFunc_GetComponentByClass_ReturnValue, class UGbxAbility* CallFunc_FindAbility_ReturnValue, const struct FVector& CallFunc_GetActorAimViewPoint_OutLocation, const struct FRotator& CallFunc_GetActorAimViewPoint_OutRotation, class UAbility_TimeSkip_C* K2Node_DynamicCast_AsAbility_Time_Skip, bool K2Node_DynamicCast_bSuccess1, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FRotator& CallFunc_GetSpawnRotation_Rotation, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue2, class AActor* CallFunc_GetSource_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, const struct FSpellLightProjectileInitializationData& K2Node_MakeStruct_SpellLightProjectileInitializationData);
};

}


