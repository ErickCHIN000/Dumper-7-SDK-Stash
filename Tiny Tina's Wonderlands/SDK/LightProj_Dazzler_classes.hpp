#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD8 (0x450 - 0x378)
// BlueprintGeneratedClass LightProj_Dazzler.LightProj_Dazzler_C
class ULightProj_Dazzler_C : public UOakLightProjectileData
{
public:
	uint8                                        Pad_124B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEnvQueryParams                       EQS;                                               // 0x380(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FDataTableValueHandle                 ChildProjDmgMultiplierHandle;                      // 0x438(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class ULightProj_Dazzler_C* GetDefaultObj();

	void FireProj(class ULightProjectile* Projectile, class USpellLightProjectile* K2Node_DynamicCast_AsSpell_Light_Projectile, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetAttachedActor_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, class UGbxAbilityManagerComponent* CallFunc_GetComponentByClass_ReturnValue, class UGbxAbility* CallFunc_FindAbility_ReturnValue, class UAbility_Dazzler_C* K2Node_DynamicCast_AsAbility_Dazzler, bool K2Node_DynamicCast_bSuccess1, float CallFunc_GetDataTableValueFromHandle_ReturnValue, class ULightProjectile* CallFunc_GetNextDazzlerProj_TargetProj, bool CallFunc_GetNextDazzlerProj_ProjFound, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_GetDistanceBetweenVectors_Distance, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FOakLightProjectileInitializationData& K2Node_MakeStruct_OakLightProjectileInitializationData);
	void OnExplode(class ULightProjectile* Projectile, class USpellLightProjectile* K2Node_DynamicCast_AsSpell_Light_Projectile, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetDataTableValueFromHandle_ReturnValue, class AActor* CallFunc_GetAttachedActor_ReturnValue, class UGbxAbilityManagerComponent* CallFunc_GetComponentByClass_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, class UGbxAbility* CallFunc_FindAbility_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, class UAbility_Dazzler_C* K2Node_DynamicCast_AsAbility_Dazzler, bool K2Node_DynamicCast_bSuccess1, class ULightProjectile* CallFunc_GetNextDazzlerProj_TargetProj, bool CallFunc_GetNextDazzlerProj_ProjFound, float CallFunc_GetDistanceBetweenVectors_Distance, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FOakLightProjectileInitializationData& K2Node_MakeStruct_OakLightProjectileInitializationData);
	void EnableHoming(class ULightProjectile* Projectile, class USpellLightProjectile* K2Node_DynamicCast_AsSpell_Light_Projectile, bool K2Node_DynamicCast_bSuccess, class UGbxAbilityManagerComponent* CallFunc_GetComponentByClass_ReturnValue, class UGbxAbility* CallFunc_FindAbility_ReturnValue, class UAbility_Dazzler_C* K2Node_DynamicCast_AsAbility_Dazzler, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_GetProjTarget_NewParam, class AActor* CallFunc_GetProjTarget_ProjTarget);
	void OnBegin(class ULightProjectile* Projectile);
	void OnLifetimeExpired(class ULightProjectile* Projectile);
};

}


