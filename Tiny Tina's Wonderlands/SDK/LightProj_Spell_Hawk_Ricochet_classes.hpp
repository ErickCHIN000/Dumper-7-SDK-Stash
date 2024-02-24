#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x380 - 0x378)
// BlueprintGeneratedClass LightProj_Spell_Hawk_Ricochet.LightProj_Spell_Hawk_Ricochet_C
class ULightProj_Spell_Hawk_Ricochet_C : public UOakLightProjectileData
{
public:
	uint8                                        Pad_191A[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULightProj_Spell_Hawk_Ricochet_C* GetDefaultObj();

	void SpawnMiniHawks(class ULightProjectile* Projectile, const struct FEnvQueryParams& LocalEQS, const struct FSpawnableSpellBasicData& CallFunc_GetSpellData_Res, class APawn* CallFunc_GetInstigator_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue1, class UClass* K2Node_ClassDynamicCast_AsGbx_Damage_Type, bool K2Node_ClassDynamicCast_bSuccess, const struct FVector& CallFunc_GetActorUpVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue1, class APawn* CallFunc_GetInstigator_ReturnValue2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_GetDataTableValue_OutValue, bool CallFunc_GetDataTableValue_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, class AActor* CallFunc_RunEnvQueryForBestActor_ResultActor, bool CallFunc_RunEnvQueryForBestActor_ReturnValue, const struct FOakLightProjectileInitializationData& K2Node_MakeStruct_OakLightProjectileInitializationData);
	void ExecuteHawkEQS(class ULightProjectile* Projectile, TArray<class AActor*>* ResultActors, bool* ResultValue, const struct FEnvQueryParams& LocalEQS, class APawn* CallFunc_GetInstigator_ReturnValue, TArray<class AActor*>& CallFunc_RunEnvQueryForAllActors_ResultActors, bool CallFunc_RunEnvQueryForAllActors_ReturnValue);
	void GetElementalHawkAbility(class ULightProjectile* Projectile, class UAbility_Spell_ElementalHawk_C** Res, class AGrenadeMod** OwningMod, const struct FSpawnableSpellBasicData& CallFunc_GetSpellData_Res, class UGbxAbilityManagerComponent* CallFunc_GetComponentByClass_ReturnValue, class UGbxAbility* CallFunc_FindAbility_ReturnValue, class UAbility_Spell_ElementalHawk_C* K2Node_DynamicCast_AsAbility_Spell_Elemental_Hawk, bool K2Node_DynamicCast_bSuccess);
	void GetSpellData(class ULightProjectile* Projectile, struct FSpawnableSpellBasicData* Res, class USpellLightProjectile* K2Node_DynamicCast_AsSpell_Light_Projectile, bool K2Node_DynamicCast_bSuccess);
	void TryNewHomingTarget(class ULightProjectile* Projectile, class AActor* CallFunc_GetTarget_ReturnValue, bool CallFunc_IsAlive_ReturnValue, class AActor* CallFunc_FindHawkHomingTarget_HomingTarget, bool CallFunc_FindHawkHomingTarget_Res, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsHoming_ReturnValue);
	void FindHawkHomingTarget(class ULightProjectile* Projectile, class AActor** HomingTarget, bool* Res, const struct FEnvQueryParams& LocalEQS, TArray<class AActor*>& CallFunc_ExecuteHawkEQS_ResultActors, bool CallFunc_ExecuteHawkEQS_ResultValue, class AActor* CallFunc_Array_Get_Item);
};

}


