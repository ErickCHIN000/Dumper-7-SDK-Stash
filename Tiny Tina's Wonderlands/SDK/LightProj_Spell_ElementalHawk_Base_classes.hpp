#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC8 (0x440 - 0x378)
// BlueprintGeneratedClass LightProj_Spell_ElementalHawk_Base.LightProj_Spell_ElementalHawk_Base_C
class ULightProj_Spell_ElementalHawk_Base_C : public UOakLightProjectileData
{
public:
	uint8                                        Pad_257B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEnvQueryParams                       EnvQuery_InitialTarget;                            // 0x380(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UClass*                                RirochetProjectile;                                // 0x438(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ULightProj_Spell_ElementalHawk_Base_C* GetDefaultObj();

	void OnLifetimeExpired(class ULightProjectile* Projectile);
	void OnDamage(class ULightProjectile* Projectile, struct FHitResult& Hit, bool bCritical, class AActor* CallFunc_GetHitActor_ReturnValue, const struct FSpawnableSpellBasicData& CallFunc_GetSpellData_Res, class UClass* K2Node_ClassDynamicCast_AsGbx_Damage_Type, bool K2Node_ClassDynamicCast_bSuccess, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FForceSelection& CallFunc_Conv_FloatToForceSelection_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FSpellLightProjectileInitializationData& K2Node_MakeStruct_SpellLightProjectileInitializationData);
	void OnBegin(class ULightProjectile* Projectile, class APawn* CallFunc_GetInstigator_ReturnValue, TArray<class AActor*>& CallFunc_RunEnvQueryForAllActors_ResultActors, bool CallFunc_RunEnvQueryForAllActors_ReturnValue, class AActor* CallFunc_Array_Get_Item);
	void ExecuteHawkEQS(class ULightProjectile* Projectile, TArray<class AActor*>* ResultActors, bool* ResultValue, const struct FEnvQueryParams& LocalEQS, class APawn* CallFunc_GetInstigator_ReturnValue, TArray<class AActor*>& CallFunc_RunEnvQueryForAllActors_ResultActors, bool CallFunc_RunEnvQueryForAllActors_ReturnValue);
	void GetElementalHawkAbility(class ULightProjectile* Projectile, class UAbility_Spell_ElementalHawk_C** Res, class AGrenadeMod** OwningMod, const struct FSpawnableSpellBasicData& CallFunc_GetSpellData_Res, class UGbxAbilityManagerComponent* CallFunc_GetComponentByClass_ReturnValue, class UGbxAbility* CallFunc_FindAbility_ReturnValue, class UAbility_Spell_ElementalHawk_C* K2Node_DynamicCast_AsAbility_Spell_Elemental_Hawk, bool K2Node_DynamicCast_bSuccess);
	void GetSpellData(class ULightProjectile* Projectile, struct FSpawnableSpellBasicData* Res, class USpellLightProjectile* K2Node_DynamicCast_AsSpell_Light_Projectile, bool K2Node_DynamicCast_bSuccess);
	void TryNewHomingTarget(class ULightProjectile* Projectile, class AActor* CallFunc_GetTarget_ReturnValue, bool CallFunc_IsAlive_ReturnValue, class AActor* CallFunc_FindHawkHomingTarget_HomingTarget, bool CallFunc_FindHawkHomingTarget_Res, bool CallFunc_IsHoming_ReturnValue);
	void SpawnMiniHawks(class ULightProjectile* Projectile, const struct FEnvQueryParams& LocalEQS, float CallFunc_GetDataTableValue_OutValue, bool CallFunc_GetDataTableValue_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, const struct FVector& CallFunc_GetActorUpVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FSpawnableSpellBasicData& CallFunc_GetSpellData_Res, const struct FVector& CallFunc_Add_VectorVector_ReturnValue1, class UClass* K2Node_ClassDynamicCast_AsGbx_Damage_Type, bool K2Node_ClassDynamicCast_bSuccess, class APawn* CallFunc_GetInstigator_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, class APawn* CallFunc_GetInstigator_ReturnValue2, class AActor* CallFunc_RunEnvQueryForBestActor_ResultActor, bool CallFunc_RunEnvQueryForBestActor_ReturnValue, const struct FOakLightProjectileInitializationData& K2Node_MakeStruct_OakLightProjectileInitializationData);
	void FindHawkHomingTarget(class ULightProjectile* Projectile, class AActor** HomingTarget, bool* Res, const struct FEnvQueryParams& LocalEQS, TArray<class AActor*>& CallFunc_ExecuteHawkEQS_ResultActors, bool CallFunc_ExecuteHawkEQS_ResultValue, class AActor* CallFunc_Array_Get_Item);
};

}


